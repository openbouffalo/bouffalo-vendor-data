/**
  ******************************************************************************
  * @file    ir_reg.h
  * @version V1.0
  * @date    2021-11-16
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2020 Bouffalo Lab</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of Bouffalo Lab nor the names of its contributors
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
#ifndef __IR_REG_H__
#define __IR_REG_H__

#include "bl616.h"

/* 0x0 : irtx_config */
#define IRTX_CONFIG_OFFSET             (0x0)

/* 0x4 : irtx_int_sts */
#define IRTX_INT_STS_OFFSET       (0x4)

/* 0x10 : irtx_pulse_width */
#define IRTX_PULSE_WIDTH_OFFSET   (0x10)

/* 0x14 : irtx_pw_0 */
#define IRTX_PW_0_OFFSET             (0x14)

/* 0x18 : irtx_pw_1 */
#define IRTX_PW_1_OFFSET           (0x18)

/* 0x40 : irrx_config */
#define IRRX_CONFIG_OFFSET      (0x40)
#define IR_CR_IRRX_EN           IR_CR_IRRX_EN
#define IR_CR_IRRX_EN_POS       (0U)
#define IR_CR_IRRX_EN_LEN       (1U)
#define IR_CR_IRRX_EN_MSK       (((1U << IR_CR_IRRX_EN_LEN) - 1) << IR_CR_IRRX_EN_POS)
#define IR_CR_IRRX_EN_UMSK      (~(((1U << IR_CR_IRRX_EN_LEN) - 1) << IR_CR_IRRX_EN_POS))
#define IR_CR_IRRX_IN_INV       IR_CR_IRRX_IN_INV
#define IR_CR_IRRX_IN_INV_POS   (1U)
#define IR_CR_IRRX_IN_INV_LEN   (1U)
#define IR_CR_IRRX_IN_INV_MSK   (((1U << IR_CR_IRRX_IN_INV_LEN) - 1) << IR_CR_IRRX_IN_INV_POS)
#define IR_CR_IRRX_IN_INV_UMSK  (~(((1U << IR_CR_IRRX_IN_INV_LEN) - 1) << IR_CR_IRRX_IN_INV_POS))
#define IR_CR_IRRX_MODE         IR_CR_IRRX_MODE
#define IR_CR_IRRX_MODE_POS     (2U)
#define IR_CR_IRRX_MODE_LEN     (2U)
#define IR_CR_IRRX_MODE_MSK     (((1U << IR_CR_IRRX_MODE_LEN) - 1) << IR_CR_IRRX_MODE_POS)
#define IR_CR_IRRX_MODE_UMSK    (~(((1U << IR_CR_IRRX_MODE_LEN) - 1) << IR_CR_IRRX_MODE_POS))
#define IR_CR_IRRX_DEG_EN       IR_CR_IRRX_DEG_EN
#define IR_CR_IRRX_DEG_EN_POS   (4U)
#define IR_CR_IRRX_DEG_EN_LEN   (1U)
#define IR_CR_IRRX_DEG_EN_MSK   (((1U << IR_CR_IRRX_DEG_EN_LEN) - 1) << IR_CR_IRRX_DEG_EN_POS)
#define IR_CR_IRRX_DEG_EN_UMSK  (~(((1U << IR_CR_IRRX_DEG_EN_LEN) - 1) << IR_CR_IRRX_DEG_EN_POS))
#define IR_CR_IRRX_DEG_CNT      IR_CR_IRRX_DEG_CNT
#define IR_CR_IRRX_DEG_CNT_POS  (8U)
#define IR_CR_IRRX_DEG_CNT_LEN  (4U)
#define IR_CR_IRRX_DEG_CNT_MSK  (((1U << IR_CR_IRRX_DEG_CNT_LEN) - 1) << IR_CR_IRRX_DEG_CNT_POS)
#define IR_CR_IRRX_DEG_CNT_UMSK (~(((1U << IR_CR_IRRX_DEG_CNT_LEN) - 1) << IR_CR_IRRX_DEG_CNT_POS))

