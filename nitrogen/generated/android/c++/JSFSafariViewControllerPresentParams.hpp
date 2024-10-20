///
/// JSFSafariViewControllerPresentParams.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "SFSafariViewControllerPresentParams.hpp"

#include "JModalPresentationStyle.hpp"
#include "ModalPresentationStyle.hpp"
#include <optional>
#include <string>

namespace margelo::nitro::inappbrowser {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ struct "SFSafariViewControllerPresentParams" and the the Kotlin data class "SFSafariViewControllerPresentParams".
   */
  struct JSFSafariViewControllerPresentParams final: public jni::JavaClass<JSFSafariViewControllerPresentParams> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/inappbrowser/SFSafariViewControllerPresentParams;";

  public:
    /**
     * Convert this Java/Kotlin-based struct to the C++ struct SFSafariViewControllerPresentParams by copying all values to C++.
     */
    [[maybe_unused]]
    SFSafariViewControllerPresentParams toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldUrl = clazz->getField<jni::JString>("url");
      jni::local_ref<jni::JString> url = this->getFieldValue(fieldUrl);
      static const auto fieldModalPresentationStyle = clazz->getField<JModalPresentationStyle>("modalPresentationStyle");
      jni::local_ref<JModalPresentationStyle> modalPresentationStyle = this->getFieldValue(fieldModalPresentationStyle);
      return SFSafariViewControllerPresentParams(
        url->toStdString(),
        modalPresentationStyle != nullptr ? std::make_optional(modalPresentationStyle->toCpp()) : std::nullopt
      );
    }

  public:
    /**
     * Create a Java/Kotlin-based struct by copying all values from the given C++ struct to Java.
     */
    [[maybe_unused]]
    static jni::local_ref<JSFSafariViewControllerPresentParams::javaobject> fromCpp(const SFSafariViewControllerPresentParams& value) {
      return newInstance(
        jni::make_jstring(value.url),
        value.modalPresentationStyle.has_value() ? JModalPresentationStyle::fromCpp(value.modalPresentationStyle.value()) : nullptr
      );
    }
  };

} // namespace margelo::nitro::inappbrowser
