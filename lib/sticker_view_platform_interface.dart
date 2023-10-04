import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'sticker_view_method_channel.dart';

abstract class StickerViewPlatform extends PlatformInterface {
  /// Constructs a StickerViewPlatform.
  StickerViewPlatform() : super(token: _token);

  static final Object _token = Object();

  static StickerViewPlatform _instance = MethodChannelStickerView();

  /// The default instance of [StickerViewPlatform] to use.
  ///
  /// Defaults to [MethodChannelStickerView].
  static StickerViewPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [StickerViewPlatform] when
  /// they register themselves.
  static set instance(StickerViewPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }
}
