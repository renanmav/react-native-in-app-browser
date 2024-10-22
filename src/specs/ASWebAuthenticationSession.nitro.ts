import type { HybridObject } from 'react-native-nitro-modules'

export interface ASWebAuthenticationSession
  extends HybridObject<{ ios: 'swift' }> {
  start(params: ASWebAuthenticationSessionStartParams): void
  cancel(): void
  prefersEphemeralWebBrowserSession: boolean
}

export interface ASWebAuthenticationSessionStartParams {
  url: string
}
