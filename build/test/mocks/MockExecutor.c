/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockExecutor.h"

static const char* CMockString_Executor_Init = "Executor_Init";
static const char* CMockString_Executor_Run = "Executor_Run";

typedef struct _CMOCK_Executor_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_Executor_Init_CALL_INSTANCE;

typedef struct _CMOCK_Executor_Run_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;

} CMOCK_Executor_Run_CALL_INSTANCE;

static struct MockExecutorInstance
{
  int Executor_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Executor_Init_CallInstance;
  int Executor_Run_IgnoreBool;
  bool Executor_Run_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Executor_Run_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockExecutor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.Executor_Init_IgnoreBool)
    Mock.Executor_Init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Executor_Init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Executor_Init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.Executor_Run_IgnoreBool)
    Mock.Executor_Run_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Executor_Run);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Executor_Run_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockExecutor_Init(void)
{
  MockExecutor_Destroy();
}

void MockExecutor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void Executor_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Executor_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Executor_Init);
  cmock_call_instance = (CMOCK_Executor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Executor_Init_CallInstance);
  Mock.Executor_Init_CallInstance = CMock_Guts_MemNext(Mock.Executor_Init_CallInstance);
  if (Mock.Executor_Init_IgnoreBool)
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

void Executor_Init_CMockIgnore(void)
{
  Mock.Executor_Init_IgnoreBool = (int)1;
}

void Executor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Executor_Init_CALL_INSTANCE));
  CMOCK_Executor_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Executor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Executor_Init_CallInstance = CMock_Guts_MemChain(Mock.Executor_Init_CallInstance, cmock_guts_index);
  Mock.Executor_Init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  UNITY_CLR_DETAILS();
}

bool Executor_Run(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Executor_Run_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Executor_Run);
  cmock_call_instance = (CMOCK_Executor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Executor_Run_CallInstance);
  Mock.Executor_Run_CallInstance = CMock_Guts_MemNext(Mock.Executor_Run_CallInstance);
  if (Mock.Executor_Run_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Executor_Run_FinalReturn;
    Mock.Executor_Run_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void Executor_Run_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Executor_Run_CALL_INSTANCE));
  CMOCK_Executor_Run_CALL_INSTANCE* cmock_call_instance = (CMOCK_Executor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Executor_Run_CallInstance = CMock_Guts_MemChain(Mock.Executor_Run_CallInstance, cmock_guts_index);
  Mock.Executor_Run_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Executor_Run_IgnoreBool = (int)1;
}

void Executor_Run_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Executor_Run_CALL_INSTANCE));
  CMOCK_Executor_Run_CALL_INSTANCE* cmock_call_instance = (CMOCK_Executor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Executor_Run_CallInstance = CMock_Guts_MemChain(Mock.Executor_Run_CallInstance, cmock_guts_index);
  Mock.Executor_Run_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}
