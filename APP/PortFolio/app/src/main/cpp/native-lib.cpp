#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_anrs_1jns_1cris_portfolio_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
