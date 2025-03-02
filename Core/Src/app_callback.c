/*
 * app_callback.c
 *
 *  Created on: Mar 2, 2025
 *      Author: KemalT
 */
#include "main.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  UNUSED(htim);


}


void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{

  UNUSED(htim);

}

void HAL_TIM_ErrorCallback(TIM_HandleTypeDef *htim)
{

  UNUSED(htim);

}
