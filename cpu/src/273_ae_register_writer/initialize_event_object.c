/* @k10d initialize_event_object @ 0x10515b60
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an event object structure and triggers a virtual callback on a related
 *   object.
 * summary:
 *   The function performs a virtual call on an object pointed to by a field at offset 0x8d4
 *   of param_2. It then sets fields in param_2: offset 0x10 to 2, offset 0x08 to param_1+4,
 *   offset 0x0c to the value at param_2+0x828, and offset 0x14 to param_2 itself. Finally,
 *   it calls reg_framework_send with an argument derived from param_1+0x54. The specific
 *   role of the event or the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_event_object(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x144))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x140) + (int)param_2);
  *(uint32_t *)((int)param_2 + 0x10) = 2;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x828);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x54) + 8);
  return;
}
