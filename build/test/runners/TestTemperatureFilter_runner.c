/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void testShouldInitializeTemeratureToInvalidValue(void);
extern void testShouldInitializeTemperatureAfterCallToInit(void);
extern void testShouldWeightEachSubsequentValueBy25PercentAfterInitialValue(void);
extern void testShouldResetAverageIfPassedInfinityOrInvalidValue(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("TestTemperatureFilter.c");
  RUN_TEST(testShouldInitializeTemeratureToInvalidValue, 15);
  RUN_TEST(testShouldInitializeTemperatureAfterCallToInit, 21);
  RUN_TEST(testShouldWeightEachSubsequentValueBy25PercentAfterInitialValue, 50);
  RUN_TEST(testShouldResetAverageIfPassedInfinityOrInvalidValue, 73);

  return (UnityEnd());
}