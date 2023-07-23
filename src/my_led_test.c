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
#include <rtdevice.h>
#include <board.h>

static void show_my_led_test_version(void)
{
    rt_kprintf("my led test vesion is v1.0.0\n");
    rt_kprintf("using the led pin num is %d\n", LED_PIN_NUM);
    rt_kprintf("toggle led ticks is %d\n", DEFAULT_TOGGLE_TICKS);
}
FINSH_FUNCTION_EXPORT(show_my_led_test_version, show version on the terminal screen);
MSH_CMD_EXPORT(show_my_led_test_version, show version on the terminal screen);

static void led_app_entry(void *parameter)
{
    rt_pin_mode(LED_PIN_NUM, PIN_MODE_OUTPUT);
  
    while(1)
    {
        rt_pin_write(LED_PIN_NUM, PIN_HIGH);
        rt_thread_mdelay(DEFAULT_TOGGLE_TICKS);
        rt_pin_write(LED_PIN_NUM, PIN_LOW);
        rt_thread_mdelay(DEFAULT_TOGGLE_TICKS);
    }
}

static int my_led_app_init(void)
{
    rt_thread_t tid;
  
    //创建led线程 优先级设置为20
    tid = rt_thread_create("led_app", led_app_entry, RT_NULL, 512, 20, 5);

    //启动led线程
    if (RT_NULL != tid)
        rt_thread_startup(tid);  
    
     return 0;
}
#ifdef PKG_USING_MY_LED_TEST
INIT_APP_EXPORT(my_led_app_init);
#endif
