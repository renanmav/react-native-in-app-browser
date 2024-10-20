import UIKit
import SafariServices

extension UIViewController {
  func topMostViewController() -> UIViewController {
    if let presented = self.presentedViewController {
      return presented.topMostViewController()
    }
    
    if let navigation = self as? UINavigationController {
      return navigation.visibleViewController?.topMostViewController() ?? navigation
    }
    
    if let tab = self as? UITabBarController {
      return tab.selectedViewController?.topMostViewController() ?? tab
    }
    
    return self
  }
  
  func findSFSafariViewController() -> SFSafariViewController? {
    if let safariVC = self as? SFSafariViewController {
      return safariVC
    }
    
    for child in children {
      if let childSafariVC = child.findSFSafariViewController() {
        return childSafariVC
      }
    }
    
    return presentedViewController?.findSFSafariViewController()
  }
}
