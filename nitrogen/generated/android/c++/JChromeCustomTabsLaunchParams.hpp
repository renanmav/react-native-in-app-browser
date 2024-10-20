///
/// JChromeCustomTabsLaunchParams.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "ChromeCustomTabsLaunchParams.hpp"

#include <string>

namespace margelo::nitro::inappbrowser {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "ChromeCustomTabsLaunchParams" and the the Kotlin data class "ChromeCustomTabsLaunchParams".
   */
  struct JChromeCustomTabsLaunchParams final: public jni::JavaClass<JChromeCustomTabsLaunchParams> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/inappbrowser/ChromeCustomTabsLaunchParams;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct ChromeCustomTabsLaunchParams by copying all values to C++.
     */
    [[maybe_unused]]
    ChromeCustomTabsLaunchParams toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldUrl = clazz->getField<jni::JString>("url");
      jni::local_ref<jni::JString> url = this->getFieldValue(fieldUrl);
      return ChromeCustomTabsLaunchParams(
        url->toStdString()
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JChromeCustomTabsLaunchParams::javaobject> fromCpp(const ChromeCustomTabsLaunchParams& value) {
      return newInstance(
        jni::make_jstring(value.url)
      );
    }
  };

} // namespace margelo::nitro::inappbrowser