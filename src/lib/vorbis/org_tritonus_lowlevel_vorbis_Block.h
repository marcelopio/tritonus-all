/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_tritonus_lowlevel_vorbis_Block */

#ifndef _Included_org_tritonus_lowlevel_vorbis_Block
#define _Included_org_tritonus_lowlevel_vorbis_Block
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    malloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_malloc
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_vorbis_Block_free
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    init
 * Signature: (Lorg/tritonus/lowlevel/vorbis/DspState;)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_init
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    addBlock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_addBlock
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    analysis
 * Signature: (Lorg/tritonus/lowlevel/ogg/Packet;)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_analysis
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    synthesis
 * Signature: (Lorg/tritonus/lowlevel/ogg/Packet;)I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_synthesis
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    clear
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_tritonus_lowlevel_vorbis_Block_clear
  (JNIEnv *, jobject);

/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    setTrace
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_tritonus_lowlevel_vorbis_Block_setTrace
  (JNIEnv *, jclass, jboolean);

#ifdef __cplusplus
}
#endif
#endif
