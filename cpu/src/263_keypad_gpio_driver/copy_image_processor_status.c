/* @k10d copy_image_processor_status @ 0x104fdbb8
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Reads image-processor state into a local struct, copies a 64-byte status block to a
 *   caller buffer, and updates a status word.
 * summary:
 *   Builds a 0x30-byte local descriptor from param_2 and a constant 3, then calls
 *   imgp_a_program_and_start_104fe526 with the object's member at +0x24 and the local
 *   struct. It queries get_field_at_offset_c_104fe502 to get a status value stored into
 *   param_2[4]. If param_2[3] is non-NULL, it fetches a pointer via
 *   get_field_at_offset_c_104fe514 and copies 16 words (64 bytes) from that source to the
 *   destination. Finally calls imgp_a_stop_and_reset on the object member. The module
 *   context indicates this drives the Milbeaut image-processor block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_image_processor_status(int param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uintptr_t sp;
  uint32_t uStack_38;
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
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_30 = 0;
  uStack_26 = 0;
  uStack_24 = 0;
  uStack_22 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  uStack_1c = 0;
  uStack_38 = 3;
  uStack_34 = *param_2;
  uStack_28 = *(uint16_t *)(param_2 + 1);
  uStack_2c = *(uint16_t *)((int)param_2 + 6);
  uStack_2a = *(uint16_t *)(param_2 + 2);
  uStack_1a = *(uint16_t *)((int)param_2 + 0x12);
  uStack_18 = *(uint16_t *)(param_2 + 5);
  uStack_14 = param_2[6];
  uStack_10 = param_2[7];
  puVar4 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar4,1);
  imgp_a_program_and_start_104fe526(*(uint32_t *)(param_1 + 0x24),(void *)(param_1 + 4),&uStack_38);
  eventflag_wai_flg(puVar4,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,1);
  uVar2 = get_field_at_offset_c_104fe502(*(int *)(param_1 + 0x24));
  *(short *)(param_2 + 4) = (short)uVar2;
  puVar4 = (uint32_t *)param_2[3];
  if (puVar4 != (uint32_t *)0x0) {
    puVar3 = (uint32_t *)get_field_at_offset_c_104fe514(*(int *)(param_1 + 0x24));
    iVar1 = 0x3f;
    do {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar4 = puVar4 + 4;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 4;
    } while (-1 < iVar1);
  }
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}
