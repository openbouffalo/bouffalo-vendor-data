/**
  ******************************************************************************
  * @file    isp_gamma_reg.h
  * @version V1.2
  * @date    2021-07-15
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
#ifndef  __ISP_GAMMA_REG_H__
#define  __ISP_GAMMA_REG_H__

#include "bl808.h"

/* 0x700 : GAMMA_CRUVE_1 */
#define ISP_GAMMA_GAMMA_CRUVE_1_OFFSET                          (0x700)
#define ISP_GAMMA_C0_PRE                                        ISP_GAMMA_C0_PRE
#define ISP_GAMMA_C0_PRE_POS                                    (0U)
#define ISP_GAMMA_C0_PRE_LEN                                    (8U)
#define ISP_GAMMA_C0_PRE_MSK                                    (((1U<<ISP_GAMMA_C0_PRE_LEN)-1)<<ISP_GAMMA_C0_PRE_POS)
#define ISP_GAMMA_C0_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C0_PRE_LEN)-1)<<ISP_GAMMA_C0_PRE_POS))
#define ISP_GAMMA_C1_PRE                                        ISP_GAMMA_C1_PRE
#define ISP_GAMMA_C1_PRE_POS                                    (8U)
#define ISP_GAMMA_C1_PRE_LEN                                    (8U)
#define ISP_GAMMA_C1_PRE_MSK                                    (((1U<<ISP_GAMMA_C1_PRE_LEN)-1)<<ISP_GAMMA_C1_PRE_POS)
#define ISP_GAMMA_C1_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C1_PRE_LEN)-1)<<ISP_GAMMA_C1_PRE_POS))
#define ISP_GAMMA_C2_PRE                                        ISP_GAMMA_C2_PRE
#define ISP_GAMMA_C2_PRE_POS                                    (16U)
#define ISP_GAMMA_C2_PRE_LEN                                    (8U)
#define ISP_GAMMA_C2_PRE_MSK                                    (((1U<<ISP_GAMMA_C2_PRE_LEN)-1)<<ISP_GAMMA_C2_PRE_POS)
#define ISP_GAMMA_C2_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C2_PRE_LEN)-1)<<ISP_GAMMA_C2_PRE_POS))
#define ISP_GAMMA_C3_PRE                                        ISP_GAMMA_C3_PRE
#define ISP_GAMMA_C3_PRE_POS                                    (24U)
#define ISP_GAMMA_C3_PRE_LEN                                    (8U)
#define ISP_GAMMA_C3_PRE_MSK                                    (((1U<<ISP_GAMMA_C3_PRE_LEN)-1)<<ISP_GAMMA_C3_PRE_POS)
#define ISP_GAMMA_C3_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C3_PRE_LEN)-1)<<ISP_GAMMA_C3_PRE_POS))

/* 0x704 : GAMMA_CRUVE_2 */
#define ISP_GAMMA_GAMMA_CRUVE_2_OFFSET                          (0x704)
#define ISP_GAMMA_C4_PRE                                        ISP_GAMMA_C4_PRE
#define ISP_GAMMA_C4_PRE_POS                                    (0U)
#define ISP_GAMMA_C4_PRE_LEN                                    (8U)
#define ISP_GAMMA_C4_PRE_MSK                                    (((1U<<ISP_GAMMA_C4_PRE_LEN)-1)<<ISP_GAMMA_C4_PRE_POS)
#define ISP_GAMMA_C4_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C4_PRE_LEN)-1)<<ISP_GAMMA_C4_PRE_POS))
#define ISP_GAMMA_C5_PRE                                        ISP_GAMMA_C5_PRE
#define ISP_GAMMA_C5_PRE_POS                                    (8U)
#define ISP_GAMMA_C5_PRE_LEN                                    (8U)
#define ISP_GAMMA_C5_PRE_MSK                                    (((1U<<ISP_GAMMA_C5_PRE_LEN)-1)<<ISP_GAMMA_C5_PRE_POS)
#define ISP_GAMMA_C5_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C5_PRE_LEN)-1)<<ISP_GAMMA_C5_PRE_POS))
#define ISP_GAMMA_C6_PRE                                        ISP_GAMMA_C6_PRE
#define ISP_GAMMA_C6_PRE_POS                                    (16U)
#define ISP_GAMMA_C6_PRE_LEN                                    (8U)
#define ISP_GAMMA_C6_PRE_MSK                                    (((1U<<ISP_GAMMA_C6_PRE_LEN)-1)<<ISP_GAMMA_C6_PRE_POS)
#define ISP_GAMMA_C6_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C6_PRE_LEN)-1)<<ISP_GAMMA_C6_PRE_POS))
#define ISP_GAMMA_C7_PRE                                        ISP_GAMMA_C7_PRE
#define ISP_GAMMA_C7_PRE_POS                                    (24U)
#define ISP_GAMMA_C7_PRE_LEN                                    (8U)
#define ISP_GAMMA_C7_PRE_MSK                                    (((1U<<ISP_GAMMA_C7_PRE_LEN)-1)<<ISP_GAMMA_C7_PRE_POS)
#define ISP_GAMMA_C7_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C7_PRE_LEN)-1)<<ISP_GAMMA_C7_PRE_POS))

/* 0x708 : GAMMA_CRUVE_3 */
#define ISP_GAMMA_GAMMA_CRUVE_3_OFFSET                          (0x708)
#define ISP_GAMMA_C8_PRE                                        ISP_GAMMA_C8_PRE
#define ISP_GAMMA_C8_PRE_POS                                    (0U)
#define ISP_GAMMA_C8_PRE_LEN                                    (8U)
#define ISP_GAMMA_C8_PRE_MSK                                    (((1U<<ISP_GAMMA_C8_PRE_LEN)-1)<<ISP_GAMMA_C8_PRE_POS)
#define ISP_GAMMA_C8_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C8_PRE_LEN)-1)<<ISP_GAMMA_C8_PRE_POS))
#define ISP_GAMMA_C9_PRE                                        ISP_GAMMA_C9_PRE
#define ISP_GAMMA_C9_PRE_POS                                    (8U)
#define ISP_GAMMA_C9_PRE_LEN                                    (8U)
#define ISP_GAMMA_C9_PRE_MSK                                    (((1U<<ISP_GAMMA_C9_PRE_LEN)-1)<<ISP_GAMMA_C9_PRE_POS)
#define ISP_GAMMA_C9_PRE_UMSK                                   (~(((1U<<ISP_GAMMA_C9_PRE_LEN)-1)<<ISP_GAMMA_C9_PRE_POS))
#define ISP_GAMMA_C10_PRE                                       ISP_GAMMA_C10_PRE
#define ISP_GAMMA_C10_PRE_POS                                   (16U)
#define ISP_GAMMA_C10_PRE_LEN                                   (8U)
#define ISP_GAMMA_C10_PRE_MSK                                   (((1U<<ISP_GAMMA_C10_PRE_LEN)-1)<<ISP_GAMMA_C10_PRE_POS)
#define ISP_GAMMA_C10_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C10_PRE_LEN)-1)<<ISP_GAMMA_C10_PRE_POS))
#define ISP_GAMMA_C11_PRE                                       ISP_GAMMA_C11_PRE
#define ISP_GAMMA_C11_PRE_POS                                   (24U)
#define ISP_GAMMA_C11_PRE_LEN                                   (8U)
#define ISP_GAMMA_C11_PRE_MSK                                   (((1U<<ISP_GAMMA_C11_PRE_LEN)-1)<<ISP_GAMMA_C11_PRE_POS)
#define ISP_GAMMA_C11_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C11_PRE_LEN)-1)<<ISP_GAMMA_C11_PRE_POS))

/* 0x70C : GAMMA_CRUVE_4 */
#define ISP_GAMMA_GAMMA_CRUVE_4_OFFSET                          (0x70C)
#define ISP_GAMMA_C12_PRE                                       ISP_GAMMA_C12_PRE
#define ISP_GAMMA_C12_PRE_POS                                   (0U)
#define ISP_GAMMA_C12_PRE_LEN                                   (8U)
#define ISP_GAMMA_C12_PRE_MSK                                   (((1U<<ISP_GAMMA_C12_PRE_LEN)-1)<<ISP_GAMMA_C12_PRE_POS)
#define ISP_GAMMA_C12_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C12_PRE_LEN)-1)<<ISP_GAMMA_C12_PRE_POS))
#define ISP_GAMMA_C13_PRE                                       ISP_GAMMA_C13_PRE
#define ISP_GAMMA_C13_PRE_POS                                   (8U)
#define ISP_GAMMA_C13_PRE_LEN                                   (8U)
#define ISP_GAMMA_C13_PRE_MSK                                   (((1U<<ISP_GAMMA_C13_PRE_LEN)-1)<<ISP_GAMMA_C13_PRE_POS)
#define ISP_GAMMA_C13_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C13_PRE_LEN)-1)<<ISP_GAMMA_C13_PRE_POS))
#define ISP_GAMMA_C14_PRE                                       ISP_GAMMA_C14_PRE
#define ISP_GAMMA_C14_PRE_POS                                   (16U)
#define ISP_GAMMA_C14_PRE_LEN                                   (8U)
#define ISP_GAMMA_C14_PRE_MSK                                   (((1U<<ISP_GAMMA_C14_PRE_LEN)-1)<<ISP_GAMMA_C14_PRE_POS)
#define ISP_GAMMA_C14_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C14_PRE_LEN)-1)<<ISP_GAMMA_C14_PRE_POS))
#define ISP_GAMMA_C15_PRE                                       ISP_GAMMA_C15_PRE
#define ISP_GAMMA_C15_PRE_POS                                   (24U)
#define ISP_GAMMA_C15_PRE_LEN                                   (8U)
#define ISP_GAMMA_C15_PRE_MSK                                   (((1U<<ISP_GAMMA_C15_PRE_LEN)-1)<<ISP_GAMMA_C15_PRE_POS)
#define ISP_GAMMA_C15_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C15_PRE_LEN)-1)<<ISP_GAMMA_C15_PRE_POS))

/* 0x710 : GAMMA_CRUVE_5 */
#define ISP_GAMMA_GAMMA_CRUVE_5_OFFSET                          (0x710)
#define ISP_GAMMA_C16_PRE                                       ISP_GAMMA_C16_PRE
#define ISP_GAMMA_C16_PRE_POS                                   (0U)
#define ISP_GAMMA_C16_PRE_LEN                                   (8U)
#define ISP_GAMMA_C16_PRE_MSK                                   (((1U<<ISP_GAMMA_C16_PRE_LEN)-1)<<ISP_GAMMA_C16_PRE_POS)
#define ISP_GAMMA_C16_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C16_PRE_LEN)-1)<<ISP_GAMMA_C16_PRE_POS))
#define ISP_GAMMA_C17_PRE                                       ISP_GAMMA_C17_PRE
#define ISP_GAMMA_C17_PRE_POS                                   (8U)
#define ISP_GAMMA_C17_PRE_LEN                                   (8U)
#define ISP_GAMMA_C17_PRE_MSK                                   (((1U<<ISP_GAMMA_C17_PRE_LEN)-1)<<ISP_GAMMA_C17_PRE_POS)
#define ISP_GAMMA_C17_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C17_PRE_LEN)-1)<<ISP_GAMMA_C17_PRE_POS))
#define ISP_GAMMA_C18_PRE                                       ISP_GAMMA_C18_PRE
#define ISP_GAMMA_C18_PRE_POS                                   (16U)
#define ISP_GAMMA_C18_PRE_LEN                                   (8U)
#define ISP_GAMMA_C18_PRE_MSK                                   (((1U<<ISP_GAMMA_C18_PRE_LEN)-1)<<ISP_GAMMA_C18_PRE_POS)
#define ISP_GAMMA_C18_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C18_PRE_LEN)-1)<<ISP_GAMMA_C18_PRE_POS))
#define ISP_GAMMA_C19_PRE                                       ISP_GAMMA_C19_PRE
#define ISP_GAMMA_C19_PRE_POS                                   (24U)
#define ISP_GAMMA_C19_PRE_LEN                                   (8U)
#define ISP_GAMMA_C19_PRE_MSK                                   (((1U<<ISP_GAMMA_C19_PRE_LEN)-1)<<ISP_GAMMA_C19_PRE_POS)
#define ISP_GAMMA_C19_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C19_PRE_LEN)-1)<<ISP_GAMMA_C19_PRE_POS))

/* 0x714 : GAMMA_CRUVE_6 */
#define ISP_GAMMA_GAMMA_CRUVE_6_OFFSET                          (0x714)
#define ISP_GAMMA_C20_PRE                                       ISP_GAMMA_C20_PRE
#define ISP_GAMMA_C20_PRE_POS                                   (0U)
#define ISP_GAMMA_C20_PRE_LEN                                   (8U)
#define ISP_GAMMA_C20_PRE_MSK                                   (((1U<<ISP_GAMMA_C20_PRE_LEN)-1)<<ISP_GAMMA_C20_PRE_POS)
#define ISP_GAMMA_C20_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C20_PRE_LEN)-1)<<ISP_GAMMA_C20_PRE_POS))
#define ISP_GAMMA_C21_PRE                                       ISP_GAMMA_C21_PRE
#define ISP_GAMMA_C21_PRE_POS                                   (8U)
#define ISP_GAMMA_C21_PRE_LEN                                   (8U)
#define ISP_GAMMA_C21_PRE_MSK                                   (((1U<<ISP_GAMMA_C21_PRE_LEN)-1)<<ISP_GAMMA_C21_PRE_POS)
#define ISP_GAMMA_C21_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C21_PRE_LEN)-1)<<ISP_GAMMA_C21_PRE_POS))
#define ISP_GAMMA_C22_PRE                                       ISP_GAMMA_C22_PRE
#define ISP_GAMMA_C22_PRE_POS                                   (16U)
#define ISP_GAMMA_C22_PRE_LEN                                   (8U)
#define ISP_GAMMA_C22_PRE_MSK                                   (((1U<<ISP_GAMMA_C22_PRE_LEN)-1)<<ISP_GAMMA_C22_PRE_POS)
#define ISP_GAMMA_C22_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C22_PRE_LEN)-1)<<ISP_GAMMA_C22_PRE_POS))
#define ISP_GAMMA_C23_PRE                                       ISP_GAMMA_C23_PRE
#define ISP_GAMMA_C23_PRE_POS                                   (24U)
#define ISP_GAMMA_C23_PRE_LEN                                   (8U)
#define ISP_GAMMA_C23_PRE_MSK                                   (((1U<<ISP_GAMMA_C23_PRE_LEN)-1)<<ISP_GAMMA_C23_PRE_POS)
#define ISP_GAMMA_C23_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C23_PRE_LEN)-1)<<ISP_GAMMA_C23_PRE_POS))

/* 0x718 : GAMMA_CRUVE_7 */
#define ISP_GAMMA_GAMMA_CRUVE_7_OFFSET                          (0x718)
#define ISP_GAMMA_C24_PRE                                       ISP_GAMMA_C24_PRE
#define ISP_GAMMA_C24_PRE_POS                                   (0U)
#define ISP_GAMMA_C24_PRE_LEN                                   (8U)
#define ISP_GAMMA_C24_PRE_MSK                                   (((1U<<ISP_GAMMA_C24_PRE_LEN)-1)<<ISP_GAMMA_C24_PRE_POS)
#define ISP_GAMMA_C24_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C24_PRE_LEN)-1)<<ISP_GAMMA_C24_PRE_POS))
#define ISP_GAMMA_C25_PRE                                       ISP_GAMMA_C25_PRE
#define ISP_GAMMA_C25_PRE_POS                                   (8U)
#define ISP_GAMMA_C25_PRE_LEN                                   (8U)
#define ISP_GAMMA_C25_PRE_MSK                                   (((1U<<ISP_GAMMA_C25_PRE_LEN)-1)<<ISP_GAMMA_C25_PRE_POS)
#define ISP_GAMMA_C25_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C25_PRE_LEN)-1)<<ISP_GAMMA_C25_PRE_POS))
#define ISP_GAMMA_C26_PRE                                       ISP_GAMMA_C26_PRE
#define ISP_GAMMA_C26_PRE_POS                                   (16U)
#define ISP_GAMMA_C26_PRE_LEN                                   (8U)
#define ISP_GAMMA_C26_PRE_MSK                                   (((1U<<ISP_GAMMA_C26_PRE_LEN)-1)<<ISP_GAMMA_C26_PRE_POS)
#define ISP_GAMMA_C26_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C26_PRE_LEN)-1)<<ISP_GAMMA_C26_PRE_POS))
#define ISP_GAMMA_C27_PRE                                       ISP_GAMMA_C27_PRE
#define ISP_GAMMA_C27_PRE_POS                                   (24U)
#define ISP_GAMMA_C27_PRE_LEN                                   (8U)
#define ISP_GAMMA_C27_PRE_MSK                                   (((1U<<ISP_GAMMA_C27_PRE_LEN)-1)<<ISP_GAMMA_C27_PRE_POS)
#define ISP_GAMMA_C27_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C27_PRE_LEN)-1)<<ISP_GAMMA_C27_PRE_POS))

/* 0x71C : GAMMA_CRUVE_8 */
#define ISP_GAMMA_GAMMA_CRUVE_8_OFFSET                          (0x71C)
#define ISP_GAMMA_C28_PRE                                       ISP_GAMMA_C28_PRE
#define ISP_GAMMA_C28_PRE_POS                                   (0U)
#define ISP_GAMMA_C28_PRE_LEN                                   (8U)
#define ISP_GAMMA_C28_PRE_MSK                                   (((1U<<ISP_GAMMA_C28_PRE_LEN)-1)<<ISP_GAMMA_C28_PRE_POS)
#define ISP_GAMMA_C28_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C28_PRE_LEN)-1)<<ISP_GAMMA_C28_PRE_POS))
#define ISP_GAMMA_C29_PRE                                       ISP_GAMMA_C29_PRE
#define ISP_GAMMA_C29_PRE_POS                                   (8U)
#define ISP_GAMMA_C29_PRE_LEN                                   (8U)
#define ISP_GAMMA_C29_PRE_MSK                                   (((1U<<ISP_GAMMA_C29_PRE_LEN)-1)<<ISP_GAMMA_C29_PRE_POS)
#define ISP_GAMMA_C29_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C29_PRE_LEN)-1)<<ISP_GAMMA_C29_PRE_POS))
#define ISP_GAMMA_C30_PRE                                       ISP_GAMMA_C30_PRE
#define ISP_GAMMA_C30_PRE_POS                                   (16U)
#define ISP_GAMMA_C30_PRE_LEN                                   (8U)
#define ISP_GAMMA_C30_PRE_MSK                                   (((1U<<ISP_GAMMA_C30_PRE_LEN)-1)<<ISP_GAMMA_C30_PRE_POS)
#define ISP_GAMMA_C30_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C30_PRE_LEN)-1)<<ISP_GAMMA_C30_PRE_POS))
#define ISP_GAMMA_C31_PRE                                       ISP_GAMMA_C31_PRE
#define ISP_GAMMA_C31_PRE_POS                                   (24U)
#define ISP_GAMMA_C31_PRE_LEN                                   (8U)
#define ISP_GAMMA_C31_PRE_MSK                                   (((1U<<ISP_GAMMA_C31_PRE_LEN)-1)<<ISP_GAMMA_C31_PRE_POS)
#define ISP_GAMMA_C31_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C31_PRE_LEN)-1)<<ISP_GAMMA_C31_PRE_POS))

/* 0x720 : GAMMA_CRUVE_9 */
#define ISP_GAMMA_GAMMA_CRUVE_9_OFFSET                          (0x720)
#define ISP_GAMMA_C32_PRE                                       ISP_GAMMA_C32_PRE
#define ISP_GAMMA_C32_PRE_POS                                   (0U)
#define ISP_GAMMA_C32_PRE_LEN                                   (8U)
#define ISP_GAMMA_C32_PRE_MSK                                   (((1U<<ISP_GAMMA_C32_PRE_LEN)-1)<<ISP_GAMMA_C32_PRE_POS)
#define ISP_GAMMA_C32_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C32_PRE_LEN)-1)<<ISP_GAMMA_C32_PRE_POS))
#define ISP_GAMMA_C33_PRE                                       ISP_GAMMA_C33_PRE
#define ISP_GAMMA_C33_PRE_POS                                   (8U)
#define ISP_GAMMA_C33_PRE_LEN                                   (8U)
#define ISP_GAMMA_C33_PRE_MSK                                   (((1U<<ISP_GAMMA_C33_PRE_LEN)-1)<<ISP_GAMMA_C33_PRE_POS)
#define ISP_GAMMA_C33_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C33_PRE_LEN)-1)<<ISP_GAMMA_C33_PRE_POS))
#define ISP_GAMMA_C34_PRE                                       ISP_GAMMA_C34_PRE
#define ISP_GAMMA_C34_PRE_POS                                   (16U)
#define ISP_GAMMA_C34_PRE_LEN                                   (8U)
#define ISP_GAMMA_C34_PRE_MSK                                   (((1U<<ISP_GAMMA_C34_PRE_LEN)-1)<<ISP_GAMMA_C34_PRE_POS)
#define ISP_GAMMA_C34_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C34_PRE_LEN)-1)<<ISP_GAMMA_C34_PRE_POS))
#define ISP_GAMMA_C35_PRE                                       ISP_GAMMA_C35_PRE
#define ISP_GAMMA_C35_PRE_POS                                   (24U)
#define ISP_GAMMA_C35_PRE_LEN                                   (8U)
#define ISP_GAMMA_C35_PRE_MSK                                   (((1U<<ISP_GAMMA_C35_PRE_LEN)-1)<<ISP_GAMMA_C35_PRE_POS)
#define ISP_GAMMA_C35_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C35_PRE_LEN)-1)<<ISP_GAMMA_C35_PRE_POS))

