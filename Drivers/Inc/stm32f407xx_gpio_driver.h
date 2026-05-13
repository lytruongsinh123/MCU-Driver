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
#endif /* DRIVERS_INC_STM32F407XX_GPIO_DRIVER_H_ */