/* 0x44 : irrx_int_sts */
#define IRRX_INT_STS_OFFSET       (0x44)
#define IRRX_END_INT              IRRX_END_INT
#define IRRX_END_INT_POS          (0U)
#define IRRX_END_INT_LEN          (1U)
#define IRRX_END_INT_MSK          (((1U << IRRX_END_INT_LEN) - 1) << IRRX_END_INT_POS)
#define IRRX_END_INT_UMSK         (~(((1U << IRRX_END_INT_LEN) - 1) << IRRX_END_INT_POS))
#define IRRX_FRDY_INT             IRRX_FRDY_INT
#define IRRX_FRDY_INT_POS         (1U)
#define IRRX_FRDY_INT_LEN         (1U)
#define IRRX_FRDY_INT_MSK         (((1U << IRRX_FRDY_INT_LEN) - 1) << IRRX_FRDY_INT_POS)
#define IRRX_FRDY_INT_UMSK        (~(((1U << IRRX_FRDY_INT_LEN) - 1) << IRRX_FRDY_INT_POS))
#define IRRX_FER_INT              IRRX_FER_INT
#define IRRX_FER_INT_POS          (2U)
#define IRRX_FER_INT_LEN          (1U)
#define IRRX_FER_INT_MSK          (((1U << IRRX_FER_INT_LEN) - 1) << IRRX_FER_INT_POS)
#define IRRX_FER_INT_UMSK         (~(((1U << IRRX_FER_INT_LEN) - 1) << IRRX_FER_INT_POS))
#define IR_CR_IRRX_END_MASK       IR_CR_IRRX_END_MASK
#define IR_CR_IRRX_END_MASK_POS   (8U)
#define IR_CR_IRRX_END_MASK_LEN   (1U)
#define IR_CR_IRRX_END_MASK_MSK   (((1U << IR_CR_IRRX_END_MASK_LEN) - 1) << IR_CR_IRRX_END_MASK_POS)
#define IR_CR_IRRX_END_MASK_UMSK  (~(((1U << IR_CR_IRRX_END_MASK_LEN) - 1) << IR_CR_IRRX_END_MASK_POS))
#define IR_CR_IRRX_FRDY_MASK      IR_CR_IRRX_FRDY_MASK
#define IR_CR_IRRX_FRDY_MASK_POS  (9U)
#define IR_CR_IRRX_FRDY_MASK_LEN  (1U)
#define IR_CR_IRRX_FRDY_MASK_MSK  (((1U << IR_CR_IRRX_FRDY_MASK_LEN) - 1) << IR_CR_IRRX_FRDY_MASK_POS)
#define IR_CR_IRRX_FRDY_MASK_UMSK (~(((1U << IR_CR_IRRX_FRDY_MASK_LEN) - 1) << IR_CR_IRRX_FRDY_MASK_POS))
#define IR_CR_IRRX_FER_MASK       IR_CR_IRRX_FER_MASK
#define IR_CR_IRRX_FER_MASK_POS   (10U)
#define IR_CR_IRRX_FER_MASK_LEN   (1U)
#define IR_CR_IRRX_FER_MASK_MSK   (((1U << IR_CR_IRRX_FER_MASK_LEN) - 1) << IR_CR_IRRX_FER_MASK_POS)
#define IR_CR_IRRX_FER_MASK_UMSK  (~(((1U << IR_CR_IRRX_FER_MASK_LEN) - 1) << IR_CR_IRRX_FER_MASK_POS))
#define IR_CR_IRRX_END_CLR        IR_CR_IRRX_END_CLR
#define IR_CR_IRRX_END_CLR_POS    (16U)
#define IR_CR_IRRX_END_CLR_LEN    (1U)
#define IR_CR_IRRX_END_CLR_MSK    (((1U << IR_CR_IRRX_END_CLR_LEN) - 1) << IR_CR_IRRX_END_CLR_POS)
#define IR_CR_IRRX_END_CLR_UMSK   (~(((1U << IR_CR_IRRX_END_CLR_LEN) - 1) << IR_CR_IRRX_END_CLR_POS))
#define IR_CR_IRRX_END_EN         IR_CR_IRRX_END_EN
#define IR_CR_IRRX_END_EN_POS     (24U)
#define IR_CR_IRRX_END_EN_LEN     (1U)
#define IR_CR_IRRX_END_EN_MSK     (((1U << IR_CR_IRRX_END_EN_LEN) - 1) << IR_CR_IRRX_END_EN_POS)
#define IR_CR_IRRX_END_EN_UMSK    (~(((1U << IR_CR_IRRX_END_EN_LEN) - 1) << IR_CR_IRRX_END_EN_POS))
#define IR_CR_IRRX_FRDY_EN        IR_CR_IRRX_FRDY_EN
#define IR_CR_IRRX_FRDY_EN_POS    (25U)
#define IR_CR_IRRX_FRDY_EN_LEN    (1U)
#define IR_CR_IRRX_FRDY_EN_MSK    (((1U << IR_CR_IRRX_FRDY_EN_LEN) - 1) << IR_CR_IRRX_FRDY_EN_POS)
#define IR_CR_IRRX_FRDY_EN_UMSK   (~(((1U << IR_CR_IRRX_FRDY_EN_LEN) - 1) << IR_CR_IRRX_FRDY_EN_POS))
#define IR_CR_IRRX_FER_EN         IR_CR_IRRX_FER_EN
#define IR_CR_IRRX_FER_EN_POS     (26U)
#define IR_CR_IRRX_FER_EN_LEN     (1U)
#define IR_CR_IRRX_FER_EN_MSK     (((1U << IR_CR_IRRX_FER_EN_LEN) - 1) << IR_CR_IRRX_FER_EN_POS)
#define IR_CR_IRRX_FER_EN_UMSK    (~(((1U << IR_CR_IRRX_FER_EN_LEN) - 1) << IR_CR_IRRX_FER_EN_POS))

