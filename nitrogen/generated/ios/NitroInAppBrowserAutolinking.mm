///
/// NitroInAppBrowserAutolinking.mm
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#import <Foundation/Foundation.h>
#import <NitroModules/HybridObjectRegistry.hpp>
#import "NitroInAppBrowser-Swift-Cxx-Umbrella.hpp"
#import <type_traits>

#include "HybridSFSafariViewControllerSpecSwift.hpp"
#include "HybridASWebAuthenticationSessionSpecSwift.hpp"

@interface NitroInAppBrowserAutolinking : NSObject
@end

@implementation NitroInAppBrowserAutolinking

+ (void) load {
  using namespace margelo::nitro;
  using namespace margelo::nitro::inappbrowser;

  HybridObjectRegistry::registerHybridObjectConstructor(
    "SFSafariViewController",
    []() -> std::shared_ptr<HybridObject> {
      auto swiftPart = NitroInAppBrowser::NitroInAppBrowserAutolinking::createSFSafariViewController();
      return std::make_shared<HybridSFSafariViewControllerSpecSwift>(swiftPart);
    }
  );
  HybridObjectRegistry::registerHybridObjectConstructor(
    "ASWebAuthenticationSession",
    []() -> std::shared_ptr<HybridObject> {
      auto swiftPart = NitroInAppBrowser::NitroInAppBrowserAutolinking::createASWebAuthenticationSession();
      return std::make_shared<HybridASWebAuthenticationSessionSpecSwift>(swiftPart);
    }
  );
}

@end
