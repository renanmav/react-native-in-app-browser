# react-native-in-app-browser

An in-app-browser (IAB) module for react-native exposing bindings for [SFSafariViewController](https://developer.apple.com/documentation/safariservices/sfsafariviewcontroller), [WKWebView](https://developer.apple.com/documentation/webkit/wkwebview) & more, powered by [Nitro Modules](https://nitro.margelo.com).

## Docs

- https://developer.apple.com/documentation/safariservices/sfsafariviewcontroller
- https://developer.apple.com/documentation/webkit/wkwebview

<!-- [DOCS FROM NITRO TEMPLATE]

## Usage

Clone this repo, and change all `<<*>>` names according to your `nitro.json` file.

## Contributing

Contribute a change to this template to update it for newer React Native versions.

## Structure

- [`android/`](android): All your `android`-specific implementations.
  - [`build.gradle`](android/build.gradle): The gradle build file. This contains four important pieces:
    1. Standard react-native library boilerplate code
    2. Configures Kotlin (`apply plugin: 'org.jetbrains.kotlin.android'`)
    3. Adds all Nitrogen files (`apply from: '.../<<androidCxxLibName>>+autolinking.gradle'`)
    4. Triggers the native C++ build (via CMake/`externalNativeBuild`)
  - [`CMakeLists.txt`](android/CMakeLists.txt): The CMake build file to build C++ code. This contains four important pieces:
    1. Creates a library called `<<androidCxxLibName>>` (same as in `nitro.json`)
    2. Adds all Nitrogen files (`include(.../<<androidCxxLibName>>+autolinking.cmake)`)
    3. Adds all custom C++ files (only `HybridTestObjectCpp.cpp`)
    4. Adds a `cpp-adapter.cpp` file, which autolinks all C++ HybridObjects (only `HybridTestObjectCpp`)
  - [`src/main/java/com/margelo/nitro/<<androidNamespace>>/`](android/src/main/java/com/margelo/nitro/<<androidNamespace>>/): All Kotlin implementations.
    - [`<<androidCxxLibName>>Package.java`](android/src/main/java/com/margelo/nitro/<<androidNamespace>>/<<androidCxxLibName>>Package.java): The react-native package. You need this because the react-native CLI only adds libraries if they have a `*Package.java` file. In here, you can autolink all Kotlin HybridObjects.
- [`cpp/`](cpp): All your cross-platform implementations. (only `HybridTestObjectCpp.cpp`)
- [`ios/`](ios): All your iOS-specific implementations.
- [`nitrogen/`](nitrogen): All files generated by nitrogen. You should commit this folder to git.
- [`src/`](src): The TypeScript codebase. This defines all HybridObjects and loads them at runtime.
  - [`specs/`](src/specs): All HybridObject types. Nitrogen will run on all `*.nitro.ts` files.
- [`nitro.json`](nitro.json): The configuration file for nitrogen. This will define all native namespaces, as well as the library name.
- [`<<iosModulename>>.podspec`](<<iosModulename>>.podspec): The iOS podspec build file to build the iOS code. This contains three important pieces:
  1. Specifies the Pod's name. This must be identical to the name specified in `nitro.json`.
  2. Adds all of your `.swift` or `.cpp` files (implementations).
  3. Adds all Nitrogen files (`add_nitrogen_files(s)`)
- [`package.json`](package.json): The npm package.json file. `react-native-nitro-modules` should be a `peerDependency`.

-->
