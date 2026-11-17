/* @k10d destroy_object_with_flag @ 0x104aaf4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a cleanup routine on an object and frees its heap block if the second argument's
 *   low bit is set.
 * summary:
 *   Checks that param_1 is non-NULL, then calls init_struct_with_two_helpers(param_1)
 *   unconditionally. If bit 0 of param_2 is set, it calls heap_free on param_1. This
 *   matches the C++ operator delete pattern where a destructor is invoked before freeing
 *   memory, with the flag controlling whether the allocation is actually released.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_with_flag(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (init_struct_with_two_helpers(param_1), (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
