/* @k10d init_object_with_two_ids_104f8bd4 @ 0x104f8bd4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helpers on fields at offsets 0x10 and 0x14.
 * summary:
 *   The function takes a pointer to an object and invokes set_irq_mask_by_channel with the
 *   value at offset 0x10 and constants -0x7fffffeb and 0. It then calls
 *   delete_signal_semaphore with the address of the field at offset 0x14. The specific
 *   roles of the callees and the object are not determinable from the provided pseudocode
 *   and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_104f8bd4(int param_1)

{
  set_irq_mask_by_channel(*(int *)(param_1 + 0x10),-0x7fffffeb,0);
  delete_signal_semaphore((void *)(param_1 + 0x14));
  return;
}
