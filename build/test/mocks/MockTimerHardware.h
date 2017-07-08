/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKTIMERHARDWARE_H
#define _MOCKTIMERHARDWARE_H

#include "TimerHardware.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockTimerHardware_Init(void);
void MockTimerHardware_Destroy(void);
void MockTimerHardware_Verify(void);




#define TimerHardware_Init_Ignore() TimerHardware_Init_CMockIgnore()
void TimerHardware_Init_CMockIgnore(void);
#define TimerHardware_Init_Expect() TimerHardware_Init_CMockExpect(__LINE__)
void TimerHardware_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);

#endif
