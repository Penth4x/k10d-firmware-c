/* @k10d check_flag_and_log_if_clear @ 0x10418984
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_flag_and_log_if_clear(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x14fc) != '\0';
  if (!bVar1) {
    check_kernel_call_success_10459fea();
  }
  return bVar1;
}
