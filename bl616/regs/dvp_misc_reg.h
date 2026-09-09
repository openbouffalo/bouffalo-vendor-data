/**
  ******************************************************************************
  * @file    dvp_misc_reg.h
  * @version V1.0
  * @date    2021-09-24
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
#ifndef  __DVP_MISC_REG_H__
#define  __DVP_MISC_REG_H__

#include "bl616.h"

/* 0x0 : config */
#define DVP_MISC_CONFIG_OFFSET                                  (0x0)
#define DVP_MISC_RG_DVPAS_ENABLE                                DVP_MISC_RG_DVPAS_ENABLE
#define DVP_MISC_RG_DVPAS_ENABLE_POS                            (0U)
#define DVP_MISC_RG_DVPAS_ENABLE_LEN                            (1U)
#define DVP_MISC_RG_DVPAS_ENABLE_MSK                            (((1U<<DVP_MISC_RG_DVPAS_ENABLE_LEN)-1)<<DVP_MISC_RG_DVPAS_ENABLE_POS)
#define DVP_MISC_RG_DVPAS_ENABLE_UMSK                           (~(((1U<<DVP_MISC_RG_DVPAS_ENABLE_LEN)-1)<<DVP_MISC_RG_DVPAS_ENABLE_POS))
#define DVP_MISC_RG_DVPAS_HS_INV                                DVP_MISC_RG_DVPAS_HS_INV
#define DVP_MISC_RG_DVPAS_HS_INV_POS                            (1U)
#define DVP_MISC_RG_DVPAS_HS_INV_LEN                            (1U)
#define DVP_MISC_RG_DVPAS_HS_INV_MSK                            (((1U<<DVP_MISC_RG_DVPAS_HS_INV_LEN)-1)<<DVP_MISC_RG_DVPAS_HS_INV_POS)
#define DVP_MISC_RG_DVPAS_HS_INV_UMSK                           (~(((1U<<DVP_MISC_RG_DVPAS_HS_INV_LEN)-1)<<DVP_MISC_RG_DVPAS_HS_INV_POS))
#define DVP_MISC_RG_DVPAS_VS_INV                                DVP_MISC_RG_DVPAS_VS_INV
#define DVP_MISC_RG_DVPAS_VS_INV_POS                            (2U)
#define DVP_MISC_RG_DVPAS_VS_INV_LEN                            (1U)
#define DVP_MISC_RG_DVPAS_VS_INV_MSK                            (((1U<<DVP_MISC_RG_DVPAS_VS_INV_LEN)-1)<<DVP_MISC_RG_DVPAS_VS_INV_POS)
#define DVP_MISC_RG_DVPAS_VS_INV_UMSK                           (~(((1U<<DVP_MISC_RG_DVPAS_VS_INV_LEN)-1)<<DVP_MISC_RG_DVPAS_VS_INV_POS))
#define DVP_MISC_RG_DVPAS_DA_ORDER                              DVP_MISC_RG_DVPAS_DA_ORDER
#define DVP_MISC_RG_DVPAS_DA_ORDER_POS                          (3U)
#define DVP_MISC_RG_DVPAS_DA_ORDER_LEN                          (1U)
#define DVP_MISC_RG_DVPAS_DA_ORDER_MSK                          (((1U<<DVP_MISC_RG_DVPAS_DA_ORDER_LEN)-1)<<DVP_MISC_RG_DVPAS_DA_ORDER_POS)
#define DVP_MISC_RG_DVPAS_DA_ORDER_UMSK                         (~(((1U<<DVP_MISC_RG_DVPAS_DA_ORDER_LEN)-1)<<DVP_MISC_RG_DVPAS_DA_ORDER_POS))
#define DVP_MISC_RG_DVPAS_FIFO_TH                               DVP_MISC_RG_DVPAS_FIFO_TH
#define DVP_MISC_RG_DVPAS_FIFO_TH_POS                           (16U)
#define DVP_MISC_RG_DVPAS_FIFO_TH_LEN                           (11U)
#define DVP_MISC_RG_DVPAS_FIFO_TH_MSK                           (((1U<<DVP_MISC_RG_DVPAS_FIFO_TH_LEN)-1)<<DVP_MISC_RG_DVPAS_FIFO_TH_POS)
#define DVP_MISC_RG_DVPAS_FIFO_TH_UMSK                          (~(((1U<<DVP_MISC_RG_DVPAS_FIFO_TH_LEN)-1)<<DVP_MISC_RG_DVPAS_FIFO_TH_POS))

