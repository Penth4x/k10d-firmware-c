/* @k10d store_query_result_at_offset_8_104ed3ec @ 0x104ed3ec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores the second helper's return value at offset 8 of the
 *   object.
 * summary:
 *   Retrieves a pointer via get_or_init_sram_buffer_104277bc, passes it with constant 0xba
 *   to read_table_entry_field, and writes the resulting value to *(param_1 + 8). Returns 1
 *   unconditionally. The specific roles of the callees are unknown, so the operation is
 *   described mechanically as storing a computed value into the object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_query_result_at_offset_8_104ed3ec(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xba);
  *(uint32_t *)((int)param_1 + 8) = uVar2;
  return 1;
}
