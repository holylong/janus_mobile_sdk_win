#ifndef NATIVE_LOG_H_
#define NATIVE_LOG_H_

#include<android/log.h>

#define TAG "sdk_native_janus_log " // 这个是自定义的LOG的标识
#define JANUS_SDK_LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define JANUS_SDK_LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define JANUS_SDK_LOGW(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define JANUS_SDK_LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define JANUS_SDK_LOGF(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型

#endif
