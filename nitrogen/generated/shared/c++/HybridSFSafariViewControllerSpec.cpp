///
/// HybridSFSafariViewControllerSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridSFSafariViewControllerSpec.hpp"

namespace margelo::nitro::inappbrowser {

  void HybridSFSafariViewControllerSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("present", &HybridSFSafariViewControllerSpec::present);
      prototype.registerHybridMethod("dismiss", &HybridSFSafariViewControllerSpec::dismiss);
    });
  }

} // namespace margelo::nitro::inappbrowser