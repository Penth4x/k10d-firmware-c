/* @k10d invoke_virtual_slots_3_and_4 @ 0x10427b66
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Calls virtual slots 3 and 4 of an object's vtable with a flag-setting call in between.
 * summary:
 *   The function performs two virtual calls on the object pointed to by param_1. It first
 *   calls virtual slot 3 (vtable offset 0x24), then calls set_flg_obj on the field at
 *   offset 8, and finally calls virtual slot 4 (vtable offset 0x2c). The vtable pointer is
 *   stored at offset 0x10 of the object. No specific camera subsystem behavior is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slots_3_and_4(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 0x24))
            (*(short *)(*(int *)(param_1 + 0x10) + 0x20) + param_1);
  set_flg_obj((uint32_t *)(param_1 + 8));
  (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
            (*(short *)(*(int *)(param_1 + 0x10) + 0x28) + param_1);
  return;
}