/* 0x724 : GAMMA_CRUVE_10 */
#define ISP_GAMMA_GAMMA_CRUVE_10_OFFSET                         (0x724)
#define ISP_GAMMA_C36_PRE                                       ISP_GAMMA_C36_PRE
#define ISP_GAMMA_C36_PRE_POS                                   (0U)
#define ISP_GAMMA_C36_PRE_LEN                                   (8U)
#define ISP_GAMMA_C36_PRE_MSK                                   (((1U<<ISP_GAMMA_C36_PRE_LEN)-1)<<ISP_GAMMA_C36_PRE_POS)
#define ISP_GAMMA_C36_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C36_PRE_LEN)-1)<<ISP_GAMMA_C36_PRE_POS))
#define ISP_GAMMA_C37_PRE                                       ISP_GAMMA_C37_PRE
#define ISP_GAMMA_C37_PRE_POS                                   (8U)
#define ISP_GAMMA_C37_PRE_LEN                                   (8U)
#define ISP_GAMMA_C37_PRE_MSK                                   (((1U<<ISP_GAMMA_C37_PRE_LEN)-1)<<ISP_GAMMA_C37_PRE_POS)
#define ISP_GAMMA_C37_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C37_PRE_LEN)-1)<<ISP_GAMMA_C37_PRE_POS))
#define ISP_GAMMA_C38_PRE                                       ISP_GAMMA_C38_PRE
#define ISP_GAMMA_C38_PRE_POS                                   (16U)
#define ISP_GAMMA_C38_PRE_LEN                                   (8U)
#define ISP_GAMMA_C38_PRE_MSK                                   (((1U<<ISP_GAMMA_C38_PRE_LEN)-1)<<ISP_GAMMA_C38_PRE_POS)
#define ISP_GAMMA_C38_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C38_PRE_LEN)-1)<<ISP_GAMMA_C38_PRE_POS))
#define ISP_GAMMA_C39_PRE                                       ISP_GAMMA_C39_PRE
#define ISP_GAMMA_C39_PRE_POS                                   (24U)
#define ISP_GAMMA_C39_PRE_LEN                                   (8U)
#define ISP_GAMMA_C39_PRE_MSK                                   (((1U<<ISP_GAMMA_C39_PRE_LEN)-1)<<ISP_GAMMA_C39_PRE_POS)
#define ISP_GAMMA_C39_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C39_PRE_LEN)-1)<<ISP_GAMMA_C39_PRE_POS))

/* 0x728 : GAMMA_CRUVE_11 */
#define ISP_GAMMA_GAMMA_CRUVE_11_OFFSET                         (0x728)
#define ISP_GAMMA_C40_PRE                                       ISP_GAMMA_C40_PRE
#define ISP_GAMMA_C40_PRE_POS                                   (0U)
#define ISP_GAMMA_C40_PRE_LEN                                   (8U)
#define ISP_GAMMA_C40_PRE_MSK                                   (((1U<<ISP_GAMMA_C40_PRE_LEN)-1)<<ISP_GAMMA_C40_PRE_POS)
#define ISP_GAMMA_C40_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C40_PRE_LEN)-1)<<ISP_GAMMA_C40_PRE_POS))
#define ISP_GAMMA_C41_PRE                                       ISP_GAMMA_C41_PRE
#define ISP_GAMMA_C41_PRE_POS                                   (8U)
#define ISP_GAMMA_C41_PRE_LEN                                   (8U)
#define ISP_GAMMA_C41_PRE_MSK                                   (((1U<<ISP_GAMMA_C41_PRE_LEN)-1)<<ISP_GAMMA_C41_PRE_POS)
#define ISP_GAMMA_C41_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C41_PRE_LEN)-1)<<ISP_GAMMA_C41_PRE_POS))
#define ISP_GAMMA_C42_PRE                                       ISP_GAMMA_C42_PRE
#define ISP_GAMMA_C42_PRE_POS                                   (16U)
#define ISP_GAMMA_C42_PRE_LEN                                   (8U)
#define ISP_GAMMA_C42_PRE_MSK                                   (((1U<<ISP_GAMMA_C42_PRE_LEN)-1)<<ISP_GAMMA_C42_PRE_POS)
#define ISP_GAMMA_C42_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C42_PRE_LEN)-1)<<ISP_GAMMA_C42_PRE_POS))
#define ISP_GAMMA_C43_PRE                                       ISP_GAMMA_C43_PRE
#define ISP_GAMMA_C43_PRE_POS                                   (24U)
#define ISP_GAMMA_C43_PRE_LEN                                   (8U)
#define ISP_GAMMA_C43_PRE_MSK                                   (((1U<<ISP_GAMMA_C43_PRE_LEN)-1)<<ISP_GAMMA_C43_PRE_POS)
#define ISP_GAMMA_C43_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C43_PRE_LEN)-1)<<ISP_GAMMA_C43_PRE_POS))

/* 0x72C : GAMMA_CRUVE_12 */
#define ISP_GAMMA_GAMMA_CRUVE_12_OFFSET                         (0x72C)
#define ISP_GAMMA_C44_PRE                                       ISP_GAMMA_C44_PRE
#define ISP_GAMMA_C44_PRE_POS                                   (0U)
#define ISP_GAMMA_C44_PRE_LEN                                   (8U)
#define ISP_GAMMA_C44_PRE_MSK                                   (((1U<<ISP_GAMMA_C44_PRE_LEN)-1)<<ISP_GAMMA_C44_PRE_POS)
#define ISP_GAMMA_C44_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C44_PRE_LEN)-1)<<ISP_GAMMA_C44_PRE_POS))
#define ISP_GAMMA_C45_PRE                                       ISP_GAMMA_C45_PRE
#define ISP_GAMMA_C45_PRE_POS                                   (8U)
#define ISP_GAMMA_C45_PRE_LEN                                   (8U)
#define ISP_GAMMA_C45_PRE_MSK                                   (((1U<<ISP_GAMMA_C45_PRE_LEN)-1)<<ISP_GAMMA_C45_PRE_POS)
#define ISP_GAMMA_C45_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C45_PRE_LEN)-1)<<ISP_GAMMA_C45_PRE_POS))
#define ISP_GAMMA_C46_PRE                                       ISP_GAMMA_C46_PRE
#define ISP_GAMMA_C46_PRE_POS                                   (16U)
#define ISP_GAMMA_C46_PRE_LEN                                   (8U)
#define ISP_GAMMA_C46_PRE_MSK                                   (((1U<<ISP_GAMMA_C46_PRE_LEN)-1)<<ISP_GAMMA_C46_PRE_POS)
#define ISP_GAMMA_C46_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C46_PRE_LEN)-1)<<ISP_GAMMA_C46_PRE_POS))
#define ISP_GAMMA_C47_PRE                                       ISP_GAMMA_C47_PRE
#define ISP_GAMMA_C47_PRE_POS                                   (24U)
#define ISP_GAMMA_C47_PRE_LEN                                   (8U)
#define ISP_GAMMA_C47_PRE_MSK                                   (((1U<<ISP_GAMMA_C47_PRE_LEN)-1)<<ISP_GAMMA_C47_PRE_POS)
#define ISP_GAMMA_C47_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C47_PRE_LEN)-1)<<ISP_GAMMA_C47_PRE_POS))

/* 0x730 : GAMMA_CRUVE_13 */
#define ISP_GAMMA_GAMMA_CRUVE_13_OFFSET                         (0x730)
#define ISP_GAMMA_C48_PRE                                       ISP_GAMMA_C48_PRE
#define ISP_GAMMA_C48_PRE_POS                                   (0U)
#define ISP_GAMMA_C48_PRE_LEN                                   (8U)
#define ISP_GAMMA_C48_PRE_MSK                                   (((1U<<ISP_GAMMA_C48_PRE_LEN)-1)<<ISP_GAMMA_C48_PRE_POS)
#define ISP_GAMMA_C48_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C48_PRE_LEN)-1)<<ISP_GAMMA_C48_PRE_POS))
#define ISP_GAMMA_C49_PRE                                       ISP_GAMMA_C49_PRE
#define ISP_GAMMA_C49_PRE_POS                                   (8U)
#define ISP_GAMMA_C49_PRE_LEN                                   (8U)
#define ISP_GAMMA_C49_PRE_MSK                                   (((1U<<ISP_GAMMA_C49_PRE_LEN)-1)<<ISP_GAMMA_C49_PRE_POS)
#define ISP_GAMMA_C49_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C49_PRE_LEN)-1)<<ISP_GAMMA_C49_PRE_POS))
#define ISP_GAMMA_C50_PRE                                       ISP_GAMMA_C50_PRE
#define ISP_GAMMA_C50_PRE_POS                                   (16U)
#define ISP_GAMMA_C50_PRE_LEN                                   (8U)
#define ISP_GAMMA_C50_PRE_MSK                                   (((1U<<ISP_GAMMA_C50_PRE_LEN)-1)<<ISP_GAMMA_C50_PRE_POS)
#define ISP_GAMMA_C50_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C50_PRE_LEN)-1)<<ISP_GAMMA_C50_PRE_POS))
#define ISP_GAMMA_C51_PRE                                       ISP_GAMMA_C51_PRE
#define ISP_GAMMA_C51_PRE_POS                                   (24U)
#define ISP_GAMMA_C51_PRE_LEN                                   (8U)
#define ISP_GAMMA_C51_PRE_MSK                                   (((1U<<ISP_GAMMA_C51_PRE_LEN)-1)<<ISP_GAMMA_C51_PRE_POS)
#define ISP_GAMMA_C51_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C51_PRE_LEN)-1)<<ISP_GAMMA_C51_PRE_POS))

/* 0x734 : GAMMA_CRUVE_14 */
#define ISP_GAMMA_GAMMA_CRUVE_14_OFFSET                         (0x734)
#define ISP_GAMMA_C52_PRE                                       ISP_GAMMA_C52_PRE
#define ISP_GAMMA_C52_PRE_POS                                   (0U)
#define ISP_GAMMA_C52_PRE_LEN                                   (8U)
#define ISP_GAMMA_C52_PRE_MSK                                   (((1U<<ISP_GAMMA_C52_PRE_LEN)-1)<<ISP_GAMMA_C52_PRE_POS)
#define ISP_GAMMA_C52_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C52_PRE_LEN)-1)<<ISP_GAMMA_C52_PRE_POS))
#define ISP_GAMMA_C53_PRE                                       ISP_GAMMA_C53_PRE
#define ISP_GAMMA_C53_PRE_POS                                   (8U)
#define ISP_GAMMA_C53_PRE_LEN                                   (8U)
#define ISP_GAMMA_C53_PRE_MSK                                   (((1U<<ISP_GAMMA_C53_PRE_LEN)-1)<<ISP_GAMMA_C53_PRE_POS)
#define ISP_GAMMA_C53_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C53_PRE_LEN)-1)<<ISP_GAMMA_C53_PRE_POS))
#define ISP_GAMMA_C54_PRE                                       ISP_GAMMA_C54_PRE
#define ISP_GAMMA_C54_PRE_POS                                   (16U)
#define ISP_GAMMA_C54_PRE_LEN                                   (8U)
#define ISP_GAMMA_C54_PRE_MSK                                   (((1U<<ISP_GAMMA_C54_PRE_LEN)-1)<<ISP_GAMMA_C54_PRE_POS)
#define ISP_GAMMA_C54_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C54_PRE_LEN)-1)<<ISP_GAMMA_C54_PRE_POS))
#define ISP_GAMMA_C55_PRE                                       ISP_GAMMA_C55_PRE
#define ISP_GAMMA_C55_PRE_POS                                   (24U)
#define ISP_GAMMA_C55_PRE_LEN                                   (8U)
#define ISP_GAMMA_C55_PRE_MSK                                   (((1U<<ISP_GAMMA_C55_PRE_LEN)-1)<<ISP_GAMMA_C55_PRE_POS)
#define ISP_GAMMA_C55_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C55_PRE_LEN)-1)<<ISP_GAMMA_C55_PRE_POS))

/* 0x738 : GAMMA_CRUVE_15 */
#define ISP_GAMMA_GAMMA_CRUVE_15_OFFSET                         (0x738)
#define ISP_GAMMA_C56_PRE                                       ISP_GAMMA_C56_PRE
#define ISP_GAMMA_C56_PRE_POS                                   (0U)
#define ISP_GAMMA_C56_PRE_LEN                                   (8U)
#define ISP_GAMMA_C56_PRE_MSK                                   (((1U<<ISP_GAMMA_C56_PRE_LEN)-1)<<ISP_GAMMA_C56_PRE_POS)
#define ISP_GAMMA_C56_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C56_PRE_LEN)-1)<<ISP_GAMMA_C56_PRE_POS))
#define ISP_GAMMA_C57_PRE                                       ISP_GAMMA_C57_PRE
#define ISP_GAMMA_C57_PRE_POS                                   (8U)
#define ISP_GAMMA_C57_PRE_LEN                                   (8U)
#define ISP_GAMMA_C57_PRE_MSK                                   (((1U<<ISP_GAMMA_C57_PRE_LEN)-1)<<ISP_GAMMA_C57_PRE_POS)
#define ISP_GAMMA_C57_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C57_PRE_LEN)-1)<<ISP_GAMMA_C57_PRE_POS))
#define ISP_GAMMA_C58_PRE                                       ISP_GAMMA_C58_PRE
#define ISP_GAMMA_C58_PRE_POS                                   (16U)
#define ISP_GAMMA_C58_PRE_LEN                                   (8U)
#define ISP_GAMMA_C58_PRE_MSK                                   (((1U<<ISP_GAMMA_C58_PRE_LEN)-1)<<ISP_GAMMA_C58_PRE_POS)
#define ISP_GAMMA_C58_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C58_PRE_LEN)-1)<<ISP_GAMMA_C58_PRE_POS))
#define ISP_GAMMA_C59_PRE                                       ISP_GAMMA_C59_PRE
#define ISP_GAMMA_C59_PRE_POS                                   (24U)
#define ISP_GAMMA_C59_PRE_LEN                                   (8U)
#define ISP_GAMMA_C59_PRE_MSK                                   (((1U<<ISP_GAMMA_C59_PRE_LEN)-1)<<ISP_GAMMA_C59_PRE_POS)
#define ISP_GAMMA_C59_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C59_PRE_LEN)-1)<<ISP_GAMMA_C59_PRE_POS))

/* 0x73C : GAMMA_CRUVE_16 */
#define ISP_GAMMA_GAMMA_CRUVE_16_OFFSET                         (0x73C)
#define ISP_GAMMA_C60_PRE                                       ISP_GAMMA_C60_PRE
#define ISP_GAMMA_C60_PRE_POS                                   (0U)
#define ISP_GAMMA_C60_PRE_LEN                                   (8U)
#define ISP_GAMMA_C60_PRE_MSK                                   (((1U<<ISP_GAMMA_C60_PRE_LEN)-1)<<ISP_GAMMA_C60_PRE_POS)
#define ISP_GAMMA_C60_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C60_PRE_LEN)-1)<<ISP_GAMMA_C60_PRE_POS))
#define ISP_GAMMA_C61_PRE                                       ISP_GAMMA_C61_PRE
#define ISP_GAMMA_C61_PRE_POS                                   (8U)
#define ISP_GAMMA_C61_PRE_LEN                                   (8U)
#define ISP_GAMMA_C61_PRE_MSK                                   (((1U<<ISP_GAMMA_C61_PRE_LEN)-1)<<ISP_GAMMA_C61_PRE_POS)
#define ISP_GAMMA_C61_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C61_PRE_LEN)-1)<<ISP_GAMMA_C61_PRE_POS))
#define ISP_GAMMA_C62_PRE                                       ISP_GAMMA_C62_PRE
#define ISP_GAMMA_C62_PRE_POS                                   (16U)
#define ISP_GAMMA_C62_PRE_LEN                                   (8U)
#define ISP_GAMMA_C62_PRE_MSK                                   (((1U<<ISP_GAMMA_C62_PRE_LEN)-1)<<ISP_GAMMA_C62_PRE_POS)
#define ISP_GAMMA_C62_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C62_PRE_LEN)-1)<<ISP_GAMMA_C62_PRE_POS))
#define ISP_GAMMA_C63_PRE                                       ISP_GAMMA_C63_PRE
#define ISP_GAMMA_C63_PRE_POS                                   (24U)
#define ISP_GAMMA_C63_PRE_LEN                                   (8U)
#define ISP_GAMMA_C63_PRE_MSK                                   (((1U<<ISP_GAMMA_C63_PRE_LEN)-1)<<ISP_GAMMA_C63_PRE_POS)
#define ISP_GAMMA_C63_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C63_PRE_LEN)-1)<<ISP_GAMMA_C63_PRE_POS))

/* 0x740 : GAMMA_CRUVE_17 */
#define ISP_GAMMA_GAMMA_CRUVE_17_OFFSET                         (0x740)
#define ISP_GAMMA_C64_PRE                                       ISP_GAMMA_C64_PRE
#define ISP_GAMMA_C64_PRE_POS                                   (0U)
#define ISP_GAMMA_C64_PRE_LEN                                   (8U)
#define ISP_GAMMA_C64_PRE_MSK                                   (((1U<<ISP_GAMMA_C64_PRE_LEN)-1)<<ISP_GAMMA_C64_PRE_POS)
#define ISP_GAMMA_C64_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C64_PRE_LEN)-1)<<ISP_GAMMA_C64_PRE_POS))
#define ISP_GAMMA_C65_PRE                                       ISP_GAMMA_C65_PRE
#define ISP_GAMMA_C65_PRE_POS                                   (8U)
#define ISP_GAMMA_C65_PRE_LEN                                   (8U)
#define ISP_GAMMA_C65_PRE_MSK                                   (((1U<<ISP_GAMMA_C65_PRE_LEN)-1)<<ISP_GAMMA_C65_PRE_POS)
#define ISP_GAMMA_C65_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C65_PRE_LEN)-1)<<ISP_GAMMA_C65_PRE_POS))
#define ISP_GAMMA_C66_PRE                                       ISP_GAMMA_C66_PRE
#define ISP_GAMMA_C66_PRE_POS                                   (16U)
#define ISP_GAMMA_C66_PRE_LEN                                   (8U)
#define ISP_GAMMA_C66_PRE_MSK                                   (((1U<<ISP_GAMMA_C66_PRE_LEN)-1)<<ISP_GAMMA_C66_PRE_POS)
#define ISP_GAMMA_C66_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C66_PRE_LEN)-1)<<ISP_GAMMA_C66_PRE_POS))
#define ISP_GAMMA_C67_PRE                                       ISP_GAMMA_C67_PRE
#define ISP_GAMMA_C67_PRE_POS                                   (24U)
#define ISP_GAMMA_C67_PRE_LEN                                   (8U)
#define ISP_GAMMA_C67_PRE_MSK                                   (((1U<<ISP_GAMMA_C67_PRE_LEN)-1)<<ISP_GAMMA_C67_PRE_POS)
#define ISP_GAMMA_C67_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C67_PRE_LEN)-1)<<ISP_GAMMA_C67_PRE_POS))

/* 0x744 : GAMMA_CRUVE_18 */
#define ISP_GAMMA_GAMMA_CRUVE_18_OFFSET                         (0x744)
#define ISP_GAMMA_C68_PRE                                       ISP_GAMMA_C68_PRE
#define ISP_GAMMA_C68_PRE_POS                                   (0U)
#define ISP_GAMMA_C68_PRE_LEN                                   (8U)
#define ISP_GAMMA_C68_PRE_MSK                                   (((1U<<ISP_GAMMA_C68_PRE_LEN)-1)<<ISP_GAMMA_C68_PRE_POS)
#define ISP_GAMMA_C68_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C68_PRE_LEN)-1)<<ISP_GAMMA_C68_PRE_POS))
#define ISP_GAMMA_C69_PRE                                       ISP_GAMMA_C69_PRE
#define ISP_GAMMA_C69_PRE_POS                                   (8U)
#define ISP_GAMMA_C69_PRE_LEN                                   (8U)
#define ISP_GAMMA_C69_PRE_MSK                                   (((1U<<ISP_GAMMA_C69_PRE_LEN)-1)<<ISP_GAMMA_C69_PRE_POS)
#define ISP_GAMMA_C69_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C69_PRE_LEN)-1)<<ISP_GAMMA_C69_PRE_POS))
#define ISP_GAMMA_C70_PRE                                       ISP_GAMMA_C70_PRE
#define ISP_GAMMA_C70_PRE_POS                                   (16U)
#define ISP_GAMMA_C70_PRE_LEN                                   (8U)
#define ISP_GAMMA_C70_PRE_MSK                                   (((1U<<ISP_GAMMA_C70_PRE_LEN)-1)<<ISP_GAMMA_C70_PRE_POS)
#define ISP_GAMMA_C70_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C70_PRE_LEN)-1)<<ISP_GAMMA_C70_PRE_POS))
#define ISP_GAMMA_C71_PRE                                       ISP_GAMMA_C71_PRE
#define ISP_GAMMA_C71_PRE_POS                                   (24U)
#define ISP_GAMMA_C71_PRE_LEN                                   (8U)
#define ISP_GAMMA_C71_PRE_MSK                                   (((1U<<ISP_GAMMA_C71_PRE_LEN)-1)<<ISP_GAMMA_C71_PRE_POS)
#define ISP_GAMMA_C71_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C71_PRE_LEN)-1)<<ISP_GAMMA_C71_PRE_POS))

/* 0x748 : GAMMA_CRUVE_19 */
#define ISP_GAMMA_GAMMA_CRUVE_19_OFFSET                         (0x748)
#define ISP_GAMMA_C72_PRE                                       ISP_GAMMA_C72_PRE
#define ISP_GAMMA_C72_PRE_POS                                   (0U)
#define ISP_GAMMA_C72_PRE_LEN                                   (8U)
#define ISP_GAMMA_C72_PRE_MSK                                   (((1U<<ISP_GAMMA_C72_PRE_LEN)-1)<<ISP_GAMMA_C72_PRE_POS)
#define ISP_GAMMA_C72_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C72_PRE_LEN)-1)<<ISP_GAMMA_C72_PRE_POS))
#define ISP_GAMMA_C73_PRE                                       ISP_GAMMA_C73_PRE
#define ISP_GAMMA_C73_PRE_POS                                   (8U)
#define ISP_GAMMA_C73_PRE_LEN                                   (8U)
#define ISP_GAMMA_C73_PRE_MSK                                   (((1U<<ISP_GAMMA_C73_PRE_LEN)-1)<<ISP_GAMMA_C73_PRE_POS)
#define ISP_GAMMA_C73_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C73_PRE_LEN)-1)<<ISP_GAMMA_C73_PRE_POS))
#define ISP_GAMMA_C74_PRE                                       ISP_GAMMA_C74_PRE
#define ISP_GAMMA_C74_PRE_POS                                   (16U)
#define ISP_GAMMA_C74_PRE_LEN                                   (8U)
#define ISP_GAMMA_C74_PRE_MSK                                   (((1U<<ISP_GAMMA_C74_PRE_LEN)-1)<<ISP_GAMMA_C74_PRE_POS)
#define ISP_GAMMA_C74_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C74_PRE_LEN)-1)<<ISP_GAMMA_C74_PRE_POS))
#define ISP_GAMMA_C75_PRE                                       ISP_GAMMA_C75_PRE
#define ISP_GAMMA_C75_PRE_POS                                   (24U)
#define ISP_GAMMA_C75_PRE_LEN                                   (8U)
#define ISP_GAMMA_C75_PRE_MSK                                   (((1U<<ISP_GAMMA_C75_PRE_LEN)-1)<<ISP_GAMMA_C75_PRE_POS)
#define ISP_GAMMA_C75_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C75_PRE_LEN)-1)<<ISP_GAMMA_C75_PRE_POS))

