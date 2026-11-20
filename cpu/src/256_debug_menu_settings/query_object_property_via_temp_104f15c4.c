/* @k10d query_object_property_via_temp_104f15c4 @ 0x104f15c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, queries a property, and
 *   returns the result.
 * summary:
 *   The function allocates a temporary instance of cls_105a6d8c on the stack. It calls
 *   copy_status_block_bytes with a value from param_1+8 and the temporary object. It then
 *   invokes virtual slot 2 (extract_field_from_struct_1045ff0e) on the temporary object
 *   with an argument of 0x28, masking the result to a byte. Finally, it calls
 *   map_mode_code_to_index_1045b3e8 with a value from param_1+0x44, the masked byte, and
 *   the constant 2, returning the result of this call. The temporary object is destroyed
 *   before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property_via_temp_104f15c4(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x28);
  uVar2 = map_mode_code_to_index_1045b3e8(*(uint32_t *)(param_1 + 0x44),uVar1 & 0xff,2);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar2;
}
