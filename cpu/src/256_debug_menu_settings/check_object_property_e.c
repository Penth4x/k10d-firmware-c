/* @k10d check_object_property_e @ 0x104f24d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns whether
 *   virtual slot 2 with argument 0xe is non-zero.
 * summary:
 *   Allocates a stack instance of cls_105a6eac, calls
 *   copy_four_bytes_from_struct_field_1045e59a with the value at param_1+8 and the new
 *   object, then invokes virtual method slot 2 (extract_field_by_index_10460366) with
 *   argument 0xe. The result is compared to zero and returned as a boolean, and the
 *   temporary object is deleted before returning. The specific camera subsystem is not
 *   identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_property_e(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6eac cStack_10;
  
  cls_105a6eac_new(&cStack_10);
  copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 8),&cStack_10);
  iVar1 = extract_field_by_index_10460366(&cStack_10,0xe);
  cls_105a6eac_delete(&cStack_10,2);
  return iVar1 != 0;
}
