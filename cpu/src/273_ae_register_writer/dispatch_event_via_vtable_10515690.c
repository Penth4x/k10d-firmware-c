/* @k10d dispatch_event_via_vtable_10515690 @ 0x10515690
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object and updates a linked-list node structure with a
 *   new state and pointer.
 * summary:
 *   The function performs a virtual call on an object located at param_2 + 0x8d4, passing a
 *   boolean derived from a table lookup. It then modifies fields at offsets 0x8, 0xc, 0x10,
 *   and 0x14 of param_2, setting a state value of 0x10e0001 and linking the node to itself.
 *   Finally, it calls reg_framework_send with a pointer derived from param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_via_vtable_10515690(int param_1,void *param_2)

{
  (((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[19].fn)
            ((int)((vtbl_entry*)(*(int *)((int)param_2 + 0x8d4)))[19].adj + (int)param_2,
             *(short *)(*(int *)((int)param_2 + 0x20) + 0xa0 + *(int *)((int)param_2 + 0x24) * 2) ==
             1);
  *(uint32_t *)((int)param_2 + 0x10) = 0x10e0001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x82c);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x50) + 8, (void *)((uintptr_t)param_2 + 8), 0x2);
  return;
}
