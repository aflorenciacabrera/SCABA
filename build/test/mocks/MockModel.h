/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKMODEL_H
#define _MOCKMODEL_H

#include "Model.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockModel_Init(void);
void MockModel_Destroy(void);
void MockModel_Verify(void);




#define Model_Init_Ignore() Model_Init_CMockIgnore()
void Model_Init_CMockIgnore(void);
#define Model_Init_Expect() Model_Init_CMockExpect(__LINE__)
void Model_Init_CMockExpect(UNITY_LINE_TYPE cmock_line);

#endif