/* @k10d check_two_flags_and_write_values @ 0x104195a0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Checks two flags via helper calls and writes specific values to object offsets if set.
 * summary:
 *   Calls get_sysparam_store_instance and get_sysparam_store_byte to test flag 0x1d; if
 *   set, writes 1 to param_1+0x1571. Tests flag 3; if set, calls get_field_from_context
 *   four times to write values from param_1+0x1572, a zero, param_1+0x1574, and another
 *   zero to the object at param_1+0x5c. The specific subsystem is not identifiable from the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_two_flags_and_write_values(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((void *)uVar1,0x1d);
  if (iVar2 != 0) {
    *(uint8_t *)(param_1 + 0x1571) = 1;
  }
  uVar1 = get_sysparam_store_instance();
  iVar2 = get_sysparam_store_byte((void *)uVar1,3);
  if (iVar2 != 0) {
    uStack_a = 0;
    get_field_from_context(*(uint32_t *)(param_1 + 0x5c),(void *)(param_1 + 0x1572));
    get_field_from_context(*(uint32_t *)(param_1 + 0x5c),&uStack_a);
    get_field_from_context(*(uint32_t *)(param_1 + 0x5c),(void *)(param_1 + 0x1574));
    get_field_from_context(*(uint32_t *)(param_1 + 0x5c),&uStack_a);
  }
  return;
}
