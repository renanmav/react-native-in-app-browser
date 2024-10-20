import Foundation
import SafariServices

class HybridSFSafariViewController: HybridSFSafariViewControllerSpec {
  var hybridContext = margelo.nitro.HybridContext()
  
  var memorySize: Int {
    return getSizeOf(self)
  }
  
  func present(params: SFSafariViewControllerPresentParams) throws -> Void {
    NSLog("HybridSFSafariViewController.present(url:%@) is being called", params.url)
    
    guard let nativeUrl = URL(string: params.url) else {
      throw NSError(domain: "HybridSFSafariViewController", code: 0, userInfo: [NSLocalizedDescriptionKey: "Invalid URL"])
    }
    
    let safariViewController = SFSafariViewController(url: nativeUrl)
    
    let style: UIModalPresentationStyle
    switch params.modalPresentationStyle {
    case .fullscreen:
      style = .fullScreen
    case .pagesheet:
      style = .pageSheet
    default:
      style = .automatic
    }
    safariViewController.modalPresentationStyle = style
    
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
    DispatchQueue.main.async {
      if let windowScene = UIApplication.shared.connectedScenes.first as? UIWindowScene,
         let window = windowScene.windows.first,
         let rootViewController = window.rootViewController {
        
        let topViewController = rootViewController.topMostViewController()
        
        // Search for SFSafariViewController in the view controller hierarchy
        if let safariViewController = topViewController.findSFSafariViewController() {
          safariViewController.dismiss(animated: true, completion: nil)
        } else {
          NSLog("No SFSafariViewController found to dismiss")
        }
      } else {
        NSLog("Failed to find top view controller to dismiss SFSafariViewController")
      }
    }
  }
}
