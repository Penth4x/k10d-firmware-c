/* @k10d submit_image_processor_job_104fd45a @ 0x104fd45a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Copies a job descriptor to the stack and submits it to the image processor driver via
 *   helper calls.
 * summary:
 *   The function copies 10 fields from the parameter struct (param_2) into a local stack
 *   buffer. It then calls eventflag_clr_flg on the object field at offset 0x2c, passes the
 *   stack buffer to imgp_c_program_and_start_104fe5ce along with the object field at offset
 *   0x24, and finally calls eventflag_wai_flg and imgp_a_stop_and_reset. Given the module
 *   context (image_processor_driver) and the neighboring function imgp_client_on_done, this
 *   appears to be the client-side submission of an image processing task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_image_processor_job_104fd45a(int param_1,uint32_t *param_2)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint32_t uStack_c;
  
  uStack_24 = *param_2;
  uStack_20 = param_2[1];
  uStack_1c = *(uint16_t *)(param_2 + 2);
  uStack_1a = *(uint16_t *)((int)param_2 + 10);
  uStack_18 = *(uint16_t *)(param_2 + 3);
  uStack_16 = *(uint16_t *)((int)param_2 + 0xe);
  uStack_14 = *(uint16_t *)(param_2 + 4);
  uStack_12 = *(uint16_t *)((int)param_2 + 0x12);
  uStack_10 = *(uint16_t *)(param_2 + 5);
  uStack_e = *(uint16_t *)((int)param_2 + 0x16);
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  imgp_c_program_and_start_104fe5ce(*(uint32_t *)(param_1 + 0x24),(void *)(param_1 + 4),&uStack_24);
  eventflag_wai_flg(puVar1,1,&uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}
