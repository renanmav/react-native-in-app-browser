///
/// ModalPresentationStyle.swift
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

/**
 * Represents the JS union `ModalPresentationStyle`, backed by a C++ enum.
 */
public typealias ModalPresentationStyle = margelo.nitro.inappbrowser.ModalPresentationStyle

public extension ModalPresentationStyle {
  /**
   * Get a ModalPresentationStyle for the given String value, or
   * return `nil` if the given value was invalid/unknown.
   */
  init?(fromString string: String) {
    switch string {
      case "automatic":
        self = .automatic
      case "fullScreen":
        self = .fullscreen
      case "pageSheet":
        self = .pagesheet
      default:
        return nil
    }
  }

  /**
   * Get the String value this ModalPresentationStyle represents.
   */
  var stringValue: String {
    switch self {
      case .automatic:
        return "automatic"
      case .fullscreen:
        return "fullScreen"
      case .pagesheet:
        return "pageSheet"
    }
  }
}
