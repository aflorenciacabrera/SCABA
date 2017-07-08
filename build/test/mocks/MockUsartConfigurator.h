/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKUSARTCONFIGURATOR_H
#define _MOCKUSARTCONFIGURATOR_H

#include "UsartConfigurator.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void MockUsartConfigurator_Init(void);
void MockUsartConfigurator_Destroy(void);
void MockUsartConfigurator_Verify(void);




#define Usart_ConfigureUsartIO_Ignore() Usart_ConfigureUsartIO_CMockIgnore()
void Usart_ConfigureUsartIO_CMockIgnore(void);
#define Usart_ConfigureUsartIO_Expect() Usart_ConfigureUsartIO_CMockExpect(__LINE__)
void Usart_ConfigureUsartIO_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Usart_EnablePeripheralClock_Ignore() Usart_EnablePeripheralClock_CMockIgnore()
void Usart_EnablePeripheralClock_CMockIgnore(void);
#define Usart_EnablePeripheralClock_Expect() Usart_EnablePeripheralClock_CMockExpect(__LINE__)
void Usart_EnablePeripheralClock_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Usart_Reset_Ignore() Usart_Reset_CMockIgnore()
void Usart_Reset_CMockIgnore(void);
#define Usart_Reset_Expect() Usart_Reset_CMockExpect(__LINE__)
void Usart_Reset_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Usart_ConfigureMode_Ignore() Usart_ConfigureMode_CMockIgnore()
void Usart_ConfigureMode_CMockIgnore(void);
#define Usart_ConfigureMode_Expect() Usart_ConfigureMode_CMockExpect(__LINE__)
void Usart_ConfigureMode_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Usart_SetBaudRateRegister_Ignore() Usart_SetBaudRateRegister_CMockIgnore()
void Usart_SetBaudRateRegister_CMockIgnore(void);
#define Usart_SetBaudRateRegister_Expect(baudRateRegisterSetting) Usart_SetBaudRateRegister_CMockExpect(__LINE__, baudRateRegisterSetting)
void Usart_SetBaudRateRegister_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8 baudRateRegisterSetting);
#define Usart_Enable_Ignore() Usart_Enable_CMockIgnore()
void Usart_Enable_CMockIgnore(void);
#define Usart_Enable_Expect() Usart_Enable_CMockExpect(__LINE__)
void Usart_Enable_CMockExpect(UNITY_LINE_TYPE cmock_line);

#endif
