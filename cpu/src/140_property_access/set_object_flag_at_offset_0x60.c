/* @k10d set_object_flag_at_offset_0x60 @ 0x1046444e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 140_property_access (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on an object and stores a byte at offset 0x60.
 * summary:
 *   The function takes an object pointer and a byte value. It calls free_cpucom_context
 *   with the object, writes the byte to offset 0x60 of the object, and then calls
 *   free_cpucom_context_ref with the object. The specific roles of the helpers and the
 *   object are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_at_offset_0x60(void *param_1,uint8_t param_2)

{
  free_cpucom_context(param_1);
  *(uint8_t *)((int)param_1 + 0x60) = param_2;
  free_cpucom_context_ref(param_1);
  return;
}
