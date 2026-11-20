/* @k10d call_subroutine_and_return_one_104448fe @ 0x104448fe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes zero_struct_array_fields with the given pointer and returns 1.
 * summary:
 *   This is a thin wrapper that forwards its single argument to zero_struct_array_fields
 *   and unconditionally returns 1. It is virtual slot 3 of cls_105a1648. No other side
 *   effects or state changes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a1648": ignoring overlapping field "field_0x10" */

uint32_t call_subroutine_and_return_one_104448fe(cls_105a1648 *param_1)

{
  zero_struct_array_fields(param_1);
  return 1;
}
