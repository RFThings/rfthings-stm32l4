/*
 * Copyright (c) 2016 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#if !defined(_STM32L4_DMA_H)
#define _STM32L4_DMA_H

#include <stdint.h>
#include <stdbool.h>

#include "stm32l4xx.h"

#ifdef __cplusplus
 extern "C" {
#endif

#define DMA_CHANNEL_NONE                0x00

#define DMA_CHANNEL_DMA1_CH1_INDEX      0x01
#define DMA_CHANNEL_DMA1_CH2_INDEX      0x02
#define DMA_CHANNEL_DMA1_CH3_INDEX      0x03
#define DMA_CHANNEL_DMA1_CH4_INDEX      0x04
#define DMA_CHANNEL_DMA1_CH5_INDEX      0x05
#define DMA_CHANNEL_DMA1_CH6_INDEX      0x06
#define DMA_CHANNEL_DMA1_CH7_INDEX      0x07
#define DMA_CHANNEL_DMA2_CH1_INDEX      0x09
#define DMA_CHANNEL_DMA2_CH2_INDEX      0x0a
#define DMA_CHANNEL_DMA2_CH3_INDEX      0x0b
#define DMA_CHANNEL_DMA2_CH4_INDEX      0x0c
#define DMA_CHANNEL_DMA2_CH5_INDEX      0x0d
#define DMA_CHANNEL_DMA2_CH6_INDEX      0x0e
#define DMA_CHANNEL_DMA2_CH7_INDEX      0x0f

#if defined(STM32L432xx)

#define DMA_CHANNEL_DMA1_CH1_ADC1       0x01
#define DMA_CHANNEL_DMA1_CH1_TIM2_CH3   0x41

#define DMA_CHANNEL_DMA1_CH2_SPI1_RX    0x12
#define DMA_CHANNEL_DMA1_CH2_I2C3_TX    0x32
#define DMA_CHANNEL_DMA1_CH2_TIM2_UP    0x42
#define DMA_CHANNEL_DMA1_CH2_TIM1_CH1   0x72

#define DMA_CHANNEL_DMA1_CH3_SPI1_TX    0x13
#define DMA_CHANNEL_DMA1_CH3_I2C3_RX    0x33
#define DMA_CHANNEL_DMA1_CH3_TIM16_CH1  0x43
#define DMA_CHANNEL_DMA1_CH3_TIM16_UP   0x43
#define DMA_CHANNEL_DMA1_CH3_TIM6_UP    0x63
#define DMA_CHANNEL_DMA1_CH3_DAC1       0x63
#define DMA_CHANNEL_DMA1_CH3_TIM1_CH2   0x73

#define DMA_CHANNEL_DMA1_CH4_USART1_TX  0x24
#define DMA_CHANNEL_DMA1_CH4_TIM7_UP    0x54
#define DMA_CHANNEL_DMA1_CH4_DAC2       0x54
#define DMA_CHANNEL_DMA1_CH4_TIM1_CH4   0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_TRIG  0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_COM   0x74

#define DMA_CHANNEL_DMA1_CH5_USART1_RX  0x25
#define DMA_CHANNEL_DMA1_CH5_TIM2_CH1   0x45
#define DMA_CHANNEL_DMA1_CH5_QUADSPI    0x55
#define DMA_CHANNEL_DMA1_CH5_TIM15_CH1  0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_UP   0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_TRIG 0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_COM  0x75

#define DMA_CHANNEL_DMA1_CH6_USART2_RX  0x26
#define DMA_CHANNEL_DMA1_CH6_I2C1_TX    0x36
#define DMA_CHANNEL_DMA1_CH6_TIM16_CH1  0x46
#define DMA_CHANNEL_DMA1_CH6_TIM16_UP   0x46
#define DMA_CHANNEL_DMA1_CH6_TIM1_UP    0x76

#define DMA_CHANNEL_DMA1_CH7_USART2_TX  0x27
#define DMA_CHANNEL_DMA1_CH7_I2C1_RX    0x37
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH2   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH4   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM1_CH3   0x77

#define DMA_CHANNEL_DMA2_CH1_SAI1_A     0x19
#define DMA_CHANNEL_DMA2_CH1_SPI3_RX    0x39
#define DMA_CHANNEL_DMA2_CH1_SWPMI_RX   0x49
#define DMA_CHANNEL_DMA2_CH1_AES_IN     0x69

#define DMA_CHANNEL_DMA2_CH2_SAI1_B     0x1a
#define DMA_CHANNEL_DMA2_CH2_SPI3_TX    0x3a
#define DMA_CHANNEL_DMA2_CH2_SWPMI_TX   0x4a
#define DMA_CHANNEL_DMA2_CH2_AES_OUT    0x6a

#define DMA_CHANNEL_DMA2_CH3_ADC1       0x0b
#define DMA_CHANNEL_DMA2_CH3_SPI1_RX    0x4b
#define DMA_CHANNEL_DMA2_CH3_AES_OUT    0x6b

#define DMA_CHANNEL_DMA2_CH4_TIM6_UP    0x3c
#define DMA_CHANNEL_DMA2_CH4_DAC1       0x3c
#define DMA_CHANNEL_DMA2_CH4_SPI1_TX    0x4c
#define DMA_CHANNEL_DMA2_CH4_SDMMC1     0x7c

#define DMA_CHANNEL_DMA2_CH5_TIM7_UP    0x3d
#define DMA_CHANNEL_DMA2_CH5_DAC2       0x3d
#define DMA_CHANNEL_DMA2_CH5_AES_IN     0x6d
#define DMA_CHANNEL_DMA2_CH5_SDMMC1     0x7d

#define DMA_CHANNEL_DMA2_CH6_SAI1_A     0x1e
#define DMA_CHANNEL_DMA2_CH6_USART1_TX  0x2e
#define DMA_CHANNEL_DMA2_CH6_LPUART_TX  0x4e
#define DMA_CHANNEL_DMA2_CH6_I2C1_RX    0x5e

#define DMA_CHANNEL_DMA2_CH7_SAI1_B     0x1f
#define DMA_CHANNEL_DMA2_CH7_USART1_RX  0x2f
#define DMA_CHANNEL_DMA2_CH7_QUADSPI    0x3f
#define DMA_CHANNEL_DMA2_CH7_LPUART_RX  0x4f
#define DMA_CHANNEL_DMA2_CH7_I2C1_TX    0x5f

#endif

#if defined(STM32L433xx)

#define DMA_CHANNEL_DMA1_CH1_ADC1       0x01
#define DMA_CHANNEL_DMA1_CH1_TIM2_CH3   0x41

#define DMA_CHANNEL_DMA1_CH2_SPI1_RX    0x12
#define DMA_CHANNEL_DMA1_CH2_USART3_TX  0x22
#define DMA_CHANNEL_DMA1_CH2_I2C3_TX    0x32
#define DMA_CHANNEL_DMA1_CH2_TIM2_UP    0x42
#define DMA_CHANNEL_DMA1_CH2_TIM1_CH1   0x72

#define DMA_CHANNEL_DMA1_CH3_SPI1_TX    0x13
#define DMA_CHANNEL_DMA1_CH3_USART3_RX  0x23
#define DMA_CHANNEL_DMA1_CH3_I2C3_RX    0x33
#define DMA_CHANNEL_DMA1_CH3_TIM16_CH1  0x43
#define DMA_CHANNEL_DMA1_CH3_TIM16_UP   0x43
#define DMA_CHANNEL_DMA1_CH3_TIM6_UP    0x63
#define DMA_CHANNEL_DMA1_CH3_DAC1       0x63
#define DMA_CHANNEL_DMA1_CH3_TIM1_CH2   0x73

#define DMA_CHANNEL_DMA1_CH4_SPI2_RX    0x14
#define DMA_CHANNEL_DMA1_CH4_USART1_TX  0x24
#define DMA_CHANNEL_DMA1_CH4_I2C2_TX    0x34
#define DMA_CHANNEL_DMA1_CH4_TIM7_UP    0x54
#define DMA_CHANNEL_DMA1_CH4_DAC2       0x54
#define DMA_CHANNEL_DMA1_CH4_TIM1_CH4   0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_TRIG  0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_COM   0x74

#define DMA_CHANNEL_DMA1_CH5_SPI2_TX    0x15
#define DMA_CHANNEL_DMA1_CH5_USART1_RX  0x25
#define DMA_CHANNEL_DMA1_CH5_I2C2_RX    0x35
#define DMA_CHANNEL_DMA1_CH5_TIM2_CH1   0x45
#define DMA_CHANNEL_DMA1_CH5_QUADSPI    0x55
#define DMA_CHANNEL_DMA1_CH5_TIM15_CH1  0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_UP   0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_TRIG 0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_COM  0x75

#define DMA_CHANNEL_DMA1_CH6_USART2_RX  0x26
#define DMA_CHANNEL_DMA1_CH6_I2C1_TX    0x36
#define DMA_CHANNEL_DMA1_CH6_TIM16_CH1  0x46
#define DMA_CHANNEL_DMA1_CH6_TIM16_UP   0x46
#define DMA_CHANNEL_DMA1_CH6_TIM1_UP    0x76

#define DMA_CHANNEL_DMA1_CH7_USART2_TX  0x27
#define DMA_CHANNEL_DMA1_CH7_I2C1_RX    0x37
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH2   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH4   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM1_CH3   0x77

#define DMA_CHANNEL_DMA2_CH1_SAI1_A     0x19
#define DMA_CHANNEL_DMA2_CH1_SPI3_RX    0x39
#define DMA_CHANNEL_DMA2_CH1_SWPMI_RX   0x49
#define DMA_CHANNEL_DMA2_CH1_AES_IN     0x69

#define DMA_CHANNEL_DMA2_CH2_SAI1_B     0x1a
#define DMA_CHANNEL_DMA2_CH2_SPI3_TX    0x3a
#define DMA_CHANNEL_DMA2_CH2_SWPMI_TX   0x4a
#define DMA_CHANNEL_DMA2_CH2_AES_OUT    0x6a

#define DMA_CHANNEL_DMA2_CH3_ADC1       0x0b
#define DMA_CHANNEL_DMA2_CH3_SPI1_RX    0x4b
#define DMA_CHANNEL_DMA2_CH3_AES_OUT    0x6b

#define DMA_CHANNEL_DMA2_CH4_TIM6_UP    0x3c
#define DMA_CHANNEL_DMA2_CH4_DAC1       0x3c
#define DMA_CHANNEL_DMA2_CH4_SPI1_TX    0x4c
#define DMA_CHANNEL_DMA2_CH4_SDMMC1     0x7c

#define DMA_CHANNEL_DMA2_CH5_TIM7_UP    0x3d
#define DMA_CHANNEL_DMA2_CH5_DAC2       0x3d
#define DMA_CHANNEL_DMA2_CH5_AES_IN     0x6d
#define DMA_CHANNEL_DMA2_CH5_SDMMC1     0x7d

#define DMA_CHANNEL_DMA2_CH6_SAI1_A     0x1e
#define DMA_CHANNEL_DMA2_CH6_USART1_TX  0x2e
#define DMA_CHANNEL_DMA2_CH6_LPUART_TX  0x4e
#define DMA_CHANNEL_DMA2_CH6_I2C1_RX    0x5e

#define DMA_CHANNEL_DMA2_CH7_SAI1_B     0x1f
#define DMA_CHANNEL_DMA2_CH7_USART1_RX  0x2f
#define DMA_CHANNEL_DMA2_CH7_QUADSPI    0x3f
#define DMA_CHANNEL_DMA2_CH7_LPUART_RX  0x4f
#define DMA_CHANNEL_DMA2_CH7_I2C1_TX    0x5f

#endif

#if defined(STM32L476xx)

#define DMA_CHANNEL_DMA1_CH1_ADC1       0x01
#define DMA_CHANNEL_DMA1_CH1_TIM2_CH3   0x41
#define DMA_CHANNEL_DMA1_CH1_TIM17_CH1  0x51
#define DMA_CHANNEL_DMA1_CH1_TIM17_UP   0x51
#define DMA_CHANNEL_DMA1_CH1_TIM4_CH1   0x61

#define DMA_CHANNEL_DMA1_CH2_ADC2       0x02
#define DMA_CHANNEL_DMA1_CH2_SPI1_RX    0x12
#define DMA_CHANNEL_DMA1_CH2_USART3_TX  0x22
#define DMA_CHANNEL_DMA1_CH2_I2C3_TX    0x32
#define DMA_CHANNEL_DMA1_CH2_TIM2_UP    0x42
#define DMA_CHANNEL_DMA1_CH2_TIM3_CH3   0x52
#define DMA_CHANNEL_DMA1_CH2_TIM1_CH1   0x72

#define DMA_CHANNEL_DMA1_CH3_ADC3       0x03
#define DMA_CHANNEL_DMA1_CH3_SPI1_TX    0x13
#define DMA_CHANNEL_DMA1_CH3_USART3_RX  0x23
#define DMA_CHANNEL_DMA1_CH3_I2C3_RX    0x33
#define DMA_CHANNEL_DMA1_CH3_TIM16_CH1  0x43
#define DMA_CHANNEL_DMA1_CH3_TIM16_UP   0x43
#define DMA_CHANNEL_DMA1_CH3_TIM3_CH4   0x53
#define DMA_CHANNEL_DMA1_CH3_TIM3_UP    0x53
#define DMA_CHANNEL_DMA1_CH3_TIM6_UP    0x63
#define DMA_CHANNEL_DMA1_CH3_DAC1       0x63
#define DMA_CHANNEL_DMA1_CH3_TIM1_CH2   0x73

#define DMA_CHANNEL_DMA1_CH4_DFSDM0     0x04
#define DMA_CHANNEL_DMA1_CH4_SPI2_RX    0x14
#define DMA_CHANNEL_DMA1_CH4_USART1_TX  0x24
#define DMA_CHANNEL_DMA1_CH4_I2C2_TX    0x34
#define DMA_CHANNEL_DMA1_CH4_TIM7_UP    0x54
#define DMA_CHANNEL_DMA1_CH4_DAC2       0x54
#define DMA_CHANNEL_DMA1_CH4_TIM4_CH2   0x64
#define DMA_CHANNEL_DMA1_CH4_TIM1_CH4   0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_TRIG  0x74
#define DMA_CHANNEL_DMA1_CH4_TIM1_COM   0x74

#define DMA_CHANNEL_DMA1_CH5_DFSDM1     0x05
#define DMA_CHANNEL_DMA1_CH5_SPI2_TX    0x15
#define DMA_CHANNEL_DMA1_CH5_USART1_RX  0x25
#define DMA_CHANNEL_DMA1_CH5_I2C2_RX    0x35
#define DMA_CHANNEL_DMA1_CH5_TIM2_CH1   0x45
#define DMA_CHANNEL_DMA1_CH5_QUADSPI    0x55
#define DMA_CHANNEL_DMA1_CH5_TIM4_CH3   0x65
#define DMA_CHANNEL_DMA1_CH5_TIM15_CH1  0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_UP   0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_TRIG 0x75
#define DMA_CHANNEL_DMA1_CH5_TIM15_COM  0x75

#define DMA_CHANNEL_DMA1_CH6_DFSDM2     0x06
#define DMA_CHANNEL_DMA1_CH6_SAI2_A     0x16
#define DMA_CHANNEL_DMA1_CH6_USART2_RX  0x26
#define DMA_CHANNEL_DMA1_CH6_I2C1_TX    0x36
#define DMA_CHANNEL_DMA1_CH6_TIM16_CH1  0x46
#define DMA_CHANNEL_DMA1_CH6_TIM16_UP   0x46
#define DMA_CHANNEL_DMA1_CH6_TIM3_CH1   0x56
#define DMA_CHANNEL_DMA1_CH6_TIM3_TRIG  0x56
#define DMA_CHANNEL_DMA1_CH6_TIM1_UP    0x76

#define DMA_CHANNEL_DMA1_CH7_DFSDM2     0x07
#define DMA_CHANNEL_DMA1_CH7_SAI2_B     0x17
#define DMA_CHANNEL_DMA1_CH7_USART2_TX  0x27
#define DMA_CHANNEL_DMA1_CH7_I2C1_RX    0x37
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH2   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM2_CH4   0x47
#define DMA_CHANNEL_DMA1_CH7_TIM17_CH1  0x57
#define DMA_CHANNEL_DMA1_CH7_TIM17_UP   0x57
#define DMA_CHANNEL_DMA1_CH7_TIM4_UP    0x67
#define DMA_CHANNEL_DMA1_CH7_TIM1_CH3   0x77

#define DMA_CHANNEL_DMA2_CH1_SAI1_A     0x19
#define DMA_CHANNEL_DMA2_CH1_UART5_TX   0x29
#define DMA_CHANNEL_DMA2_CH1_SPI3_RX    0x39
#define DMA_CHANNEL_DMA2_CH1_SWPMI_RX   0x49
#define DMA_CHANNEL_DMA2_CH1_TIM5_CH4   0x59
#define DMA_CHANNEL_DMA2_CH1_TIM5_TRIG  0x59
#define DMA_CHANNEL_DMA2_CH1_TIM5_COM   0x59
#define DMA_CHANNEL_DMA2_CH1_AES_IN     0x69
#define DMA_CHANNEL_DMA2_CH1_TIM8_CH3   0x79
#define DMA_CHANNEL_DMA2_CH1_TIM8_UP    0x79

#define DMA_CHANNEL_DMA2_CH2_SAI1_B     0x1a
#define DMA_CHANNEL_DMA2_CH2_UART5_RX   0x2a
#define DMA_CHANNEL_DMA2_CH2_SPI3_TX    0x3a
#define DMA_CHANNEL_DMA2_CH2_SWPMI_TX   0x4a
#define DMA_CHANNEL_DMA2_CH2_TIM5_CH3   0x5a
#define DMA_CHANNEL_DMA2_CH2_TIM5_UP    0x5a
#define DMA_CHANNEL_DMA2_CH2_AES_OUT    0x6a
#define DMA_CHANNEL_DMA2_CH2_TIM8_CH4   0x7a
#define DMA_CHANNEL_DMA2_CH2_TIM8_TRIG  0x7a
#define DMA_CHANNEL_DMA2_CH2_TIM8_COM   0x7a

#define DMA_CHANNEL_DMA2_CH3_ADC1       0x0b
#define DMA_CHANNEL_DMA2_CH3_SAI2_A     0x1b
#define DMA_CHANNEL_DMA2_CH3_UART4_TX   0x2b
#define DMA_CHANNEL_DMA2_CH3_SPI1_RX    0x4b
#define DMA_CHANNEL_DMA2_CH3_AES_OUT    0x6b

#define DMA_CHANNEL_DMA2_CH4_ADC2       0x0c
#define DMA_CHANNEL_DMA2_CH4_SAI2_B     0x1c
#define DMA_CHANNEL_DMA2_CH4_TIM6_UP    0x3c
#define DMA_CHANNEL_DMA2_CH4_DAC1       0x3c
#define DMA_CHANNEL_DMA2_CH4_SPI1_TX    0x4c
#define DMA_CHANNEL_DMA2_CH4_TIM5_CH2   0x5c
#define DMA_CHANNEL_DMA2_CH4_SDMMC1     0x7c

#define DMA_CHANNEL_DMA2_CH5_ADC3       0x0d
#define DMA_CHANNEL_DMA2_CH5_UART4_RX   0x2d
#define DMA_CHANNEL_DMA2_CH5_TIM7_UP    0x3d
#define DMA_CHANNEL_DMA2_CH5_DAC2       0x3d
#define DMA_CHANNEL_DMA2_CH5_TIM5_CH1   0x5d
#define DMA_CHANNEL_DMA2_CH5_AES_IN     0x6d
#define DMA_CHANNEL_DMA2_CH5_SDMMC1     0x7d

#define DMA_CHANNEL_DMA2_CH6_SAI1_A     0x1e
#define DMA_CHANNEL_DMA2_CH6_USART1_TX  0x2e
#define DMA_CHANNEL_DMA2_CH6_LPUART_TX  0x4e
#define DMA_CHANNEL_DMA2_CH6_I2C1_RX    0x5e
#define DMA_CHANNEL_DMA2_CH6_TIM8_CH1   0x7e

#define DMA_CHANNEL_DMA2_CH7_SAI1_B     0x1f
#define DMA_CHANNEL_DMA2_CH7_USART1_RX  0x2f
#define DMA_CHANNEL_DMA2_CH7_QUADSPI    0x3f
#define DMA_CHANNEL_DMA2_CH7_LPUART_RX  0x4f
#define DMA_CHANNEL_DMA2_CH7_I2C1_TX    0x5f
#define DMA_CHANNEL_DMA2_CH7_TIM8_CH2   0x7f

#endif


#define DMA_OPTION_EVENT_TRANSFER_DONE        0x00000002
#define DMA_OPTION_EVENT_TRANSFER_HALF        0x00000004
#define DMA_OPTION_EVENT_TRANSFER_ERROR       0x00000008

#define DMA_OPTION_PERIPHERAL_TO_MEMORY       0x00000000
#define DMA_OPTION_MEMORY_TO_PERIPHERAL       0x00000010
#define DMA_OPTION_CIRCULAR                   0x00000020
#define DMA_OPTION_PERIPHERAL_DATA_INCREMENT  0x00000040
#define DMA_OPTION_MEMORY_DATA_INCREMENT      0x00000080
#define DMA_OPTION_PERIPHERAL_DATA_SIZE_MASK  0x00000300
#define DMA_OPTION_PERIPHERAL_DATA_SIZE_SHIFT 8
#define DMA_OPTION_PERIPHERAL_DATA_SIZE_8     0x00000000
#define DMA_OPTION_PERIPHERAL_DATA_SIZE_16    0x00000100
#define DMA_OPTION_PERIPHERAL_DATA_SIZE_32    0x00000200
#define DMA_OPTION_MEMORY_DATA_SIZE_MASK      0x00000c00
#define DMA_OPTION_MEMORY_DATA_SIZE_SHIFT     10
#define DMA_OPTION_MEMORY_DATA_SIZE_8         0x00000000
#define DMA_OPTION_MEMORY_DATA_SIZE_16        0x00000400
#define DMA_OPTION_MEMORY_DATA_SIZE_32        0x00000800
#define DMA_OPTION_PRIORITY_MASK              0x00003000
#define DMA_OPTION_PRIORITY_SHIFT             12
#define DMA_OPTION_PRIORITY_LOW               0x00000000
#define DMA_OPTION_PRIORITY_MEDIUM            0x00001000
#define DMA_OPTION_PRIORITY_HIGH              0x00002000
#define DMA_OPTION_PRIORITY_VERY_HIGH         0x00003000
#define DMA_OPTION_MEMORY_TO_MEMORY           0x00004000

#define DMA_EVENT_TRANSFER_DONE               0x00000002
#define DMA_EVENT_TRANSFER_HALF               0x00000004
#define DMA_EVENT_TRANSFER_ERROR              0x00000008

typedef void (*stm32l4_dma_callback_t)(void *context, uint32_t events);

typedef struct _stm32l4_dma_t {
    DMA_Channel_TypeDef    *DMA;
    uint8_t                interrupt;
    uint8_t                channel;
    uint16_t               size;
    stm32l4_dma_callback_t callback;
    void*                  context;
} stm32l4_dma_t;

extern bool stm32l4_dma_create(stm32l4_dma_t *dma, uint8_t channel, unsigned int priority);
extern void stm32l4_dma_destroy(stm32l4_dma_t *dma);
extern void stm32l4_dma_enable(stm32l4_dma_t *dma, stm32l4_dma_callback_t callback, void *context);
extern void stm32l4_dma_disable(stm32l4_dma_t *dma);
extern void stm32l4_dma_start(stm32l4_dma_t *dma, uint32_t tx_data, uint32_t rx_data, uint16_t xf_count, uint32_t option);
extern uint16_t stm32l4_dma_stop(stm32l4_dma_t *dma);
extern uint16_t stm32l4_dma_count(stm32l4_dma_t *dma);
extern bool stm32l4_dma_done(stm32l4_dma_t *dma);
extern void stm32l4_dma_poll(stm32l4_dma_t *dma);

extern void DMA1_Channel1_IRQHandler(void);
extern void DMA1_Channel2_IRQHandler(void);
extern void DMA1_Channel3_IRQHandler(void);
extern void DMA1_Channel4_IRQHandler(void);
extern void DMA1_Channel5_IRQHandler(void);
extern void DMA1_Channel6_IRQHandler(void);
extern void DMA1_Channel7_IRQHandler(void);

extern void DMA2_Channel1_IRQHandler(void);
extern void DMA2_Channel2_IRQHandler(void);
extern void DMA2_Channel3_IRQHandler(void);
extern void DMA2_Channel4_IRQHandler(void);
extern void DMA2_Channel5_IRQHandler(void);
extern void DMA2_Channel6_IRQHandler(void);
extern void DMA2_Channel7_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif /* _STM32L4_DMA_H */
