import type { HybridObject } from 'react-native-nitro-modules'

export interface ChromeCustomTabsLaunchParams {
  url: string
}

export interface ChromeCustomTabs extends HybridObject<{ android: 'kotlin' }> {
  launch(params: ChromeCustomTabsLaunchParams): void
}
