/* @k10d imgp_client_on_done @ 0x104fcda2
 * name: verified (structural evidence: d313: decompile; task 14 waits on this flag and resumes after each modelled completion)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Wake the requesting task (flag obj+0x2c bit 1) on completion events 0x400001, 0x400003
 *   or 0x300002.
 * summary:
 *   VERIFIED: d313: decompile; task 14 waits on this flag and resumes after each modelled
 *   completion
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t imgp_client_on_done(int param_1,int param_2)

{
  if (((param_2 == 0x400001) || (param_2 == 0x400003)) || (param_2 == 0x300002)) {
    set_flg_obj((uint32_t *)(param_1 + 0x2c));
  }
  return 0;
}
