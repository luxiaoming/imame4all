/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seleuco_mame4droid_Emulator */

#ifndef _Included_com_seleuco_mame4droid_Emulator
#define _Included_com_seleuco_mame4droid_Emulator
#ifdef __cplusplus
extern "C" {
#endif
#undef com_seleuco_mame4droid_Emulator_FPS_SHOWED_KEY
#define com_seleuco_mame4droid_Emulator_FPS_SHOWED_KEY 1L
#undef com_seleuco_mame4droid_Emulator_EXIT_GAME_KEY
#define com_seleuco_mame4droid_Emulator_EXIT_GAME_KEY 2L
#undef com_seleuco_mame4droid_Emulator_LAND_BUTTONS_KEY
#define com_seleuco_mame4droid_Emulator_LAND_BUTTONS_KEY 3L
#undef com_seleuco_mame4droid_Emulator_HIDE_LR__KEY
#define com_seleuco_mame4droid_Emulator_HIDE_LR__KEY 4L
#undef com_seleuco_mame4droid_Emulator_BPLUSX_KEY
#define com_seleuco_mame4droid_Emulator_BPLUSX_KEY 5L
#undef com_seleuco_mame4droid_Emulator_WAYS_STICK_KEY
#define com_seleuco_mame4droid_Emulator_WAYS_STICK_KEY 6L
#undef com_seleuco_mame4droid_Emulator_ASMCORES_KEY
#define com_seleuco_mame4droid_Emulator_ASMCORES_KEY 7L
#undef com_seleuco_mame4droid_Emulator_INFOWARN_KEY
#define com_seleuco_mame4droid_Emulator_INFOWARN_KEY 8L
#undef com_seleuco_mame4droid_Emulator_EXIT_PAUSE
#define com_seleuco_mame4droid_Emulator_EXIT_PAUSE 9L
#undef com_seleuco_mame4droid_Emulator_IDLE_WAIT
#define com_seleuco_mame4droid_Emulator_IDLE_WAIT 10L
/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    init
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4droid_Emulator_init
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    runVideoT
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4droid_Emulator_runVideoT
  (JNIEnv *, jclass);

/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    setPadData
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4droid_Emulator_setPadData
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    setAnalogData
 * Signature: (IFF)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4droid_Emulator_setAnalogData
  (JNIEnv *, jclass, jint, jfloat, jfloat);

/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    getValue
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_seleuco_mame4droid_Emulator_getValue
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_seleuco_mame4droid_Emulator
 * Method:    setValue
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_seleuco_mame4droid_Emulator_setValue
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif