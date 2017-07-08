/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKEXECUTOR_H
#define _MOCKEXECUTOR_H

#include "Executor.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockExecutor_Init(void);
void MockExecutor_Destroy(void);
void MockExecutor_Verify(void);




#define Executor_Init_Ignore() Executor_Init_CMockIgnore()
void Executor_Init_CMockIgnore(void);
#define Executor_Init_Expect() Executor_Init_CMockExpect(__LINE__)
void Executor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Executor_Run_IgnoreAndReturn(cmock_retval) Executor_Run_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void Executor_Run_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);
#define Executor_Run_ExpectAndReturn(cmock_retval) Executor_Run_CMockExpectAndReturn(__LINE__, cmock_retval)
void Executor_Run_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return);

#endif
