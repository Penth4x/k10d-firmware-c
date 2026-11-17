/* @k10d check_first_run_flags @ 0x10434090
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_first_run_flags(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = check_init_magic_at_offset_0x14(*(int *)(param_1 + 0xc));
  iVar1 = check_and_update_state_flag(param_1,iVar1 == 0);
  if (iVar1 == 0) {
    iVar1 = first_run_flag_a_done(*(int *)(param_1 + 0xc));
    if ((iVar1 == 0) || (iVar1 = first_run_flag_b_done(*(int *)(param_1 + 0xc)), iVar1 == 0)) {
      uVar2 = 1;
    }
  }
  else {
    init_two_magic_fields_10484960(*(int *)(param_1 + 0xc),0);
    uVar2 = 1;
  }
  return uVar2;
}