/* 0x74C : GAMMA_CRUVE_20 */
#define ISP_GAMMA_GAMMA_CRUVE_20_OFFSET                         (0x74C)
#define ISP_GAMMA_C76_PRE                                       ISP_GAMMA_C76_PRE
#define ISP_GAMMA_C76_PRE_POS                                   (0U)
#define ISP_GAMMA_C76_PRE_LEN                                   (8U)
#define ISP_GAMMA_C76_PRE_MSK                                   (((1U<<ISP_GAMMA_C76_PRE_LEN)-1)<<ISP_GAMMA_C76_PRE_POS)
#define ISP_GAMMA_C76_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C76_PRE_LEN)-1)<<ISP_GAMMA_C76_PRE_POS))
#define ISP_GAMMA_C77_PRE                                       ISP_GAMMA_C77_PRE
#define ISP_GAMMA_C77_PRE_POS                                   (8U)
#define ISP_GAMMA_C77_PRE_LEN                                   (8U)
#define ISP_GAMMA_C77_PRE_MSK                                   (((1U<<ISP_GAMMA_C77_PRE_LEN)-1)<<ISP_GAMMA_C77_PRE_POS)
#define ISP_GAMMA_C77_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C77_PRE_LEN)-1)<<ISP_GAMMA_C77_PRE_POS))
#define ISP_GAMMA_C78_PRE                                       ISP_GAMMA_C78_PRE
#define ISP_GAMMA_C78_PRE_POS                                   (16U)
#define ISP_GAMMA_C78_PRE_LEN                                   (8U)
#define ISP_GAMMA_C78_PRE_MSK                                   (((1U<<ISP_GAMMA_C78_PRE_LEN)-1)<<ISP_GAMMA_C78_PRE_POS)
#define ISP_GAMMA_C78_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C78_PRE_LEN)-1)<<ISP_GAMMA_C78_PRE_POS))
#define ISP_GAMMA_C79_PRE                                       ISP_GAMMA_C79_PRE
#define ISP_GAMMA_C79_PRE_POS                                   (24U)
#define ISP_GAMMA_C79_PRE_LEN                                   (8U)
#define ISP_GAMMA_C79_PRE_MSK                                   (((1U<<ISP_GAMMA_C79_PRE_LEN)-1)<<ISP_GAMMA_C79_PRE_POS)
#define ISP_GAMMA_C79_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C79_PRE_LEN)-1)<<ISP_GAMMA_C79_PRE_POS))

/* 0x750 : GAMMA_CRUVE_21 */
#define ISP_GAMMA_GAMMA_CRUVE_21_OFFSET                         (0x750)
#define ISP_GAMMA_C80_PRE                                       ISP_GAMMA_C80_PRE
#define ISP_GAMMA_C80_PRE_POS                                   (0U)
#define ISP_GAMMA_C80_PRE_LEN                                   (8U)
#define ISP_GAMMA_C80_PRE_MSK                                   (((1U<<ISP_GAMMA_C80_PRE_LEN)-1)<<ISP_GAMMA_C80_PRE_POS)
#define ISP_GAMMA_C80_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C80_PRE_LEN)-1)<<ISP_GAMMA_C80_PRE_POS))
#define ISP_GAMMA_C81_PRE                                       ISP_GAMMA_C81_PRE
#define ISP_GAMMA_C81_PRE_POS                                   (8U)
#define ISP_GAMMA_C81_PRE_LEN                                   (8U)
#define ISP_GAMMA_C81_PRE_MSK                                   (((1U<<ISP_GAMMA_C81_PRE_LEN)-1)<<ISP_GAMMA_C81_PRE_POS)
#define ISP_GAMMA_C81_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C81_PRE_LEN)-1)<<ISP_GAMMA_C81_PRE_POS))
#define ISP_GAMMA_C82_PRE                                       ISP_GAMMA_C82_PRE
#define ISP_GAMMA_C82_PRE_POS                                   (16U)
#define ISP_GAMMA_C82_PRE_LEN                                   (8U)
#define ISP_GAMMA_C82_PRE_MSK                                   (((1U<<ISP_GAMMA_C82_PRE_LEN)-1)<<ISP_GAMMA_C82_PRE_POS)
#define ISP_GAMMA_C82_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C82_PRE_LEN)-1)<<ISP_GAMMA_C82_PRE_POS))
#define ISP_GAMMA_C83_PRE                                       ISP_GAMMA_C83_PRE
#define ISP_GAMMA_C83_PRE_POS                                   (24U)
#define ISP_GAMMA_C83_PRE_LEN                                   (8U)
#define ISP_GAMMA_C83_PRE_MSK                                   (((1U<<ISP_GAMMA_C83_PRE_LEN)-1)<<ISP_GAMMA_C83_PRE_POS)
#define ISP_GAMMA_C83_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C83_PRE_LEN)-1)<<ISP_GAMMA_C83_PRE_POS))

/* 0x754 : GAMMA_CRUVE_22 */
#define ISP_GAMMA_GAMMA_CRUVE_22_OFFSET                         (0x754)
#define ISP_GAMMA_C84_PRE                                       ISP_GAMMA_C84_PRE
#define ISP_GAMMA_C84_PRE_POS                                   (0U)
#define ISP_GAMMA_C84_PRE_LEN                                   (8U)
#define ISP_GAMMA_C84_PRE_MSK                                   (((1U<<ISP_GAMMA_C84_PRE_LEN)-1)<<ISP_GAMMA_C84_PRE_POS)
#define ISP_GAMMA_C84_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C84_PRE_LEN)-1)<<ISP_GAMMA_C84_PRE_POS))
#define ISP_GAMMA_C85_PRE                                       ISP_GAMMA_C85_PRE
#define ISP_GAMMA_C85_PRE_POS                                   (8U)
#define ISP_GAMMA_C85_PRE_LEN                                   (8U)
#define ISP_GAMMA_C85_PRE_MSK                                   (((1U<<ISP_GAMMA_C85_PRE_LEN)-1)<<ISP_GAMMA_C85_PRE_POS)
#define ISP_GAMMA_C85_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C85_PRE_LEN)-1)<<ISP_GAMMA_C85_PRE_POS))
#define ISP_GAMMA_C86_PRE                                       ISP_GAMMA_C86_PRE
#define ISP_GAMMA_C86_PRE_POS                                   (16U)
#define ISP_GAMMA_C86_PRE_LEN                                   (8U)
#define ISP_GAMMA_C86_PRE_MSK                                   (((1U<<ISP_GAMMA_C86_PRE_LEN)-1)<<ISP_GAMMA_C86_PRE_POS)
#define ISP_GAMMA_C86_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C86_PRE_LEN)-1)<<ISP_GAMMA_C86_PRE_POS))
#define ISP_GAMMA_C87_PRE                                       ISP_GAMMA_C87_PRE
#define ISP_GAMMA_C87_PRE_POS                                   (24U)
#define ISP_GAMMA_C87_PRE_LEN                                   (8U)
#define ISP_GAMMA_C87_PRE_MSK                                   (((1U<<ISP_GAMMA_C87_PRE_LEN)-1)<<ISP_GAMMA_C87_PRE_POS)
#define ISP_GAMMA_C87_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C87_PRE_LEN)-1)<<ISP_GAMMA_C87_PRE_POS))

/* 0x758 : GAMMA_CRUVE_23 */
#define ISP_GAMMA_GAMMA_CRUVE_23_OFFSET                         (0x758)
#define ISP_GAMMA_C88_PRE                                       ISP_GAMMA_C88_PRE
#define ISP_GAMMA_C88_PRE_POS                                   (0U)
#define ISP_GAMMA_C88_PRE_LEN                                   (8U)
#define ISP_GAMMA_C88_PRE_MSK                                   (((1U<<ISP_GAMMA_C88_PRE_LEN)-1)<<ISP_GAMMA_C88_PRE_POS)
#define ISP_GAMMA_C88_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C88_PRE_LEN)-1)<<ISP_GAMMA_C88_PRE_POS))
#define ISP_GAMMA_C89_PRE                                       ISP_GAMMA_C89_PRE
#define ISP_GAMMA_C89_PRE_POS                                   (8U)
#define ISP_GAMMA_C89_PRE_LEN                                   (8U)
#define ISP_GAMMA_C89_PRE_MSK                                   (((1U<<ISP_GAMMA_C89_PRE_LEN)-1)<<ISP_GAMMA_C89_PRE_POS)
#define ISP_GAMMA_C89_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C89_PRE_LEN)-1)<<ISP_GAMMA_C89_PRE_POS))
#define ISP_GAMMA_C90_PRE                                       ISP_GAMMA_C90_PRE
#define ISP_GAMMA_C90_PRE_POS                                   (16U)
#define ISP_GAMMA_C90_PRE_LEN                                   (8U)
#define ISP_GAMMA_C90_PRE_MSK                                   (((1U<<ISP_GAMMA_C90_PRE_LEN)-1)<<ISP_GAMMA_C90_PRE_POS)
#define ISP_GAMMA_C90_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C90_PRE_LEN)-1)<<ISP_GAMMA_C90_PRE_POS))
#define ISP_GAMMA_C91_PRE                                       ISP_GAMMA_C91_PRE
#define ISP_GAMMA_C91_PRE_POS                                   (24U)
#define ISP_GAMMA_C91_PRE_LEN                                   (8U)
#define ISP_GAMMA_C91_PRE_MSK                                   (((1U<<ISP_GAMMA_C91_PRE_LEN)-1)<<ISP_GAMMA_C91_PRE_POS)
#define ISP_GAMMA_C91_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C91_PRE_LEN)-1)<<ISP_GAMMA_C91_PRE_POS))

/* 0x75C : GAMMA_CRUVE_24 */
#define ISP_GAMMA_GAMMA_CRUVE_24_OFFSET                         (0x75C)
#define ISP_GAMMA_C92_PRE                                       ISP_GAMMA_C92_PRE
#define ISP_GAMMA_C92_PRE_POS                                   (0U)
#define ISP_GAMMA_C92_PRE_LEN                                   (8U)
#define ISP_GAMMA_C92_PRE_MSK                                   (((1U<<ISP_GAMMA_C92_PRE_LEN)-1)<<ISP_GAMMA_C92_PRE_POS)
#define ISP_GAMMA_C92_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C92_PRE_LEN)-1)<<ISP_GAMMA_C92_PRE_POS))
#define ISP_GAMMA_C93_PRE                                       ISP_GAMMA_C93_PRE
#define ISP_GAMMA_C93_PRE_POS                                   (8U)
#define ISP_GAMMA_C93_PRE_LEN                                   (8U)
#define ISP_GAMMA_C93_PRE_MSK                                   (((1U<<ISP_GAMMA_C93_PRE_LEN)-1)<<ISP_GAMMA_C93_PRE_POS)
#define ISP_GAMMA_C93_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C93_PRE_LEN)-1)<<ISP_GAMMA_C93_PRE_POS))
#define ISP_GAMMA_C94_PRE                                       ISP_GAMMA_C94_PRE
#define ISP_GAMMA_C94_PRE_POS                                   (16U)
#define ISP_GAMMA_C94_PRE_LEN                                   (8U)
#define ISP_GAMMA_C94_PRE_MSK                                   (((1U<<ISP_GAMMA_C94_PRE_LEN)-1)<<ISP_GAMMA_C94_PRE_POS)
#define ISP_GAMMA_C94_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C94_PRE_LEN)-1)<<ISP_GAMMA_C94_PRE_POS))
#define ISP_GAMMA_C95_PRE                                       ISP_GAMMA_C95_PRE
#define ISP_GAMMA_C95_PRE_POS                                   (24U)
#define ISP_GAMMA_C95_PRE_LEN                                   (8U)
#define ISP_GAMMA_C95_PRE_MSK                                   (((1U<<ISP_GAMMA_C95_PRE_LEN)-1)<<ISP_GAMMA_C95_PRE_POS)
#define ISP_GAMMA_C95_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C95_PRE_LEN)-1)<<ISP_GAMMA_C95_PRE_POS))

/* 0x760 : GAMMA_CRUVE_25 */
#define ISP_GAMMA_GAMMA_CRUVE_25_OFFSET                         (0x760)
#define ISP_GAMMA_C96_PRE                                       ISP_GAMMA_C96_PRE
#define ISP_GAMMA_C96_PRE_POS                                   (0U)
#define ISP_GAMMA_C96_PRE_LEN                                   (8U)
#define ISP_GAMMA_C96_PRE_MSK                                   (((1U<<ISP_GAMMA_C96_PRE_LEN)-1)<<ISP_GAMMA_C96_PRE_POS)
#define ISP_GAMMA_C96_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C96_PRE_LEN)-1)<<ISP_GAMMA_C96_PRE_POS))
#define ISP_GAMMA_C97_PRE                                       ISP_GAMMA_C97_PRE
#define ISP_GAMMA_C97_PRE_POS                                   (8U)
#define ISP_GAMMA_C97_PRE_LEN                                   (8U)
#define ISP_GAMMA_C97_PRE_MSK                                   (((1U<<ISP_GAMMA_C97_PRE_LEN)-1)<<ISP_GAMMA_C97_PRE_POS)
#define ISP_GAMMA_C97_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C97_PRE_LEN)-1)<<ISP_GAMMA_C97_PRE_POS))
#define ISP_GAMMA_C98_PRE                                       ISP_GAMMA_C98_PRE
#define ISP_GAMMA_C98_PRE_POS                                   (16U)
#define ISP_GAMMA_C98_PRE_LEN                                   (8U)
#define ISP_GAMMA_C98_PRE_MSK                                   (((1U<<ISP_GAMMA_C98_PRE_LEN)-1)<<ISP_GAMMA_C98_PRE_POS)
#define ISP_GAMMA_C98_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C98_PRE_LEN)-1)<<ISP_GAMMA_C98_PRE_POS))
#define ISP_GAMMA_C99_PRE                                       ISP_GAMMA_C99_PRE
#define ISP_GAMMA_C99_PRE_POS                                   (24U)
#define ISP_GAMMA_C99_PRE_LEN                                   (8U)
#define ISP_GAMMA_C99_PRE_MSK                                   (((1U<<ISP_GAMMA_C99_PRE_LEN)-1)<<ISP_GAMMA_C99_PRE_POS)
#define ISP_GAMMA_C99_PRE_UMSK                                  (~(((1U<<ISP_GAMMA_C99_PRE_LEN)-1)<<ISP_GAMMA_C99_PRE_POS))

/* 0x764 : GAMMA_CRUVE_26 */
#define ISP_GAMMA_GAMMA_CRUVE_26_OFFSET                         (0x764)
#define ISP_GAMMA_C100_PRE                                      ISP_GAMMA_C100_PRE
#define ISP_GAMMA_C100_PRE_POS                                  (0U)
#define ISP_GAMMA_C100_PRE_LEN                                  (8U)
#define ISP_GAMMA_C100_PRE_MSK                                  (((1U<<ISP_GAMMA_C100_PRE_LEN)-1)<<ISP_GAMMA_C100_PRE_POS)
#define ISP_GAMMA_C100_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C100_PRE_LEN)-1)<<ISP_GAMMA_C100_PRE_POS))
#define ISP_GAMMA_C101_PRE                                      ISP_GAMMA_C101_PRE
#define ISP_GAMMA_C101_PRE_POS                                  (8U)
#define ISP_GAMMA_C101_PRE_LEN                                  (8U)
#define ISP_GAMMA_C101_PRE_MSK                                  (((1U<<ISP_GAMMA_C101_PRE_LEN)-1)<<ISP_GAMMA_C101_PRE_POS)
#define ISP_GAMMA_C101_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C101_PRE_LEN)-1)<<ISP_GAMMA_C101_PRE_POS))
#define ISP_GAMMA_C102_PRE                                      ISP_GAMMA_C102_PRE
#define ISP_GAMMA_C102_PRE_POS                                  (16U)
#define ISP_GAMMA_C102_PRE_LEN                                  (8U)
#define ISP_GAMMA_C102_PRE_MSK                                  (((1U<<ISP_GAMMA_C102_PRE_LEN)-1)<<ISP_GAMMA_C102_PRE_POS)
#define ISP_GAMMA_C102_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C102_PRE_LEN)-1)<<ISP_GAMMA_C102_PRE_POS))
#define ISP_GAMMA_C103_PRE                                      ISP_GAMMA_C103_PRE
#define ISP_GAMMA_C103_PRE_POS                                  (24U)
#define ISP_GAMMA_C103_PRE_LEN                                  (8U)
#define ISP_GAMMA_C103_PRE_MSK                                  (((1U<<ISP_GAMMA_C103_PRE_LEN)-1)<<ISP_GAMMA_C103_PRE_POS)
#define ISP_GAMMA_C103_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C103_PRE_LEN)-1)<<ISP_GAMMA_C103_PRE_POS))

/* 0x768 : GAMMA_CRUVE_27 */
#define ISP_GAMMA_GAMMA_CRUVE_27_OFFSET                         (0x768)
#define ISP_GAMMA_C104_PRE                                      ISP_GAMMA_C104_PRE
#define ISP_GAMMA_C104_PRE_POS                                  (0U)
#define ISP_GAMMA_C104_PRE_LEN                                  (8U)
#define ISP_GAMMA_C104_PRE_MSK                                  (((1U<<ISP_GAMMA_C104_PRE_LEN)-1)<<ISP_GAMMA_C104_PRE_POS)
#define ISP_GAMMA_C104_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C104_PRE_LEN)-1)<<ISP_GAMMA_C104_PRE_POS))
#define ISP_GAMMA_C105_PRE                                      ISP_GAMMA_C105_PRE
#define ISP_GAMMA_C105_PRE_POS                                  (8U)
#define ISP_GAMMA_C105_PRE_LEN                                  (8U)
#define ISP_GAMMA_C105_PRE_MSK                                  (((1U<<ISP_GAMMA_C105_PRE_LEN)-1)<<ISP_GAMMA_C105_PRE_POS)
#define ISP_GAMMA_C105_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C105_PRE_LEN)-1)<<ISP_GAMMA_C105_PRE_POS))
#define ISP_GAMMA_C106_PRE                                      ISP_GAMMA_C106_PRE
#define ISP_GAMMA_C106_PRE_POS                                  (16U)
#define ISP_GAMMA_C106_PRE_LEN                                  (8U)
#define ISP_GAMMA_C106_PRE_MSK                                  (((1U<<ISP_GAMMA_C106_PRE_LEN)-1)<<ISP_GAMMA_C106_PRE_POS)
#define ISP_GAMMA_C106_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C106_PRE_LEN)-1)<<ISP_GAMMA_C106_PRE_POS))
#define ISP_GAMMA_C107_PRE                                      ISP_GAMMA_C107_PRE
#define ISP_GAMMA_C107_PRE_POS                                  (24U)
#define ISP_GAMMA_C107_PRE_LEN                                  (8U)
#define ISP_GAMMA_C107_PRE_MSK                                  (((1U<<ISP_GAMMA_C107_PRE_LEN)-1)<<ISP_GAMMA_C107_PRE_POS)
#define ISP_GAMMA_C107_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C107_PRE_LEN)-1)<<ISP_GAMMA_C107_PRE_POS))

/* 0x76C : GAMMA_CRUVE_28 */
#define ISP_GAMMA_GAMMA_CRUVE_28_OFFSET                         (0x76C)
#define ISP_GAMMA_C108_PRE                                      ISP_GAMMA_C108_PRE
#define ISP_GAMMA_C108_PRE_POS                                  (0U)
#define ISP_GAMMA_C108_PRE_LEN                                  (8U)
#define ISP_GAMMA_C108_PRE_MSK                                  (((1U<<ISP_GAMMA_C108_PRE_LEN)-1)<<ISP_GAMMA_C108_PRE_POS)
#define ISP_GAMMA_C108_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C108_PRE_LEN)-1)<<ISP_GAMMA_C108_PRE_POS))
#define ISP_GAMMA_C109_PRE                                      ISP_GAMMA_C109_PRE
#define ISP_GAMMA_C109_PRE_POS                                  (8U)
#define ISP_GAMMA_C109_PRE_LEN                                  (8U)
#define ISP_GAMMA_C109_PRE_MSK                                  (((1U<<ISP_GAMMA_C109_PRE_LEN)-1)<<ISP_GAMMA_C109_PRE_POS)
#define ISP_GAMMA_C109_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C109_PRE_LEN)-1)<<ISP_GAMMA_C109_PRE_POS))
#define ISP_GAMMA_C110_PRE                                      ISP_GAMMA_C110_PRE
#define ISP_GAMMA_C110_PRE_POS                                  (16U)
#define ISP_GAMMA_C110_PRE_LEN                                  (8U)
#define ISP_GAMMA_C110_PRE_MSK                                  (((1U<<ISP_GAMMA_C110_PRE_LEN)-1)<<ISP_GAMMA_C110_PRE_POS)
#define ISP_GAMMA_C110_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C110_PRE_LEN)-1)<<ISP_GAMMA_C110_PRE_POS))
#define ISP_GAMMA_C111_PRE                                      ISP_GAMMA_C111_PRE
#define ISP_GAMMA_C111_PRE_POS                                  (24U)
#define ISP_GAMMA_C111_PRE_LEN                                  (8U)
#define ISP_GAMMA_C111_PRE_MSK                                  (((1U<<ISP_GAMMA_C111_PRE_LEN)-1)<<ISP_GAMMA_C111_PRE_POS)
#define ISP_GAMMA_C111_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C111_PRE_LEN)-1)<<ISP_GAMMA_C111_PRE_POS))

/* 0x770 : GAMMA_CRUVE_29 */
#define ISP_GAMMA_GAMMA_CRUVE_29_OFFSET                         (0x770)
#define ISP_GAMMA_C112_PRE                                      ISP_GAMMA_C112_PRE
#define ISP_GAMMA_C112_PRE_POS                                  (0U)
#define ISP_GAMMA_C112_PRE_LEN                                  (8U)
#define ISP_GAMMA_C112_PRE_MSK                                  (((1U<<ISP_GAMMA_C112_PRE_LEN)-1)<<ISP_GAMMA_C112_PRE_POS)
#define ISP_GAMMA_C112_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C112_PRE_LEN)-1)<<ISP_GAMMA_C112_PRE_POS))
#define ISP_GAMMA_C113_PRE                                      ISP_GAMMA_C113_PRE
#define ISP_GAMMA_C113_PRE_POS                                  (8U)
#define ISP_GAMMA_C113_PRE_LEN                                  (8U)
#define ISP_GAMMA_C113_PRE_MSK                                  (((1U<<ISP_GAMMA_C113_PRE_LEN)-1)<<ISP_GAMMA_C113_PRE_POS)
#define ISP_GAMMA_C113_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C113_PRE_LEN)-1)<<ISP_GAMMA_C113_PRE_POS))
#define ISP_GAMMA_C114_PRE                                      ISP_GAMMA_C114_PRE
#define ISP_GAMMA_C114_PRE_POS                                  (16U)
#define ISP_GAMMA_C114_PRE_LEN                                  (8U)
#define ISP_GAMMA_C114_PRE_MSK                                  (((1U<<ISP_GAMMA_C114_PRE_LEN)-1)<<ISP_GAMMA_C114_PRE_POS)
#define ISP_GAMMA_C114_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C114_PRE_LEN)-1)<<ISP_GAMMA_C114_PRE_POS))
#define ISP_GAMMA_C115_PRE                                      ISP_GAMMA_C115_PRE
#define ISP_GAMMA_C115_PRE_POS                                  (24U)
#define ISP_GAMMA_C115_PRE_LEN                                  (8U)
#define ISP_GAMMA_C115_PRE_MSK                                  (((1U<<ISP_GAMMA_C115_PRE_LEN)-1)<<ISP_GAMMA_C115_PRE_POS)
#define ISP_GAMMA_C115_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C115_PRE_LEN)-1)<<ISP_GAMMA_C115_PRE_POS))

