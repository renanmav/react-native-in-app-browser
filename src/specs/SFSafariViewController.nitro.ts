import type { HybridObject } from 'react-native-nitro-modules'

export interface SFSafariViewController extends HybridObject<{ ios: 'swift' }> {
  present(params: SFSafariViewControllerPresentParams): void
  dismiss(): void
}

export interface SFSafariViewControllerPresentParams {
  url: string
  modalPresentationStyle?: ModalPresentationStyle
}

/**
 * Based on UIModalPresentationStyle
 * @see https://developer.apple.com/documentation/uikit/uimodalpresentationstyle
 */
export enum ModalPresentationStyle {
  Automatic = 'automatic',
  FullScreen = 'fullScreen',
  PageSheet = 'pageSheet',
}
