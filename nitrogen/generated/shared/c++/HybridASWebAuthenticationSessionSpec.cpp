///
/// HybridASWebAuthenticationSessionSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridASWebAuthenticationSessionSpec.hpp"

namespace margelo::nitro::inappbrowser {

  void HybridASWebAuthenticationSessionSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("prefersEphemeralWebBrowserSession", &HybridASWebAuthenticationSessionSpec::getPrefersEphemeralWebBrowserSession);
      prototype.registerHybridSetter("prefersEphemeralWebBrowserSession", &HybridASWebAuthenticationSessionSpec::setPrefersEphemeralWebBrowserSession);
      prototype.registerHybridMethod("start", &HybridASWebAuthenticationSessionSpec::start);
      prototype.registerHybridMethod("cancel", &HybridASWebAuthenticationSessionSpec::cancel);
    });
  }

} // namespace margelo::nitro::inappbrowser
