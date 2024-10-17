import Foundation
import SafariServices

class HybridSFSafariViewController: HybridSFSafariViewControllerSpec {
  var hybridContext = margelo.nitro.HybridContext()
  
  var memorySize: Int {
    return getSizeOf(self)
  }
  
  func present(url: String) throws -> Void {
    NSLog("HybridSFSafariViewController.present(url:%s) is being called", url)
    
    guard let nativeUrl = URL(string: url) else {
      throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Invalid URL"])
    }
    
    let safariViewController = SFSafariViewController(url: nativeUrl)
    
    UIApplication.shared.windows.first?.rootViewController?.present(safariViewController, animated: true, completion: nil)
    
    // throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Method not implemented"])
  }
  
  func dismiss() throws -> Void {
    throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Method not implemented"])
  }
}
