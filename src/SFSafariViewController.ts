import { Platform } from 'react-native'
import { NitroModules } from 'react-native-nitro-modules'
import type { SFSafariViewController as SFSafariViewControllerType } from './specs/SFSafariViewController.nitro'

export * from './specs/SFSafariViewController.nitro'

let SFSafariViewController: SFSafariViewControllerType

const SFSafariViewControllerStub: SFSafariViewControllerType = {
  name: 'SFSafariViewController',
  equals: () => false,
  dispose: () => {},
  present: () => {
    console.warn('SFSafariViewController.present is only supported on iOS.')
  },
  dismiss: () => {
    console.warn('SFSafariViewController.dismiss is only supported on iOS.')
  },
}

if (Platform.OS === 'ios') {
  SFSafariViewController =
    NitroModules.createHybridObject<SFSafariViewControllerType>(
      'SFSafariViewController'
    )
} else {
  SFSafariViewController = SFSafariViewControllerStub
}

export { SFSafariViewController }
