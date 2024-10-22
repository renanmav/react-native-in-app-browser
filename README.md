# react-native-in-app-browser

An in-app-browser (IAB) module for react-native exposing bindings for [SFSafariViewController](https://developer.apple.com/documentation/safariservices/sfsafariviewcontroller), [ASWebAuthenticationSession](https://developer.apple.com/documentation/authenticationservices/aswebauthenticationsession), [ChromeCustomTabs](https://developer.chrome.com/docs/android/custom-tabs) & more, powered by [Nitro Modules](https://nitro.margelo.com).

<!-- TODO: add event listeners to URL changes -->
<!-- TODO: add support for incognito mode -->

## Features

- Easy-to-use API
- Common cross-platform support
- Platform-specific implementations (iOS and Android)

## Installation

> [!IMPORTANT]
> Make sure you add [react-native-nitro-modules](https://github.com/mrousavy/nitro) as dependency.

```bash
npx install @renanmav/react-native-in-app-browser
```

## Usage

You can choose between common or platform-specific interfacing.

### Basic usage

```typescript
import { InAppBrowser } from 'react-native-in-app-browser'
// Open a URL in the in-app browser
InAppBrowser.open('https://example.com')
```

<!-- TODO: add platform-specific usage -->

## Platform Compatibility

| Feature                    | iOS | Android |
| -------------------------- | --- | ------- |
| InAppBrowser               | ✅  | ✅      |
| SFSafariViewController     | ✅  | ❌      |
| ASWebAuthenticationSession | ✅  | ❌      |
| ChromeCustomTabs           | ❌  | ✅      |

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
