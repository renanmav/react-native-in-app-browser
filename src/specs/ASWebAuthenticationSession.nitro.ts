import type { HybridObject } from 'react-native-nitro-modules'

export interface ASWebAuthenticationSession
  extends HybridObject<{ ios: 'swift' }> {
  prefersEphemeralWebBrowserSession: boolean
  start(params: ASWebAuthenticationSessionStartParams): void
  cancel(): void
}

export interface ASWebAuthenticationSessionStartParams {
  /**
   * The URL to load in the authentication session.
   *
   * Example: `https://example.com/auth`
   */
  url: string
  /**
   * The URL scheme to use for the callback.
   *
   * Example: `my-scheme`
   */
  callbackURLScheme: string
}
