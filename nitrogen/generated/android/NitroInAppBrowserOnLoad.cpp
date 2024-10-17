///
/// NitroInAppBrowserOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroInAppBrowserOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridSFSafariViewControllerSpec.hpp"

namespace margelo::nitro::inappbrowser {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::inappbrowser;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::inappbrowser::JHybridSFSafariViewControllerSpec::registerNatives();

    // Register Nitro Hybrid Objects
    
  });
}

} // namespace margelo::nitro::inappbrowser