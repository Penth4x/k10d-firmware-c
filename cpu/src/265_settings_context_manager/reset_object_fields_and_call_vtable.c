/* @k10d reset_object_fields_and_call_vtable @ 0x1050167e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Resets specific fields of an object and invokes several helper functions on its sub-
 *   objects.
 * summary:
 *   The function takes a pointer to an object and performs a sequence of operations. It
 *   first calls set_irq_mask_by_channel with a value from offset 0x18. It then calls a
 *   function at 0x10453492 using a value from offset 0x14 plus 0x11. It calls a function at
 *   0x10452b14 with the value at offset 0x14. It calls set_ram_flag_40030001 and
 *   set_bit_14_in_ram40030400 with values derived from offset 0x14. Finally, it calls
 *   delete_signal_semaphore with a pointer to offset 0x1c. The specific roles of these
 *   callees are unknown, but the pattern suggests a cleanup or reset operation on a
 *   structured object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_fields_and_call_vtable(int param_1)

{
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff1,0x80);
  (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  set_ram_flag_40030001(*(int *)(param_1 + 0x14) + 0x11,0);
  set_bit_14_in_ram40030400(*(int *)(param_1 + 0x14) + 0x10,0);
  delete_signal_semaphore((int *)(param_1 + 0x1c));
  return;
}
