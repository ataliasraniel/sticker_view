#ifndef FLUTTER_PLUGIN_STICKER_VIEW_PLUGIN_H_
#define FLUTTER_PLUGIN_STICKER_VIEW_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace sticker_view {

class StickerViewPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  StickerViewPlugin();

  virtual ~StickerViewPlugin();

  // Disallow copy and assign.
  StickerViewPlugin(const StickerViewPlugin&) = delete;
  StickerViewPlugin& operator=(const StickerViewPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace sticker_view

#endif  // FLUTTER_PLUGIN_STICKER_VIEW_PLUGIN_H_
