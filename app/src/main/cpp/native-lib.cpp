#include <jni.h>
#include <string>
//#include <opencv2/core.hpp>

//JNIEXPORT jstring JNICALL
//Java_com_example_suraz_testopencv_MainActivity_validate(JNIEnv *env, jobject instance,
//                                                        jlong matAddGr, jlong matAddrRgba) {
//    cv::Rect();
//    cv::Mat();
//    std::string hello2 = "Hello from validate";
//    return env->NewStringUTF(hello2.c_str());
//
//}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_suraz_testopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
    }