/* 0x48 : irrx_pw_config */
#define IRRX_PW_CONFIG_OFFSET   (0x48)
#define IR_CR_IRRX_DATA_TH      IR_CR_IRRX_DATA_TH
#define IR_CR_IRRX_DATA_TH_POS  (0U)
#define IR_CR_IRRX_DATA_TH_LEN  (16U)
#define IR_CR_IRRX_DATA_TH_MSK  (((1U << IR_CR_IRRX_DATA_TH_LEN) - 1) << IR_CR_IRRX_DATA_TH_POS)
#define IR_CR_IRRX_DATA_TH_UMSK (~(((1U << IR_CR_IRRX_DATA_TH_LEN) - 1) << IR_CR_IRRX_DATA_TH_POS))
#define IR_CR_IRRX_END_TH       IR_CR_IRRX_END_TH
#define IR_CR_IRRX_END_TH_POS   (16U)
#define IR_CR_IRRX_END_TH_LEN   (16U)
#define IR_CR_IRRX_END_TH_MSK   (((1U << IR_CR_IRRX_END_TH_LEN) - 1) << IR_CR_IRRX_END_TH_POS)
#define IR_CR_IRRX_END_TH_UMSK  (~(((1U << IR_CR_IRRX_END_TH_LEN) - 1) << IR_CR_IRRX_END_TH_POS))

/* 0x50 : irrx_data_count */
#define IRRX_DATA_COUNT_OFFSET    (0x50)
#define IR_STS_IRRX_DATA_CNT      IR_STS_IRRX_DATA_CNT
#define IR_STS_IRRX_DATA_CNT_POS  (0U)
#define IR_STS_IRRX_DATA_CNT_LEN  (7U)
#define IR_STS_IRRX_DATA_CNT_MSK  (((1U << IR_STS_IRRX_DATA_CNT_LEN) - 1) << IR_STS_IRRX_DATA_CNT_POS)
#define IR_STS_IRRX_DATA_CNT_UMSK (~(((1U << IR_STS_IRRX_DATA_CNT_LEN) - 1) << IR_STS_IRRX_DATA_CNT_POS))