/* 0x8 : dvp2bus_src_sel_1 */
#define DVP_MISC_DVP2BUS_SRC_SEL_1_OFFSET                       (0x8)
#define DVP_MISC_RG_D2X_DVP_SEL                                 DVP_MISC_RG_D2X_DVP_SEL
#define DVP_MISC_RG_D2X_DVP_SEL_POS                             (0U)
#define DVP_MISC_RG_D2X_DVP_SEL_LEN                             (1U)
#define DVP_MISC_RG_D2X_DVP_SEL_MSK                             (((1U<<DVP_MISC_RG_D2X_DVP_SEL_LEN)-1)<<DVP_MISC_RG_D2X_DVP_SEL_POS)
#define DVP_MISC_RG_D2X_DVP_SEL_UMSK                            (~(((1U<<DVP_MISC_RG_D2X_DVP_SEL_LEN)-1)<<DVP_MISC_RG_D2X_DVP_SEL_POS))

/* 0xC : snsr_ctrl */
#define DVP_MISC_SNSR_CTRL_OFFSET                               (0xC)
#define DVP_MISC_RG_SNSR_RST                                    DVP_MISC_RG_SNSR_RST
#define DVP_MISC_RG_SNSR_RST_POS                                (0U)
#define DVP_MISC_RG_SNSR_RST_LEN                                (1U)
#define DVP_MISC_RG_SNSR_RST_MSK                                (((1U<<DVP_MISC_RG_SNSR_RST_LEN)-1)<<DVP_MISC_RG_SNSR_RST_POS)
#define DVP_MISC_RG_SNSR_RST_UMSK                               (~(((1U<<DVP_MISC_RG_SNSR_RST_LEN)-1)<<DVP_MISC_RG_SNSR_RST_POS))
#define DVP_MISC_RG_SNSR_PWDN                                   DVP_MISC_RG_SNSR_PWDN
#define DVP_MISC_RG_SNSR_PWDN_POS                               (1U)
#define DVP_MISC_RG_SNSR_PWDN_LEN                               (1U)
#define DVP_MISC_RG_SNSR_PWDN_MSK                               (((1U<<DVP_MISC_RG_SNSR_PWDN_LEN)-1)<<DVP_MISC_RG_SNSR_PWDN_POS)
#define DVP_MISC_RG_SNSR_PWDN_UMSK                              (~(((1U<<DVP_MISC_RG_SNSR_PWDN_LEN)-1)<<DVP_MISC_RG_SNSR_PWDN_POS))

/* 0x10 : emi_misc */
#define DVP_MISC_EMI_MISC_OFFSET                                (0x10)
#define DVP_MISC_REG_X_WTHRE_PB                                 DVP_MISC_REG_X_WTHRE_PB
#define DVP_MISC_REG_X_WTHRE_PB_POS                             (0U)
#define DVP_MISC_REG_X_WTHRE_PB_LEN                             (2U)
#define DVP_MISC_REG_X_WTHRE_PB_MSK                             (((1U<<DVP_MISC_REG_X_WTHRE_PB_LEN)-1)<<DVP_MISC_REG_X_WTHRE_PB_POS)
#define DVP_MISC_REG_X_WTHRE_PB_UMSK                            (~(((1U<<DVP_MISC_REG_X_WTHRE_PB_LEN)-1)<<DVP_MISC_REG_X_WTHRE_PB_POS))
#define DVP_MISC_REG_SF_HARB_MODE                               DVP_MISC_REG_SF_HARB_MODE
#define DVP_MISC_REG_SF_HARB_MODE_POS                           (4U)
#define DVP_MISC_REG_SF_HARB_MODE_LEN                           (1U)
#define DVP_MISC_REG_SF_HARB_MODE_MSK                           (((1U<<DVP_MISC_REG_SF_HARB_MODE_LEN)-1)<<DVP_MISC_REG_SF_HARB_MODE_POS)
#define DVP_MISC_REG_SF_HARB_MODE_UMSK                          (~(((1U<<DVP_MISC_REG_SF_HARB_MODE_LEN)-1)<<DVP_MISC_REG_SF_HARB_MODE_POS))

