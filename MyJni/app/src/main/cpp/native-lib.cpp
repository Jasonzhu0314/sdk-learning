#include <jni.h>
#include <string>
//#include "cpplib.cpp"

std::string say_from_cpplib();

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myjni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++" + say_from_cpplib();
    return env->NewStringUTF(hello.c_str());
}
