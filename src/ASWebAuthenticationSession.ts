import { Platform } from 'react-native'
import { NitroModules } from 'react-native-nitro-modules'
import type { ASWebAuthenticationSession as ASWebAuthenticationSessionType } from './specs/ASWebAuthenticationSession.nitro'

export * from './specs/ASWebAuthenticationSession.nitro'

/**
 * ASWebAuthenticationSession
 * A session that an app uses to authenticate a user through a web service.
 *
 * @platform ios
 * @docs https://developer.apple.com/documentation/authenticationservices/aswebauthenticationsession
 */
let ASWebAuthenticationSession: ASWebAuthenticationSessionType

const ASWebAuthenticationSessionStub: ASWebAuthenticationSessionType = {
  name: 'ASWebAuthenticationSession',
  equals: () => false,
  dispose: () => {},
  prefersEphemeralWebBrowserSession: false,
  start: () => {
    console.warn('ASWebAuthenticationSession.start is only supported on iOS.')
  },
  cancel: () => {
    console.warn('ASWebAuthenticationSession.cancel is only supported on iOS.')
  },
}

if (Platform.OS === 'ios') {
  ASWebAuthenticationSession =
    NitroModules.createHybridObject<ASWebAuthenticationSessionType>(
      'ASWebAuthenticationSession'
    )
} else {
  ASWebAuthenticationSession = ASWebAuthenticationSessionStub
}

export { ASWebAuthenticationSession }