/* 0x54 : irrx_data_word0 */
#define IRRX_DATA_WORD0_OFFSET      (0x54)
#define IR_STS_IRRX_DATA_WORD0      IR_STS_IRRX_DATA_WORD0
#define IR_STS_IRRX_DATA_WORD0_POS  (0U)
#define IR_STS_IRRX_DATA_WORD0_LEN  (32U)
#define IR_STS_IRRX_DATA_WORD0_MSK  (((1U << IR_STS_IRRX_DATA_WORD0_LEN) - 1) << IR_STS_IRRX_DATA_WORD0_POS)
#define IR_STS_IRRX_DATA_WORD0_UMSK (~(((1U << IR_STS_IRRX_DATA_WORD0_LEN) - 1) << IR_STS_IRRX_DATA_WORD0_POS))

/* 0x58 : irrx_data_word1 */
#define IRRX_DATA_WORD1_OFFSET      (0x58)
#define IR_STS_IRRX_DATA_WORD1      IR_STS_IRRX_DATA_WORD1
#define IR_STS_IRRX_DATA_WORD1_POS  (0U)
#define IR_STS_IRRX_DATA_WORD1_LEN  (32U)
#define IR_STS_IRRX_DATA_WORD1_MSK  (((1U << IR_STS_IRRX_DATA_WORD1_LEN) - 1) << IR_STS_IRRX_DATA_WORD1_POS)
#define IR_STS_IRRX_DATA_WORD1_UMSK (~(((1U << IR_STS_IRRX_DATA_WORD1_LEN) - 1) << IR_STS_IRRX_DATA_WORD1_POS))

/* 0x80 : ir_fifo_config_0 */
#define IR_FIFO_CONFIG_0_OFFSET   (0x80)
#define IR_RX_FIFO_CLR            IR_RX_FIFO_CLR
#define IR_RX_FIFO_CLR_POS        (3U)
#define IR_RX_FIFO_CLR_LEN        (1U)
#define IR_RX_FIFO_CLR_MSK        (((1U << IR_RX_FIFO_CLR_LEN) - 1) << IR_RX_FIFO_CLR_POS)
#define IR_RX_FIFO_CLR_UMSK       (~(((1U << IR_RX_FIFO_CLR_LEN) - 1) << IR_RX_FIFO_CLR_POS))
#define IR_RX_FIFO_OVERFLOW       IR_RX_FIFO_OVERFLOW
#define IR_RX_FIFO_OVERFLOW_POS   (6U)
#define IR_RX_FIFO_OVERFLOW_LEN   (1U)
#define IR_RX_FIFO_OVERFLOW_MSK   (((1U << IR_RX_FIFO_OVERFLOW_LEN) - 1) << IR_RX_FIFO_OVERFLOW_POS)
#define IR_RX_FIFO_OVERFLOW_UMSK  (~(((1U << IR_RX_FIFO_OVERFLOW_LEN) - 1) << IR_RX_FIFO_OVERFLOW_POS))
#define IR_RX_FIFO_UNDERFLOW      IR_RX_FIFO_UNDERFLOW
#define IR_RX_FIFO_UNDERFLOW_POS  (7U)
#define IR_RX_FIFO_UNDERFLOW_LEN  (1U)
#define IR_RX_FIFO_UNDERFLOW_MSK  (((1U << IR_RX_FIFO_UNDERFLOW_LEN) - 1) << IR_RX_FIFO_UNDERFLOW_POS)
#define IR_RX_FIFO_UNDERFLOW_UMSK (~(((1U << IR_RX_FIFO_UNDERFLOW_LEN) - 1) << IR_RX_FIFO_UNDERFLOW_POS))

