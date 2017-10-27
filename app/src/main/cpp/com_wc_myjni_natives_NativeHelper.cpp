#include <jni.h>
#include <string>

extern "C"
#include "com_wc_myjni_natives_NativeHelper.h"
JNIEXPORT jstring JNICALL
Java_com_wc_myjni_natives_NativeHelper_getAppKey(JNIEnv *env, jclass type) {
    std::string hello = "jskakljek";

    return env->NewStringUTF(hello.c_str());
}