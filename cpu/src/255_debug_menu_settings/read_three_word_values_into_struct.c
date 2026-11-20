/* @k10d read_three_word_values_into_struct @ 0x104ef11a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Fetches three 32-bit values via read_table_entry_field and stores them at offsets 4, 8,
 *   and 12 of the provided structure.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to obtain a context pointer, then
 *   uses read_table_entry_field to read values with identifiers 0xba, 0xb9, and 0xc1. These
 *   values are written to the first three 32-bit fields of the object pointed to by
 *   param_1. Finally, it invokes a virtual method (slot 2 of cls_105c2d24) on the fourth
 *   field of the object with an argument of 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_three_word_values_into_struct(cls_105c2de4 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xba);
  param_1->field_0x4 = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xb9);
  param_1->field_0x8 = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xc1);
  param_1->field_0xc = uVar2;
  return_constant_one_104edd0a((uint32_t)(&param_1->field_0x10),(uint32_t)(0));
  return 1;
}
