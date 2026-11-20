/* @k10d check_and_dispatch_state_flags @ 0x104178bc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_dispatch_state_flags(int param_1)

{
  uint8_t *puVar1;
  char cVar4;
  uint32_t uVar2;
  int iVar3;
  uint32_t uVar5;
  
  uVar5 = 1;
  puVar1 = (uint8_t *)get_sysparam_store_instance();
  cVar4 = read_sysparam_byte(puVar1);
  if (cVar4 != '\0') {
    uVar2 = (uint32_t)(uintptr_t)get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((void *)uVar2,0x10);
    if (iVar3 != 0) {
      run_test_mode_sequence(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1530) == 0) {
    uVar2 = (uint32_t)(uintptr_t)get_sysparam_store_instance();
    iVar3 = get_sysparam_store_byte((void *)uVar2,3);
    if (iVar3 != 0) {
      allocate_and_configure_buffer_1041941c(param_1);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
