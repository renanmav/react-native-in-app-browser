///
/// NitroInAppBrowserAutolinking.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

public final class NitroInAppBrowserAutolinking {
  /**
   * Creates an instance of a Swift class that implements `HybridSFSafariViewControllerSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridSFSafariViewControllerSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridSFSafariViewController`).
   */
  public static func createSFSafariViewController() -> HybridSFSafariViewControllerSpecCxx {
    let hybridObject = HybridSFSafariViewController()
    return hybridObject.createCxxBridge()
  }
  
  /**
   * Creates an instance of a Swift class that implements `HybridASWebAuthenticationSessionSpec`,
   * and wraps it in a Swift class that can directly interop with C++ (`HybridASWebAuthenticationSessionSpecCxx`)
   *
   * This is generated by Nitrogen and will initialize the class specified
   * in the `"autolinking"` property of `nitro.json` (in this case, `HybridASWebAuthenticationSession`).
   */
  public static func createASWebAuthenticationSession() -> HybridASWebAuthenticationSessionSpecCxx {
    let hybridObject = HybridASWebAuthenticationSession()
    return hybridObject.createCxxBridge()
  }
}
