//
// Description:
//    SWFMovieClip Native Interface
//
// Authors:
//    Jonathan Shore <jonathan.shore@gmail.com>
//    Based on php wrapper developed by <dave@opaque.net>
//
// Copyright:
//    Copyright 2001 Jonathan Shore
//


#include <jni.h>


#ifndef _Included_SWFMovieClip
#define _Included_SWFMovieClip
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     SWFMovieClip
 * Method:    nNew
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_SWFMovieClip_nNew
  (JNIEnv *, jobject);

/*
 * Class:     SWFMovieClip
 * Method:    nDestroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_SWFMovieClip_nDestroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     SWFMovieClip
 * Method:    nSetFrames
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_SWFMovieClip_nSetFrames
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     SWFMovieClip
 * Method:    nAdd
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_SWFMovieClip_nAdd
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     SWFMovieClip
 * Method:    nRemove
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_SWFMovieClip_nRemove
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     SWFMovieClip
 * Method:    nNextFrame
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_SWFMovieClip_nNextFrame
  (JNIEnv *, jobject, jint);

/*
 * Class:     SWFMovieClip
 * Method:    nLabelFrame
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_SWFMovieClip_nLabelFrame
  (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
