/* @k10d query_object_property_byte_104f2294 @ 0x104f2294
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, queries a property via virtual call, and returns a byte-
 *   sized result.
 * summary:
 *   Allocates a stack-based instance of cls_105a6d8c. Calls copy_status_block_bytes with a
 *   pointer from param_1+8 and the new object. Invokes virtual slot 2
 *   (extract_field_from_struct_1045ff0e) with argument 0x1b to retrieve a value. Passes
 *   this value (masked to 8 bits) to map_mode_code_to_index_1045b5a6 along with the result
 *   of get_or_init_heap_block. Cleans up the temporary object and returns the final result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_property_byte_104f2294(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105a6d8c acStack_24 [7];
  
  cls_105a6d8c_new(acStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),acStack_24);
  uVar1 = extract_field_from_struct_1045ff0e(acStack_24,0x1b);
  uVar2 = get_or_init_heap_block();
  uVar2 = map_mode_code_to_index_1045b5a6(uVar2,uVar1 & 0xff);
  cls_105a6d8c_delete(acStack_24,2);
  return uVar2;
}
