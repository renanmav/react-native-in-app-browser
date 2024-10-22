import { Platform } from 'react-native'

import { SFSafariViewController } from './SFSafariViewController'
import { ChromeCustomTabs } from './ChromeCustomTabs'

interface InAppBrowserType {
  open: (url: string) => void
}

export const InAppBrowser: InAppBrowserType = {
  open: (url: string) => {
    const openNative = Platform.select({
      ios: () => SFSafariViewController.present({ url }),
      android: () => ChromeCustomTabs.launch({ url }),
    })

    if (!openNative) {
      throw new Error('InAppBrowser is not supported on this platform')
    }

    openNative()
  },
}
