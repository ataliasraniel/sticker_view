
import 'sticker_view_platform_interface.dart';

class StickerView {
  Future<String?> getPlatformVersion() {
    return StickerViewPlatform.instance.getPlatformVersion();
  }
}
