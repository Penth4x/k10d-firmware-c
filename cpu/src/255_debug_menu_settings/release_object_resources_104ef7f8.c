/* @k10d release_object_resources_104ef7f8 @ 0x104ef7f8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Releases or resets three fields of an object passed in param_1 by calling three helper
 *   functions.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs cleanup or reset
 *   operations on three distinct members. It calls set_irq_mask_by_channel with the member
 *   at offset 0xc and constants -0x7fffffec and 0. It then calls an unknown function at
 *   0x1044d0c2 with the member at offset 0x10. Finally, it calls delete_signal_semaphore
 *   with the member at offset 0x14. The specific roles of these members and the helpers are
 *   not determinable from the provided pseudocode and callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_resources_104ef7f8(int param_1)

{
  set_irq_mask_by_channel(*(int *)(param_1 + 0xc),-0x7fffffec,0);
  (*(code *)0x1044d0c2/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
  delete_signal_semaphore((void *)(param_1 + 0x14));
  return;
}
