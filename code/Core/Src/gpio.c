/**
  ******************************************************************************
  * File Name          : gpio.c
  * Description        : This file provides code for the configuration
  *                      of all used GPIO pins.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as 
        * Analog 
        * Input 
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct;

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, STEP_CH3_M1_Pin|STEP_CH3_M2_Pin|STEP_CH3_M3_Pin|STEP_CH3_EN_Pin 
                          |STEP_CH3_RESET_Pin|OUTPUT_CH0_Pin|OUTPUT_CH1_Pin|OLED_RES_Pin 
                          |OLED_SDA_Pin|OLED_SCL_Pin|STEP_CH4_DIR_Pin|STEP_CH3_ST_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, STEP_CH3_DIR_Pin|STEP_CH1_M2_Pin|STEP_CH1_M3_Pin|STEP_CH1_EN_Pin 
                          |STEP_CH6_ST_Pin|STEP_CH6_M1_Pin|STEP_CH6_M2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOF, STEP_CH2_ST_Pin|STEP_CH2_M1_Pin|STEP_CH2_M2_Pin|STEP_CH2_M3_Pin 
                          |STEP_CH2_EN_Pin|STEP_CH2_RESET_Pin|STEP_CH2_DIR_Pin|STEP_CH1_ST_Pin 
                          |STEP_CH1_M1_Pin|SPPCA_RST_Pin|OLED_CS2_Pin|OLED_FCO_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, STEP_CH1_RESET_Pin|STEP_CH1_DIR_Pin|RS485_CH1_RE_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOG, OLED_CS1_Pin|OLED_DC_Pin|STEP_CH5_EN_Pin|STEP_CH5_RESET_Pin 
                          |STEP_CH5_DIR_Pin|STEP_CH4_ST_Pin|STEP_CH4_M1_Pin|STEP_CH4_M2_Pin 
                          |STEP_CH4_M3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, OUTPUT_CH2_Pin|OUTPUT_CH3_Pin|OUTPUT_CH4_Pin|OUTPUT_CH5_Pin 
                          |OUTPUT_CH6_Pin|OUTPUT_CH7_Pin|STEP_CH4_EN_Pin|STEP_CH4_RESET_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, LED0_Pin|LED1_Pin|LED2_Pin|RS485_CH1_SHDN_Pin 
                          |STEP_CH6_M3_Pin|STEP_CH6_EN_Pin|STEP_CH6_RESET_Pin|STEP_CH6_DIR_Pin 
                          |STEP_CH5_ST_Pin|STEP_CH5_M1_Pin|STEP_CH5_M2_Pin|STEP_CH5_M3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PEPin PEPin PEPin PEPin 
                           PEPin PEPin PEPin PEPin 
                           PEPin PEPin PEPin PEPin */
  GPIO_InitStruct.Pin = STEP_CH3_M1_Pin|STEP_CH3_M2_Pin|STEP_CH3_M3_Pin|STEP_CH3_EN_Pin 
                          |STEP_CH3_RESET_Pin|OUTPUT_CH0_Pin|OUTPUT_CH1_Pin|OLED_RES_Pin 
                          |OLED_SDA_Pin|OLED_SCL_Pin|STEP_CH4_DIR_Pin|STEP_CH3_ST_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin 
                           PCPin PCPin PCPin */
  GPIO_InitStruct.Pin = STEP_CH3_DIR_Pin|STEP_CH1_M2_Pin|STEP_CH1_M3_Pin|STEP_CH1_EN_Pin 
                          |STEP_CH6_ST_Pin|STEP_CH6_M1_Pin|STEP_CH6_M2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PFPin PFPin PFPin PFPin 
                           PFPin PFPin PFPin PFPin 
                           PFPin PFPin PFPin PFPin */
  GPIO_InitStruct.Pin = STEP_CH2_ST_Pin|STEP_CH2_M1_Pin|STEP_CH2_M2_Pin|STEP_CH2_M3_Pin 
                          |STEP_CH2_EN_Pin|STEP_CH2_RESET_Pin|STEP_CH2_DIR_Pin|STEP_CH1_ST_Pin 
                          |STEP_CH1_M1_Pin|SPPCA_RST_Pin|OLED_CS2_Pin|OLED_FCO_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOF, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin */
  GPIO_InitStruct.Pin = STEP_CH1_RESET_Pin|STEP_CH1_DIR_Pin|RS485_CH1_RE_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin */
  GPIO_InitStruct.Pin = INPUT_CH0_Pin|INPUT_CH1_Pin|INPUT_CH2_Pin|INPUT_CH3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin */
  GPIO_InitStruct.Pin = INPUT_CH4_Pin|INPUT_CH5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin */
  GPIO_InitStruct.Pin = INPUT_CH6_Pin|INPUT_CH7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = SPPCA_INT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(SPPCA_INT_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PGPin PGPin PGPin PGPin 
                           PGPin PGPin PGPin PGPin 
                           PGPin */
  GPIO_InitStruct.Pin = OLED_CS1_Pin|OLED_DC_Pin|STEP_CH5_EN_Pin|STEP_CH5_RESET_Pin 
                          |STEP_CH5_DIR_Pin|STEP_CH4_ST_Pin|STEP_CH4_M1_Pin|STEP_CH4_M2_Pin 
                          |STEP_CH4_M3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin 
                           PBPin PBPin PBPin PBPin */
  GPIO_InitStruct.Pin = OUTPUT_CH2_Pin|OUTPUT_CH3_Pin|OUTPUT_CH4_Pin|OUTPUT_CH5_Pin 
                          |OUTPUT_CH6_Pin|OUTPUT_CH7_Pin|STEP_CH4_EN_Pin|STEP_CH4_RESET_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin PDPin PDPin 
                           PDPin PDPin PDPin PDPin 
                           PDPin PDPin PDPin PDPin */
  GPIO_InitStruct.Pin = LED0_Pin|LED1_Pin|LED2_Pin|RS485_CH1_SHDN_Pin 
                          |STEP_CH6_M3_Pin|STEP_CH6_EN_Pin|STEP_CH6_RESET_Pin|STEP_CH6_DIR_Pin 
                          |STEP_CH5_ST_Pin|STEP_CH5_M1_Pin|STEP_CH5_M2_Pin|STEP_CH5_M3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = Limit_SW_CH1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(Limit_SW_CH1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PGPin PGPin PGPin PGPin 
                           PGPin PGPin PGPin */
  GPIO_InitStruct.Pin = Limit_SW_CH2_Pin|Limit_SW_CH3_Pin|Limit_SW_CH4_Pin|Proximity_SW_CH1_Pin 
                          |Proximity_SW_CH2_Pin|Proximity_SW_CH3_Pin|Proximity_SW_CH4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
