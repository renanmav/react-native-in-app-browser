///
/// ASWebAuthenticationSessionStartParams.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

import NitroModules

/**
 * Represents an instance of `ASWebAuthenticationSessionStartParams`, backed by a C++ struct.
 */
public typealias ASWebAuthenticationSessionStartParams = margelo.nitro.inappbrowser.ASWebAuthenticationSessionStartParams

public extension ASWebAuthenticationSessionStartParams {
  private typealias bridge = margelo.nitro.inappbrowser.bridge.swift

  /**
   * Create a new instance of `ASWebAuthenticationSessionStartParams`.
   */
  init(url: String, callbackURLScheme: String) {
    self.init(std.string(url), std.string(callbackURLScheme))
  }

  var url: String {
    @inline(__always)
    get {
      return String(self.__url)
    }
    @inline(__always)
    set {
      self.__url = std.string(newValue)
    }
  }
  
  var callbackURLScheme: String {
    @inline(__always)
    get {
      return String(self.__callbackURLScheme)
    }
    @inline(__always)
    set {
      self.__callbackURLScheme = std.string(newValue)
    }
  }
}