/* 0x774 : GAMMA_CRUVE_30 */
#define ISP_GAMMA_GAMMA_CRUVE_30_OFFSET                         (0x774)
#define ISP_GAMMA_C116_PRE                                      ISP_GAMMA_C116_PRE
#define ISP_GAMMA_C116_PRE_POS                                  (0U)
#define ISP_GAMMA_C116_PRE_LEN                                  (8U)
#define ISP_GAMMA_C116_PRE_MSK                                  (((1U<<ISP_GAMMA_C116_PRE_LEN)-1)<<ISP_GAMMA_C116_PRE_POS)
#define ISP_GAMMA_C116_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C116_PRE_LEN)-1)<<ISP_GAMMA_C116_PRE_POS))
#define ISP_GAMMA_C117_PRE                                      ISP_GAMMA_C117_PRE
#define ISP_GAMMA_C117_PRE_POS                                  (8U)
#define ISP_GAMMA_C117_PRE_LEN                                  (8U)
#define ISP_GAMMA_C117_PRE_MSK                                  (((1U<<ISP_GAMMA_C117_PRE_LEN)-1)<<ISP_GAMMA_C117_PRE_POS)
#define ISP_GAMMA_C117_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C117_PRE_LEN)-1)<<ISP_GAMMA_C117_PRE_POS))
#define ISP_GAMMA_C118_PRE                                      ISP_GAMMA_C118_PRE
#define ISP_GAMMA_C118_PRE_POS                                  (16U)
#define ISP_GAMMA_C118_PRE_LEN                                  (8U)
#define ISP_GAMMA_C118_PRE_MSK                                  (((1U<<ISP_GAMMA_C118_PRE_LEN)-1)<<ISP_GAMMA_C118_PRE_POS)
#define ISP_GAMMA_C118_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C118_PRE_LEN)-1)<<ISP_GAMMA_C118_PRE_POS))
#define ISP_GAMMA_C119_PRE                                      ISP_GAMMA_C119_PRE
#define ISP_GAMMA_C119_PRE_POS                                  (24U)
#define ISP_GAMMA_C119_PRE_LEN                                  (8U)
#define ISP_GAMMA_C119_PRE_MSK                                  (((1U<<ISP_GAMMA_C119_PRE_LEN)-1)<<ISP_GAMMA_C119_PRE_POS)
#define ISP_GAMMA_C119_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C119_PRE_LEN)-1)<<ISP_GAMMA_C119_PRE_POS))

/* 0x778 : GAMMA_CRUVE_31 */
#define ISP_GAMMA_GAMMA_CRUVE_31_OFFSET                         (0x778)
#define ISP_GAMMA_C120_PRE                                      ISP_GAMMA_C120_PRE
#define ISP_GAMMA_C120_PRE_POS                                  (0U)
#define ISP_GAMMA_C120_PRE_LEN                                  (8U)
#define ISP_GAMMA_C120_PRE_MSK                                  (((1U<<ISP_GAMMA_C120_PRE_LEN)-1)<<ISP_GAMMA_C120_PRE_POS)
#define ISP_GAMMA_C120_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C120_PRE_LEN)-1)<<ISP_GAMMA_C120_PRE_POS))
#define ISP_GAMMA_C121_PRE                                      ISP_GAMMA_C121_PRE
#define ISP_GAMMA_C121_PRE_POS                                  (8U)
#define ISP_GAMMA_C121_PRE_LEN                                  (8U)
#define ISP_GAMMA_C121_PRE_MSK                                  (((1U<<ISP_GAMMA_C121_PRE_LEN)-1)<<ISP_GAMMA_C121_PRE_POS)
#define ISP_GAMMA_C121_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C121_PRE_LEN)-1)<<ISP_GAMMA_C121_PRE_POS))
#define ISP_GAMMA_C122_PRE                                      ISP_GAMMA_C122_PRE
#define ISP_GAMMA_C122_PRE_POS                                  (16U)
#define ISP_GAMMA_C122_PRE_LEN                                  (8U)
#define ISP_GAMMA_C122_PRE_MSK                                  (((1U<<ISP_GAMMA_C122_PRE_LEN)-1)<<ISP_GAMMA_C122_PRE_POS)
#define ISP_GAMMA_C122_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C122_PRE_LEN)-1)<<ISP_GAMMA_C122_PRE_POS))
#define ISP_GAMMA_C123_PRE                                      ISP_GAMMA_C123_PRE
#define ISP_GAMMA_C123_PRE_POS                                  (24U)
#define ISP_GAMMA_C123_PRE_LEN                                  (8U)
#define ISP_GAMMA_C123_PRE_MSK                                  (((1U<<ISP_GAMMA_C123_PRE_LEN)-1)<<ISP_GAMMA_C123_PRE_POS)
#define ISP_GAMMA_C123_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C123_PRE_LEN)-1)<<ISP_GAMMA_C123_PRE_POS))

/* 0x77C : GAMMA_CRUVE_32 */
#define ISP_GAMMA_GAMMA_CRUVE_32_OFFSET                         (0x77C)
#define ISP_GAMMA_C124_PRE                                      ISP_GAMMA_C124_PRE
#define ISP_GAMMA_C124_PRE_POS                                  (0U)
#define ISP_GAMMA_C124_PRE_LEN                                  (8U)
#define ISP_GAMMA_C124_PRE_MSK                                  (((1U<<ISP_GAMMA_C124_PRE_LEN)-1)<<ISP_GAMMA_C124_PRE_POS)
#define ISP_GAMMA_C124_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C124_PRE_LEN)-1)<<ISP_GAMMA_C124_PRE_POS))
#define ISP_GAMMA_C125_PRE                                      ISP_GAMMA_C125_PRE
#define ISP_GAMMA_C125_PRE_POS                                  (8U)
#define ISP_GAMMA_C125_PRE_LEN                                  (8U)
#define ISP_GAMMA_C125_PRE_MSK                                  (((1U<<ISP_GAMMA_C125_PRE_LEN)-1)<<ISP_GAMMA_C125_PRE_POS)
#define ISP_GAMMA_C125_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C125_PRE_LEN)-1)<<ISP_GAMMA_C125_PRE_POS))
#define ISP_GAMMA_C126_PRE                                      ISP_GAMMA_C126_PRE
#define ISP_GAMMA_C126_PRE_POS                                  (16U)
#define ISP_GAMMA_C126_PRE_LEN                                  (8U)
#define ISP_GAMMA_C126_PRE_MSK                                  (((1U<<ISP_GAMMA_C126_PRE_LEN)-1)<<ISP_GAMMA_C126_PRE_POS)
#define ISP_GAMMA_C126_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C126_PRE_LEN)-1)<<ISP_GAMMA_C126_PRE_POS))
#define ISP_GAMMA_C127_PRE                                      ISP_GAMMA_C127_PRE
#define ISP_GAMMA_C127_PRE_POS                                  (24U)
#define ISP_GAMMA_C127_PRE_LEN                                  (8U)
#define ISP_GAMMA_C127_PRE_MSK                                  (((1U<<ISP_GAMMA_C127_PRE_LEN)-1)<<ISP_GAMMA_C127_PRE_POS)
#define ISP_GAMMA_C127_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C127_PRE_LEN)-1)<<ISP_GAMMA_C127_PRE_POS))

/* 0x780 : GAMMA_CRUVE_33 */
#define ISP_GAMMA_GAMMA_CRUVE_33_OFFSET                         (0x780)
#define ISP_GAMMA_C128_PRE                                      ISP_GAMMA_C128_PRE
#define ISP_GAMMA_C128_PRE_POS                                  (0U)
#define ISP_GAMMA_C128_PRE_LEN                                  (8U)
#define ISP_GAMMA_C128_PRE_MSK                                  (((1U<<ISP_GAMMA_C128_PRE_LEN)-1)<<ISP_GAMMA_C128_PRE_POS)
#define ISP_GAMMA_C128_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C128_PRE_LEN)-1)<<ISP_GAMMA_C128_PRE_POS))
#define ISP_GAMMA_C129_PRE                                      ISP_GAMMA_C129_PRE
#define ISP_GAMMA_C129_PRE_POS                                  (8U)
#define ISP_GAMMA_C129_PRE_LEN                                  (8U)
#define ISP_GAMMA_C129_PRE_MSK                                  (((1U<<ISP_GAMMA_C129_PRE_LEN)-1)<<ISP_GAMMA_C129_PRE_POS)
#define ISP_GAMMA_C129_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C129_PRE_LEN)-1)<<ISP_GAMMA_C129_PRE_POS))
#define ISP_GAMMA_C130_PRE                                      ISP_GAMMA_C130_PRE
#define ISP_GAMMA_C130_PRE_POS                                  (16U)
#define ISP_GAMMA_C130_PRE_LEN                                  (8U)
#define ISP_GAMMA_C130_PRE_MSK                                  (((1U<<ISP_GAMMA_C130_PRE_LEN)-1)<<ISP_GAMMA_C130_PRE_POS)
#define ISP_GAMMA_C130_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C130_PRE_LEN)-1)<<ISP_GAMMA_C130_PRE_POS))
#define ISP_GAMMA_C131_PRE                                      ISP_GAMMA_C131_PRE
#define ISP_GAMMA_C131_PRE_POS                                  (24U)
#define ISP_GAMMA_C131_PRE_LEN                                  (8U)
#define ISP_GAMMA_C131_PRE_MSK                                  (((1U<<ISP_GAMMA_C131_PRE_LEN)-1)<<ISP_GAMMA_C131_PRE_POS)
#define ISP_GAMMA_C131_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C131_PRE_LEN)-1)<<ISP_GAMMA_C131_PRE_POS))

/* 0x784 : GAMMA_CRUVE_34 */
#define ISP_GAMMA_GAMMA_CRUVE_34_OFFSET                         (0x784)
#define ISP_GAMMA_C132_PRE                                      ISP_GAMMA_C132_PRE
#define ISP_GAMMA_C132_PRE_POS                                  (0U)
#define ISP_GAMMA_C132_PRE_LEN                                  (8U)
#define ISP_GAMMA_C132_PRE_MSK                                  (((1U<<ISP_GAMMA_C132_PRE_LEN)-1)<<ISP_GAMMA_C132_PRE_POS)
#define ISP_GAMMA_C132_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C132_PRE_LEN)-1)<<ISP_GAMMA_C132_PRE_POS))
#define ISP_GAMMA_C133_PRE                                      ISP_GAMMA_C133_PRE
#define ISP_GAMMA_C133_PRE_POS                                  (8U)
#define ISP_GAMMA_C133_PRE_LEN                                  (8U)
#define ISP_GAMMA_C133_PRE_MSK                                  (((1U<<ISP_GAMMA_C133_PRE_LEN)-1)<<ISP_GAMMA_C133_PRE_POS)
#define ISP_GAMMA_C133_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C133_PRE_LEN)-1)<<ISP_GAMMA_C133_PRE_POS))
#define ISP_GAMMA_C134_PRE                                      ISP_GAMMA_C134_PRE
#define ISP_GAMMA_C134_PRE_POS                                  (16U)
#define ISP_GAMMA_C134_PRE_LEN                                  (8U)
#define ISP_GAMMA_C134_PRE_MSK                                  (((1U<<ISP_GAMMA_C134_PRE_LEN)-1)<<ISP_GAMMA_C134_PRE_POS)
#define ISP_GAMMA_C134_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C134_PRE_LEN)-1)<<ISP_GAMMA_C134_PRE_POS))
#define ISP_GAMMA_C135_PRE                                      ISP_GAMMA_C135_PRE
#define ISP_GAMMA_C135_PRE_POS                                  (24U)
#define ISP_GAMMA_C135_PRE_LEN                                  (8U)
#define ISP_GAMMA_C135_PRE_MSK                                  (((1U<<ISP_GAMMA_C135_PRE_LEN)-1)<<ISP_GAMMA_C135_PRE_POS)
#define ISP_GAMMA_C135_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C135_PRE_LEN)-1)<<ISP_GAMMA_C135_PRE_POS))

/* 0x788 : GAMMA_CRUVE_35 */
#define ISP_GAMMA_GAMMA_CRUVE_35_OFFSET                         (0x788)
#define ISP_GAMMA_C136_PRE                                      ISP_GAMMA_C136_PRE
#define ISP_GAMMA_C136_PRE_POS                                  (0U)
#define ISP_GAMMA_C136_PRE_LEN                                  (8U)
#define ISP_GAMMA_C136_PRE_MSK                                  (((1U<<ISP_GAMMA_C136_PRE_LEN)-1)<<ISP_GAMMA_C136_PRE_POS)
#define ISP_GAMMA_C136_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C136_PRE_LEN)-1)<<ISP_GAMMA_C136_PRE_POS))
#define ISP_GAMMA_C137_PRE                                      ISP_GAMMA_C137_PRE
#define ISP_GAMMA_C137_PRE_POS                                  (8U)
#define ISP_GAMMA_C137_PRE_LEN                                  (8U)
#define ISP_GAMMA_C137_PRE_MSK                                  (((1U<<ISP_GAMMA_C137_PRE_LEN)-1)<<ISP_GAMMA_C137_PRE_POS)
#define ISP_GAMMA_C137_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C137_PRE_LEN)-1)<<ISP_GAMMA_C137_PRE_POS))
#define ISP_GAMMA_C138_PRE                                      ISP_GAMMA_C138_PRE
#define ISP_GAMMA_C138_PRE_POS                                  (16U)
#define ISP_GAMMA_C138_PRE_LEN                                  (8U)
#define ISP_GAMMA_C138_PRE_MSK                                  (((1U<<ISP_GAMMA_C138_PRE_LEN)-1)<<ISP_GAMMA_C138_PRE_POS)
#define ISP_GAMMA_C138_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C138_PRE_LEN)-1)<<ISP_GAMMA_C138_PRE_POS))
#define ISP_GAMMA_C139_PRE                                      ISP_GAMMA_C139_PRE
#define ISP_GAMMA_C139_PRE_POS                                  (24U)
#define ISP_GAMMA_C139_PRE_LEN                                  (8U)
#define ISP_GAMMA_C139_PRE_MSK                                  (((1U<<ISP_GAMMA_C139_PRE_LEN)-1)<<ISP_GAMMA_C139_PRE_POS)
#define ISP_GAMMA_C139_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C139_PRE_LEN)-1)<<ISP_GAMMA_C139_PRE_POS))

/* 0x78C : GAMMA_CRUVE_36 */
#define ISP_GAMMA_GAMMA_CRUVE_36_OFFSET                         (0x78C)
#define ISP_GAMMA_C140_PRE                                      ISP_GAMMA_C140_PRE
#define ISP_GAMMA_C140_PRE_POS                                  (0U)
#define ISP_GAMMA_C140_PRE_LEN                                  (8U)
#define ISP_GAMMA_C140_PRE_MSK                                  (((1U<<ISP_GAMMA_C140_PRE_LEN)-1)<<ISP_GAMMA_C140_PRE_POS)
#define ISP_GAMMA_C140_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C140_PRE_LEN)-1)<<ISP_GAMMA_C140_PRE_POS))
#define ISP_GAMMA_C141_PRE                                      ISP_GAMMA_C141_PRE
#define ISP_GAMMA_C141_PRE_POS                                  (8U)
#define ISP_GAMMA_C141_PRE_LEN                                  (8U)
#define ISP_GAMMA_C141_PRE_MSK                                  (((1U<<ISP_GAMMA_C141_PRE_LEN)-1)<<ISP_GAMMA_C141_PRE_POS)
#define ISP_GAMMA_C141_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C141_PRE_LEN)-1)<<ISP_GAMMA_C141_PRE_POS))
#define ISP_GAMMA_C142_PRE                                      ISP_GAMMA_C142_PRE
#define ISP_GAMMA_C142_PRE_POS                                  (16U)
#define ISP_GAMMA_C142_PRE_LEN                                  (8U)
#define ISP_GAMMA_C142_PRE_MSK                                  (((1U<<ISP_GAMMA_C142_PRE_LEN)-1)<<ISP_GAMMA_C142_PRE_POS)
#define ISP_GAMMA_C142_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C142_PRE_LEN)-1)<<ISP_GAMMA_C142_PRE_POS))
#define ISP_GAMMA_C143_PRE                                      ISP_GAMMA_C143_PRE
#define ISP_GAMMA_C143_PRE_POS                                  (24U)
#define ISP_GAMMA_C143_PRE_LEN                                  (8U)
#define ISP_GAMMA_C143_PRE_MSK                                  (((1U<<ISP_GAMMA_C143_PRE_LEN)-1)<<ISP_GAMMA_C143_PRE_POS)
#define ISP_GAMMA_C143_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C143_PRE_LEN)-1)<<ISP_GAMMA_C143_PRE_POS))

/* 0x790 : GAMMA_CRUVE_37 */
#define ISP_GAMMA_GAMMA_CRUVE_37_OFFSET                         (0x790)
#define ISP_GAMMA_C144_PRE                                      ISP_GAMMA_C144_PRE
#define ISP_GAMMA_C144_PRE_POS                                  (0U)
#define ISP_GAMMA_C144_PRE_LEN                                  (8U)
#define ISP_GAMMA_C144_PRE_MSK                                  (((1U<<ISP_GAMMA_C144_PRE_LEN)-1)<<ISP_GAMMA_C144_PRE_POS)
#define ISP_GAMMA_C144_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C144_PRE_LEN)-1)<<ISP_GAMMA_C144_PRE_POS))
#define ISP_GAMMA_C145_PRE                                      ISP_GAMMA_C145_PRE
#define ISP_GAMMA_C145_PRE_POS                                  (8U)
#define ISP_GAMMA_C145_PRE_LEN                                  (8U)
#define ISP_GAMMA_C145_PRE_MSK                                  (((1U<<ISP_GAMMA_C145_PRE_LEN)-1)<<ISP_GAMMA_C145_PRE_POS)
#define ISP_GAMMA_C145_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C145_PRE_LEN)-1)<<ISP_GAMMA_C145_PRE_POS))
#define ISP_GAMMA_C146_PRE                                      ISP_GAMMA_C146_PRE
#define ISP_GAMMA_C146_PRE_POS                                  (16U)
#define ISP_GAMMA_C146_PRE_LEN                                  (8U)
#define ISP_GAMMA_C146_PRE_MSK                                  (((1U<<ISP_GAMMA_C146_PRE_LEN)-1)<<ISP_GAMMA_C146_PRE_POS)
#define ISP_GAMMA_C146_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C146_PRE_LEN)-1)<<ISP_GAMMA_C146_PRE_POS))
#define ISP_GAMMA_C147_PRE                                      ISP_GAMMA_C147_PRE
#define ISP_GAMMA_C147_PRE_POS                                  (24U)
#define ISP_GAMMA_C147_PRE_LEN                                  (8U)
#define ISP_GAMMA_C147_PRE_MSK                                  (((1U<<ISP_GAMMA_C147_PRE_LEN)-1)<<ISP_GAMMA_C147_PRE_POS)
#define ISP_GAMMA_C147_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C147_PRE_LEN)-1)<<ISP_GAMMA_C147_PRE_POS))

/* 0x794 : GAMMA_CRUVE_38 */
#define ISP_GAMMA_GAMMA_CRUVE_38_OFFSET                         (0x794)
#define ISP_GAMMA_C148_PRE                                      ISP_GAMMA_C148_PRE
#define ISP_GAMMA_C148_PRE_POS                                  (0U)
#define ISP_GAMMA_C148_PRE_LEN                                  (8U)
#define ISP_GAMMA_C148_PRE_MSK                                  (((1U<<ISP_GAMMA_C148_PRE_LEN)-1)<<ISP_GAMMA_C148_PRE_POS)
#define ISP_GAMMA_C148_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C148_PRE_LEN)-1)<<ISP_GAMMA_C148_PRE_POS))
#define ISP_GAMMA_C149_PRE                                      ISP_GAMMA_C149_PRE
#define ISP_GAMMA_C149_PRE_POS                                  (8U)
#define ISP_GAMMA_C149_PRE_LEN                                  (8U)
#define ISP_GAMMA_C149_PRE_MSK                                  (((1U<<ISP_GAMMA_C149_PRE_LEN)-1)<<ISP_GAMMA_C149_PRE_POS)
#define ISP_GAMMA_C149_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C149_PRE_LEN)-1)<<ISP_GAMMA_C149_PRE_POS))
#define ISP_GAMMA_C150_PRE                                      ISP_GAMMA_C150_PRE
#define ISP_GAMMA_C150_PRE_POS                                  (16U)
#define ISP_GAMMA_C150_PRE_LEN                                  (8U)
#define ISP_GAMMA_C150_PRE_MSK                                  (((1U<<ISP_GAMMA_C150_PRE_LEN)-1)<<ISP_GAMMA_C150_PRE_POS)
#define ISP_GAMMA_C150_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C150_PRE_LEN)-1)<<ISP_GAMMA_C150_PRE_POS))
#define ISP_GAMMA_C151_PRE                                      ISP_GAMMA_C151_PRE
#define ISP_GAMMA_C151_PRE_POS                                  (24U)
#define ISP_GAMMA_C151_PRE_LEN                                  (8U)
#define ISP_GAMMA_C151_PRE_MSK                                  (((1U<<ISP_GAMMA_C151_PRE_LEN)-1)<<ISP_GAMMA_C151_PRE_POS)
#define ISP_GAMMA_C151_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C151_PRE_LEN)-1)<<ISP_GAMMA_C151_PRE_POS))

