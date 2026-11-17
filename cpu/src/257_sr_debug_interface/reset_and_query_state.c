/* @k10d reset_and_query_state @ 0x104f35a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Resets a state object via a helper call and returns a status value from a query
 *   function.
 * summary:
 *   Calls sr_driver_singleton to obtain a pointer, then calls module_array_getter with the
 *   second field of that structure and zero. Subsequently calls
 *   return_sram_address_10436eda and returns the result of read_offset_0x14. The specific
 *   subsystem is not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_and_query_state(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),0);
  return_sram_address_10436eda();
  uVar2 = read_offset_0x14(__frv_reg_unset(4));
  return uVar2;
}
