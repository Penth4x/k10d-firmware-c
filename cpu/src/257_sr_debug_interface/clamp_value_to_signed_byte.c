/* @k10d clamp_value_to_signed_byte @ 0x104f32aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Computes a value via a virtual call and clamps it to the signed 8-bit range.
 * summary:
 *   Creates a temporary object on the stack, passes a pointer from param_1+8 to
 *   copy_field_from_struct_1045e622, then calls virtual slot 2
 *   (read_byte_at_offset_10460694) with argument 0. If the result is greater than 0x7f, it
 *   subtracts 0x100 to wrap it into the negative signed byte range. The temporary object is
 *   then deleted before returning the clamped value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_value_to_signed_byte(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6f3c cStack_10;
  
  cls_105a6f3c_new(&cStack_10);
  copy_field_from_struct_1045e622(*(int *)(param_1 + 8),&cStack_10);
  iVar1 = read_byte_at_offset_10460694(&cStack_10,0);
  if (0x7f < iVar1) {
    iVar1 = iVar1 + -0x100;
  }
  cls_105a6f3c_delete(&cStack_10,2);
  return iVar1;
}
