/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author           Notes
 * 2023-07-22     Ninagon666       the first version
 */

#ifndef __PKG_MY_LED_TEST_H__
#define __PKG_MY_LED_TEST_H__

#include <rtthread.h>


#ifndef PKG_USING_LED_PIN_NUM
#define LED_PIN_NUM        (39)
#else
#define LED_PIN_NUM        PKG_USING_LED_PIN_NUM
#endif

#ifndef PKG_USING_TOGGLE_TICKS
#define DEFAULT_TOGGLE_TICKS        (500)
#else
#define DEFAULT_TOGGLE_TICKS        PKG_USING_TOGGLE_TICKS
#endif

#ifdef __cplusplus
extern "C"
{
#endif

// void led_task_start(void);

#ifdef __cplusplus
}
#endif

#endif

