package com.margelo.nitro.inappbrowser

import android.net.Uri
import android.util.Log
import androidx.browser.customtabs.CustomTabsIntent
import com.margelo.nitro.NitroModules

class HybridChromeCustomTabs : HybridChromeCustomTabsSpec() {
  companion object {
    const val TAG = "HybridChromeCustomTabs"
  }

  override val memorySize: Long
    get() = 0L

  private val applicationContext = NitroModules.applicationContext

  override fun launch(params: ChromeCustomTabsLaunchParams) {
    Log.d(TAG, "launch: ${params.url}")

    val customTabsIntent = CustomTabsIntent.Builder().build()

    try {
      val context = applicationContext?.currentActivity
      if (context == null) {
        Log.e(TAG, "Error launching Custom Tab: Context is null")
        return
      }

      val uri = Uri.parse(params.url)
      if (uri == null) {
        Log.e(TAG, "Error launching Custom Tab: Invalid URL")
        return
      }

      customTabsIntent.launchUrl(context, uri)
    } catch (e: Exception) {
      Log.e(TAG, "Error launching Custom Tab: ${e.message}", e)
    }
  }
}
