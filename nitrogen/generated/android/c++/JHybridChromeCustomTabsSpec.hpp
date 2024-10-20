///
/// HybridChromeCustomTabsSpec.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <NitroModules/JHybridObject.hpp>
#include <fbjni/fbjni.h>
#include "HybridChromeCustomTabsSpec.hpp"




namespace margelo::nitro::inappbrowser {

  using namespace facebook;

  class JHybridChromeCustomTabsSpec: public jni::HybridClass<JHybridChromeCustomTabsSpec, JHybridObject>,
                                     public virtual HybridChromeCustomTabsSpec {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/inappbrowser/HybridChromeCustomTabsSpec;";
    static jni::local_ref<jhybriddata> initHybrid(jni::alias_ref<jhybridobject> jThis);
    static void registerNatives();

  protected:
    // C++ constructor (called from Java via `initHybrid()`)
    explicit JHybridChromeCustomTabsSpec(jni::alias_ref<jhybridobject> jThis) :
      HybridObject(HybridChromeCustomTabsSpec::TAG),
      _javaPart(jni::make_global(jThis)) {}

  public:
    size_t getExternalMemorySize() noexcept override;

  public:
    inline const jni::global_ref<JHybridChromeCustomTabsSpec::javaobject>& getJavaPart() const noexcept {
      return _javaPart;
    }

  public:
    // Properties
    

  public:
    // Methods
    void launch(const ChromeCustomTabsLaunchParams& params) override;

  private:
    friend HybridBase;
    using HybridBase::HybridBase;
    jni::global_ref<JHybridChromeCustomTabsSpec::javaobject> _javaPart;
  };

} // namespace margelo::nitro::inappbrowser
