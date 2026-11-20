/* @k10d store_result_at_offset_eight_104ed5dc @ 0x104ed5dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls two helpers and stores the second helper's return value at offset 8 of the
 *   object.
 * summary:
 *   The function takes an object pointer (param_1), calls get_or_init_sram_buffer_104277bc
 *   to obtain a pointer, then calls read_table_entry_field with that pointer and the
 *   constant 0xb9. The return value of read_table_entry_field is written to *(param_1 + 8).
 *   The function always returns 1. It is virtual method slot 2 of class cls_105c2c74.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_eight_104ed5dc(cls_105c2c74 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xb9);
  param_1->field_0x8 = uVar2;
  return 1;
}