/* 0x14 : isp_id_yuv */
#define DVP_MISC_ISP_ID_YUV_OFFSET                              (0x14)
#define DVP_MISC_REG_YUV_IDGEN_RST                              DVP_MISC_REG_YUV_IDGEN_RST
#define DVP_MISC_REG_YUV_IDGEN_RST_POS                          (0U)
#define DVP_MISC_REG_YUV_IDGEN_RST_LEN                          (1U)
#define DVP_MISC_REG_YUV_IDGEN_RST_MSK                          (((1U<<DVP_MISC_REG_YUV_IDGEN_RST_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_RST_POS)
#define DVP_MISC_REG_YUV_IDGEN_RST_UMSK                         (~(((1U<<DVP_MISC_REG_YUV_IDGEN_RST_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_RST_POS))
#define DVP_MISC_REG_YUV_IDGEN_EDGE                             DVP_MISC_REG_YUV_IDGEN_EDGE
#define DVP_MISC_REG_YUV_IDGEN_EDGE_POS                         (1U)
#define DVP_MISC_REG_YUV_IDGEN_EDGE_LEN                         (1U)
#define DVP_MISC_REG_YUV_IDGEN_EDGE_MSK                         (((1U<<DVP_MISC_REG_YUV_IDGEN_EDGE_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_EDGE_POS)
#define DVP_MISC_REG_YUV_IDGEN_EDGE_UMSK                        (~(((1U<<DVP_MISC_REG_YUV_IDGEN_EDGE_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_EDGE_POS))
#define DVP_MISC_REG_YUV_IDGEN_CNT_INCR                         DVP_MISC_REG_YUV_IDGEN_CNT_INCR
#define DVP_MISC_REG_YUV_IDGEN_CNT_INCR_POS                     (16U)
#define DVP_MISC_REG_YUV_IDGEN_CNT_INCR_LEN                     (16U)
#define DVP_MISC_REG_YUV_IDGEN_CNT_INCR_MSK                     (((1U<<DVP_MISC_REG_YUV_IDGEN_CNT_INCR_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_CNT_INCR_POS)
#define DVP_MISC_REG_YUV_IDGEN_CNT_INCR_UMSK                    (~(((1U<<DVP_MISC_REG_YUV_IDGEN_CNT_INCR_LEN)-1)<<DVP_MISC_REG_YUV_IDGEN_CNT_INCR_POS))


struct  dvp_misc_reg {
    /* 0x0 : config */
    union {
        struct {
            uint32_t rg_dvpas_enable                :  1; /* [    0],        r/w,        0x0 */
            uint32_t rg_dvpas_hs_inv                :  1; /* [    1],        r/w,        0x0 */
            uint32_t rg_dvpas_vs_inv                :  1; /* [    2],        r/w,        0x0 */
            uint32_t rg_dvpas_da_order              :  1; /* [    3],        r/w,        0x0 */
            uint32_t reserved_4_15                  : 12; /* [15: 4],       rsvd,        0x0 */
            uint32_t rg_dvpas_fifo_th               : 11; /* [26:16],        r/w,        0x0 */
            uint32_t reserved_27_31                 :  5; /* [31:27],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } config;

    /* 0x4  reserved */
    uint8_t RESERVED0x4[4];

    /* 0x8 : dvp2bus_src_sel_1 */
    union {
        struct {
            uint32_t rg_d2x_dvp_sel                 :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_31                  : 31; /* [31: 1],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } dvp2bus_src_sel_1;

    /* 0xC : snsr_ctrl */
    union {
        struct {
            uint32_t rg_snsr_rst                    :  1; /* [    0],        r/w,        0x0 */
            uint32_t rg_snsr_pwdn                   :  1; /* [    1],        r/w,        0x0 */
            uint32_t reserved_2_31                  : 30; /* [31: 2],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } snsr_ctrl;

    /* 0x10 : emi_misc */
    union {
        struct {
            uint32_t reg_x_wthre_pB                 :  2; /* [ 1: 0],        r/w,        0x0 */
            uint32_t reserved_2_3                   :  2; /* [ 3: 2],       rsvd,        0x0 */
            uint32_t reg_sf_harb_mode               :  1; /* [    4],        r/w,        0x0 */
            uint32_t reserved_5_31                  : 27; /* [31: 5],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } emi_misc;

    /* 0x14 : isp_id_yuv */
    union {
        struct {
            uint32_t reg_yuv_idgen_rst              :  1; /* [    0],        w1p,        0x0 */
            uint32_t reg_yuv_idgen_edge             :  1; /* [    1],        r/w,        0x1 */
            uint32_t reserved_2_15                  : 14; /* [15: 2],       rsvd,        0x0 */
            uint32_t reg_yuv_idgen_cnt_incr         : 16; /* [31:16],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } isp_id_yuv;

};

typedef volatile struct dvp_misc_reg dvp_misc_reg_t;


#endif  /* __DVP_MISC_REG_H__ */
