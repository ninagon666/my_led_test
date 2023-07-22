/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author           Notes
 * 2023-07-22     Ninagon666       the first version
 */
 
#include "my_led_test.h"

static void show_my_led_test_version(void)
{
    rt_kprintf("v1.0.0 %d\n", LED_PIN_NUM);
}
FINSH_FUNCTION_EXPORT(show_my_led_test_version, show version on the terminal screen);
MSH_CMD_EXPORT(show_my_led_test_version, show version on the terminal screen);