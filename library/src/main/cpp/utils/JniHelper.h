#ifndef GPLAYER_JNIHELPER_H
#define GPLAYER_JNIHELPER_H

#include <jni.h>
#include <string>

using namespace std;

class JniHelper {
public:
    static JNIEnv *getJNIEnv();

    static bool attachCurrentThread();

    static void detachCurrentThread();

    static void throwException(JNIEnv *env, const char *className, const char *msg);

    static jstring newStringUTF(JNIEnv *env, const char *data);

    static string getStringUTF(JNIEnv *env, jstring obj);

    static char* getCharArrayUTF(JNIEnv *env, jstring obj);

    static jobject createByteBuffer(JNIEnv *env, unsigned char *buffer, int size);

    static jobject createByteBuffer(JNIEnv *env, int size);

    static void deleteLocalRef(jobject jobj);

    static void callVoidMethod(jobject obj, jmethodID methodId);

    static void callVoidMethod(jobject obj, jmethodID methodId, jint arg1);

    static void callVoidMethod(jobject obj, jmethodID methodId, jint arg1, jstring arg2);

    static void callVoidMethod(jobject obj, jmethodID methodId, jstring arg1, jint arg2);

    static void callVoidMethod(jobject obj, jmethodID methodId, jint arg1, jobject arg2);

    static int callIntMethod(jobject obj, jmethodID methodId, jstring arg1, jint arg2);

    static int callIntMethod(jobject obj, jmethodID methodId, jobject arg1);

    static int callIntMethod(jobject obj, jmethodID methodId);

    static int callIntMethod(jobject obj, jmethodID methodId, jobject arg1, jobject arg2);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jint arg1);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jlong arg1, jint arg2, jint arg3, jint arg4,
                                     jstring arg5, jstring arg6);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jstring arg1, jint arg2, jint arg3, jint arg4,
                                     jstring arg5, jstring arg6);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jstring arg1, jstring arg2);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jstring arg1, jstring arg2, jstring arg3);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jint arg1, jint arg2, jint arg3, jbyteArray arg4);

    static void callStaticVoidMethod(jclass cls, jmethodID methodId, jstring arg1, jint arg2, jint arg3, jint arg4, jbyteArray arg5);

    static jobject callObjectMethod(jobject obj, jmethodID methodId);

    static jboolean callBooleanMethod(jobject obj, jmethodID methodId);

public:
    static JavaVM *sJavaVM;
};

#endif //GPLAYER_JNIHELPER_H