/* 0x798 : GAMMA_CRUVE_39 */
#define ISP_GAMMA_GAMMA_CRUVE_39_OFFSET                         (0x798)
#define ISP_GAMMA_C152_PRE                                      ISP_GAMMA_C152_PRE
#define ISP_GAMMA_C152_PRE_POS                                  (0U)
#define ISP_GAMMA_C152_PRE_LEN                                  (8U)
#define ISP_GAMMA_C152_PRE_MSK                                  (((1U<<ISP_GAMMA_C152_PRE_LEN)-1)<<ISP_GAMMA_C152_PRE_POS)
#define ISP_GAMMA_C152_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C152_PRE_LEN)-1)<<ISP_GAMMA_C152_PRE_POS))
#define ISP_GAMMA_C153_PRE                                      ISP_GAMMA_C153_PRE
#define ISP_GAMMA_C153_PRE_POS                                  (8U)
#define ISP_GAMMA_C153_PRE_LEN                                  (8U)
#define ISP_GAMMA_C153_PRE_MSK                                  (((1U<<ISP_GAMMA_C153_PRE_LEN)-1)<<ISP_GAMMA_C153_PRE_POS)
#define ISP_GAMMA_C153_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C153_PRE_LEN)-1)<<ISP_GAMMA_C153_PRE_POS))
#define ISP_GAMMA_C154_PRE                                      ISP_GAMMA_C154_PRE
#define ISP_GAMMA_C154_PRE_POS                                  (16U)
#define ISP_GAMMA_C154_PRE_LEN                                  (8U)
#define ISP_GAMMA_C154_PRE_MSK                                  (((1U<<ISP_GAMMA_C154_PRE_LEN)-1)<<ISP_GAMMA_C154_PRE_POS)
#define ISP_GAMMA_C154_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C154_PRE_LEN)-1)<<ISP_GAMMA_C154_PRE_POS))
#define ISP_GAMMA_C155_PRE                                      ISP_GAMMA_C155_PRE
#define ISP_GAMMA_C155_PRE_POS                                  (24U)
#define ISP_GAMMA_C155_PRE_LEN                                  (8U)
#define ISP_GAMMA_C155_PRE_MSK                                  (((1U<<ISP_GAMMA_C155_PRE_LEN)-1)<<ISP_GAMMA_C155_PRE_POS)
#define ISP_GAMMA_C155_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C155_PRE_LEN)-1)<<ISP_GAMMA_C155_PRE_POS))

/* 0x79C : GAMMA_CRUVE_40 */
#define ISP_GAMMA_GAMMA_CRUVE_40_OFFSET                         (0x79C)
#define ISP_GAMMA_C156_PRE                                      ISP_GAMMA_C156_PRE
#define ISP_GAMMA_C156_PRE_POS                                  (0U)
#define ISP_GAMMA_C156_PRE_LEN                                  (8U)
#define ISP_GAMMA_C156_PRE_MSK                                  (((1U<<ISP_GAMMA_C156_PRE_LEN)-1)<<ISP_GAMMA_C156_PRE_POS)
#define ISP_GAMMA_C156_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C156_PRE_LEN)-1)<<ISP_GAMMA_C156_PRE_POS))
#define ISP_GAMMA_C157_PRE                                      ISP_GAMMA_C157_PRE
#define ISP_GAMMA_C157_PRE_POS                                  (8U)
#define ISP_GAMMA_C157_PRE_LEN                                  (8U)
#define ISP_GAMMA_C157_PRE_MSK                                  (((1U<<ISP_GAMMA_C157_PRE_LEN)-1)<<ISP_GAMMA_C157_PRE_POS)
#define ISP_GAMMA_C157_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C157_PRE_LEN)-1)<<ISP_GAMMA_C157_PRE_POS))
#define ISP_GAMMA_C158_PRE                                      ISP_GAMMA_C158_PRE
#define ISP_GAMMA_C158_PRE_POS                                  (16U)
#define ISP_GAMMA_C158_PRE_LEN                                  (8U)
#define ISP_GAMMA_C158_PRE_MSK                                  (((1U<<ISP_GAMMA_C158_PRE_LEN)-1)<<ISP_GAMMA_C158_PRE_POS)
#define ISP_GAMMA_C158_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C158_PRE_LEN)-1)<<ISP_GAMMA_C158_PRE_POS))
#define ISP_GAMMA_C159_PRE                                      ISP_GAMMA_C159_PRE
#define ISP_GAMMA_C159_PRE_POS                                  (24U)
#define ISP_GAMMA_C159_PRE_LEN                                  (8U)
#define ISP_GAMMA_C159_PRE_MSK                                  (((1U<<ISP_GAMMA_C159_PRE_LEN)-1)<<ISP_GAMMA_C159_PRE_POS)
#define ISP_GAMMA_C159_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C159_PRE_LEN)-1)<<ISP_GAMMA_C159_PRE_POS))

/* 0x7A0 : GAMMA_CRUVE_41 */
#define ISP_GAMMA_GAMMA_CRUVE_41_OFFSET                         (0x7A0)
#define ISP_GAMMA_C160_PRE                                      ISP_GAMMA_C160_PRE
#define ISP_GAMMA_C160_PRE_POS                                  (0U)
#define ISP_GAMMA_C160_PRE_LEN                                  (8U)
#define ISP_GAMMA_C160_PRE_MSK                                  (((1U<<ISP_GAMMA_C160_PRE_LEN)-1)<<ISP_GAMMA_C160_PRE_POS)
#define ISP_GAMMA_C160_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C160_PRE_LEN)-1)<<ISP_GAMMA_C160_PRE_POS))
#define ISP_GAMMA_C161_PRE                                      ISP_GAMMA_C161_PRE
#define ISP_GAMMA_C161_PRE_POS                                  (8U)
#define ISP_GAMMA_C161_PRE_LEN                                  (8U)
#define ISP_GAMMA_C161_PRE_MSK                                  (((1U<<ISP_GAMMA_C161_PRE_LEN)-1)<<ISP_GAMMA_C161_PRE_POS)
#define ISP_GAMMA_C161_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C161_PRE_LEN)-1)<<ISP_GAMMA_C161_PRE_POS))
#define ISP_GAMMA_C162_PRE                                      ISP_GAMMA_C162_PRE
#define ISP_GAMMA_C162_PRE_POS                                  (16U)
#define ISP_GAMMA_C162_PRE_LEN                                  (8U)
#define ISP_GAMMA_C162_PRE_MSK                                  (((1U<<ISP_GAMMA_C162_PRE_LEN)-1)<<ISP_GAMMA_C162_PRE_POS)
#define ISP_GAMMA_C162_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C162_PRE_LEN)-1)<<ISP_GAMMA_C162_PRE_POS))
#define ISP_GAMMA_C163_PRE                                      ISP_GAMMA_C163_PRE
#define ISP_GAMMA_C163_PRE_POS                                  (24U)
#define ISP_GAMMA_C163_PRE_LEN                                  (8U)
#define ISP_GAMMA_C163_PRE_MSK                                  (((1U<<ISP_GAMMA_C163_PRE_LEN)-1)<<ISP_GAMMA_C163_PRE_POS)
#define ISP_GAMMA_C163_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C163_PRE_LEN)-1)<<ISP_GAMMA_C163_PRE_POS))

/* 0x7A4 : GAMMA_CRUVE_42 */
#define ISP_GAMMA_GAMMA_CRUVE_42_OFFSET                         (0x7A4)
#define ISP_GAMMA_C164_PRE                                      ISP_GAMMA_C164_PRE
#define ISP_GAMMA_C164_PRE_POS                                  (0U)
#define ISP_GAMMA_C164_PRE_LEN                                  (8U)
#define ISP_GAMMA_C164_PRE_MSK                                  (((1U<<ISP_GAMMA_C164_PRE_LEN)-1)<<ISP_GAMMA_C164_PRE_POS)
#define ISP_GAMMA_C164_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C164_PRE_LEN)-1)<<ISP_GAMMA_C164_PRE_POS))
#define ISP_GAMMA_C165_PRE                                      ISP_GAMMA_C165_PRE
#define ISP_GAMMA_C165_PRE_POS                                  (8U)
#define ISP_GAMMA_C165_PRE_LEN                                  (8U)
#define ISP_GAMMA_C165_PRE_MSK                                  (((1U<<ISP_GAMMA_C165_PRE_LEN)-1)<<ISP_GAMMA_C165_PRE_POS)
#define ISP_GAMMA_C165_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C165_PRE_LEN)-1)<<ISP_GAMMA_C165_PRE_POS))
#define ISP_GAMMA_C166_PRE                                      ISP_GAMMA_C166_PRE
#define ISP_GAMMA_C166_PRE_POS                                  (16U)
#define ISP_GAMMA_C166_PRE_LEN                                  (8U)
#define ISP_GAMMA_C166_PRE_MSK                                  (((1U<<ISP_GAMMA_C166_PRE_LEN)-1)<<ISP_GAMMA_C166_PRE_POS)
#define ISP_GAMMA_C166_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C166_PRE_LEN)-1)<<ISP_GAMMA_C166_PRE_POS))
#define ISP_GAMMA_C167_PRE                                      ISP_GAMMA_C167_PRE
#define ISP_GAMMA_C167_PRE_POS                                  (24U)
#define ISP_GAMMA_C167_PRE_LEN                                  (8U)
#define ISP_GAMMA_C167_PRE_MSK                                  (((1U<<ISP_GAMMA_C167_PRE_LEN)-1)<<ISP_GAMMA_C167_PRE_POS)
#define ISP_GAMMA_C167_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C167_PRE_LEN)-1)<<ISP_GAMMA_C167_PRE_POS))

/* 0x7A8 : GAMMA_CRUVE_43 */
#define ISP_GAMMA_GAMMA_CRUVE_43_OFFSET                         (0x7A8)
#define ISP_GAMMA_C168_PRE                                      ISP_GAMMA_C168_PRE
#define ISP_GAMMA_C168_PRE_POS                                  (0U)
#define ISP_GAMMA_C168_PRE_LEN                                  (8U)
#define ISP_GAMMA_C168_PRE_MSK                                  (((1U<<ISP_GAMMA_C168_PRE_LEN)-1)<<ISP_GAMMA_C168_PRE_POS)
#define ISP_GAMMA_C168_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C168_PRE_LEN)-1)<<ISP_GAMMA_C168_PRE_POS))
#define ISP_GAMMA_C169_PRE                                      ISP_GAMMA_C169_PRE
#define ISP_GAMMA_C169_PRE_POS                                  (8U)
#define ISP_GAMMA_C169_PRE_LEN                                  (8U)
#define ISP_GAMMA_C169_PRE_MSK                                  (((1U<<ISP_GAMMA_C169_PRE_LEN)-1)<<ISP_GAMMA_C169_PRE_POS)
#define ISP_GAMMA_C169_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C169_PRE_LEN)-1)<<ISP_GAMMA_C169_PRE_POS))
#define ISP_GAMMA_C170_PRE                                      ISP_GAMMA_C170_PRE
#define ISP_GAMMA_C170_PRE_POS                                  (16U)
#define ISP_GAMMA_C170_PRE_LEN                                  (8U)
#define ISP_GAMMA_C170_PRE_MSK                                  (((1U<<ISP_GAMMA_C170_PRE_LEN)-1)<<ISP_GAMMA_C170_PRE_POS)
#define ISP_GAMMA_C170_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C170_PRE_LEN)-1)<<ISP_GAMMA_C170_PRE_POS))
#define ISP_GAMMA_C171_PRE                                      ISP_GAMMA_C171_PRE
#define ISP_GAMMA_C171_PRE_POS                                  (24U)
#define ISP_GAMMA_C171_PRE_LEN                                  (8U)
#define ISP_GAMMA_C171_PRE_MSK                                  (((1U<<ISP_GAMMA_C171_PRE_LEN)-1)<<ISP_GAMMA_C171_PRE_POS)
#define ISP_GAMMA_C171_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C171_PRE_LEN)-1)<<ISP_GAMMA_C171_PRE_POS))

/* 0x7AC : GAMMA_CRUVE_44 */
#define ISP_GAMMA_GAMMA_CRUVE_44_OFFSET                         (0x7AC)
#define ISP_GAMMA_C172_PRE                                      ISP_GAMMA_C172_PRE
#define ISP_GAMMA_C172_PRE_POS                                  (0U)
#define ISP_GAMMA_C172_PRE_LEN                                  (8U)
#define ISP_GAMMA_C172_PRE_MSK                                  (((1U<<ISP_GAMMA_C172_PRE_LEN)-1)<<ISP_GAMMA_C172_PRE_POS)
#define ISP_GAMMA_C172_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C172_PRE_LEN)-1)<<ISP_GAMMA_C172_PRE_POS))
#define ISP_GAMMA_C173_PRE                                      ISP_GAMMA_C173_PRE
#define ISP_GAMMA_C173_PRE_POS                                  (8U)
#define ISP_GAMMA_C173_PRE_LEN                                  (8U)
#define ISP_GAMMA_C173_PRE_MSK                                  (((1U<<ISP_GAMMA_C173_PRE_LEN)-1)<<ISP_GAMMA_C173_PRE_POS)
#define ISP_GAMMA_C173_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C173_PRE_LEN)-1)<<ISP_GAMMA_C173_PRE_POS))
#define ISP_GAMMA_C174_PRE                                      ISP_GAMMA_C174_PRE
#define ISP_GAMMA_C174_PRE_POS                                  (16U)
#define ISP_GAMMA_C174_PRE_LEN                                  (8U)
#define ISP_GAMMA_C174_PRE_MSK                                  (((1U<<ISP_GAMMA_C174_PRE_LEN)-1)<<ISP_GAMMA_C174_PRE_POS)
#define ISP_GAMMA_C174_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C174_PRE_LEN)-1)<<ISP_GAMMA_C174_PRE_POS))
#define ISP_GAMMA_C175_PRE                                      ISP_GAMMA_C175_PRE
#define ISP_GAMMA_C175_PRE_POS                                  (24U)
#define ISP_GAMMA_C175_PRE_LEN                                  (8U)
#define ISP_GAMMA_C175_PRE_MSK                                  (((1U<<ISP_GAMMA_C175_PRE_LEN)-1)<<ISP_GAMMA_C175_PRE_POS)
#define ISP_GAMMA_C175_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C175_PRE_LEN)-1)<<ISP_GAMMA_C175_PRE_POS))

/* 0x7B0 : GAMMA_CRUVE_45 */
#define ISP_GAMMA_GAMMA_CRUVE_45_OFFSET                         (0x7B0)
#define ISP_GAMMA_C176_PRE                                      ISP_GAMMA_C176_PRE
#define ISP_GAMMA_C176_PRE_POS                                  (0U)
#define ISP_GAMMA_C176_PRE_LEN                                  (8U)
#define ISP_GAMMA_C176_PRE_MSK                                  (((1U<<ISP_GAMMA_C176_PRE_LEN)-1)<<ISP_GAMMA_C176_PRE_POS)
#define ISP_GAMMA_C176_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C176_PRE_LEN)-1)<<ISP_GAMMA_C176_PRE_POS))
#define ISP_GAMMA_C177_PRE                                      ISP_GAMMA_C177_PRE
#define ISP_GAMMA_C177_PRE_POS                                  (8U)
#define ISP_GAMMA_C177_PRE_LEN                                  (8U)
#define ISP_GAMMA_C177_PRE_MSK                                  (((1U<<ISP_GAMMA_C177_PRE_LEN)-1)<<ISP_GAMMA_C177_PRE_POS)
#define ISP_GAMMA_C177_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C177_PRE_LEN)-1)<<ISP_GAMMA_C177_PRE_POS))
#define ISP_GAMMA_C178_PRE                                      ISP_GAMMA_C178_PRE
#define ISP_GAMMA_C178_PRE_POS                                  (16U)
#define ISP_GAMMA_C178_PRE_LEN                                  (8U)
#define ISP_GAMMA_C178_PRE_MSK                                  (((1U<<ISP_GAMMA_C178_PRE_LEN)-1)<<ISP_GAMMA_C178_PRE_POS)
#define ISP_GAMMA_C178_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C178_PRE_LEN)-1)<<ISP_GAMMA_C178_PRE_POS))
#define ISP_GAMMA_C179_PRE                                      ISP_GAMMA_C179_PRE
#define ISP_GAMMA_C179_PRE_POS                                  (24U)
#define ISP_GAMMA_C179_PRE_LEN                                  (8U)
#define ISP_GAMMA_C179_PRE_MSK                                  (((1U<<ISP_GAMMA_C179_PRE_LEN)-1)<<ISP_GAMMA_C179_PRE_POS)
#define ISP_GAMMA_C179_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C179_PRE_LEN)-1)<<ISP_GAMMA_C179_PRE_POS))

/* 0x7B4 : GAMMA_CRUVE_46 */
#define ISP_GAMMA_GAMMA_CRUVE_46_OFFSET                         (0x7B4)
#define ISP_GAMMA_C180_PRE                                      ISP_GAMMA_C180_PRE
#define ISP_GAMMA_C180_PRE_POS                                  (0U)
#define ISP_GAMMA_C180_PRE_LEN                                  (8U)
#define ISP_GAMMA_C180_PRE_MSK                                  (((1U<<ISP_GAMMA_C180_PRE_LEN)-1)<<ISP_GAMMA_C180_PRE_POS)
#define ISP_GAMMA_C180_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C180_PRE_LEN)-1)<<ISP_GAMMA_C180_PRE_POS))
#define ISP_GAMMA_C181_PRE                                      ISP_GAMMA_C181_PRE
#define ISP_GAMMA_C181_PRE_POS                                  (8U)
#define ISP_GAMMA_C181_PRE_LEN                                  (8U)
#define ISP_GAMMA_C181_PRE_MSK                                  (((1U<<ISP_GAMMA_C181_PRE_LEN)-1)<<ISP_GAMMA_C181_PRE_POS)
#define ISP_GAMMA_C181_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C181_PRE_LEN)-1)<<ISP_GAMMA_C181_PRE_POS))
#define ISP_GAMMA_C182_PRE                                      ISP_GAMMA_C182_PRE
#define ISP_GAMMA_C182_PRE_POS                                  (16U)
#define ISP_GAMMA_C182_PRE_LEN                                  (8U)
#define ISP_GAMMA_C182_PRE_MSK                                  (((1U<<ISP_GAMMA_C182_PRE_LEN)-1)<<ISP_GAMMA_C182_PRE_POS)
#define ISP_GAMMA_C182_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C182_PRE_LEN)-1)<<ISP_GAMMA_C182_PRE_POS))
#define ISP_GAMMA_C183_PRE                                      ISP_GAMMA_C183_PRE
#define ISP_GAMMA_C183_PRE_POS                                  (24U)
#define ISP_GAMMA_C183_PRE_LEN                                  (8U)
#define ISP_GAMMA_C183_PRE_MSK                                  (((1U<<ISP_GAMMA_C183_PRE_LEN)-1)<<ISP_GAMMA_C183_PRE_POS)
#define ISP_GAMMA_C183_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C183_PRE_LEN)-1)<<ISP_GAMMA_C183_PRE_POS))

/* 0x7B8 : GAMMA_CRUVE_47 */
#define ISP_GAMMA_GAMMA_CRUVE_47_OFFSET                         (0x7B8)
#define ISP_GAMMA_C184_PRE                                      ISP_GAMMA_C184_PRE
#define ISP_GAMMA_C184_PRE_POS                                  (0U)
#define ISP_GAMMA_C184_PRE_LEN                                  (8U)
#define ISP_GAMMA_C184_PRE_MSK                                  (((1U<<ISP_GAMMA_C184_PRE_LEN)-1)<<ISP_GAMMA_C184_PRE_POS)
#define ISP_GAMMA_C184_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C184_PRE_LEN)-1)<<ISP_GAMMA_C184_PRE_POS))
#define ISP_GAMMA_C185_PRE                                      ISP_GAMMA_C185_PRE
#define ISP_GAMMA_C185_PRE_POS                                  (8U)
#define ISP_GAMMA_C185_PRE_LEN                                  (8U)
#define ISP_GAMMA_C185_PRE_MSK                                  (((1U<<ISP_GAMMA_C185_PRE_LEN)-1)<<ISP_GAMMA_C185_PRE_POS)
#define ISP_GAMMA_C185_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C185_PRE_LEN)-1)<<ISP_GAMMA_C185_PRE_POS))
#define ISP_GAMMA_C186_PRE                                      ISP_GAMMA_C186_PRE
#define ISP_GAMMA_C186_PRE_POS                                  (16U)
#define ISP_GAMMA_C186_PRE_LEN                                  (8U)
#define ISP_GAMMA_C186_PRE_MSK                                  (((1U<<ISP_GAMMA_C186_PRE_LEN)-1)<<ISP_GAMMA_C186_PRE_POS)
#define ISP_GAMMA_C186_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C186_PRE_LEN)-1)<<ISP_GAMMA_C186_PRE_POS))
#define ISP_GAMMA_C187_PRE                                      ISP_GAMMA_C187_PRE
#define ISP_GAMMA_C187_PRE_POS                                  (24U)
#define ISP_GAMMA_C187_PRE_LEN                                  (8U)
#define ISP_GAMMA_C187_PRE_MSK                                  (((1U<<ISP_GAMMA_C187_PRE_LEN)-1)<<ISP_GAMMA_C187_PRE_POS)
#define ISP_GAMMA_C187_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C187_PRE_LEN)-1)<<ISP_GAMMA_C187_PRE_POS))

/* 0x7BC : GAMMA_CRUVE_48 */
#define ISP_GAMMA_GAMMA_CRUVE_48_OFFSET                         (0x7BC)
#define ISP_GAMMA_C188_PRE                                      ISP_GAMMA_C188_PRE
#define ISP_GAMMA_C188_PRE_POS                                  (0U)
#define ISP_GAMMA_C188_PRE_LEN                                  (8U)
#define ISP_GAMMA_C188_PRE_MSK                                  (((1U<<ISP_GAMMA_C188_PRE_LEN)-1)<<ISP_GAMMA_C188_PRE_POS)
#define ISP_GAMMA_C188_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C188_PRE_LEN)-1)<<ISP_GAMMA_C188_PRE_POS))
#define ISP_GAMMA_C189_PRE                                      ISP_GAMMA_C189_PRE
#define ISP_GAMMA_C189_PRE_POS                                  (8U)
#define ISP_GAMMA_C189_PRE_LEN                                  (8U)
#define ISP_GAMMA_C189_PRE_MSK                                  (((1U<<ISP_GAMMA_C189_PRE_LEN)-1)<<ISP_GAMMA_C189_PRE_POS)
#define ISP_GAMMA_C189_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C189_PRE_LEN)-1)<<ISP_GAMMA_C189_PRE_POS))
#define ISP_GAMMA_C190_PRE                                      ISP_GAMMA_C190_PRE
#define ISP_GAMMA_C190_PRE_POS                                  (16U)
#define ISP_GAMMA_C190_PRE_LEN                                  (8U)
#define ISP_GAMMA_C190_PRE_MSK                                  (((1U<<ISP_GAMMA_C190_PRE_LEN)-1)<<ISP_GAMMA_C190_PRE_POS)
#define ISP_GAMMA_C190_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C190_PRE_LEN)-1)<<ISP_GAMMA_C190_PRE_POS))
#define ISP_GAMMA_C191_PRE                                      ISP_GAMMA_C191_PRE
#define ISP_GAMMA_C191_PRE_POS                                  (24U)
#define ISP_GAMMA_C191_PRE_LEN                                  (8U)
#define ISP_GAMMA_C191_PRE_MSK                                  (((1U<<ISP_GAMMA_C191_PRE_LEN)-1)<<ISP_GAMMA_C191_PRE_POS)
#define ISP_GAMMA_C191_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C191_PRE_LEN)-1)<<ISP_GAMMA_C191_PRE_POS))

