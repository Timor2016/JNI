#include <jni.h>
#include <string>

int max(int a, int b);

extern "C"
#include "com_wc_myjni_natives_NativeHelper.h"

JNIEXPORT int JNICALL
Java_com_wc_myjni_natives_NativeHelper_getAppKey(JNIEnv *env, jclass type, int s) {
    int x = 10, y = 20, z;
    z = max(s, y);/*调用max函数*/
    std::string hello = "asdasdsad";
    if (z == 20) {
        hello = "20";
    } else {
        hello = "10";
    }


    return z;
}

int max(int a, int b) { /*定义max函数*/
    if (a > b) {
        return a;
    } else {
        return b;
    }
}