/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  CMock_Init(); \
  UNITY_CLR_DETAILS(); \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
    CMock_Verify(); \
  } \
  CMock_Destroy(); \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include "cmock.h"
#include <setjmp.h>
#include <stdio.h>
#include "MockTimerHardware.h"
#include "MockTimerModel.h"
#include "MockTimerInterruptHandler.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testInitShouldCallHardwareInit(void);
extern void testRunShouldGetSystemTimeAndPassOnToModelForEventScheduling(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  MockTimerHardware_Init();
  MockTimerModel_Init();
  MockTimerInterruptHandler_Init();
}
static void CMock_Verify(void)
{
  MockTimerHardware_Verify();
  MockTimerModel_Verify();
  MockTimerInterruptHandler_Verify();
}
static void CMock_Destroy(void)
{
  MockTimerHardware_Destroy();
  MockTimerModel_Destroy();
  MockTimerInterruptHandler_Destroy();
}

/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  CMock_Verify();
  CMock_Destroy();
  tearDown();
  CMock_Init();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("TestTimerConductor.c");
  RUN_TEST(testInitShouldCallHardwareInit, 16);
  RUN_TEST(testRunShouldGetSystemTimeAndPassOnToModelForEventScheduling, 23);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
