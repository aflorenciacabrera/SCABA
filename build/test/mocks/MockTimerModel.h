/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKTIMERMODEL_H
#define _MOCKTIMERMODEL_H

#include "TimerModel.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockTimerModel_Init(void);
void MockTimerModel_Destroy(void);
void MockTimerModel_Verify(void);




#define TimerModel_UpdateTime_Ignore() TimerModel_UpdateTime_CMockIgnore()
void TimerModel_UpdateTime_CMockIgnore(void);
#define TimerModel_UpdateTime_Expect(systemTime) TimerModel_UpdateTime_CMockExpect(__LINE__, systemTime)
void TimerModel_UpdateTime_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32 systemTime);

#endif
