/*
 * Copyright (c) 2010 The Pennsylvania State University
 * Systems and Internet Infrastructure Security Laboratory
 *
 * Authors: William Enck <enck@cse.psu.edu>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * Dalvik interpreter public definitions.
 */
#ifndef _DALVIK_INTERP_TAINT
#define _DALVIK_INTERP_TAINT

/* The Taint structure */
typedef struct Taint {
    u4 tag;
} Taint;

/* The Taint markings */

#define TAINT_CLEAR         ((u4)0x00000000) /* No taint */
// modified by haichen

#define TAINT_FIELD_SHIFT1		0
#define TAINT_FIELD_MASK1		((u4)0x0000ffff)
#define TAINT_FIELD_SIGN1		((u4)0x00008000)
#define TAINT_FIELD_INDEX1		((u4)0x00007fff)

#define TAINT_FIELD_SHIFT2		16
#define TAINT_FIELD_MASK2		((u4)0xffff0000)
#define TAINT_FIELD_SIGN2		((u4)0x80000000)
#define TAINT_FIELD_INDEX2		((u4)0x7fff0000)

//#define TAINT_CONTROL_FLOW	((u4)0x80000000) /* Control Flow */
#define TAINT_LOCATION      ((u4)0x0) //((u4)0x00000001) /* Location */
//#define TAINT_CONTACTS      ((u4)0x0) //((u4)0x00000002) /* Address Book (ContactsProvider) */
#define TAINT_MIC           ((u4)0x01000000) //((u4)0x00000004) /* Microphone Input */
//#define TAINT_PHONE_NUMBER  ((u4)0x0) //((u4)0x00000008) /* Phone Number */
#define TAINT_LOCATION_GPS  ((u4)0x40000000) //((u4)0x00000010) /* GPS Location */
#define TAINT_LOCATION_NET  ((u4)0x20000000) //((u4)0x00000020) /* NET-based Location */
#define TAINT_LOCATION_LAST ((u4)0x0) //((u4)0x00000040) /* Last known Location */
//#define TAINT_CAMERA        ((u4)0x0) //((u4)0x00000080) /* camera */
#define TAINT_ACCELEROMETER ((u4)0x10000000) //((u4)0x00000100) /* accelerometer */
#define TAINT_MAGNETIC_FIELD ((u4)0x08000000) /* added, magnetic field */
#define TAINT_GYROSCOPE		((u4)0x04000000) /* added, gyroscope */
#define TAINT_LIGHT			((u4)0x02000000) /* added, light */
//#define TAINT_SMS           ((u4)0x0) //((u4)0x00000200) /* SMS */
//#define TAINT_IMEI          ((u4)0x0) //((u4)0x00000400) /* IMEI */
//#define TAINT_IMSI          ((u4)0x0) //((u4)0x00000800) /* IMSI */
//#define TAINT_ICCID         ((u4)0x0) //((u4)0x00001000) /* ICCID (SIM card identifier) */
//#define TAINT_DEVICE_SN     ((u4)0x0) //((u4)0x00002000) /* Device serial number */
//#define TAINT_ACCOUNT       ((u4)0x0) //((u4)0x00004000) /* User account information */
//#define TAINT_HISTORY       ((u4)0x0) //((u4)0x00008000) /* browser history */

#endif /*_DALVIK_INTERP_TAINT*/
