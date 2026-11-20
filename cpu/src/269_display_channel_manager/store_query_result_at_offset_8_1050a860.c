/* @k10d store_query_result_at_offset_8_1050a860 @ 0x1050a860
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls an object getter and a query function with constant 0xba, storing the result at
 *   offset 8 of the object.
 * summary:
 *   Retrieves a pointer from get_or_init_sram_buffer_104277bc, passes it to
 *   read_table_entry_field with argument 0xba, and writes the returned value to *(param_1 +
 *   8). Returns 1 unconditionally. The specific roles of the callees are unknown, so the
 *   operation is described mechanically as a query-and-store pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_query_result_at_offset_8_1050a860(cls_105d5428 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xba);
  param_1->field_0x8 = uVar2;
  return 1;
}
