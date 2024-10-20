///
/// HybridChromeCustomTabsSpec.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridChromeCustomTabsSpec.hpp"

namespace margelo::nitro::inappbrowser {

  void HybridChromeCustomTabsSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridMethod("launch", &HybridChromeCustomTabsSpec::launch);
    });
  }

} // namespace margelo::nitro::inappbrowser
