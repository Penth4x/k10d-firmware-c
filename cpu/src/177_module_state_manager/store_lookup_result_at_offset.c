/* @k10d store_lookup_result_at_offset @ 0x104834a8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a lookup helper with constant 0xa7 and stores the returned value at offset 4 of
 *   the object.
 * summary:
 *   This is virtual slot 2 of cls_105ab8ac. It obtains a pointer from
 *   get_or_init_sram_buffer_104277bc, passes it and the constant 0xa7 to
 *   read_table_entry_field, and writes the 32-bit result to *(param_1 + 4). It always
 *   returns 1. The specific subsystem role of the lookup is not determinable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_lookup_result_at_offset(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xa7);
  *(uint32_t *)((int)param_1 + 4) = uVar2;
  return 1;
}
