/*
 *	org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo.c
 */

/*
 *  Copyright (c) 1999 - 2001 by Matthias Pfisterer <Matthias.Pfisterer@gmx.de>
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#include "common.h"
#include "org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo.h"


HandleFieldHandler(snd_seq_queue_info_t*)


// TODO: used in ...
snd_seq_queue_info_t*
getQueueInfoNativeHandle(JNIEnv *env, jobject obj)
{
	return getHandle(env, obj);
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    malloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_malloc
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_malloc(): begin\n"); }
	nReturn = snd_seq_queue_info_malloc(&handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_malloc(): handle: %p\n", handle); }
	setHandle(env, obj, handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_malloc(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_free
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_free(): begin\n"); }
	handle = getHandle(env, obj);
	snd_seq_queue_info_free(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_free(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    getQueue
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getQueue
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getQueue(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = snd_seq_queue_info_get_queue(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getQueue(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getName
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	const char*		pName;
	jstring			strName;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getName(): begin\n"); }
	handle = getHandle(env, obj);
	pName = snd_seq_queue_info_get_name(handle);
	strName = (*env)->NewStringUTF(env, pName);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getName(): end\n"); }
	return strName;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    getOwner
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getOwner
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getOwner(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = snd_seq_queue_info_get_owner(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getOwner(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    getLocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getLocked
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getLocked(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = snd_seq_queue_info_get_locked(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getLocked(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    getFlags
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getFlags
(JNIEnv* env, jobject obj)
{
	snd_seq_queue_info_t*	handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getFlags(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = snd_seq_queue_info_get_flags(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_getFlags(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    setName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setName
(JNIEnv* env, jobject obj, jstring strName)
{
	snd_seq_queue_info_t*	handle;
	const char*		pName;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setName(): begin\n"); }
	handle = getHandle(env, obj);
	pName = (*env)->GetStringUTFChars(env, strName, NULL);
	snd_seq_queue_info_set_name(handle, pName);
	(*env)->ReleaseStringUTFChars(env, strName, pName);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setName(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    setOwner
 * Signature: (I)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setOwner
(JNIEnv* env, jobject obj, jint nOwner)
{
	snd_seq_queue_info_t*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setOwner(): begin\n"); }
	handle = getHandle(env, obj);
	snd_seq_queue_info_set_owner(handle, nOwner);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setOwner(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    setLocked
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setLocked
(JNIEnv* env, jobject obj, jboolean bLocked)
{
	snd_seq_queue_info_t*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setLocked(): begin\n"); }
	handle = getHandle(env, obj);
	snd_seq_queue_info_set_locked(handle, bLocked);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setLocked(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    setFlags
 * Signature: (I)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setFlags
(JNIEnv* env, jobject obj, jint nFlags)
{
	snd_seq_queue_info_t*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setFlags(): begin\n"); }
	handle = getHandle(env, obj);
	snd_seq_queue_info_set_flags(handle, nFlags);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setFlags(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo
 * Method:    setTrace
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo_setTrace
(JNIEnv* env, jclass cls, jboolean bTrace)
{
	debug_flag = bTrace;
	debug_file = stderr;
}



/*** org_tritonus_lowlevel_alsa_AlsaSeqQueueInfo.c ***/
