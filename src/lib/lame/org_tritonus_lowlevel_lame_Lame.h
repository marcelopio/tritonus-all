/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_tritonus_lowlevel_lame_Lame */

#ifndef _Included_org_tritonus_lowlevel_lame_Lame
#define _Included_org_tritonus_lowlevel_lame_Lame
#ifdef __cplusplus
extern "C" {
#endif
#undef org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_2
#define org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_2 0L
#undef org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_1
#define org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_1 1L
#undef org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_2DOT5
#define org_tritonus_lowlevel_lame_Lame_MPEG_VERSION_2DOT5 2L
#undef org_tritonus_lowlevel_lame_Lame_QUALITY_LOWEST
#define org_tritonus_lowlevel_lame_Lame_QUALITY_LOWEST 9L
#undef org_tritonus_lowlevel_lame_Lame_QUALITY_LOW
#define org_tritonus_lowlevel_lame_Lame_QUALITY_LOW 7L
#undef org_tritonus_lowlevel_lame_Lame_QUALITY_MIDDLE
#define org_tritonus_lowlevel_lame_Lame_QUALITY_MIDDLE 5L
#undef org_tritonus_lowlevel_lame_Lame_QUALITY_HIGH
#define org_tritonus_lowlevel_lame_Lame_QUALITY_HIGH 2L
#undef org_tritonus_lowlevel_lame_Lame_QUALITY_HIGHEST
#define org_tritonus_lowlevel_lame_Lame_QUALITY_HIGHEST 1L
#undef org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_STEREO
#define org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_STEREO 0L
#undef org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_JOINT_STEREO
#define org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_JOINT_STEREO 1L
#undef org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_DUAL_CHANNEL
#define org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_DUAL_CHANNEL 2L
#undef org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_MONO
#define org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_MONO 3L
#undef org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_AUTO
#define org_tritonus_lowlevel_lame_Lame_CHANNEL_MODE_AUTO -1L
#undef org_tritonus_lowlevel_lame_Lame_BITRATE_AUTO
#define org_tritonus_lowlevel_lame_Lame_BITRATE_AUTO -1L
#undef org_tritonus_lowlevel_lame_Lame_DEFAULT_PCM_BUFFER_SIZE
#define org_tritonus_lowlevel_lame_Lame_DEFAULT_PCM_BUFFER_SIZE 32768L
#undef org_tritonus_lowlevel_lame_Lame_OUT_OF_MEMORY
#define org_tritonus_lowlevel_lame_Lame_OUT_OF_MEMORY -300L
#undef org_tritonus_lowlevel_lame_Lame_NOT_INITIALIZED
#define org_tritonus_lowlevel_lame_Lame_NOT_INITIALIZED -301L
#undef org_tritonus_lowlevel_lame_Lame_LAME_ENC_NOT_FOUND
#define org_tritonus_lowlevel_lame_Lame_LAME_ENC_NOT_FOUND -302L
/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nInitParams
 * Signature: (IIIIIZZ)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_lame_Lame_nInitParams
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nGetEncoderVersion
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_lame_Lame_nGetEncoderVersion
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nGetPCMBufferSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_lame_Lame_nGetPCMBufferSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nEncodeBuffer
 * Signature: ([BII[B)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_lame_Lame_nEncodeBuffer
  (JNIEnv *, jobject, jbyteArray, jint, jint, jbyteArray);

/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nEncodeFinish
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_lame_Lame_nEncodeFinish
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     org_tritonus_lowlevel_lame_Lame
 * Method:    nClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_lame_Lame_nClose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
