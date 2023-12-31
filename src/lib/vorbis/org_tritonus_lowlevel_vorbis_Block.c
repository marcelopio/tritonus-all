/*
 *	org_tritonus_lowlevel_vorbis_Block.c
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
#include "org_tritonus_lowlevel_vorbis_Block.h"


HandleFieldHandlerDeclaration(handler, vorbis_block*)

vorbis_block*
getBlockNativeHandle(JNIEnv *env, jobject obj)
{
        return getHandle(env, obj);
}


vorbis_dsp_state*
getDspStateNativeHandle(JNIEnv *env, jobject obj);
ogg_packet*
getPacketNativeHandle(JNIEnv *env, jobject obj);


/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    malloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_malloc
(JNIEnv* env, jobject obj)
{
	vorbis_block*		handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_malloc(): begin\n"); }
	handle = malloc(sizeof(vorbis_block));
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_malloc(): handle: %p\n", handle); }
	setHandle(env, obj, handle);
	nReturn = (handle == NULL) ? -1 : 0;
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_malloc(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_free
(JNIEnv* env, jobject obj)
{
	vorbis_block*	handle;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_free(): begin\n"); }
	handle = getHandle(env, obj);
	free(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_free(): end\n"); }
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    init
 * Signature: (Lorg/tritonus/lowlevel/vorbis/DspState;)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_init
(JNIEnv* env, jobject obj, jobject dspState)
{
	vorbis_block*		handle;
	vorbis_dsp_state*	dspStateHandle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_init(): begin\n"); }
	handle = getHandle(env, obj);
	dspStateHandle = getDspStateNativeHandle(env, dspState);
	nReturn = vorbis_block_init(dspStateHandle, handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_init(): end\n"); }
	return nReturn;
}


/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    addBlock
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_addBlock
(JNIEnv* env, jobject obj)
{
	vorbis_block*		handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_addBlock(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = vorbis_bitrate_addblock(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_addBlock(): end\n"); }
	return nReturn;
}


/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    analysis
 * Signature: (Lorg/tritonus/lowlevel/ogg/Packet;)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_analysis
(JNIEnv* env, jobject obj, jobject packet)
{
	vorbis_block*		handle;
	ogg_packet*		packetHandle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_DspState_analysis(): begin\n"); }
	handle = getHandle(env, obj);
	packetHandle = NULL;
	if (packet != NULL)
	{
		packetHandle = getPacketNativeHandle(env, packet);
	}
	nReturn = vorbis_analysis(handle, packetHandle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_DspState_analysis(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    synthesis
 * Signature: (Lorg/tritonus/lowlevel/ogg/Packet;)I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_synthesis
(JNIEnv* env, jobject obj, jobject packet)
{
	vorbis_block*		handle;
	ogg_packet*		packetHandle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_synthesis(): begin\n"); }
	handle = getHandle(env, obj);
	packetHandle = NULL;
	if (packet != NULL)
	{
		packetHandle = getPacketNativeHandle(env, packet);
	}
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_synthesis(): packet handle: %p\n", packetHandle); }
	nReturn = vorbis_synthesis(handle, packetHandle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_synthesis(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    clear
 * Signature: ()I
 */
JNIEXPORT jint JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_clear
(JNIEnv* env, jobject obj)
{
	vorbis_block*		handle;
	int			nReturn;

	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_clear(): begin\n"); }
	handle = getHandle(env, obj);
	nReturn = vorbis_block_clear(handle);
	if (debug_flag) { fprintf(debug_file, "Java_org_tritonus_lowlevel_vorbis_Block_clear(): end\n"); }
	return nReturn;
}



/*
 * Class:     org_tritonus_lowlevel_vorbis_Block
 * Method:    setTrace
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL
Java_org_tritonus_lowlevel_vorbis_Block_setTrace
(JNIEnv* env, jclass cls, jboolean bTrace)
{
	debug_flag = bTrace;
	debug_file = stderr;
}



/*** org_tritonus_lowlevel_vorbis_Block.c ***/
