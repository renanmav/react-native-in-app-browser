///
/// HybridASWebAuthenticationSessionSpecSwift.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridASWebAuthenticationSessionSpec.hpp"

// Forward declaration of `HybridASWebAuthenticationSessionSpecCxx` to properly resolve imports.
namespace NitroInAppBrowser { class HybridASWebAuthenticationSessionSpecCxx; }

// Forward declaration of `ASWebAuthenticationSessionStartParams` to properly resolve imports.
namespace margelo::nitro::inappbrowser { struct ASWebAuthenticationSessionStartParams; }

#include "ASWebAuthenticationSessionStartParams.hpp"
#include <string>

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "NitroInAppBrowser-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::inappbrowser {

  /**
   * The C++ part of HybridASWebAuthenticationSessionSpecCxx.swift.
   *
   * HybridASWebAuthenticationSessionSpecSwift (C++) accesses HybridASWebAuthenticationSessionSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridASWebAuthenticationSessionSpecCxx can directly inherit from the C++ class HybridASWebAuthenticationSessionSpec
   * to simplify the whole structure and memory management.
   */
  class HybridASWebAuthenticationSessionSpecSwift: public virtual HybridASWebAuthenticationSessionSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridASWebAuthenticationSessionSpecSwift(const NitroInAppBrowser::HybridASWebAuthenticationSessionSpecCxx& swiftPart):
      HybridObject(HybridASWebAuthenticationSessionSpec::TAG),
      _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroInAppBrowser::HybridASWebAuthenticationSessionSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline bool getPrefersEphemeralWebBrowserSession() noexcept override {
      return _swiftPart.getPrefersEphemeralWebBrowserSession();
    }
    inline void setPrefersEphemeralWebBrowserSession(bool prefersEphemeralWebBrowserSession) noexcept override {
      _swiftPart.setPrefersEphemeralWebBrowserSession(std::forward<decltype(prefersEphemeralWebBrowserSession)>(prefersEphemeralWebBrowserSession));
    }

  public:
    // Methods
    inline void start(const ASWebAuthenticationSessionStartParams& params) override {
      _swiftPart.start(params);
    }
    inline void cancel() override {
      _swiftPart.cancel();
    }

  private:
    NitroInAppBrowser::HybridASWebAuthenticationSessionSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::inappbrowser
