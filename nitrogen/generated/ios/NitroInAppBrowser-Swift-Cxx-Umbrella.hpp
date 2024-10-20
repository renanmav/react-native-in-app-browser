///
/// NitroInAppBrowser-Swift-Cxx-Umbrella.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

// Forward declarations of C++ defined types
// Forward declaration of `HybridSFSafariViewControllerSpec` to properly resolve imports.
namespace margelo::nitro::inappbrowser { class HybridSFSafariViewControllerSpec; }
// Forward declaration of `ModalPresentationStyle` to properly resolve imports.
namespace margelo::nitro::inappbrowser { enum class ModalPresentationStyle; }
// Forward declaration of `SFSafariViewControllerPresentParams` to properly resolve imports.
namespace margelo::nitro::inappbrowser { struct SFSafariViewControllerPresentParams; }

// Include C++ defined types
#include "HybridSFSafariViewControllerSpec.hpp"
#include "ModalPresentationStyle.hpp"
#include "SFSafariViewControllerPresentParams.hpp"
#include <memory>
#include <optional>
#include <string>

// C++ helpers for Swift
#include "NitroInAppBrowser-Swift-Cxx-Bridge.hpp"

// Common C++ types used in Swift
#include <NitroModules/ArrayBufferHolder.hpp>
#include <NitroModules/AnyMapHolder.hpp>
#include <NitroModules/HybridContext.hpp>
#include <NitroModules/PromiseHolder.hpp>

// Forward declarations of Swift defined types
// Forward declaration of `HybridSFSafariViewControllerSpecCxx` to properly resolve imports.
namespace NitroInAppBrowser { class HybridSFSafariViewControllerSpecCxx; }

// Include Swift defined types
#if __has_include("NitroInAppBrowser-Swift.h")
// This header is generated by Xcode/Swift on every app build.
// If it cannot be found, make sure the Swift module's name (= podspec name) is actually "NitroInAppBrowser".
#include "NitroInAppBrowser-Swift.h"
#else
#error NitroInAppBrowser's autogenerated Swift header cannot be found! Make sure the Swift module's name (= podspec name) is actually "NitroInAppBrowser", and try building the app first.
#endif
