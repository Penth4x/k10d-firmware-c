/* @k10d initialize_event_node @ 0x10515d1a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes an event node structure and dispatches a virtual notification to a
 *   registered handler.
 * summary:
 *   The function performs a virtual call on an object pointer stored at offset 0x8d4 of
 *   param_2, passing param_2 as the 'this' pointer along with arguments 1, 0, and 0. It
 *   then initializes several fields of the param_2 structure: sets a flag at offset 0x10 to
 *   0x800001, stores a pointer (param_1 + 4) at offset 0x8, copies a value from offset
 *   0x804 to offset 0xc, and sets a self-referential pointer at offset 0x14. Finally, it
 *   calls reg_framework_send with a value derived from param_1 + 0x44. The structure layout
 *   and virtual call pattern suggest this is initializing a node in a linked list or event
 *   queue.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_event_node(int param_1,void *param_2)

{
  (**(code **)(*(int *)((int)param_2 + 0x8d4) + 0x104))
            ((int)*(short *)(*(int *)((int)param_2 + 0x8d4) + 0x100) + (int)param_2,1,0,0);
  *(uint32_t *)((int)param_2 + 0x10) = 0x800001;
  *(int *)((int)param_2 + 8) = param_1 + 4;
  *(uint32_t *)((int)param_2 + 0xc) = *(uint32_t *)((int)param_2 + 0x804);
  *(void **)((int)param_2 + 0x14) = param_2;
  reg_framework_send(*(int *)(param_1 + 0x44) + 8);
  return;
}
