/* @k10d check_flag_and_call_helper_10418b5a @ 0x10418b5a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_call_helper_10418b5a(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 1;
  if ((*(char *)(param_1 + 0x14f4) != '\0') && (iVar1 = check_flag_and_log_if_clear(__frv_reg_unset(4)), iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}
