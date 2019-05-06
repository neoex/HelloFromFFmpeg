#include <jni.h>
#include <string>

extern "C"{
#include "libavcodec/avcodec.h"

JNIEXPORT jstring JNICALL
Java_demo_com_testndk_MainActivity_helloFromJni(JNIEnv *env, jobject instance) {
    char info[1000] = {0};
    sprintf(info, "%s\n", avcodec_configuration());
    return env->NewStringUTF(info);
}
}