/* 0x7C0 : GAMMA_CRUVE_49 */
#define ISP_GAMMA_GAMMA_CRUVE_49_OFFSET                         (0x7C0)
#define ISP_GAMMA_C192_PRE                                      ISP_GAMMA_C192_PRE
#define ISP_GAMMA_C192_PRE_POS                                  (0U)
#define ISP_GAMMA_C192_PRE_LEN                                  (8U)
#define ISP_GAMMA_C192_PRE_MSK                                  (((1U<<ISP_GAMMA_C192_PRE_LEN)-1)<<ISP_GAMMA_C192_PRE_POS)
#define ISP_GAMMA_C192_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C192_PRE_LEN)-1)<<ISP_GAMMA_C192_PRE_POS))
#define ISP_GAMMA_C193_PRE                                      ISP_GAMMA_C193_PRE
#define ISP_GAMMA_C193_PRE_POS                                  (8U)
#define ISP_GAMMA_C193_PRE_LEN                                  (8U)
#define ISP_GAMMA_C193_PRE_MSK                                  (((1U<<ISP_GAMMA_C193_PRE_LEN)-1)<<ISP_GAMMA_C193_PRE_POS)
#define ISP_GAMMA_C193_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C193_PRE_LEN)-1)<<ISP_GAMMA_C193_PRE_POS))
#define ISP_GAMMA_C194_PRE                                      ISP_GAMMA_C194_PRE
#define ISP_GAMMA_C194_PRE_POS                                  (16U)
#define ISP_GAMMA_C194_PRE_LEN                                  (8U)
#define ISP_GAMMA_C194_PRE_MSK                                  (((1U<<ISP_GAMMA_C194_PRE_LEN)-1)<<ISP_GAMMA_C194_PRE_POS)
#define ISP_GAMMA_C194_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C194_PRE_LEN)-1)<<ISP_GAMMA_C194_PRE_POS))
#define ISP_GAMMA_C195_PRE                                      ISP_GAMMA_C195_PRE
#define ISP_GAMMA_C195_PRE_POS                                  (24U)
#define ISP_GAMMA_C195_PRE_LEN                                  (8U)
#define ISP_GAMMA_C195_PRE_MSK                                  (((1U<<ISP_GAMMA_C195_PRE_LEN)-1)<<ISP_GAMMA_C195_PRE_POS)
#define ISP_GAMMA_C195_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C195_PRE_LEN)-1)<<ISP_GAMMA_C195_PRE_POS))

/* 0x7C4 : GAMMA_CRUVE_50 */
#define ISP_GAMMA_GAMMA_CRUVE_50_OFFSET                         (0x7C4)
#define ISP_GAMMA_C196_PRE                                      ISP_GAMMA_C196_PRE
#define ISP_GAMMA_C196_PRE_POS                                  (0U)
#define ISP_GAMMA_C196_PRE_LEN                                  (8U)
#define ISP_GAMMA_C196_PRE_MSK                                  (((1U<<ISP_GAMMA_C196_PRE_LEN)-1)<<ISP_GAMMA_C196_PRE_POS)
#define ISP_GAMMA_C196_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C196_PRE_LEN)-1)<<ISP_GAMMA_C196_PRE_POS))
#define ISP_GAMMA_C197_PRE                                      ISP_GAMMA_C197_PRE
#define ISP_GAMMA_C197_PRE_POS                                  (8U)
#define ISP_GAMMA_C197_PRE_LEN                                  (8U)
#define ISP_GAMMA_C197_PRE_MSK                                  (((1U<<ISP_GAMMA_C197_PRE_LEN)-1)<<ISP_GAMMA_C197_PRE_POS)
#define ISP_GAMMA_C197_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C197_PRE_LEN)-1)<<ISP_GAMMA_C197_PRE_POS))
#define ISP_GAMMA_C198_PRE                                      ISP_GAMMA_C198_PRE
#define ISP_GAMMA_C198_PRE_POS                                  (16U)
#define ISP_GAMMA_C198_PRE_LEN                                  (8U)
#define ISP_GAMMA_C198_PRE_MSK                                  (((1U<<ISP_GAMMA_C198_PRE_LEN)-1)<<ISP_GAMMA_C198_PRE_POS)
#define ISP_GAMMA_C198_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C198_PRE_LEN)-1)<<ISP_GAMMA_C198_PRE_POS))
#define ISP_GAMMA_C199_PRE                                      ISP_GAMMA_C199_PRE
#define ISP_GAMMA_C199_PRE_POS                                  (24U)
#define ISP_GAMMA_C199_PRE_LEN                                  (8U)
#define ISP_GAMMA_C199_PRE_MSK                                  (((1U<<ISP_GAMMA_C199_PRE_LEN)-1)<<ISP_GAMMA_C199_PRE_POS)
#define ISP_GAMMA_C199_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C199_PRE_LEN)-1)<<ISP_GAMMA_C199_PRE_POS))

/* 0x7C8 : GAMMA_CRUVE_51 */
#define ISP_GAMMA_GAMMA_CRUVE_51_OFFSET                         (0x7C8)
#define ISP_GAMMA_C200_PRE                                      ISP_GAMMA_C200_PRE
#define ISP_GAMMA_C200_PRE_POS                                  (0U)
#define ISP_GAMMA_C200_PRE_LEN                                  (8U)
#define ISP_GAMMA_C200_PRE_MSK                                  (((1U<<ISP_GAMMA_C200_PRE_LEN)-1)<<ISP_GAMMA_C200_PRE_POS)
#define ISP_GAMMA_C200_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C200_PRE_LEN)-1)<<ISP_GAMMA_C200_PRE_POS))
#define ISP_GAMMA_C201_PRE                                      ISP_GAMMA_C201_PRE
#define ISP_GAMMA_C201_PRE_POS                                  (8U)
#define ISP_GAMMA_C201_PRE_LEN                                  (8U)
#define ISP_GAMMA_C201_PRE_MSK                                  (((1U<<ISP_GAMMA_C201_PRE_LEN)-1)<<ISP_GAMMA_C201_PRE_POS)
#define ISP_GAMMA_C201_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C201_PRE_LEN)-1)<<ISP_GAMMA_C201_PRE_POS))
#define ISP_GAMMA_C202_PRE                                      ISP_GAMMA_C202_PRE
#define ISP_GAMMA_C202_PRE_POS                                  (16U)
#define ISP_GAMMA_C202_PRE_LEN                                  (8U)
#define ISP_GAMMA_C202_PRE_MSK                                  (((1U<<ISP_GAMMA_C202_PRE_LEN)-1)<<ISP_GAMMA_C202_PRE_POS)
#define ISP_GAMMA_C202_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C202_PRE_LEN)-1)<<ISP_GAMMA_C202_PRE_POS))
#define ISP_GAMMA_C203_PRE                                      ISP_GAMMA_C203_PRE
#define ISP_GAMMA_C203_PRE_POS                                  (24U)
#define ISP_GAMMA_C203_PRE_LEN                                  (8U)
#define ISP_GAMMA_C203_PRE_MSK                                  (((1U<<ISP_GAMMA_C203_PRE_LEN)-1)<<ISP_GAMMA_C203_PRE_POS)
#define ISP_GAMMA_C203_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C203_PRE_LEN)-1)<<ISP_GAMMA_C203_PRE_POS))

/* 0x7CC : GAMMA_CRUVE_52 */
#define ISP_GAMMA_GAMMA_CRUVE_52_OFFSET                         (0x7CC)
#define ISP_GAMMA_C204_PRE                                      ISP_GAMMA_C204_PRE
#define ISP_GAMMA_C204_PRE_POS                                  (0U)
#define ISP_GAMMA_C204_PRE_LEN                                  (8U)
#define ISP_GAMMA_C204_PRE_MSK                                  (((1U<<ISP_GAMMA_C204_PRE_LEN)-1)<<ISP_GAMMA_C204_PRE_POS)
#define ISP_GAMMA_C204_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C204_PRE_LEN)-1)<<ISP_GAMMA_C204_PRE_POS))
#define ISP_GAMMA_C205_PRE                                      ISP_GAMMA_C205_PRE
#define ISP_GAMMA_C205_PRE_POS                                  (8U)
#define ISP_GAMMA_C205_PRE_LEN                                  (8U)
#define ISP_GAMMA_C205_PRE_MSK                                  (((1U<<ISP_GAMMA_C205_PRE_LEN)-1)<<ISP_GAMMA_C205_PRE_POS)
#define ISP_GAMMA_C205_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C205_PRE_LEN)-1)<<ISP_GAMMA_C205_PRE_POS))
#define ISP_GAMMA_C206_PRE                                      ISP_GAMMA_C206_PRE
#define ISP_GAMMA_C206_PRE_POS                                  (16U)
#define ISP_GAMMA_C206_PRE_LEN                                  (8U)
#define ISP_GAMMA_C206_PRE_MSK                                  (((1U<<ISP_GAMMA_C206_PRE_LEN)-1)<<ISP_GAMMA_C206_PRE_POS)
#define ISP_GAMMA_C206_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C206_PRE_LEN)-1)<<ISP_GAMMA_C206_PRE_POS))
#define ISP_GAMMA_C207_PRE                                      ISP_GAMMA_C207_PRE
#define ISP_GAMMA_C207_PRE_POS                                  (24U)
#define ISP_GAMMA_C207_PRE_LEN                                  (8U)
#define ISP_GAMMA_C207_PRE_MSK                                  (((1U<<ISP_GAMMA_C207_PRE_LEN)-1)<<ISP_GAMMA_C207_PRE_POS)
#define ISP_GAMMA_C207_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C207_PRE_LEN)-1)<<ISP_GAMMA_C207_PRE_POS))

/* 0x7D0 : GAMMA_CRUVE_53 */
#define ISP_GAMMA_GAMMA_CRUVE_53_OFFSET                         (0x7D0)
#define ISP_GAMMA_C208_PRE                                      ISP_GAMMA_C208_PRE
#define ISP_GAMMA_C208_PRE_POS                                  (0U)
#define ISP_GAMMA_C208_PRE_LEN                                  (8U)
#define ISP_GAMMA_C208_PRE_MSK                                  (((1U<<ISP_GAMMA_C208_PRE_LEN)-1)<<ISP_GAMMA_C208_PRE_POS)
#define ISP_GAMMA_C208_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C208_PRE_LEN)-1)<<ISP_GAMMA_C208_PRE_POS))
#define ISP_GAMMA_C209_PRE                                      ISP_GAMMA_C209_PRE
#define ISP_GAMMA_C209_PRE_POS                                  (8U)
#define ISP_GAMMA_C209_PRE_LEN                                  (8U)
#define ISP_GAMMA_C209_PRE_MSK                                  (((1U<<ISP_GAMMA_C209_PRE_LEN)-1)<<ISP_GAMMA_C209_PRE_POS)
#define ISP_GAMMA_C209_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C209_PRE_LEN)-1)<<ISP_GAMMA_C209_PRE_POS))
#define ISP_GAMMA_C210_PRE                                      ISP_GAMMA_C210_PRE
#define ISP_GAMMA_C210_PRE_POS                                  (16U)
#define ISP_GAMMA_C210_PRE_LEN                                  (8U)
#define ISP_GAMMA_C210_PRE_MSK                                  (((1U<<ISP_GAMMA_C210_PRE_LEN)-1)<<ISP_GAMMA_C210_PRE_POS)
#define ISP_GAMMA_C210_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C210_PRE_LEN)-1)<<ISP_GAMMA_C210_PRE_POS))
#define ISP_GAMMA_C211_PRE                                      ISP_GAMMA_C211_PRE
#define ISP_GAMMA_C211_PRE_POS                                  (24U)
#define ISP_GAMMA_C211_PRE_LEN                                  (8U)
#define ISP_GAMMA_C211_PRE_MSK                                  (((1U<<ISP_GAMMA_C211_PRE_LEN)-1)<<ISP_GAMMA_C211_PRE_POS)
#define ISP_GAMMA_C211_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C211_PRE_LEN)-1)<<ISP_GAMMA_C211_PRE_POS))

/* 0x7D4 : GAMMA_CRUVE_54 */
#define ISP_GAMMA_GAMMA_CRUVE_54_OFFSET                         (0x7D4)
#define ISP_GAMMA_C212_PRE                                      ISP_GAMMA_C212_PRE
#define ISP_GAMMA_C212_PRE_POS                                  (0U)
#define ISP_GAMMA_C212_PRE_LEN                                  (8U)
#define ISP_GAMMA_C212_PRE_MSK                                  (((1U<<ISP_GAMMA_C212_PRE_LEN)-1)<<ISP_GAMMA_C212_PRE_POS)
#define ISP_GAMMA_C212_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C212_PRE_LEN)-1)<<ISP_GAMMA_C212_PRE_POS))
#define ISP_GAMMA_C213_PRE                                      ISP_GAMMA_C213_PRE
#define ISP_GAMMA_C213_PRE_POS                                  (8U)
#define ISP_GAMMA_C213_PRE_LEN                                  (8U)
#define ISP_GAMMA_C213_PRE_MSK                                  (((1U<<ISP_GAMMA_C213_PRE_LEN)-1)<<ISP_GAMMA_C213_PRE_POS)
#define ISP_GAMMA_C213_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C213_PRE_LEN)-1)<<ISP_GAMMA_C213_PRE_POS))
#define ISP_GAMMA_C214_PRE                                      ISP_GAMMA_C214_PRE
#define ISP_GAMMA_C214_PRE_POS                                  (16U)
#define ISP_GAMMA_C214_PRE_LEN                                  (8U)
#define ISP_GAMMA_C214_PRE_MSK                                  (((1U<<ISP_GAMMA_C214_PRE_LEN)-1)<<ISP_GAMMA_C214_PRE_POS)
#define ISP_GAMMA_C214_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C214_PRE_LEN)-1)<<ISP_GAMMA_C214_PRE_POS))
#define ISP_GAMMA_C215_PRE                                      ISP_GAMMA_C215_PRE
#define ISP_GAMMA_C215_PRE_POS                                  (24U)
#define ISP_GAMMA_C215_PRE_LEN                                  (8U)
#define ISP_GAMMA_C215_PRE_MSK                                  (((1U<<ISP_GAMMA_C215_PRE_LEN)-1)<<ISP_GAMMA_C215_PRE_POS)
#define ISP_GAMMA_C215_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C215_PRE_LEN)-1)<<ISP_GAMMA_C215_PRE_POS))

/* 0x7D8 : GAMMA_CRUVE_55 */
#define ISP_GAMMA_GAMMA_CRUVE_55_OFFSET                         (0x7D8)
#define ISP_GAMMA_C216_PRE                                      ISP_GAMMA_C216_PRE
#define ISP_GAMMA_C216_PRE_POS                                  (0U)
#define ISP_GAMMA_C216_PRE_LEN                                  (8U)
#define ISP_GAMMA_C216_PRE_MSK                                  (((1U<<ISP_GAMMA_C216_PRE_LEN)-1)<<ISP_GAMMA_C216_PRE_POS)
#define ISP_GAMMA_C216_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C216_PRE_LEN)-1)<<ISP_GAMMA_C216_PRE_POS))
#define ISP_GAMMA_C217_PRE                                      ISP_GAMMA_C217_PRE
#define ISP_GAMMA_C217_PRE_POS                                  (8U)
#define ISP_GAMMA_C217_PRE_LEN                                  (8U)
#define ISP_GAMMA_C217_PRE_MSK                                  (((1U<<ISP_GAMMA_C217_PRE_LEN)-1)<<ISP_GAMMA_C217_PRE_POS)
#define ISP_GAMMA_C217_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C217_PRE_LEN)-1)<<ISP_GAMMA_C217_PRE_POS))
#define ISP_GAMMA_C218_PRE                                      ISP_GAMMA_C218_PRE
#define ISP_GAMMA_C218_PRE_POS                                  (16U)
#define ISP_GAMMA_C218_PRE_LEN                                  (8U)
#define ISP_GAMMA_C218_PRE_MSK                                  (((1U<<ISP_GAMMA_C218_PRE_LEN)-1)<<ISP_GAMMA_C218_PRE_POS)
#define ISP_GAMMA_C218_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C218_PRE_LEN)-1)<<ISP_GAMMA_C218_PRE_POS))
#define ISP_GAMMA_C219_PRE                                      ISP_GAMMA_C219_PRE
#define ISP_GAMMA_C219_PRE_POS                                  (24U)
#define ISP_GAMMA_C219_PRE_LEN                                  (8U)
#define ISP_GAMMA_C219_PRE_MSK                                  (((1U<<ISP_GAMMA_C219_PRE_LEN)-1)<<ISP_GAMMA_C219_PRE_POS)
#define ISP_GAMMA_C219_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C219_PRE_LEN)-1)<<ISP_GAMMA_C219_PRE_POS))

/* 0x7DC : GAMMA_CRUVE_56 */
#define ISP_GAMMA_GAMMA_CRUVE_56_OFFSET                         (0x7DC)
#define ISP_GAMMA_C220_PRE                                      ISP_GAMMA_C220_PRE
#define ISP_GAMMA_C220_PRE_POS                                  (0U)
#define ISP_GAMMA_C220_PRE_LEN                                  (8U)
#define ISP_GAMMA_C220_PRE_MSK                                  (((1U<<ISP_GAMMA_C220_PRE_LEN)-1)<<ISP_GAMMA_C220_PRE_POS)
#define ISP_GAMMA_C220_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C220_PRE_LEN)-1)<<ISP_GAMMA_C220_PRE_POS))
#define ISP_GAMMA_C221_PRE                                      ISP_GAMMA_C221_PRE
#define ISP_GAMMA_C221_PRE_POS                                  (8U)
#define ISP_GAMMA_C221_PRE_LEN                                  (8U)
#define ISP_GAMMA_C221_PRE_MSK                                  (((1U<<ISP_GAMMA_C221_PRE_LEN)-1)<<ISP_GAMMA_C221_PRE_POS)
#define ISP_GAMMA_C221_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C221_PRE_LEN)-1)<<ISP_GAMMA_C221_PRE_POS))
#define ISP_GAMMA_C222_PRE                                      ISP_GAMMA_C222_PRE
#define ISP_GAMMA_C222_PRE_POS                                  (16U)
#define ISP_GAMMA_C222_PRE_LEN                                  (8U)
#define ISP_GAMMA_C222_PRE_MSK                                  (((1U<<ISP_GAMMA_C222_PRE_LEN)-1)<<ISP_GAMMA_C222_PRE_POS)
#define ISP_GAMMA_C222_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C222_PRE_LEN)-1)<<ISP_GAMMA_C222_PRE_POS))
#define ISP_GAMMA_C223_PRE                                      ISP_GAMMA_C223_PRE
#define ISP_GAMMA_C223_PRE_POS                                  (24U)
#define ISP_GAMMA_C223_PRE_LEN                                  (8U)
#define ISP_GAMMA_C223_PRE_MSK                                  (((1U<<ISP_GAMMA_C223_PRE_LEN)-1)<<ISP_GAMMA_C223_PRE_POS)
#define ISP_GAMMA_C223_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C223_PRE_LEN)-1)<<ISP_GAMMA_C223_PRE_POS))

/* 0x7E0 : GAMMA_CRUVE_57 */
#define ISP_GAMMA_GAMMA_CRUVE_57_OFFSET                         (0x7E0)
#define ISP_GAMMA_C224_PRE                                      ISP_GAMMA_C224_PRE
#define ISP_GAMMA_C224_PRE_POS                                  (0U)
#define ISP_GAMMA_C224_PRE_LEN                                  (8U)
#define ISP_GAMMA_C224_PRE_MSK                                  (((1U<<ISP_GAMMA_C224_PRE_LEN)-1)<<ISP_GAMMA_C224_PRE_POS)
#define ISP_GAMMA_C224_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C224_PRE_LEN)-1)<<ISP_GAMMA_C224_PRE_POS))
#define ISP_GAMMA_C225_PRE                                      ISP_GAMMA_C225_PRE
#define ISP_GAMMA_C225_PRE_POS                                  (8U)
#define ISP_GAMMA_C225_PRE_LEN                                  (8U)
#define ISP_GAMMA_C225_PRE_MSK                                  (((1U<<ISP_GAMMA_C225_PRE_LEN)-1)<<ISP_GAMMA_C225_PRE_POS)
#define ISP_GAMMA_C225_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C225_PRE_LEN)-1)<<ISP_GAMMA_C225_PRE_POS))
#define ISP_GAMMA_C226_PRE                                      ISP_GAMMA_C226_PRE
#define ISP_GAMMA_C226_PRE_POS                                  (16U)
#define ISP_GAMMA_C226_PRE_LEN                                  (8U)
#define ISP_GAMMA_C226_PRE_MSK                                  (((1U<<ISP_GAMMA_C226_PRE_LEN)-1)<<ISP_GAMMA_C226_PRE_POS)
#define ISP_GAMMA_C226_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C226_PRE_LEN)-1)<<ISP_GAMMA_C226_PRE_POS))
#define ISP_GAMMA_C227_PRE                                      ISP_GAMMA_C227_PRE
#define ISP_GAMMA_C227_PRE_POS                                  (24U)
#define ISP_GAMMA_C227_PRE_LEN                                  (8U)
#define ISP_GAMMA_C227_PRE_MSK                                  (((1U<<ISP_GAMMA_C227_PRE_LEN)-1)<<ISP_GAMMA_C227_PRE_POS)
#define ISP_GAMMA_C227_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C227_PRE_LEN)-1)<<ISP_GAMMA_C227_PRE_POS))

