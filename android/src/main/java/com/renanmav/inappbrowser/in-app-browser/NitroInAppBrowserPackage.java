package com.renanmav.inappbrowser.in-app-browser;

import android.util.Log;

import androidx.annotation.Nullable;

import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.module.model.ReactModuleInfoProvider;
import com.facebook.react.TurboReactPackage;
import com.renanmav.inappbrowser.core.HybridObject;
import com.renanmav.inappbrowser.core.HybridObjectRegistry;

import java.util.HashMap;
import java.util.function.Supplier;

public class NitroInAppBrowserPackage extends TurboReactPackage {
  @Nullable
  @Override
  public NativeModule getModule(String name, ReactApplicationContext reactContext) {
    return null;
  }

  @Override
  public ReactModuleInfoProvider getReactModuleInfoProvider() {
    return () -> {
        return new HashMap<>();
    };
  }

  static {
    System.loadLibrary("NitroInAppBrowser");
  }
}
