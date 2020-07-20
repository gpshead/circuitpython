/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define MICROPY_HW_BOARD_NAME       "Bluefruit nRF52 Feather"
#define MICROPY_HW_MCU_NAME         "nRF52832"

#define MICROPY_HW_LED_STATUS       (&pin_P0_17)

#define MICROPY_HW_UART_RX          NRF_GPIO_PIN_MAP(0, 8)
#define MICROPY_HW_UART_TX          NRF_GPIO_PIN_MAP(0, 6)

#define CIRCUITPY_INTERNAL_NVM_SIZE 0
#define CIRCUITPY_INTERNAL_FLASH_FILESYSTEM_SIZE (60*1024)

#define CIRCUITPY_BLE_CONFIG_SIZE       (12*1024)

// Reduce nRF SoftRadio memory usage
#define BLEIO_VS_UUID_COUNT 10
#define BLEIO_HVN_TX_QUEUE_SIZE 2
#define BLEIO_CENTRAL_ROLE_COUNT 2
#define BLEIO_PERIPH_ROLE_COUNT 2
#define BLEIO_TOTAL_CONNECTION_COUNT 2
#define BLEIO_ATTR_TAB_SIZE (BLE_GATTS_ATTR_TAB_SIZE_DEFAULT * 2)

// TODO(gpshead): are these used?
#define PORT_HEAP_SIZE              (32 * 1024)
#define CIRCUITPY_AUTORELOAD_DELAY_MS 500

#define DEFAULT_I2C_BUS_SCL         (&pin_P0_26)
#define DEFAULT_I2C_BUS_SDA         (&pin_P0_25)

#define DEFAULT_SPI_BUS_SCK         (&pin_P0_12)
#define DEFAULT_SPI_BUS_MOSI        (&pin_P0_13)
#define DEFAULT_SPI_BUS_MISO        (&pin_P0_14)

#define DEFAULT_UART_BUS_RX         (&pin_P0_08)
#define DEFAULT_UART_BUS_TX         (&pin_P0_06)
