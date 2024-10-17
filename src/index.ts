import { NitroModules } from 'react-native-nitro-modules'
import type { SFSafariViewController } from './specs/SFSafariViewController.nitro'

export * from './specs/SFSafariViewController.nitro'

export const HybridSFSafariViewController =
  NitroModules.createHybridObject<SFSafariViewController>(
    'SFSafariViewController'
  )
