///
/// SFSafariViewControllerPresentParams.kt
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

package com.margelo.nitro.inappbrowser

import androidx.annotation.Keep
import com.facebook.proguard.annotations.DoNotStrip

/**
 * Represents the JavaScript object/struct "SFSafariViewControllerPresentParams".
 */
@DoNotStrip
@Keep
data class SFSafariViewControllerPresentParams(
  val url: String,
  val modalPresentationStyle: ModalPresentationStyle?
)
