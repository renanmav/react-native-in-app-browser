import Foundation
import AuthenticationServices

class HybridASWebAuthenticationSession: NSObject, HybridASWebAuthenticationSessionSpec, ASWebAuthenticationPresentationContextProviding {
  var hybridContext = margelo.nitro.HybridContext()
  
  var memorySize: Int {
    return getSizeOf(self)
  }
  
  private var authSession: ASWebAuthenticationSession?
  
  var prefersEphemeralWebBrowserSession: Bool = false
  
  func presentationAnchor(for session: ASWebAuthenticationSession) -> ASPresentationAnchor {
    let scene = UIApplication.shared.connectedScenes.first as? UIWindowScene
    return scene?.windows.first ?? UIWindow()
  }
  
  func start(params: ASWebAuthenticationSessionStartParams) throws -> Void {
    NSLog("HybridASWebAuthenticationSession.start(url:%@) is being called", params.url)
    
    guard let nativeUrl = URL(string: params.url) else {
      throw NSError(domain: "HybridASWebAuthenticationSession", code: 0, userInfo: [NSLocalizedDescriptionKey: "Invalid URL"])
    }
    
    authSession = ASWebAuthenticationSession(url: nativeUrl, callbackURLScheme: params.callbackURLScheme) { session, error in
      if let error = error {
        NSLog("ASWebAuthenticationSession failed with error: %@", error.localizedDescription)
        // TODO: Implement error handling and callback to JavaScript
      } else if let callbackURL = session {
        NSLog("ASWebAuthenticationSession succeeded with URL: %@", callbackURL.absoluteString)
        // TODO: Implement success callback to JavaScript with the callbackURL
      } else {
        NSLog("ASWebAuthenticationSession completed without error or callback URL")
        // TODO: Implement callback to JavaScript for completion without result
      }
      
      self.authSession = nil
    }
    
    authSession?.presentationContextProvider = self
    
    if !(authSession?.start() ?? false) {
      throw NSError(domain: "HybridASWebAuthenticationSession", code: 1, userInfo: [NSLocalizedDescriptionKey: "ASWebAuthenticationSession failed to start"])
    }
  }
  
  func cancel() throws -> Void {
    guard let authSession = authSession else {
      throw NSError(domain: "HybridASWebAuthenticationSession", code: 2, userInfo: [NSLocalizedDescriptionKey: "ASWebAuthenticationSession is not initialized"])
    }
    
    authSession.cancel()
    self.authSession = nil
  }
}
