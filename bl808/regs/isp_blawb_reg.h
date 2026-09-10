/**
  ******************************************************************************
  * @file    isp_blawb_reg.h
  * @version V1.2
  * @date    2019-04-25
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2018 Bouffalo Lab</center></h2>
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
#ifndef  __ISP_BLAWB_REG_H__
#define  __ISP_BLAWB_REG_H__

#include "bl808.h"

/* 0x600 : blawb_read_grid_addr */
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR_OFFSET                   (0x600)
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR                          ISP_BLAWB_BLAWB_READ_GRID_ADDR
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR_POS                      (0U)
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR_LEN                      (12U)
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR_MSK                      (((1U<<ISP_BLAWB_BLAWB_READ_GRID_ADDR_LEN)-1)<<ISP_BLAWB_BLAWB_READ_GRID_ADDR_POS)
#define ISP_BLAWB_BLAWB_READ_GRID_ADDR_UMSK                     (~(((1U<<ISP_BLAWB_BLAWB_READ_GRID_ADDR_LEN)-1)<<ISP_BLAWB_BLAWB_READ_GRID_ADDR_POS))
#define ISP_BLAWB_BLAWB_BUF_IDX                                 ISP_BLAWB_BLAWB_BUF_IDX
#define ISP_BLAWB_BLAWB_BUF_IDX_POS                             (16U)
#define ISP_BLAWB_BLAWB_BUF_IDX_LEN                             (1U)
#define ISP_BLAWB_BLAWB_BUF_IDX_MSK                             (((1U<<ISP_BLAWB_BLAWB_BUF_IDX_LEN)-1)<<ISP_BLAWB_BLAWB_BUF_IDX_POS)
#define ISP_BLAWB_BLAWB_BUF_IDX_UMSK                            (~(((1U<<ISP_BLAWB_BLAWB_BUF_IDX_LEN)-1)<<ISP_BLAWB_BLAWB_BUF_IDX_POS))
#define ISP_BLAWB_BLAWB_W_CNT                                   ISP_BLAWB_BLAWB_W_CNT
#define ISP_BLAWB_BLAWB_W_CNT_POS                               (20U)
#define ISP_BLAWB_BLAWB_W_CNT_LEN                               (5U)
#define ISP_BLAWB_BLAWB_W_CNT_MSK                               (((1U<<ISP_BLAWB_BLAWB_W_CNT_LEN)-1)<<ISP_BLAWB_BLAWB_W_CNT_POS)
#define ISP_BLAWB_BLAWB_W_CNT_UMSK                              (~(((1U<<ISP_BLAWB_BLAWB_W_CNT_LEN)-1)<<ISP_BLAWB_BLAWB_W_CNT_POS))

/* 0x604 : blawb_grid_data */
#define ISP_BLAWB_BLAWB_GRID_DATA_OFFSET                        (0x604)
#define ISP_BLAWB_BLAWB_GRID_DATA                               ISP_BLAWB_BLAWB_GRID_DATA
#define ISP_BLAWB_BLAWB_GRID_DATA_POS                           (0U)
#define ISP_BLAWB_BLAWB_GRID_DATA_LEN                           (32U)
#define ISP_BLAWB_BLAWB_GRID_DATA_MSK                           (((1U<<ISP_BLAWB_BLAWB_GRID_DATA_LEN)-1)<<ISP_BLAWB_BLAWB_GRID_DATA_POS)
#define ISP_BLAWB_BLAWB_GRID_DATA_UMSK                          (~(((1U<<ISP_BLAWB_BLAWB_GRID_DATA_LEN)-1)<<ISP_BLAWB_BLAWB_GRID_DATA_POS))


struct  isp_blawb_reg {
    /* 0x0  reserved */
    uint8_t RESERVED0x0[1536];

    /* 0x600 : blawb_read_grid_addr */
    union {
        struct {
            uint32_t blawb_read_grid_addr           : 12; /* [11: 0],        r/w,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t blawb_buf_idx                  :  1; /* [   16],          r,        0x0 */
            uint32_t reserved_17_19                 :  3; /* [19:17],       rsvd,        0x0 */
            uint32_t blawb_w_cnt                    :  5; /* [24:20],          r,        0x0 */
            uint32_t reserved_25_31                 :  7; /* [31:25],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } blawb_read_grid_addr;

    /* 0x604 : blawb_grid_data */
    union {
        struct {
            uint32_t blawb_grid_data                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } blawb_grid_data;

};

typedef volatile struct isp_blawb_reg isp_blawb_reg_t;


#endif  /* __ISP_BLAWB_REG_H__ */
