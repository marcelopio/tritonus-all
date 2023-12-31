/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_tritonus_lowlevel_ogg_SyncState */

#ifndef _Included_org_tritonus_lowlevel_ogg_SyncState
#define _Included_org_tritonus_lowlevel_ogg_SyncState
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    malloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_malloc
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_free
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_init
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_clear
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_reset
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    write
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_write
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    pageseek
 * Signature: (Lorg/tritonus/lowlevel/ogg/Page;)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_pageseek
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    pageOut
 * Signature: (Lorg/tritonus/lowlevel/ogg/Page;)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_pageOut
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_tritonus_lowlevel_ogg_SyncState
 * Method:    setTrace
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_ogg_SyncState_setTrace
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
