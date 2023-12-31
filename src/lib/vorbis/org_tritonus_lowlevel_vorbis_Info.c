/*
 *	org_tritonus_lowlevel_vorbis_Info.c
 */

/*
 *  Copyright (c) 2003 by Matthias Pfisterer <Matthias.Pfisterer@web.de>
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

/*
|<---            this code is formatted to fit into 80 columns             --->|
*/

#include "common.h"
#include "org_tritonus_lowlevel_vorbis_Info.h"


HandleFieldHandlerDeclaration(handler, vorbis_info*)

vorbis_info*
getInfoNativeHandle(JNIEnv *env, jobject obj)
{
        return getHandle(env, obj);
}

vorbis_comment*
getCommentNativeHandle(JNIEnv *env, jobject obj);
ogg_packet*
getPacketNativeHandle(JNIEnv *env, jobject obj);



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    malloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_malloc
(JNIEnv* env, jobject obj)
{
	vorbis_info*		handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_malloc(): begin\n"); }
	handle = malloc(sizeof(vorbis_info));
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_malloc(): handle: %p\n", handle); }
	setHandle(env, obj, handle);
	nReturn = (handle == NULL) ? -1 : 0;
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_malloc(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_free
(JNIEnv* env, jobject obj)
{
	vorbis_info*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_free(): begin\n"); }
	handle = getHandle(env, obj);
	free(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_free(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_init
(JNIEnv* env, jobject obj)
{
	vorbis_info*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_init(): begin\n"); }
	handle = getHandle(env, obj);
	vorbis_info_init(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_init(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_clear
(JNIEnv* env, jobject obj)
{
	vorbis_info*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_clear(): begin\n"); }
	handle = getHandle(env, obj);
	vorbis_info_clear(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_clear(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    getChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_getChannels
(JNIEnv* env, jobject obj)
{
	vorbis_info*	handle;
	int		nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_getChannels(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = handle->channels;
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_getChannels(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    getRate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_getRate
(JNIEnv* env, jobject obj)
{
	vorbis_info*	handle;
	int		nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_getRate(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = handle->rate;
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_getRate(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    encodeInit
 * Signature: (IIIII)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_encodeInit
(JNIEnv* env, jobject obj, jint nChannels, jint nRate,
 jint nMaxBitrate, jint nNominalBitrate, jint nMinBitrate)
{
	vorbis_info*	handle;
	int		nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_encodeInit(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = vorbis_encode_init(handle, nChannels, nRate,
				     nMaxBitrate, nNominalBitrate, nMinBitrate);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_encodeInit(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    encodeInitVBR
 * Signature: (IIF)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_encodeInitVBR
(JNIEnv* env, jobject obj, jint nChannels, jint nRate, jfloat fQuality)
{
	vorbis_info*	handle;
	int		nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_encodeInitVBR(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = vorbis_encode_init_vbr(handle, nChannels, nRate, fQuality);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_encodeInitVBR(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    headerIn
 * Signature: (Lorg/tritonus/lowlevel/vorbis/Comment;Lorg/tritonus/lowlevel/ogg/Packet;)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_headerIn
(JNIEnv* env, jobject obj, jobject comment, jobject packet)
{
	vorbis_info*	handle;
	vorbis_comment*	commentHandle;
	ogg_packet*	packetHandle;
	int		nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_headerIn(): begin\n"); }
	handle = getHandle(env, obj);
	commentHandle = getCommentNativeHandle(env, comment);
	packetHandle = getPacketNativeHandle(env, packet);
	nReturn = vorbis_synthesis_headerin(handle, commentHandle, packetHandle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Info_headerIn(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Info
 * Method:    setTrace
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Info_setTrace
(JNIEnv* env, jclass cls, jboolean bTrace)
{
	debug_flag = bTrace;
	debug_file = stderr;
}



/*** org_tritonus_lowlevel_vorbis_Info.c ***/
