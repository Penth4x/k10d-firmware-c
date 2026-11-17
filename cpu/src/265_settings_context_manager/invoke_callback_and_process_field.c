/* @k10d invoke_callback_and_process_field @ 0x10501a36
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer with a field value and 2, then processes another field.
 * summary:
 *   The function dereferences a pointer at offset 0xc of the input structure and calls it
 *   with the value at offset 0xc and the constant 2. It then calls delete_signal_semaphore
 *   with the pointer at offset 0x14 of the input structure. The specific roles of the
 *   structure fields and the callees are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_callback_and_process_field(int param_1)

{
  (*(code *)0x1045381c/*ROM*/)(*(uint32_t *)(param_1 + 0xc),2);
  delete_signal_semaphore((void *)(param_1 + 0x14));
  return;
}
