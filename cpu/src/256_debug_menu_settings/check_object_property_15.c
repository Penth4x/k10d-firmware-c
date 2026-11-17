/* @k10d check_object_property_15 @ 0x104f2520
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns whether
 *   virtual slot 2 with arg 0xf equals 1.
 * summary:
 *   Allocates a stack instance of cls_105a6d8c and calls copy_status_block_bytes with the
 *   value at param_1+8 and the new object. It then invokes virtual method slot 2
 *   (extract_field_from_struct_1045ff0e) on the temporary object with argument 0xf, deletes
 *   the temporary object, and returns true if the result is exactly 1. The function acts as
 *   a predicate checking a specific property or state indicated by the constant 0xf.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_property_15(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  cls_105a6d8c_new(auStack_24);
  copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
  iVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,0xf);
  cls_105a6d8c_delete(auStack_24,2);
  return iVar1 == 1;
}
