/* @k10d store_query_result_at_offset_8_104ec422 @ 0x104ec422
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores the second helper's return value at offset 8 of the
 *   object.
 * summary:
 *   Invokes get_or_init_sram_buffer_104277bc to obtain a pointer, then passes that pointer
 *   and constant 0xba to read_table_entry_field. The result of read_table_entry_field is
 *   written to *(param_1 + 8). Returns 1 unconditionally. The specific roles of the callees
 *   are unknown, so the operation is described mechanically as storing a computed value
 *   into the object structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_query_result_at_offset_8_104ec422(cls_105c2a58 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xba);
  param_1->field_0x8 = uVar2;
  return 1;
}
