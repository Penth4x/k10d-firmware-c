/* @k10d set_two_flags_and_call_helper @ 0x10516b28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets two bytes at offsets 8 and 9 of a struct to 1 if the first byte and a dword at
 *   offset 4 are non-zero, then calls a helper.
 * summary:
 *   The function checks that the first byte of the input pointer is non-zero and that the
 *   32-bit value at offset 4 is non-zero. If both conditions are met, it writes 0x01 to
 *   bytes at offsets 8 and 9 of the structure and calls invoke_two_callbacks_on_struct. The
 *   specific subsystem or meaning of these flags is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_flags_and_call_helper(char *param_1)

{
  if ((*param_1 != '\0') && (*(int *)(param_1 + 4) != 0)) {
    param_1[8] = '\x01';
    param_1[9] = '\x01';
    invoke_two_callbacks_on_struct((char *)(uint32_t)param_1);
  }
  return;
}
