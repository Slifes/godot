/* register_types.cpp */

#include "register_types.h"

#include "qrcodetexture.h"

void initialize_qrcode_module(ModuleInitializationLevel p_level) {
if (p_level == MODULE_INITIALIZATION_LEVEL_SCENE) {
  GDREGISTER_CLASS(QRCodeTexture2D);
}
}

void uninitialize_qrcode_module(ModuleInitializationLevel p_level) {
}