/* 0x84 : ir_fifo_config_1 */
#define IR_FIFO_CONFIG_1_OFFSET (0x84)
#define IR_RX_FIFO_CNT          IR_RX_FIFO_CNT
#define IR_RX_FIFO_CNT_POS      (8U)
#define IR_RX_FIFO_CNT_LEN      (7U)
#define IR_RX_FIFO_CNT_MSK      (((1U << IR_RX_FIFO_CNT_LEN) - 1) << IR_RX_FIFO_CNT_POS)
#define IR_RX_FIFO_CNT_UMSK     (~(((1U << IR_RX_FIFO_CNT_LEN) - 1) << IR_RX_FIFO_CNT_POS))
#define IR_RX_FIFO_TH           IR_RX_FIFO_TH
#define IR_RX_FIFO_TH_POS       (24U)
#define IR_RX_FIFO_TH_LEN       (6U)
#define IR_RX_FIFO_TH_MSK       (((1U << IR_RX_FIFO_TH_LEN) - 1) << IR_RX_FIFO_TH_POS)
#define IR_RX_FIFO_TH_UMSK      (~(((1U << IR_RX_FIFO_TH_LEN) - 1) << IR_RX_FIFO_TH_POS))

/* 0x88 : ir_fifo_wdata */
#define IR_FIFO_WDATA_OFFSET  (0x88)

/* 0x8C : ir_fifo_rdata */
#define IR_FIFO_RDATA_OFFSET  (0x8C)
#define IR_RX_FIFO_RDATA      IR_RX_FIFO_RDATA
#define IR_RX_FIFO_RDATA_POS  (0U)
#define IR_RX_FIFO_RDATA_LEN  (16U)
#define IR_RX_FIFO_RDATA_MSK  (((1U << IR_RX_FIFO_RDATA_LEN) - 1) << IR_RX_FIFO_RDATA_POS)
#define IR_RX_FIFO_RDATA_UMSK (~(((1U << IR_RX_FIFO_RDATA_LEN) - 1) << IR_RX_FIFO_RDATA_POS))

struct ir_reg {
    /* 0x0 : irtx_config */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irtx_config;

    /* 0x4 : irtx_int_sts */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irtx_int_sts;

    /* 0x8  reserved */
    uint8_t RESERVED0x8[8];

    /* 0x10 : irtx_pulse_width */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irtx_pulse_width;

    /* 0x14 : irtx_pw_0 */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irtx_pw_0;

    /* 0x18 : irtx_pw_1 */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irtx_pw_1;

    /* 0x1c  reserved */
    uint8_t RESERVED0x1c[36];

    /* 0x40 : irrx_config */
    union {
        struct
        {
            uint32_t cr_irrx_en      : 1;  /* [    0],        r/w,        0x0 */
            uint32_t cr_irrx_in_inv  : 1;  /* [    1],        r/w,        0x1 */
            uint32_t cr_irrx_mode    : 2;  /* [ 3: 2],        r/w,        0x0 */
            uint32_t cr_irrx_deg_en  : 1;  /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_7    : 3;  /* [ 7: 5],       rsvd,        0x0 */
            uint32_t cr_irrx_deg_cnt : 4;  /* [11: 8],        r/w,        0x0 */
            uint32_t reserved_12_31  : 20; /* [31:12],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irrx_config;

    /* 0x44 : irrx_int_sts */
    union {
        struct
        {
            uint32_t irrx_end_int      : 1; /* [    0],          r,        0x0 */
            uint32_t irrx_frdy_int     : 1; /* [    1],          r,        0x0 */
            uint32_t irrx_fer_int      : 1; /* [    2],          r,        0x0 */
            uint32_t reserved_3_7      : 5; /* [ 7: 3],       rsvd,        0x0 */
            uint32_t cr_irrx_end_mask  : 1; /* [    8],        r/w,        0x1 */
            uint32_t cr_irrx_frdy_mask : 1; /* [    9],        r/w,        0x1 */
            uint32_t cr_irrx_fer_mask  : 1; /* [   10],        r/w,        0x1 */
            uint32_t reserved_11_15    : 5; /* [15:11],       rsvd,        0x0 */
            uint32_t cr_irrx_end_clr   : 1; /* [   16],        w1c,        0x0 */
            uint32_t rsvd_17           : 1; /* [   17],       rsvd,        0x0 */
            uint32_t rsvd_18           : 1; /* [   18],       rsvd,        0x0 */
            uint32_t reserved_19_23    : 5; /* [23:19],       rsvd,        0x0 */
            uint32_t cr_irrx_end_en    : 1; /* [   24],        r/w,        0x1 */
            uint32_t cr_irrx_frdy_en   : 1; /* [   25],        r/w,        0x1 */
            uint32_t cr_irrx_fer_en    : 1; /* [   26],        r/w,        0x1 */
            uint32_t reserved_27_31    : 5; /* [31:27],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irrx_int_sts;

    /* 0x48 : irrx_pw_config */
    union {
        struct
        {
            uint32_t cr_irrx_data_th : 16; /* [15: 0],        r/w,      0xd47 */
            uint32_t cr_irrx_end_th  : 16; /* [31:16],        r/w,     0x2327 */
        } BF;
        uint32_t WORD;
    } irrx_pw_config;

