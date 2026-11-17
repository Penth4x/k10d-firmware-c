/* @k10d check_and_set_state_flag @ 0x1044a7f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_state_flag(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sdhc_select_card(param_1,*(uint16_t *)((int)param_1 + 0xe0));
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((*(uint *)((int)param_1 + 0x3c8) & 0x2000000) == 0) {
      store_value_to_pointer_1044c036((void *)((int)param_1 + 0x15c),0);
      uVar2 = 1;
    }
    else {
      store_value_to_pointer_1044c036((void *)((int)param_1 + 0x15c),2);
      *(uint32_t *)((int)param_1 + 0x120) = 5;
    }
  }
  return uVar2;
}
