/* @k10d override_parent_slot2 @ 0x10463c06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 139_cpucom_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls the parent class virtual method slot 2 on the object and returns 1.
 * summary:
 *   This is virtual slot 2 of cls_105a776c, which derives from cls_105a7bf0. It forwards
 *   the call to the parent's slot 2 (init_object_with_buffer) and returns a constant 1. No
 *   other side effects or camera-specific behavior are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t override_parent_slot2(void *param_1)

{
  init_object_with_buffer(param_1);
  return 1;
}
