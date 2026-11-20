/* @k10d init_and_start_image_pipeline @ 0x104f7eba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes a pipeline control block with default parameters and triggers the image
 *   processing start sequence.
 * summary:
 *   The function sets up a local configuration structure on the stack, initializing several
 *   fields to 0x80 and others to 0 or 1. It writes this configuration into the object at
 *   param_1 + 0x38 via eventflag_clr_flg. It then calls imgp_c_program_and_start, passing a
 *   pointer from param_1 + 0x24 and the stack configuration, which suggests programming and
 *   starting an image processing unit (likely the PRIME DSP). Finally, it calls
 *   eventflag_wai_flg and imgp_c_start_and_ack, likely for cleanup or status updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_and_start_image_pipeline(int param_1,uint32_t param_2,void *param_3,uint32_t param_4,uint16_t param_5
                 ,uint16_t param_6,uint16_t param_7,uint16_t param_8)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t uStack_4c;
  uint16_t uStack_48;
  uint16_t uStack_46;
  uint16_t uStack_44;
  uint16_t uStack_42;
  uint16_t uStack_40;
  uint32_t uStack_3c;
  void *pvStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint16_t uStack_2c;
  uint16_t uStack_2a;
  uint16_t uStack_28;
  uint16_t uStack_26;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint16_t uStack_1e;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint8_t uStack_14;
  uint8_t uStack_13;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_30 = 0;
  uStack_28 = 0x80;
  uStack_26 = 0x80;
  uStack_24 = 0x80;
  uStack_22 = 0x80;
  uStack_20 = 0x80;
  uStack_1e = 0x80;
  uStack_1c = 0x80;
  uStack_1a = 0x80;
  uStack_14 = 0;
  uStack_13 = 1;
  uStack_4c = 2;
  uStack_48 = param_5;
  uStack_44 = param_5;
  uStack_42 = param_5;
  uStack_40 = param_5;
  uStack_18 = 0;
  uStack_16 = 0;
  uStack_2c = param_7;
  puVar1 = (uint32_t *)(param_1 + 0x38);
  uStack_10 = 0;
  uStack_46 = param_6;
  uStack_2a = param_8;
  uStack_c = 0;
  uStack_3c = param_2;
  pvStack_38 = param_3;
  uStack_34 = param_4;
  eventflag_clr_flg(puVar1,1);
  imgp_c_program_and_start_104fe976((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(int *)(&uStack_4c));
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_c_start_and_ack(*(uint32_t *)(param_1 + 0x24));
  return;
}
