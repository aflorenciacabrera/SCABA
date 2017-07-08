/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockTemperatureCalculator.h"

static const char* CMockString_TemperatureCalculator_Calculate = "TemperatureCalculator_Calculate";
static const char* CMockString_millivolts = "millivolts";

typedef struct _CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;
  int CallOrder;
  uint16 Expected_millivolts;

} CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE;

static struct MockTemperatureCalculatorInstance
{
  int TemperatureCalculator_Calculate_IgnoreBool;
  float TemperatureCalculator_Calculate_FinalReturn;
  CMOCK_MEM_INDEX_TYPE TemperatureCalculator_Calculate_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockTemperatureCalculator_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.TemperatureCalculator_Calculate_IgnoreBool)
    Mock.TemperatureCalculator_Calculate_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_TemperatureCalculator_Calculate);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.TemperatureCalculator_Calculate_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockTemperatureCalculator_Init(void)
{
  MockTemperatureCalculator_Destroy();
}

void MockTemperatureCalculator_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

float TemperatureCalculator_Calculate(uint16 millivolts)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TemperatureCalculator_Calculate);
  cmock_call_instance = (CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TemperatureCalculator_Calculate_CallInstance);
  Mock.TemperatureCalculator_Calculate_CallInstance = CMock_Guts_MemNext(Mock.TemperatureCalculator_Calculate_CallInstance);
  if (Mock.TemperatureCalculator_Calculate_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.TemperatureCalculator_Calculate_FinalReturn;
    Mock.TemperatureCalculator_Calculate_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_TemperatureCalculator_Calculate,CMockString_millivolts);
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_millivolts, millivolts, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_TemperatureCalculator_Calculate(CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance, uint16 millivolts)
{
  cmock_call_instance->Expected_millivolts = millivolts;
}

void TemperatureCalculator_Calculate_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE));
  CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance = (CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TemperatureCalculator_Calculate_CallInstance = CMock_Guts_MemChain(Mock.TemperatureCalculator_Calculate_CallInstance, cmock_guts_index);
  Mock.TemperatureCalculator_Calculate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.TemperatureCalculator_Calculate_IgnoreBool = (int)1;
}

void TemperatureCalculator_Calculate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint16 millivolts, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE));
  CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance = (CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TemperatureCalculator_Calculate_CallInstance = CMock_Guts_MemChain(Mock.TemperatureCalculator_Calculate_CallInstance, cmock_guts_index);
  Mock.TemperatureCalculator_Calculate_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_TemperatureCalculator_Calculate(cmock_call_instance, millivolts);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

