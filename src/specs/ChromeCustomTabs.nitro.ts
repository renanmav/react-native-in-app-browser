import type { HybridObject } from 'react-native-nitro-modules'

export interface ChromeCustomTabs extends HybridObject<{ android: 'kotlin' }> {
  launch(params: ChromeCustomTabsLaunchParams): void
}
export interface ChromeCustomTabsLaunchParams {
  url: string
}
