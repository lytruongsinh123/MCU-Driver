/*
 * stm32f407xx_gpio_driver.c
 *
 *  Created on: May 13, 2026
 *      Author: HUNG
 */
#include "stm32f407xx_gpio_driver.h"
/*
 * Peripheral Clock Setup
 */
/****************************************************************************
 * @fn                  - GPIO_PCLKControl
 *
 * @brief               - This function enables or disables peripheral clock for given GPIO Port
 *
 * @param[in]           - Base address of the GPIOx peripheral
 * @param[in]           - Enable or Disable macros
 * @param[in]           - None
 *
 * @return              - None
 *
 * @Note                - None
 */
void GPIO_PCLKControl(GPIO_RegDef_t* pGIOx, uint8_t EnorDi) {}
/*
 * Init and Deinit
 */
void GPIO_Init(GPIO_Handle_t* pGPIOHandle) {}
void GPIO_DeInit(GPIO_RegDef_t* pGIOx) {}
/*
 * Data read and write
 */
uint8_t  GPIO_ReadFromInputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber) {}
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t* pGIOx) {}
void     GPIO_WriteToOutputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber, uint8_t value) {}
void     GPIO_WriteToOutputPort(PIO_RegDef_t* pGIOx, uint16_t value) {}
void     GPIO_ToggleOutputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber) {}
/*
 * IRQ Configuration and ISR handling
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi) {}
void GPIO_IRQHandling(uint8_t PinNumber) {}
