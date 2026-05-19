/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: May 13, 2026
 *      Author: HUNG
 */

#ifndef DRIVERS_INC_STM32F407XX_GPIO_DRIVER_H_
#define DRIVERS_INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

typedef struct
{

    uint8_t GPIO_PinNumber;
    uint8_t GPIO_PinMode;
    uint8_t GPIO_PinSpeed;
    uint8_t GPIO_PinPuPdControl;
    uint8_t GPIO_PinOType;
    uint8_t GPIO_PinAltFunMode;
} GPIO_PinConfig_t;
/*
 * This is Handle structure for GPIO Pin
 */
typedef struct
{
    GPIO_RegDef_t*   pGPIOx;         /*!< This is holds the base address of the GPIO Port to which the pin belongs >*/
    GPIO_PinConfig_t GPIO_PinConfig; /*!< This is holds GPIO Pin Configuration settings >*/
} GPIO_Handle_t;

/********************************************************************************************
 *                               APIs supported by this driver
 *             For more information about the APIs check the function definitions
 ********************************************************************************************/

/*
 * Peripheral Clock Setup
 */
void GPIO_PCLKControl(GPIO_RegDef_t* pGIOx, uint8_t EnorDi);
/*
 * Init and Deinit
 */
void GPIO_Init(GPIO_Handle_t* pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t* pGIOx);
/*
 * Data read and write
 */
uint8_t  GPIO_ReadFromInputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t* pGIOx);
void     GPIO_WriteToOutputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber, uint8_t value);
void     GPIO_WriteToOutputPort(PIO_RegDef_t* pGIOx, uint16_t value);
void     GPIO_ToggleOutputPin(GPIO_RegDef_t* pGIOx, uint8_t PinNumber);
/*
 * IRQ Configuration and ISR handling
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi);
void GPIO_IRQHandling(uint8_t PinNumber);
#endif /* DRIVERS_INC_STM32F407XX_GPIO_DRIVER_H_ */
