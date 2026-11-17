/* @k10d dispatch_event_via_vtable_105159bc @ 0x105159bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and updates a linked-list node structure.
 * summary:
 *   The function performs a virtual call on an object pointed to by param_2, using a vtable
 *   pointer at offset 0x8d4 and slot offset 0xe4. It then modifies fields at offsets 0x10,
 *   0x8, 0xc, and 0x14 of param_2, appearing to link it into a list or update state.
 *   Finally, it calls reg_framework_send with a value derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_via_vtable_105159bc(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0xe4))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0xe0) + (int)param_2,
             *(uint16_t *)
              (*(int *)((int)param_2 + 0x24) * 2 + *(int *)((int)param_2 + 0x20) + 0xa0));
  *(uint32_t *)((int)param_2 + 0x10) = 0x1100001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x834);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x5c) + 8);
  return;
}
