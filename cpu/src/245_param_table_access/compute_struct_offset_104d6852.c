/* @k10d compute_struct_offset_104d6852 @ 0x104d6852
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Returns param_1 plus 0x1740 if param_2 is non-zero, otherwise returns 0.
 * summary:
 *   A trivial arithmetic helper that conditionally adds a fixed offset (0x1740) to a base
 *   pointer or value. It has no callees and no side effects. The specific meaning of the
 *   0x1740 offset cannot be determined from this function alone without context from its
 *   callers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_struct_offset_104d6852(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 + 0x1740;
  }
  return iVar1;
}
