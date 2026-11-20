/* @k10d submit_image_processor_job_104fd514 @ 0x104fd514
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Copies a job descriptor to the stack and submits it to the image processor driver via
 *   helper calls.
 * summary:
 *   The function copies 8 bytes from param_2 into a local stack buffer. It then calls
 *   eventflag_clr_flg on a pointer at param_1+0x2c, followed by
 *   imgp_b_program_and_start_104fe680 which passes the stack buffer and a pointer at
 *   param_1+4. It subsequently calls eventflag_wai_flg with the same pointer at
 *   param_1+0x2c and a global constant, then repeats eventflag_clr_flg and finally calls
 *   imgp_a_stop_and_reset. The sequence suggests preparing and dispatching a task or job to
 *   the image processor block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_image_processor_job_104fd514(int param_1,uint32_t *param_2)

{
  struct {
    uint32_t uStack_1c;
    uint16_t uStack_18;
    uint16_t uStack_16;
    uint16_t uStack_14;
    uint16_t uStack_12;
    uint16_t uStack_10;
    uint16_t uStack_e;
    uint32_t uStack_c;
  } _cfg_1c;
  uint32_t *puVar1;
  uintptr_t sp;
  _cfg_1c.uStack_1c = *param_2;
  _cfg_1c.uStack_18 = *(uint16_t *)(param_2 + 1);
  _cfg_1c.uStack_16 = *(uint16_t *)((int)param_2 + 6);
  _cfg_1c.uStack_14 = *(uint16_t *)(param_2 + 2);
  _cfg_1c.uStack_12 = *(uint16_t *)((int)param_2 + 10);
  _cfg_1c.uStack_10 = *(uint16_t *)(param_2 + 3);
  _cfg_1c.uStack_e = *(uint16_t *)((int)param_2 + 0xe);
  puVar1 = (uint32_t *)(param_1 + 0x2c);
  eventflag_clr_flg(puVar1,1);
  imgp_b_program_and_start_104fe680((int)(*(uint32_t *)(param_1 + 0x24)),(void *)(param_1 + 4),(uint32_t *)(&_cfg_1c.uStack_1c));
  eventflag_wai_flg(puVar1,1,&_cfg_1c.uStack_c,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg(puVar1,1);
  imgp_a_stop_and_reset(*(uint32_t *)(param_1 + 0x24));
  return;
}
