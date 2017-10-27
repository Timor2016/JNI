package com.wc.myjni.natives;

/**
 * 作者：wc
 * 时间：2017/10/26 0026 14:00
 * 描述：
 */
public class NativeHelper {
    static {
        // 加载C代码库, 库的名称, 必须是CMakeLists.txt中指定的名称
        System.loadLibrary("native-lib");
    }
    //获取C中隐藏的AppKey
    public static native String getAppKey();
}
