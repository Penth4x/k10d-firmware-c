/* @k10d sum_two_helper_results @ 0x104a91de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns the sum of two helper calls, one taking no args and one taking a pointer from
 *   param_1+4.
 * summary:
 *   Calls read_two_bytes_from_heap_offset() with no arguments and sum_two_values_plus_six()
 *   with the value at *(param_1+4), then returns their sum. It is virtual slot 4 of
 *   cls_105b6aa0, so param_1 is the object pointer and the second argument is an object
 *   field at offset 4. No camera subsystem is identifiable from the pseudocode or the
 *   unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_two_helper_results(cls_105b6aa0 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = read_two_bytes_from_heap_offset(__frv_reg_unset(4));
  iVar2 = sum_two_values_plus_six((char*)(param_1) ->field_0x4);
  return iVar1 + iVar2;
}
