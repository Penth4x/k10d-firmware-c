/* @k10d invoke_virtual_slot_one_104aceb4 @ 0x104aceb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls the virtual method at slot 1 of the object stored at offset 4 of the given
 *   pointer.
 * summary:
 *   This function is virtual slot 3 of cls_105b7418. It dereferences param_1+4 to obtain a
 *   pointer to another object and calls iterate_virtual_object_arrays on it. It then
 *   returns the constant 1. The specific role of iterate_virtual_object_arrays is unknown,
 *   so the higher-level camera subsystem role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_one_104aceb4(void *param_1)

{
  iterate_virtual_object_arrays(*(void **)((int)param_1 + 4));
  return 1;
}
