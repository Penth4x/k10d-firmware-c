/* @k10d update_object_field_and_notify_104c4824 @ 0x104c4824
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Reads a value from param_2, writes it to an object field at offset 0x48, and passes the
 *   result to a third function.
 * summary:
 *   The function calls read_byte_at_offset_five_1051e50e with param_2 to obtain a value. It
 *   then writes this value to the memory location at param_1 + 0x48 via copy_buffer_block.
 *   It subsequently reads the value back (or computes a related value) using
 *   compute_table_offset and passes both the original param_2 and the new value to
 *   write_array_element_1051e4e2. The specific subsystem is not identifiable from the
 *   provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_field_and_notify_104c4824(int param_1,int param_2)

{
  uint8_t uVar2;
  uint32_t uVar1;
  
  uVar2 = read_byte_at_offset_five_1051e50e(param_2);
  copy_buffer_block(*(uint32_t *)(param_1 + 0x48),uVar2);
  uVar1 = compute_table_offset(*(uint32_t *)(param_1 + 0x48),uVar2);
  write_array_element_1051e4e2(param_2,uVar2,uVar1);
  return;
}