/* 0x7E4 : GAMMA_CRUVE_58 */
#define ISP_GAMMA_GAMMA_CRUVE_58_OFFSET                         (0x7E4)
#define ISP_GAMMA_C228_PRE                                      ISP_GAMMA_C228_PRE
#define ISP_GAMMA_C228_PRE_POS                                  (0U)
#define ISP_GAMMA_C228_PRE_LEN                                  (8U)
#define ISP_GAMMA_C228_PRE_MSK                                  (((1U<<ISP_GAMMA_C228_PRE_LEN)-1)<<ISP_GAMMA_C228_PRE_POS)
#define ISP_GAMMA_C228_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C228_PRE_LEN)-1)<<ISP_GAMMA_C228_PRE_POS))
#define ISP_GAMMA_C229_PRE                                      ISP_GAMMA_C229_PRE
#define ISP_GAMMA_C229_PRE_POS                                  (8U)
#define ISP_GAMMA_C229_PRE_LEN                                  (8U)
#define ISP_GAMMA_C229_PRE_MSK                                  (((1U<<ISP_GAMMA_C229_PRE_LEN)-1)<<ISP_GAMMA_C229_PRE_POS)
#define ISP_GAMMA_C229_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C229_PRE_LEN)-1)<<ISP_GAMMA_C229_PRE_POS))
#define ISP_GAMMA_C230_PRE                                      ISP_GAMMA_C230_PRE
#define ISP_GAMMA_C230_PRE_POS                                  (16U)
#define ISP_GAMMA_C230_PRE_LEN                                  (8U)
#define ISP_GAMMA_C230_PRE_MSK                                  (((1U<<ISP_GAMMA_C230_PRE_LEN)-1)<<ISP_GAMMA_C230_PRE_POS)
#define ISP_GAMMA_C230_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C230_PRE_LEN)-1)<<ISP_GAMMA_C230_PRE_POS))
#define ISP_GAMMA_C231_PRE                                      ISP_GAMMA_C231_PRE
#define ISP_GAMMA_C231_PRE_POS                                  (24U)
#define ISP_GAMMA_C231_PRE_LEN                                  (8U)
#define ISP_GAMMA_C231_PRE_MSK                                  (((1U<<ISP_GAMMA_C231_PRE_LEN)-1)<<ISP_GAMMA_C231_PRE_POS)
#define ISP_GAMMA_C231_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C231_PRE_LEN)-1)<<ISP_GAMMA_C231_PRE_POS))

/* 0x7E8 : GAMMA_CRUVE_59 */
#define ISP_GAMMA_GAMMA_CRUVE_59_OFFSET                         (0x7E8)
#define ISP_GAMMA_C232_PRE                                      ISP_GAMMA_C232_PRE
#define ISP_GAMMA_C232_PRE_POS                                  (0U)
#define ISP_GAMMA_C232_PRE_LEN                                  (8U)
#define ISP_GAMMA_C232_PRE_MSK                                  (((1U<<ISP_GAMMA_C232_PRE_LEN)-1)<<ISP_GAMMA_C232_PRE_POS)
#define ISP_GAMMA_C232_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C232_PRE_LEN)-1)<<ISP_GAMMA_C232_PRE_POS))
#define ISP_GAMMA_C233_PRE                                      ISP_GAMMA_C233_PRE
#define ISP_GAMMA_C233_PRE_POS                                  (8U)
#define ISP_GAMMA_C233_PRE_LEN                                  (8U)
#define ISP_GAMMA_C233_PRE_MSK                                  (((1U<<ISP_GAMMA_C233_PRE_LEN)-1)<<ISP_GAMMA_C233_PRE_POS)
#define ISP_GAMMA_C233_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C233_PRE_LEN)-1)<<ISP_GAMMA_C233_PRE_POS))
#define ISP_GAMMA_C234_PRE                                      ISP_GAMMA_C234_PRE
#define ISP_GAMMA_C234_PRE_POS                                  (16U)
#define ISP_GAMMA_C234_PRE_LEN                                  (8U)
#define ISP_GAMMA_C234_PRE_MSK                                  (((1U<<ISP_GAMMA_C234_PRE_LEN)-1)<<ISP_GAMMA_C234_PRE_POS)
#define ISP_GAMMA_C234_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C234_PRE_LEN)-1)<<ISP_GAMMA_C234_PRE_POS))
#define ISP_GAMMA_C235_PRE                                      ISP_GAMMA_C235_PRE
#define ISP_GAMMA_C235_PRE_POS                                  (24U)
#define ISP_GAMMA_C235_PRE_LEN                                  (8U)
#define ISP_GAMMA_C235_PRE_MSK                                  (((1U<<ISP_GAMMA_C235_PRE_LEN)-1)<<ISP_GAMMA_C235_PRE_POS)
#define ISP_GAMMA_C235_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C235_PRE_LEN)-1)<<ISP_GAMMA_C235_PRE_POS))

/* 0x7EC : GAMMA_CRUVE_60 */
#define ISP_GAMMA_GAMMA_CRUVE_60_OFFSET                         (0x7EC)
#define ISP_GAMMA_C236_PRE                                      ISP_GAMMA_C236_PRE
#define ISP_GAMMA_C236_PRE_POS                                  (0U)
#define ISP_GAMMA_C236_PRE_LEN                                  (8U)
#define ISP_GAMMA_C236_PRE_MSK                                  (((1U<<ISP_GAMMA_C236_PRE_LEN)-1)<<ISP_GAMMA_C236_PRE_POS)
#define ISP_GAMMA_C236_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C236_PRE_LEN)-1)<<ISP_GAMMA_C236_PRE_POS))
#define ISP_GAMMA_C237_PRE                                      ISP_GAMMA_C237_PRE
#define ISP_GAMMA_C237_PRE_POS                                  (8U)
#define ISP_GAMMA_C237_PRE_LEN                                  (8U)
#define ISP_GAMMA_C237_PRE_MSK                                  (((1U<<ISP_GAMMA_C237_PRE_LEN)-1)<<ISP_GAMMA_C237_PRE_POS)
#define ISP_GAMMA_C237_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C237_PRE_LEN)-1)<<ISP_GAMMA_C237_PRE_POS))
#define ISP_GAMMA_C238_PRE                                      ISP_GAMMA_C238_PRE
#define ISP_GAMMA_C238_PRE_POS                                  (16U)
#define ISP_GAMMA_C238_PRE_LEN                                  (8U)
#define ISP_GAMMA_C238_PRE_MSK                                  (((1U<<ISP_GAMMA_C238_PRE_LEN)-1)<<ISP_GAMMA_C238_PRE_POS)
#define ISP_GAMMA_C238_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C238_PRE_LEN)-1)<<ISP_GAMMA_C238_PRE_POS))
#define ISP_GAMMA_C239_PRE                                      ISP_GAMMA_C239_PRE
#define ISP_GAMMA_C239_PRE_POS                                  (24U)
#define ISP_GAMMA_C239_PRE_LEN                                  (8U)
#define ISP_GAMMA_C239_PRE_MSK                                  (((1U<<ISP_GAMMA_C239_PRE_LEN)-1)<<ISP_GAMMA_C239_PRE_POS)
#define ISP_GAMMA_C239_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C239_PRE_LEN)-1)<<ISP_GAMMA_C239_PRE_POS))

/* 0x7F0 : GAMMA_CRUVE_61 */
#define ISP_GAMMA_GAMMA_CRUVE_61_OFFSET                         (0x7F0)
#define ISP_GAMMA_C240_PRE                                      ISP_GAMMA_C240_PRE
#define ISP_GAMMA_C240_PRE_POS                                  (0U)
#define ISP_GAMMA_C240_PRE_LEN                                  (8U)
#define ISP_GAMMA_C240_PRE_MSK                                  (((1U<<ISP_GAMMA_C240_PRE_LEN)-1)<<ISP_GAMMA_C240_PRE_POS)
#define ISP_GAMMA_C240_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C240_PRE_LEN)-1)<<ISP_GAMMA_C240_PRE_POS))
#define ISP_GAMMA_C241_PRE                                      ISP_GAMMA_C241_PRE
#define ISP_GAMMA_C241_PRE_POS                                  (8U)
#define ISP_GAMMA_C241_PRE_LEN                                  (8U)
#define ISP_GAMMA_C241_PRE_MSK                                  (((1U<<ISP_GAMMA_C241_PRE_LEN)-1)<<ISP_GAMMA_C241_PRE_POS)
#define ISP_GAMMA_C241_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C241_PRE_LEN)-1)<<ISP_GAMMA_C241_PRE_POS))
#define ISP_GAMMA_C242_PRE                                      ISP_GAMMA_C242_PRE
#define ISP_GAMMA_C242_PRE_POS                                  (16U)
#define ISP_GAMMA_C242_PRE_LEN                                  (8U)
#define ISP_GAMMA_C242_PRE_MSK                                  (((1U<<ISP_GAMMA_C242_PRE_LEN)-1)<<ISP_GAMMA_C242_PRE_POS)
#define ISP_GAMMA_C242_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C242_PRE_LEN)-1)<<ISP_GAMMA_C242_PRE_POS))
#define ISP_GAMMA_C243_PRE                                      ISP_GAMMA_C243_PRE
#define ISP_GAMMA_C243_PRE_POS                                  (24U)
#define ISP_GAMMA_C243_PRE_LEN                                  (8U)
#define ISP_GAMMA_C243_PRE_MSK                                  (((1U<<ISP_GAMMA_C243_PRE_LEN)-1)<<ISP_GAMMA_C243_PRE_POS)
#define ISP_GAMMA_C243_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C243_PRE_LEN)-1)<<ISP_GAMMA_C243_PRE_POS))

/* 0x7F4 : GAMMA_CRUVE_62 */
#define ISP_GAMMA_GAMMA_CRUVE_62_OFFSET                         (0x7F4)
#define ISP_GAMMA_C244_PRE                                      ISP_GAMMA_C244_PRE
#define ISP_GAMMA_C244_PRE_POS                                  (0U)
#define ISP_GAMMA_C244_PRE_LEN                                  (8U)
#define ISP_GAMMA_C244_PRE_MSK                                  (((1U<<ISP_GAMMA_C244_PRE_LEN)-1)<<ISP_GAMMA_C244_PRE_POS)
#define ISP_GAMMA_C244_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C244_PRE_LEN)-1)<<ISP_GAMMA_C244_PRE_POS))
#define ISP_GAMMA_C245_PRE                                      ISP_GAMMA_C245_PRE
#define ISP_GAMMA_C245_PRE_POS                                  (8U)
#define ISP_GAMMA_C245_PRE_LEN                                  (8U)
#define ISP_GAMMA_C245_PRE_MSK                                  (((1U<<ISP_GAMMA_C245_PRE_LEN)-1)<<ISP_GAMMA_C245_PRE_POS)
#define ISP_GAMMA_C245_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C245_PRE_LEN)-1)<<ISP_GAMMA_C245_PRE_POS))
#define ISP_GAMMA_C246_PRE                                      ISP_GAMMA_C246_PRE
#define ISP_GAMMA_C246_PRE_POS                                  (16U)
#define ISP_GAMMA_C246_PRE_LEN                                  (8U)
#define ISP_GAMMA_C246_PRE_MSK                                  (((1U<<ISP_GAMMA_C246_PRE_LEN)-1)<<ISP_GAMMA_C246_PRE_POS)
#define ISP_GAMMA_C246_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C246_PRE_LEN)-1)<<ISP_GAMMA_C246_PRE_POS))
#define ISP_GAMMA_C247_PRE                                      ISP_GAMMA_C247_PRE
#define ISP_GAMMA_C247_PRE_POS                                  (24U)
#define ISP_GAMMA_C247_PRE_LEN                                  (8U)
#define ISP_GAMMA_C247_PRE_MSK                                  (((1U<<ISP_GAMMA_C247_PRE_LEN)-1)<<ISP_GAMMA_C247_PRE_POS)
#define ISP_GAMMA_C247_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C247_PRE_LEN)-1)<<ISP_GAMMA_C247_PRE_POS))

/* 0x7F8 : GAMMA_CRUVE_63 */
#define ISP_GAMMA_GAMMA_CRUVE_63_OFFSET                         (0x7F8)
#define ISP_GAMMA_C248_PRE                                      ISP_GAMMA_C248_PRE
#define ISP_GAMMA_C248_PRE_POS                                  (0U)
#define ISP_GAMMA_C248_PRE_LEN                                  (8U)
#define ISP_GAMMA_C248_PRE_MSK                                  (((1U<<ISP_GAMMA_C248_PRE_LEN)-1)<<ISP_GAMMA_C248_PRE_POS)
#define ISP_GAMMA_C248_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C248_PRE_LEN)-1)<<ISP_GAMMA_C248_PRE_POS))
#define ISP_GAMMA_C249_PRE                                      ISP_GAMMA_C249_PRE
#define ISP_GAMMA_C249_PRE_POS                                  (8U)
#define ISP_GAMMA_C249_PRE_LEN                                  (8U)
#define ISP_GAMMA_C249_PRE_MSK                                  (((1U<<ISP_GAMMA_C249_PRE_LEN)-1)<<ISP_GAMMA_C249_PRE_POS)
#define ISP_GAMMA_C249_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C249_PRE_LEN)-1)<<ISP_GAMMA_C249_PRE_POS))
#define ISP_GAMMA_C250_PRE                                      ISP_GAMMA_C250_PRE
#define ISP_GAMMA_C250_PRE_POS                                  (16U)
#define ISP_GAMMA_C250_PRE_LEN                                  (8U)
#define ISP_GAMMA_C250_PRE_MSK                                  (((1U<<ISP_GAMMA_C250_PRE_LEN)-1)<<ISP_GAMMA_C250_PRE_POS)
#define ISP_GAMMA_C250_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C250_PRE_LEN)-1)<<ISP_GAMMA_C250_PRE_POS))
#define ISP_GAMMA_C251_PRE                                      ISP_GAMMA_C251_PRE
#define ISP_GAMMA_C251_PRE_POS                                  (24U)
#define ISP_GAMMA_C251_PRE_LEN                                  (8U)
#define ISP_GAMMA_C251_PRE_MSK                                  (((1U<<ISP_GAMMA_C251_PRE_LEN)-1)<<ISP_GAMMA_C251_PRE_POS)
#define ISP_GAMMA_C251_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C251_PRE_LEN)-1)<<ISP_GAMMA_C251_PRE_POS))

/* 0x7FC : GAMMA_CRUVE_64 */
#define ISP_GAMMA_GAMMA_CRUVE_64_OFFSET                         (0x7FC)
#define ISP_GAMMA_C252_PRE                                      ISP_GAMMA_C252_PRE
#define ISP_GAMMA_C252_PRE_POS                                  (0U)
#define ISP_GAMMA_C252_PRE_LEN                                  (8U)
#define ISP_GAMMA_C252_PRE_MSK                                  (((1U<<ISP_GAMMA_C252_PRE_LEN)-1)<<ISP_GAMMA_C252_PRE_POS)
#define ISP_GAMMA_C252_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C252_PRE_LEN)-1)<<ISP_GAMMA_C252_PRE_POS))
#define ISP_GAMMA_C253_PRE                                      ISP_GAMMA_C253_PRE
#define ISP_GAMMA_C253_PRE_POS                                  (8U)
#define ISP_GAMMA_C253_PRE_LEN                                  (8U)
#define ISP_GAMMA_C253_PRE_MSK                                  (((1U<<ISP_GAMMA_C253_PRE_LEN)-1)<<ISP_GAMMA_C253_PRE_POS)
#define ISP_GAMMA_C253_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C253_PRE_LEN)-1)<<ISP_GAMMA_C253_PRE_POS))
#define ISP_GAMMA_C254_PRE                                      ISP_GAMMA_C254_PRE
#define ISP_GAMMA_C254_PRE_POS                                  (16U)
#define ISP_GAMMA_C254_PRE_LEN                                  (8U)
#define ISP_GAMMA_C254_PRE_MSK                                  (((1U<<ISP_GAMMA_C254_PRE_LEN)-1)<<ISP_GAMMA_C254_PRE_POS)
#define ISP_GAMMA_C254_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C254_PRE_LEN)-1)<<ISP_GAMMA_C254_PRE_POS))
#define ISP_GAMMA_C255_PRE                                      ISP_GAMMA_C255_PRE
#define ISP_GAMMA_C255_PRE_POS                                  (24U)
#define ISP_GAMMA_C255_PRE_LEN                                  (8U)
#define ISP_GAMMA_C255_PRE_MSK                                  (((1U<<ISP_GAMMA_C255_PRE_LEN)-1)<<ISP_GAMMA_C255_PRE_POS)
#define ISP_GAMMA_C255_PRE_UMSK                                 (~(((1U<<ISP_GAMMA_C255_PRE_LEN)-1)<<ISP_GAMMA_C255_PRE_POS))


struct  isp_gamma_reg {
    /* 0x0  reserved */
    uint8_t RESERVED0x0[1792];

    /* 0x700 : GAMMA_CRUVE_1 */
    union {
        struct {
            uint32_t c0_pre                         :  8; /* [ 7: 0],        r/w,        0x0 */
            uint32_t c1_pre                         :  8; /* [15: 8],        r/w,        0x5 */
            uint32_t c2_pre                         :  8; /* [23:16],        r/w,        0x7 */
            uint32_t c3_pre                         :  8; /* [31:24],        r/w,        0xa */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_1;

    /* 0x704 : GAMMA_CRUVE_2 */
    union {
        struct {
            uint32_t c4_pre                         :  8; /* [ 7: 0],        r/w,        0xd */
            uint32_t c5_pre                         :  8; /* [15: 8],        r/w,       0x11 */
            uint32_t c6_pre                         :  8; /* [23:16],        r/w,       0x14 */
            uint32_t c7_pre                         :  8; /* [31:24],        r/w,       0x17 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_2;

    /* 0x708 : GAMMA_CRUVE_3 */
    union {
        struct {
            uint32_t c8_pre                         :  8; /* [ 7: 0],        r/w,       0x1a */
            uint32_t c9_pre                         :  8; /* [15: 8],        r/w,       0x1e */
            uint32_t c10_pre                        :  8; /* [23:16],        r/w,       0x21 */
            uint32_t c11_pre                        :  8; /* [31:24],        r/w,       0x24 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_3;

    /* 0x70C : GAMMA_CRUVE_4 */
    union {
        struct {
            uint32_t c12_pre                        :  8; /* [ 7: 0],        r/w,       0x27 */
            uint32_t c13_pre                        :  8; /* [15: 8],        r/w,       0x2a */
            uint32_t c14_pre                        :  8; /* [23:16],        r/w,       0x2d */
            uint32_t c15_pre                        :  8; /* [31:24],        r/w,       0x30 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_4;

    /* 0x710 : GAMMA_CRUVE_5 */
    union {
        struct {
            uint32_t c16_pre                        :  8; /* [ 7: 0],        r/w,       0x34 */
            uint32_t c17_pre                        :  8; /* [15: 8],        r/w,       0x36 */
            uint32_t c18_pre                        :  8; /* [23:16],        r/w,       0x39 */
            uint32_t c19_pre                        :  8; /* [31:24],        r/w,       0x3c */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_5;

    /* 0x714 : GAMMA_CRUVE_6 */
    union {
        struct {
            uint32_t c20_pre                        :  8; /* [ 7: 0],        r/w,       0x3f */
            uint32_t c21_pre                        :  8; /* [15: 8],        r/w,       0x42 */
            uint32_t c22_pre                        :  8; /* [23:16],        r/w,       0x45 */
            uint32_t c23_pre                        :  8; /* [31:24],        r/w,       0x47 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_6;

    /* 0x718 : GAMMA_CRUVE_7 */
    union {
        struct {
            uint32_t c24_pre                        :  8; /* [ 7: 0],        r/w,       0x4a */
            uint32_t c25_pre                        :  8; /* [15: 8],        r/w,       0x4d */
            uint32_t c26_pre                        :  8; /* [23:16],        r/w,       0x4f */
            uint32_t c27_pre                        :  8; /* [31:24],        r/w,       0x52 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_7;

    /* 0x71C : GAMMA_CRUVE_8 */
    union {
        struct {
            uint32_t c28_pre                        :  8; /* [ 7: 0],        r/w,       0x54 */
            uint32_t c29_pre                        :  8; /* [15: 8],        r/w,       0x57 */
            uint32_t c30_pre                        :  8; /* [23:16],        r/w,       0x59 */
            uint32_t c31_pre                        :  8; /* [31:24],        r/w,       0x5b */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_8;

    /* 0x720 : GAMMA_CRUVE_9 */
    union {
        struct {
            uint32_t c32_pre                        :  8; /* [ 7: 0],        r/w,       0x5e */
            uint32_t c33_pre                        :  8; /* [15: 8],        r/w,       0x60 */
            uint32_t c34_pre                        :  8; /* [23:16],        r/w,       0x62 */
            uint32_t c35_pre                        :  8; /* [31:24],        r/w,       0x64 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_9;

    /* 0x724 : GAMMA_CRUVE_10 */
    union {
        struct {
            uint32_t c36_pre                        :  8; /* [ 7: 0],        r/w,       0x66 */
            uint32_t c37_pre                        :  8; /* [15: 8],        r/w,       0x68 */
            uint32_t c38_pre                        :  8; /* [23:16],        r/w,       0x6a */
            uint32_t c39_pre                        :  8; /* [31:24],        r/w,       0x6c */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_10;

    /* 0x728 : GAMMA_CRUVE_11 */
    union {
        struct {
            uint32_t c40_pre                        :  8; /* [ 7: 0],        r/w,       0x6e */
            uint32_t c41_pre                        :  8; /* [15: 8],        r/w,       0x70 */
            uint32_t c42_pre                        :  8; /* [23:16],        r/w,       0x72 */
            uint32_t c43_pre                        :  8; /* [31:24],        r/w,       0x74 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_11;

    /* 0x72C : GAMMA_CRUVE_12 */
    union {
        struct {
            uint32_t c44_pre                        :  8; /* [ 7: 0],        r/w,       0x76 */
            uint32_t c45_pre                        :  8; /* [15: 8],        r/w,       0x78 */
            uint32_t c46_pre                        :  8; /* [23:16],        r/w,       0x7a */
            uint32_t c47_pre                        :  8; /* [31:24],        r/w,       0x7b */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_12;

    /* 0x730 : GAMMA_CRUVE_13 */
    union {
        struct {
            uint32_t c48_pre                        :  8; /* [ 7: 0],        r/w,       0x7d */
            uint32_t c49_pre                        :  8; /* [15: 8],        r/w,       0x7f */
            uint32_t c50_pre                        :  8; /* [23:16],        r/w,       0x80 */
            uint32_t c51_pre                        :  8; /* [31:24],        r/w,       0x82 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_13;

    /* 0x734 : GAMMA_CRUVE_14 */
    union {
        struct {
            uint32_t c52_pre                        :  8; /* [ 7: 0],        r/w,       0x84 */
            uint32_t c53_pre                        :  8; /* [15: 8],        r/w,       0x85 */
            uint32_t c54_pre                        :  8; /* [23:16],        r/w,       0x87 */
            uint32_t c55_pre                        :  8; /* [31:24],        r/w,       0x88 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_14;

    /* 0x738 : GAMMA_CRUVE_15 */
    union {
        struct {
            uint32_t c56_pre                        :  8; /* [ 7: 0],        r/w,       0x8a */
            uint32_t c57_pre                        :  8; /* [15: 8],        r/w,       0x8b */
            uint32_t c58_pre                        :  8; /* [23:16],        r/w,       0x8d */
            uint32_t c59_pre                        :  8; /* [31:24],        r/w,       0x8e */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_15;

