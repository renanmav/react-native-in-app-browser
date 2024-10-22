import type { HybridObject } from 'react-native-nitro-modules'

export interface ASWebAuthenticationSession
  extends HybridObject<{ ios: 'swift' }> {
  prefersEphemeralWebBrowserSession: boolean
  start(params: ASWebAuthenticationSessionStartParams): void
  cancel(): void
}

export interface ASWebAuthenticationSessionStartParams {
  url: string
}
