/* @k10d check_object_property_equals_one @ 0x104f2b74
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a field from param_1 to it, and returns whether a
 *   virtual query equals 1.
 * summary:
 *   Allocates a stack instance of cls_105a6b04, calls copy_twelve_bytes_to_buffer with the
 *   value at param_1+8 and the new object, then invokes virtual slot 2
 *   (extract_field_from_param_table) with argument 6. The result is compared to 1 and
 *   returned as a boolean. The temporary object is destroyed before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_object_property_equals_one(int param_1)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a6b04_new((void *)auStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  iVar1 = extract_field_from_param_table(auStack_18,6);
  cls_105a6b04_delete((void *)auStack_18,2);
  return iVar1 == 1;
}
