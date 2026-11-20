/* @k10d store_result_at_offset_eight_104ebc8e @ 0x104ebc8e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Stores the result of a two-step helper call into the 8th byte of the provided object.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to obtain a pointer, then passes
 *   that pointer and the constant 0xba to read_table_entry_field. The return value of
 *   read_table_entry_field is written to the memory location at offset 8 of the object
 *   pointed to by param_1. It always returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t store_result_at_offset_eight_104ebc8e(cls_105c2968 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xba);
  param_1->field_0x8 = uVar2;
  return 1;
}
