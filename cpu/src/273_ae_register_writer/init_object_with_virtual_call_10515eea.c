/* @k10d init_object_with_virtual_call_10515eea @ 0x10515eea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by calling a virtual method and setting several fields
 *   from a source pointer.
 * summary:
 *   The function performs a virtual call on an object pointed to by param_2, using a vtable
 *   pointer at offset 0x8d4. It then writes specific values to offsets 0x10, 0x8, 0xc, and
 *   0x14 of param_2, copying data from param_1 and another field of param_2. Finally, it
 *   calls reg_framework_send with a value derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_virtual_call_10515eea(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x14c))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x148) + (int)param_2);
  *(uint32_t *)((int)param_2 + 0x10) = 0x1180001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x83c);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 100) + 4);
  return;
}
