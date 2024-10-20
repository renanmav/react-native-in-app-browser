import Foundation
import SafariServices

class HybridSFSafariViewController: HybridSFSafariViewControllerSpec {
  var hybridContext = margelo.nitro.HybridContext()
  
  var memorySize: Int {
    return getSizeOf(self)
  }
  
  func present(url: String) throws -> Void {
    NSLog("HybridSFSafariViewController.present(url:%@) is being called", url)
    
    guard let nativeUrl = URL(string: url) else {
      throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Invalid URL"])
    }
    
    let safariViewController = SFSafariViewController(url: nativeUrl)
    
    DispatchQueue.main.async {
      if let windowScene = UIApplication.shared.connectedScenes.first as? UIWindowScene,
         let window = windowScene.windows.first,
         let rootViewController = window.rootViewController {
        let topViewController = rootViewController.topMostViewController()
        topViewController.present(safariViewController, animated: true, completion: nil)
      } else {
        NSLog("Failed to find top view controller to present SFSafariViewController")
      }
    }
  }
  
  func dismiss() throws -> Void {
    throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Method not implemented"])
  }
}
