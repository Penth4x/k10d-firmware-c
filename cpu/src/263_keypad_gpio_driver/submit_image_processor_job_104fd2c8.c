/* @k10d submit_image_processor_job_104fd2c8 @ 0x104fd2c8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Configures and submits an image processing job to the Milbeaut block via the driver
 *   object.
 * summary:
 *   The function prepares a job descriptor on the stack by copying parameters from param_2
 *   and setting a mode field based on *param_2. It calls imgp_a_program_and_start_104fe526
 *   to configure the job using the object at param_1+0x24 and the stack descriptor. If the
 *   mode is 2 or 3, it retrieves a source pointer via get_field_at_offset_c_104fe514 and
 *   copies 256 bytes (64 uint32s) to the destination pointer in param_2. Finally, it calls
 *   imgp_a_stop_and_reset to trigger the processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104fd3fa) overlaps instruction at (ram,0x104fd3f8)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_image_processor_job_104fd2c8(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  uintptr_t sp;
  uint32_t uStack_38;
  int iStack_34;
  int iStack_30;
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
  int iStack_14;
  int iStack_10;
  uint32_t uStack_c;
  
  uStack_38 = 6;
  switch(*param_2) {
  case 0:
    uStack_38 = 0;
    break;
  case 1:
    uStack_38 = 1;
    break;
  case 2:
    uStack_38 = 2;
    break;
  case 3:
    uStack_38 = 3;
    break;
  case 4:
    uStack_38 = 4;
    break;
  case 5:
    uStack_38 = 5;
    break;
  case 6:
    uStack_38 = 6;
    break;
  case 7:
    uStack_38 = 7;
  }
  iStack_34 = param_2[1];
  iStack_30 = param_2[2];
  uStack_2c = *(uint16_t *)(param_2 + 3);
  uStack_2a = *(uint16_t *)((int)param_2 + 0xe);
  uStack_28 = *(uint16_t *)(param_2 + 4);
  uStack_26 = *(uint16_t *)((int)param_2 + 0x12);
  uStack_24 = *(uint16_t *)(param_2 + 5);
  uStack_22 = *(uint16_t *)((int)param_2 + 0x16);
  uStack_20 = *(uint16_t *)(param_2 + 6);
  uStack_1e = *(uint16_t *)((int)param_2 + 0x1a);
  uStack_1c = *(uint16_t *)(param_2 + 7);
  uStack_1a = *(uint16_t *)((int)param_2 + 0x1e);
  uStack_18 = *(uint16_t *)(param_2 + 8);
  iStack_14 = param_2[9];
  iStack_10 = param_2[10];
  puVar4 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar4,1);
  imgp_a_program_and_start_104fe526(*(uint32_t *)(param_1 + 0x24),(void *)(param_1 + 4),&uStack_38);
  eventflag_wai_flg(puVar4,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar4,1);
  if ((*param_2 == 2) || (*param_2 == 3)) {
    uVar2 = get_field_at_offset_c_104fe502(*(int *)(param_1 + 0x24));
    *(short *)(param_2 + 0xc) = (short)uVar2;
    puVar4 = (uint32_t *)param_2[0xb];
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
  }
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}
