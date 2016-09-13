/*
 * Copyright (c) 2016 Linaro Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _STM32F4_PINMUX_H_
#define _STM32F4_PINMUX_H_

/**
 * @file Header for STM32F4 pin multiplexing helper
 */

#define STM32F4_PINMUX_FUNC_PA9_USART1_TX STM32_PINMUX_FUNC_ALT_7
#define STM32F4_PINMUX_FUNC_PA10_USART1_RX STM32_PINMUX_FUNC_ALT_7

#define STM32F4_PINMUX_FUNC_PB6_USART1_TX STM32_PINMUX_FUNC_ALT_7
#define STM32F4_PINMUX_FUNC_PB7_USART1_RX STM32_PINMUX_FUNC_ALT_7

#define STM32F4_PINMUX_FUNC_PA2_USART2_TX STM32_PINMUX_FUNC_ALT_7
#define STM32F4_PINMUX_FUNC_PA3_USART2_RX STM32_PINMUX_FUNC_ALT_7

#define STM32F4_PINMUX_FUNC_PA0_PWM2_CH1 STM32_PINMUX_FUNC_ALT_1

#define STM32F4_PINMUX_FUNC_PA4_SPI1_NSS STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PA5_SPI1_SCK STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PA6_SPI1_MISO STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PA7_SPI1_MOSI STM32_PINMUX_FUNC_ALT_5

#define STM32F4_PINMUX_FUNC_PB12_SPI2_NSS STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PB13_SPI2_SCK STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PB14_SPI2_MISO STM32_PINMUX_FUNC_ALT_5
#define STM32F4_PINMUX_FUNC_PB15_SPI2_MOSI STM32_PINMUX_FUNC_ALT_5

#endif /* _STM32F4_PINMUX_H_ */
