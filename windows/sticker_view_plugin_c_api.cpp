#include "include/sticker_view/sticker_view_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "sticker_view_plugin.h"

void StickerViewPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  sticker_view::StickerViewPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
