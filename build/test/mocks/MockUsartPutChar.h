/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKUSARTPUTCHAR_H
#define _MOCKUSARTPUTCHAR_H

#include "UsartPutChar.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockUsartPutChar_Init(void);
void MockUsartPutChar_Destroy(void);
void MockUsartPutChar_Verify(void);




#define Usart_PutChar_Ignore() Usart_PutChar_CMockIgnore()
void Usart_PutChar_CMockIgnore(void);
#define Usart_PutChar_Expect(data) Usart_PutChar_CMockExpect(__LINE__, data)
void Usart_PutChar_CMockExpect(UNITY_LINE_TYPE cmock_line, char data);

#endif
