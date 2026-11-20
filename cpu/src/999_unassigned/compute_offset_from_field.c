/* @k10d compute_offset_from_field @ 0x10521ff0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns a pointer offset computed from a field at param_1+0x10, or zero if the field is
 *   null.
 * summary:
 *   Reads the 32-bit value at offset 0x10 of the object pointed to by param_1. If that
 *   value is zero, the function returns 0. Otherwise it returns the value plus 0x20. No
 *   callees are invoked and no memory is written.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_offset_from_field(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) + 0x20;
  }
  return iVar1;
}
