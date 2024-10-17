import { NitroModules } from 'react-native-nitro-modules'
import type { SFSafariViewController as SFSafariViewControllerType } from './specs/SFSafariViewController.nitro'

export * from './specs/SFSafariViewController.nitro'

export const SFSafariViewController =
  NitroModules.createHybridObject<SFSafariViewControllerType>(
    'SFSafariViewController'
  )
