/* @k10d first_run_set_flag_a @ 0x10484988
 * name: verified (structural evidence: decomp: init_magic_set_c(p+0x14, param_2); called with 1 by the Language screen confirm handler 0x103df1d2)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets two magic flag words (0xA55A5AA5 or 0xffffffff) at offsets 0x14 and 0xc of a
 *   struct.
 * summary:
 *   Calls init_magic_set_c twice: once on param_1+0x14 and once on the value stored at
 *   param_1+0xc, passing param_2 as the flag value. The callee writes 0xA55A5AA5 when
 *   param_2 is non-zero, else 0xffffffff. Used by the power-on language screen handler to
 *   mark first-run state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void first_run_set_flag_a(int param_1,int param_2)

{
  init_magic_set_c(param_1 + 0x14,param_2);
  init_magic_set_c(*(int *)(param_1 + 0xc),param_2);
  return;
}