    /* 0x4c  reserved */
    uint8_t RESERVED0x4c[4];

    /* 0x50 : irrx_data_count */
    union {
        struct
        {
            uint32_t sts_irrx_data_cnt : 7;  /* [ 6: 0],          r,        0x0 */
            uint32_t reserved_7_31     : 25; /* [31: 7],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } irrx_data_count;

    /* 0x54 : irrx_data_word0 */
    union {
        struct
        {
            uint32_t sts_irrx_data_word0 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } irrx_data_word0;

    /* 0x58 : irrx_data_word1 */
    union {
        struct
        {
            uint32_t sts_irrx_data_word1 : 32; /* [31: 0],          r,        0x0 */
        } BF;
        uint32_t WORD;
    } irrx_data_word1;

    /* 0x5c  reserved */
    uint8_t RESERVED0x5c[36];

    /* 0x80 : ir_fifo_config_0 */
    union {
        struct
        {
            uint32_t reserved_0_2      : 3;  /* [ 2: 0],       rsvd,        0x0 */
            uint32_t rx_fifo_clr       : 1;  /* [    3],        w1c,        0x0 */
            uint32_t reserved_4_5      : 2;  /* [ 5: 4],       rsvd,        0x0 */
            uint32_t rx_fifo_overflow  : 1;  /* [    6],          r,        0x0 */
            uint32_t rx_fifo_underflow : 1;  /* [    7],          r,        0x0 */
            uint32_t reserved_8_31     : 24; /* [31: 8],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_fifo_config_0;

    /* 0x84 : ir_fifo_config_1 */
    union {
        struct
        {
            uint32_t reserved_0_7   : 8; /* [ 7: 0],       rsvd,        0x0 */
            uint32_t rx_fifo_cnt    : 7; /* [14: 8],          r,        0x0 */
            uint32_t reserved_15_23 : 9; /* [23:15],       rsvd,        0x0 */
            uint32_t rx_fifo_th     : 6; /* [29:24],        r/w,        0x0 */
            uint32_t reserved_30_31 : 2; /* [31:30],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_fifo_config_1;

    /* 0x88 : ir_fifo_wdata */
    union {
        struct
        {
            uint32_t reserved_0_31 : 32; /* [31: 0],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_fifo_wdata;

    /* 0x8C : ir_fifo_rdata */
    union {
        struct
        {
            uint32_t rx_fifo_rdata  : 16; /* [15: 0],          r,        0x0 */
            uint32_t reserved_16_31 : 16; /* [31:16],       rsvd,        0x0 */
        } BF;
        uint32_t WORD;
    } ir_fifo_rdata;
};

typedef volatile struct ir_reg ir_reg_t;

#endif /* __IR_REG_H__ */
