import { Platform } from 'react-native'
import { NitroModules } from 'react-native-nitro-modules'
import type { ChromeCustomTabs as ChromeCustomTabsType } from './specs/ChromeCustomTabs.nitro'

export * from './specs/ChromeCustomTabs.nitro'

let ChromeCustomTabs: ChromeCustomTabsType

const ChromeCustomTabsStub: ChromeCustomTabsType = {
  name: 'ChromeCustomTabs',
  equals: () => false,
  dispose: () => {},
  launch: () => {
    console.warn('ChromeCustomTabs.launch is only supported on Android.')
  },
}

if (Platform.OS === 'android') {
  ChromeCustomTabs =
    NitroModules.createHybridObject<ChromeCustomTabsType>('ChromeCustomTabs')
} else {
  ChromeCustomTabs = ChromeCustomTabsStub
}

export { ChromeCustomTabs }
