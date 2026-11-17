/* @k10d store_offset_from_helper @ 0x10509412
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores the second result plus 0x14 into the object at offset
 *   0x18.
 * summary:
 *   This virtual method (slot 2 of cls_105d5370) calls get_or_init_sram_buffer_104277bc to
 *   obtain a pointer, then passes that pointer and the constant 0xc1 to
 *   read_table_entry_field. The integer result of read_table_entry_field is incremented by
 *   0x14 and written to the caller-provided object at offset 0x18. The function returns 1
 *   unconditionally. The specific roles of the two callees are unknown, so the operation is
 *   described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_offset_from_helper(void *param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  iVar2 = read_table_entry_field(pvVar1,0xc1);
  *(int *)((int)param_1 + 0x18) = iVar2 + 0x14;
  return 1;
}
