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
#include "MockUsartConfigurator.h"
#include "MockUsartPutChar.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testInitShouldConfigureUsartPeripheralByCallingConfiguratorAppropriately(void);
extern void testTransmitStringShouldSendDesiredStringOutUsingUsart(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
  MockUsartConfigurator_Init();
  MockUsartPutChar_Init();
}
static void CMock_Verify(void)
{
  MockUsartConfigurator_Verify();
  MockUsartPutChar_Verify();
}
static void CMock_Destroy(void)
{
  MockUsartConfigurator_Destroy();
  MockUsartPutChar_Destroy();
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
  UnityBegin("TestUsartHardware.c");
  RUN_TEST(testInitShouldConfigureUsartPeripheralByCallingConfiguratorAppropriately, 15);
  RUN_TEST(testTransmitStringShouldSendDesiredStringOutUsingUsart, 27);

  CMock_Guts_MemFreeFinal();
  return (UnityEnd());
}
