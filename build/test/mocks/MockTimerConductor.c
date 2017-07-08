/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockTimerConductor.h"

static const char* CMockString_TimerConductor_Init = "TimerConductor_Init";
static const char* CMockString_TimerConductor_Run = "TimerConductor_Run";

typedef struct _CMOCK_TimerConductor_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TimerConductor_Init_CALL_INSTANCE;

typedef struct _CMOCK_TimerConductor_Run_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TimerConductor_Run_CALL_INSTANCE;

static struct MockTimerConductorInstance
{
  int TimerConductor_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE TimerConductor_Init_CallInstance;
  int TimerConductor_Run_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE TimerConductor_Run_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockTimerConductor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.TimerConductor_Init_IgnoreBool)
    Mock.TimerConductor_Init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TimerConductor_Init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.TimerConductor_Init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.TimerConductor_Run_IgnoreBool)
    Mock.TimerConductor_Run_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TimerConductor_Run);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.TimerConductor_Run_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockTimerConductor_Init(void)
{
  MockTimerConductor_Destroy();
}

void MockTimerConductor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void TimerConductor_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TimerConductor_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TimerConductor_Init);
  cmock_call_instance = (CMOCK_TimerConductor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TimerConductor_Init_CallInstance);
  Mock.TimerConductor_Init_CallInstance = CMock_Guts_MemNext(Mock.TimerConductor_Init_CallInstance);
  if (Mock.TimerConductor_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void TimerConductor_Init_CMockIgnore(void)
{
  Mock.TimerConductor_Init_IgnoreBool = (int)1;
}

void TimerConductor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TimerConductor_Init_CALL_INSTANCE));
  CMOCK_TimerConductor_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_TimerConductor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TimerConductor_Init_CallInstance = CMock_Guts_MemChain(Mock.TimerConductor_Init_CallInstance, cmock_guts_index);
  Mock.TimerConductor_Init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

void TimerConductor_Run(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TimerConductor_Run_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TimerConductor_Run);
  cmock_call_instance = (CMOCK_TimerConductor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TimerConductor_Run_CallInstance);
  Mock.TimerConductor_Run_CallInstance = CMock_Guts_MemNext(Mock.TimerConductor_Run_CallInstance);
  if (Mock.TimerConductor_Run_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void TimerConductor_Run_CMockIgnore(void)
{
  Mock.TimerConductor_Run_IgnoreBool = (int)1;
}

void TimerConductor_Run_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TimerConductor_Run_CALL_INSTANCE));
  CMOCK_TimerConductor_Run_CALL_INSTANCE* cmock_call_instance = (CMOCK_TimerConductor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TimerConductor_Run_CallInstance = CMock_Guts_MemChain(Mock.TimerConductor_Run_CallInstance, cmock_guts_index);
  Mock.TimerConductor_Run_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

