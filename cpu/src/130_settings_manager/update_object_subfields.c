/* @k10d update_object_subfields @ 0x1045d28c
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Updates two sub-structures of an object by calling three helper functions on offsets
 *   0x54 and 0x48.
 * summary:
 *   The function takes an object pointer (param_1) and a value (param_2). It calls
 *   call_kernel_with_short_id on the field at offset 0x54, then copy_seven_bytes on the
 *   field at offset 0x48 passing param_2, and finally check_kernel_call_success_10459d88 on
 *   the field at offset 0x54 again. The specific roles of the callees and the object are
 *   unknown, but the pattern suggests a sequence of updates or state changes on specific
 *   members of the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_subfields(int param_1,int param_2)

{
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x54));
  copy_seven_bytes((void *)(param_1 + 0x48),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x54));
  return;
}
