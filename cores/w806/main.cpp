/*
  main.cpp - Main loop for Arduino sketches
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#ifdef __cplusplus
extern "C" {
#endif

#include <Arduino.h>
#include <stdio.h>
#include "wm_hal.h"
GPIO_InitTypeDef GPIO_InitStruct = {0};

int main(void)
{
    SystemClock_Config(CPU_CLK_160M);
   //HAL_Init();
   // GPIO_Init();
   GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
   setup();
    
    for (;;) {
        loop();
        if (1) {
            //serialEvent();
        }
    }
     return 1;
}

#ifdef __cplusplus
}
#endif
