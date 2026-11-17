/* @k10d call_helper_with_struct_field_104c4800 @ 0x104c4800
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 4-byte field from a struct and passes it with a computed value to a helper
 *   function.
 * summary:
 *   The function extracts a 32-bit value from offset 0x48 of the object pointed to by
 *   param_1. It calls read_byte_at_offset_five_1051e50e with param_2 to obtain a value,
 *   then passes both the extracted field and the result to
 *   update_buffer_index_and_store_byte. The specific roles of the struct field and the
 *   helper functions are not determinable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_struct_field_104c4800(int param_1,int param_2)

{
  uint8_t uVar1;
  uint32_t uVar2;
  
  uVar2 = *(uint32_t *)(param_1 + 0x48);
  uVar1 = read_byte_at_offset_five_1051e50e(param_2);
  update_buffer_index_and_store_byte(uVar2,uVar1);
  return;
}
