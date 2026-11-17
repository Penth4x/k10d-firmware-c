/* @k10d increment_counter_and_reset_flag @ 0x10418720
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_counter_and_reset_flag(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14c8) != '\0') {
    (*(code *)0x1050b0de/*ROM*/)(param_1 + 0x14bc);
    *(uint32_t *)(param_1 + 0x14dc) = 0;
    iVar1 = *(int *)(param_1 + 0x14e0) + 1;
    *(int *)(param_1 + 0x14e0) = iVar1;
    if (1 < iVar1) {
      set_object_flag_and_reset((void *)(param_1 + 0x14bc),0);
    }
  }
  return;
}
