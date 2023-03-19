/**
 ******************************************************************************
 * @file    custom_tof_conf.h
 * @author  IMG SW Application Team
 * @brief   This file contains definitions of the TOF components bus interfaces
 *          for custom boards
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CUSTOM_TOF_CONF_H__
#define __CUSTOM_TOF_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "custom_bus.h"
#include "custom_errno.h"

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#define USE_CUSTOM_RANGING_VL53L5CX (1U)

#define CUSTOM_VL53L5CX_PWR_EN_PORT    GPIOA
#define CUSTOM_VL53L5CX_PWR_EN_PIN     GPIO_PIN_7

#define CUSTOM_VL53L5CX_I2C_RST_PORT    GPIOA
#define CUSTOM_VL53L5CX_I2C_RST_PIN     GPIO_PIN_5

#define CUSTOM_VL53L5CX_LPn_PORT    GPIOA
#define CUSTOM_VL53L5CX_LPn_PIN     GPIO_PIN_6

#define CUSTOM_VL53L5CX_I2C_Init      BSP_I2C1_Init
#define CUSTOM_VL53L5CX_I2C_DeInit    BSP_I2C1_DeInit
#define CUSTOM_VL53L5CX_I2C_WriteReg  BSP_I2C1_WriteReg16
#define CUSTOM_VL53L5CX_I2C_ReadReg   BSP_I2C1_ReadReg16

#ifdef __cplusplus
}
#endif

#endif /* __CUSTOM_TOF_CONF_H__*/
