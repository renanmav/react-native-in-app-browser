import type { HybridObject } from 'react-native-nitro-modules'

/**
 * Based on UIModalPresentationStyle
 * @see https://developer.apple.com/documentation/uikit/uimodalpresentationstyle
 */
export enum ModalPresentationStyle {
  Automatic = 'automatic',
  FullScreen = 'fullScreen',
  PageSheet = 'pageSheet',
}

export interface SFSafariViewControllerPresentParams {
  url: string
  modalPresentationStyle?: ModalPresentationStyle
}

export interface SFSafariViewController
  extends HybridObject<{ ios: 'swift'; android: 'kotlin' }> {
  present(params: SFSafariViewControllerPresentParams): void
  dismiss(): void
}
