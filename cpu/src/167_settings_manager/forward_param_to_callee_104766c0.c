/* @k10d forward_param_to_callee_104766c0 @ 0x104766c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a field at offset 0xc from param_1 and passes it with param_2 to
 *   allocate_and_link_event_object.
 * summary:
 *   This function is a thin wrapper that reads the 4-byte value at offset 0xc of the object
 *   pointed to by param_1 and forwards it as the first argument to
 *   allocate_and_link_event_object, along with param_2. It performs no other operations or
 *   side effects. The specific role of the field and the callee is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_callee_104766c0(int param_1,void *param_2)

{
  allocate_and_link_event_object(*(int *)(param_1 + 0xc),param_2);
  return;
}