    /* 0x73C : GAMMA_CRUVE_16 */
    union {
        struct {
            uint32_t c60_pre                        :  8; /* [ 7: 0],        r/w,       0x90 */
            uint32_t c61_pre                        :  8; /* [15: 8],        r/w,       0x91 */
            uint32_t c62_pre                        :  8; /* [23:16],        r/w,       0x92 */
            uint32_t c63_pre                        :  8; /* [31:24],        r/w,       0x94 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_16;

    /* 0x740 : GAMMA_CRUVE_17 */
    union {
        struct {
            uint32_t c64_pre                        :  8; /* [ 7: 0],        r/w,       0x95 */
            uint32_t c65_pre                        :  8; /* [15: 8],        r/w,       0x96 */
            uint32_t c66_pre                        :  8; /* [23:16],        r/w,       0x98 */
            uint32_t c67_pre                        :  8; /* [31:24],        r/w,       0x99 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_17;

    /* 0x744 : GAMMA_CRUVE_18 */
    union {
        struct {
            uint32_t c68_pre                        :  8; /* [ 7: 0],        r/w,       0x9a */
            uint32_t c69_pre                        :  8; /* [15: 8],        r/w,       0x9c */
            uint32_t c70_pre                        :  8; /* [23:16],        r/w,       0x9d */
            uint32_t c71_pre                        :  8; /* [31:24],        r/w,       0x9e */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_18;

    /* 0x748 : GAMMA_CRUVE_19 */
    union {
        struct {
            uint32_t c72_pre                        :  8; /* [ 7: 0],        r/w,       0xa0 */
            uint32_t c73_pre                        :  8; /* [15: 8],        r/w,       0xa1 */
            uint32_t c74_pre                        :  8; /* [23:16],        r/w,       0xa2 */
            uint32_t c75_pre                        :  8; /* [31:24],        r/w,       0xa3 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_19;

    /* 0x74C : GAMMA_CRUVE_20 */
    union {
        struct {
            uint32_t c76_pre                        :  8; /* [ 7: 0],        r/w,       0xa5 */
            uint32_t c77_pre                        :  8; /* [15: 8],        r/w,       0xa6 */
            uint32_t c78_pre                        :  8; /* [23:16],        r/w,       0xa7 */
            uint32_t c79_pre                        :  8; /* [31:24],        r/w,       0xa8 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_20;

    /* 0x750 : GAMMA_CRUVE_21 */
    union {
        struct {
            uint32_t c80_pre                        :  8; /* [ 7: 0],        r/w,       0xa9 */
            uint32_t c81_pre                        :  8; /* [15: 8],        r/w,       0xab */
            uint32_t c82_pre                        :  8; /* [23:16],        r/w,       0xac */
            uint32_t c83_pre                        :  8; /* [31:24],        r/w,       0xad */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_21;

    /* 0x754 : GAMMA_CRUVE_22 */
    union {
        struct {
            uint32_t c84_pre                        :  8; /* [ 7: 0],        r/w,       0xae */
            uint32_t c85_pre                        :  8; /* [15: 8],        r/w,       0xaf */
            uint32_t c86_pre                        :  8; /* [23:16],        r/w,       0xb0 */
            uint32_t c87_pre                        :  8; /* [31:24],        r/w,       0xb1 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_22;

    /* 0x758 : GAMMA_CRUVE_23 */
    union {
        struct {
            uint32_t c88_pre                        :  8; /* [ 7: 0],        r/w,       0xb3 */
            uint32_t c89_pre                        :  8; /* [15: 8],        r/w,       0xb4 */
            uint32_t c90_pre                        :  8; /* [23:16],        r/w,       0xb5 */
            uint32_t c91_pre                        :  8; /* [31:24],        r/w,       0xb6 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_23;

    /* 0x75C : GAMMA_CRUVE_24 */
    union {
        struct {
            uint32_t c92_pre                        :  8; /* [ 7: 0],        r/w,       0xb7 */
            uint32_t c93_pre                        :  8; /* [15: 8],        r/w,       0xb8 */
            uint32_t c94_pre                        :  8; /* [23:16],        r/w,       0xb9 */
            uint32_t c95_pre                        :  8; /* [31:24],        r/w,       0xba */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_24;

    /* 0x760 : GAMMA_CRUVE_25 */
    union {
        struct {
            uint32_t c96_pre                        :  8; /* [ 7: 0],        r/w,       0xbb */
            uint32_t c97_pre                        :  8; /* [15: 8],        r/w,       0xbc */
            uint32_t c98_pre                        :  8; /* [23:16],        r/w,       0xbd */
            uint32_t c99_pre                        :  8; /* [31:24],        r/w,       0xbe */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_25;

    /* 0x764 : GAMMA_CRUVE_26 */
    union {
        struct {
            uint32_t c100_pre                       :  8; /* [ 7: 0],        r/w,       0xbf */
            uint32_t c101_pre                       :  8; /* [15: 8],        r/w,       0xc0 */
            uint32_t c102_pre                       :  8; /* [23:16],        r/w,       0xc1 */
            uint32_t c103_pre                       :  8; /* [31:24],        r/w,       0xc2 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_26;

    /* 0x768 : GAMMA_CRUVE_27 */
    union {
        struct {
            uint32_t c104_pre                       :  8; /* [ 7: 0],        r/w,       0xc3 */
            uint32_t c105_pre                       :  8; /* [15: 8],        r/w,       0xc4 */
            uint32_t c106_pre                       :  8; /* [23:16],        r/w,       0xc5 */
            uint32_t c107_pre                       :  8; /* [31:24],        r/w,       0xc6 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_27;

    /* 0x76C : GAMMA_CRUVE_28 */
    union {
        struct {
            uint32_t c108_pre                       :  8; /* [ 7: 0],        r/w,       0xc7 */
            uint32_t c109_pre                       :  8; /* [15: 8],        r/w,       0xc8 */
            uint32_t c110_pre                       :  8; /* [23:16],        r/w,       0xc8 */
            uint32_t c111_pre                       :  8; /* [31:24],        r/w,       0xc9 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_28;

    /* 0x770 : GAMMA_CRUVE_29 */
    union {
        struct {
            uint32_t c112_pre                       :  8; /* [ 7: 0],        r/w,       0xca */
            uint32_t c113_pre                       :  8; /* [15: 8],        r/w,       0xcb */
            uint32_t c114_pre                       :  8; /* [23:16],        r/w,       0xcc */
            uint32_t c115_pre                       :  8; /* [31:24],        r/w,       0xcd */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_29;

    /* 0x774 : GAMMA_CRUVE_30 */
    union {
        struct {
            uint32_t c116_pre                       :  8; /* [ 7: 0],        r/w,       0xcd */
            uint32_t c117_pre                       :  8; /* [15: 8],        r/w,       0xce */
            uint32_t c118_pre                       :  8; /* [23:16],        r/w,       0xcf */
            uint32_t c119_pre                       :  8; /* [31:24],        r/w,       0xd0 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_30;

    /* 0x778 : GAMMA_CRUVE_31 */
    union {
        struct {
            uint32_t c120_pre                       :  8; /* [ 7: 0],        r/w,       0xd1 */
            uint32_t c121_pre                       :  8; /* [15: 8],        r/w,       0xd1 */
            uint32_t c122_pre                       :  8; /* [23:16],        r/w,       0xd2 */
            uint32_t c123_pre                       :  8; /* [31:24],        r/w,       0xd3 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_31;

    /* 0x77C : GAMMA_CRUVE_32 */
    union {
        struct {
            uint32_t c124_pre                       :  8; /* [ 7: 0],        r/w,       0xd4 */
            uint32_t c125_pre                       :  8; /* [15: 8],        r/w,       0xd4 */
            uint32_t c126_pre                       :  8; /* [23:16],        r/w,       0xd5 */
            uint32_t c127_pre                       :  8; /* [31:24],        r/w,       0xd6 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_32;

    /* 0x780 : GAMMA_CRUVE_33 */
    union {
        struct {
            uint32_t c128_pre                       :  8; /* [ 7: 0],        r/w,       0xd6 */
            uint32_t c129_pre                       :  8; /* [15: 8],        r/w,       0xd7 */
            uint32_t c130_pre                       :  8; /* [23:16],        r/w,       0xd8 */
            uint32_t c131_pre                       :  8; /* [31:24],        r/w,       0xd8 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_33;

    /* 0x784 : GAMMA_CRUVE_34 */
    union {
        struct {
            uint32_t c132_pre                       :  8; /* [ 7: 0],        r/w,       0xd9 */
            uint32_t c133_pre                       :  8; /* [15: 8],        r/w,       0xda */
            uint32_t c134_pre                       :  8; /* [23:16],        r/w,       0xda */
            uint32_t c135_pre                       :  8; /* [31:24],        r/w,       0xdb */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_34;

    /* 0x788 : GAMMA_CRUVE_35 */
    union {
        struct {
            uint32_t c136_pre                       :  8; /* [ 7: 0],        r/w,       0xdb */
            uint32_t c137_pre                       :  8; /* [15: 8],        r/w,       0xdc */
            uint32_t c138_pre                       :  8; /* [23:16],        r/w,       0xdd */
            uint32_t c139_pre                       :  8; /* [31:24],        r/w,       0xdd */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_35;

    /* 0x78C : GAMMA_CRUVE_36 */
    union {
        struct {
            uint32_t c140_pre                       :  8; /* [ 7: 0],        r/w,       0xde */
            uint32_t c141_pre                       :  8; /* [15: 8],        r/w,       0xde */
            uint32_t c142_pre                       :  8; /* [23:16],        r/w,       0xdf */
            uint32_t c143_pre                       :  8; /* [31:24],        r/w,       0xdf */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_36;

    /* 0x790 : GAMMA_CRUVE_37 */
    union {
        struct {
            uint32_t c144_pre                       :  8; /* [ 7: 0],        r/w,       0xe0 */
            uint32_t c145_pre                       :  8; /* [15: 8],        r/w,       0xe1 */
            uint32_t c146_pre                       :  8; /* [23:16],        r/w,       0xe1 */
            uint32_t c147_pre                       :  8; /* [31:24],        r/w,       0xe2 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_37;

    /* 0x794 : GAMMA_CRUVE_38 */
    union {
        struct {
            uint32_t c148_pre                       :  8; /* [ 7: 0],        r/w,       0xe2 */
            uint32_t c149_pre                       :  8; /* [15: 8],        r/w,       0xe3 */
            uint32_t c150_pre                       :  8; /* [23:16],        r/w,       0xe3 */
            uint32_t c151_pre                       :  8; /* [31:24],        r/w,       0xe4 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_38;

    /* 0x798 : GAMMA_CRUVE_39 */
    union {
        struct {
            uint32_t c152_pre                       :  8; /* [ 7: 0],        r/w,       0xe4 */
            uint32_t c153_pre                       :  8; /* [15: 8],        r/w,       0xe5 */
            uint32_t c154_pre                       :  8; /* [23:16],        r/w,       0xe5 */
            uint32_t c155_pre                       :  8; /* [31:24],        r/w,       0xe5 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_39;

    /* 0x79C : GAMMA_CRUVE_40 */
    union {
        struct {
            uint32_t c156_pre                       :  8; /* [ 7: 0],        r/w,       0xe6 */
            uint32_t c157_pre                       :  8; /* [15: 8],        r/w,       0xe6 */
            uint32_t c158_pre                       :  8; /* [23:16],        r/w,       0xe7 */
            uint32_t c159_pre                       :  8; /* [31:24],        r/w,       0xe7 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_40;

    /* 0x7A0 : GAMMA_CRUVE_41 */
    union {
        struct {
            uint32_t c160_pre                       :  8; /* [ 7: 0],        r/w,       0xe8 */
            uint32_t c161_pre                       :  8; /* [15: 8],        r/w,       0xe8 */
            uint32_t c162_pre                       :  8; /* [23:16],        r/w,       0xe9 */
            uint32_t c163_pre                       :  8; /* [31:24],        r/w,       0xe9 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_41;

    /* 0x7A4 : GAMMA_CRUVE_42 */
    union {
        struct {
            uint32_t c164_pre                       :  8; /* [ 7: 0],        r/w,       0xe9 */
            uint32_t c165_pre                       :  8; /* [15: 8],        r/w,       0xea */
            uint32_t c166_pre                       :  8; /* [23:16],        r/w,       0xea */
            uint32_t c167_pre                       :  8; /* [31:24],        r/w,       0xeb */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_42;

    /* 0x7A8 : GAMMA_CRUVE_43 */
    union {
        struct {
            uint32_t c168_pre                       :  8; /* [ 7: 0],        r/w,       0xeb */
            uint32_t c169_pre                       :  8; /* [15: 8],        r/w,       0xeb */
            uint32_t c170_pre                       :  8; /* [23:16],        r/w,       0xec */
            uint32_t c171_pre                       :  8; /* [31:24],        r/w,       0xec */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_43;

    /* 0x7AC : GAMMA_CRUVE_44 */
    union {
        struct {
            uint32_t c172_pre                       :  8; /* [ 7: 0],        r/w,       0xec */
            uint32_t c173_pre                       :  8; /* [15: 8],        r/w,       0xed */
            uint32_t c174_pre                       :  8; /* [23:16],        r/w,       0xed */
            uint32_t c175_pre                       :  8; /* [31:24],        r/w,       0xed */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_44;

    /* 0x7B0 : GAMMA_CRUVE_45 */
    union {
        struct {
            uint32_t c176_pre                       :  8; /* [ 7: 0],        r/w,       0xee */
            uint32_t c177_pre                       :  8; /* [15: 8],        r/w,       0xee */
            uint32_t c178_pre                       :  8; /* [23:16],        r/w,       0xee */
            uint32_t c179_pre                       :  8; /* [31:24],        r/w,       0xef */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_45;

    /* 0x7B4 : GAMMA_CRUVE_46 */
    union {
        struct {
            uint32_t c180_pre                       :  8; /* [ 7: 0],        r/w,       0xef */
            uint32_t c181_pre                       :  8; /* [15: 8],        r/w,       0xef */
            uint32_t c182_pre                       :  8; /* [23:16],        r/w,       0xf0 */
            uint32_t c183_pre                       :  8; /* [31:24],        r/w,       0xf0 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_46;

    /* 0x7B8 : GAMMA_CRUVE_47 */
    union {
        struct {
            uint32_t c184_pre                       :  8; /* [ 7: 0],        r/w,       0xf0 */
            uint32_t c185_pre                       :  8; /* [15: 8],        r/w,       0xf1 */
            uint32_t c186_pre                       :  8; /* [23:16],        r/w,       0xf1 */
            uint32_t c187_pre                       :  8; /* [31:24],        r/w,       0xf1 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_47;

    /* 0x7BC : GAMMA_CRUVE_48 */
    union {
        struct {
            uint32_t c188_pre                       :  8; /* [ 7: 0],        r/w,       0xf2 */
            uint32_t c189_pre                       :  8; /* [15: 8],        r/w,       0xf2 */
            uint32_t c190_pre                       :  8; /* [23:16],        r/w,       0xf2 */
            uint32_t c191_pre                       :  8; /* [31:24],        r/w,       0xf2 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_48;

    /* 0x7C0 : GAMMA_CRUVE_49 */
    union {
        struct {
            uint32_t c192_pre                       :  8; /* [ 7: 0],        r/w,       0xf3 */
            uint32_t c193_pre                       :  8; /* [15: 8],        r/w,       0xf3 */
            uint32_t c194_pre                       :  8; /* [23:16],        r/w,       0xf3 */
            uint32_t c195_pre                       :  8; /* [31:24],        r/w,       0xf3 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_49;

    /* 0x7C4 : GAMMA_CRUVE_50 */
    union {
        struct {
            uint32_t c196_pre                       :  8; /* [ 7: 0],        r/w,       0xf4 */
            uint32_t c197_pre                       :  8; /* [15: 8],        r/w,       0xf4 */
            uint32_t c198_pre                       :  8; /* [23:16],        r/w,       0xf4 */
            uint32_t c199_pre                       :  8; /* [31:24],        r/w,       0xf4 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_50;

    /* 0x7C8 : GAMMA_CRUVE_51 */
    union {
        struct {
            uint32_t c200_pre                       :  8; /* [ 7: 0],        r/w,       0xf5 */
            uint32_t c201_pre                       :  8; /* [15: 8],        r/w,       0xf5 */
            uint32_t c202_pre                       :  8; /* [23:16],        r/w,       0xf5 */
            uint32_t c203_pre                       :  8; /* [31:24],        r/w,       0xf5 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_51;

    /* 0x7CC : GAMMA_CRUVE_52 */
    union {
        struct {
            uint32_t c204_pre                       :  8; /* [ 7: 0],        r/w,       0xf6 */
            uint32_t c205_pre                       :  8; /* [15: 8],        r/w,       0xf6 */
            uint32_t c206_pre                       :  8; /* [23:16],        r/w,       0xf6 */
            uint32_t c207_pre                       :  8; /* [31:24],        r/w,       0xf6 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_52;

    /* 0x7D0 : GAMMA_CRUVE_53 */
    union {
        struct {
            uint32_t c208_pre                       :  8; /* [ 7: 0],        r/w,       0xf7 */
            uint32_t c209_pre                       :  8; /* [15: 8],        r/w,       0xf7 */
            uint32_t c210_pre                       :  8; /* [23:16],        r/w,       0xf7 */
            uint32_t c211_pre                       :  8; /* [31:24],        r/w,       0xf7 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_53;

    /* 0x7D4 : GAMMA_CRUVE_54 */
    union {
        struct {
            uint32_t c212_pre                       :  8; /* [ 7: 0],        r/w,       0xf7 */
            uint32_t c213_pre                       :  8; /* [15: 8],        r/w,       0xf8 */
            uint32_t c214_pre                       :  8; /* [23:16],        r/w,       0xf8 */
            uint32_t c215_pre                       :  8; /* [31:24],        r/w,       0xf8 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_54;

    /* 0x7D8 : GAMMA_CRUVE_55 */
    union {
        struct {
            uint32_t c216_pre                       :  8; /* [ 7: 0],        r/w,       0xf8 */
            uint32_t c217_pre                       :  8; /* [15: 8],        r/w,       0xf8 */
            uint32_t c218_pre                       :  8; /* [23:16],        r/w,       0xf9 */
            uint32_t c219_pre                       :  8; /* [31:24],        r/w,       0xf9 */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_55;

    /* 0x7DC : GAMMA_CRUVE_56 */
    union {
        struct {
            uint32_t c220_pre                       :  8; /* [ 7: 0],        r/w,       0xf9 */
            uint32_t c221_pre                       :  8; /* [15: 8],        r/w,       0xf9 */
            uint32_t c222_pre                       :  8; /* [23:16],        r/w,       0xf9 */
            uint32_t c223_pre                       :  8; /* [31:24],        r/w,       0xfa */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_56;

    /* 0x7E0 : GAMMA_CRUVE_57 */
    union {
        struct {
            uint32_t c224_pre                       :  8; /* [ 7: 0],        r/w,       0xfa */
            uint32_t c225_pre                       :  8; /* [15: 8],        r/w,       0xfa */
            uint32_t c226_pre                       :  8; /* [23:16],        r/w,       0xfa */
            uint32_t c227_pre                       :  8; /* [31:24],        r/w,       0xfa */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_57;

    /* 0x7E4 : GAMMA_CRUVE_58 */
    union {
        struct {
            uint32_t c228_pre                       :  8; /* [ 7: 0],        r/w,       0xfb */
            uint32_t c229_pre                       :  8; /* [15: 8],        r/w,       0xfb */
            uint32_t c230_pre                       :  8; /* [23:16],        r/w,       0xfb */
            uint32_t c231_pre                       :  8; /* [31:24],        r/w,       0xfb */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_58;

    /* 0x7E8 : GAMMA_CRUVE_59 */
    union {
        struct {
            uint32_t c232_pre                       :  8; /* [ 7: 0],        r/w,       0xfb */
            uint32_t c233_pre                       :  8; /* [15: 8],        r/w,       0xfb */
            uint32_t c234_pre                       :  8; /* [23:16],        r/w,       0xfc */
            uint32_t c235_pre                       :  8; /* [31:24],        r/w,       0xfc */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_59;

    /* 0x7EC : GAMMA_CRUVE_60 */
    union {
        struct {
            uint32_t c236_pre                       :  8; /* [ 7: 0],        r/w,       0xfc */
            uint32_t c237_pre                       :  8; /* [15: 8],        r/w,       0xfc */
            uint32_t c238_pre                       :  8; /* [23:16],        r/w,       0xfc */
            uint32_t c239_pre                       :  8; /* [31:24],        r/w,       0xfc */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_60;

    /* 0x7F0 : GAMMA_CRUVE_61 */
    union {
        struct {
            uint32_t c240_pre                       :  8; /* [ 7: 0],        r/w,       0xfd */
            uint32_t c241_pre                       :  8; /* [15: 8],        r/w,       0xfd */
            uint32_t c242_pre                       :  8; /* [23:16],        r/w,       0xfd */
            uint32_t c243_pre                       :  8; /* [31:24],        r/w,       0xfd */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_61;

    /* 0x7F4 : GAMMA_CRUVE_62 */
    union {
        struct {
            uint32_t c244_pre                       :  8; /* [ 7: 0],        r/w,       0xfd */
            uint32_t c245_pre                       :  8; /* [15: 8],        r/w,       0xfd */
            uint32_t c246_pre                       :  8; /* [23:16],        r/w,       0xfe */
            uint32_t c247_pre                       :  8; /* [31:24],        r/w,       0xfe */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_62;

    /* 0x7F8 : GAMMA_CRUVE_63 */
    union {
        struct {
            uint32_t c248_pre                       :  8; /* [ 7: 0],        r/w,       0xfe */
            uint32_t c249_pre                       :  8; /* [15: 8],        r/w,       0xfe */
            uint32_t c250_pre                       :  8; /* [23:16],        r/w,       0xfe */
            uint32_t c251_pre                       :  8; /* [31:24],        r/w,       0xfe */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_63;

    /* 0x7FC : GAMMA_CRUVE_64 */
    union {
        struct {
            uint32_t c252_pre                       :  8; /* [ 7: 0],        r/w,       0xff */
            uint32_t c253_pre                       :  8; /* [15: 8],        r/w,       0xff */
            uint32_t c254_pre                       :  8; /* [23:16],        r/w,       0xff */
            uint32_t c255_pre                       :  8; /* [31:24],        r/w,       0xff */
        }BF;
        uint32_t WORD;
    } GAMMA_CRUVE_64;

};

typedef volatile struct isp_gamma_reg isp_gamma_reg_t;


#endif  /* __ISP_GAMMA_REG_H__ */
