#include <jni.h>
#include "NitroInAppBrowserOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *)
{
  return renanmav::inappbrowser::NitroInAppBrowser::initialize(vm);
}
