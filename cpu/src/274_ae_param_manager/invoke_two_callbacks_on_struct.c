/* @k10d invoke_two_callbacks_on_struct @ 0x10516ba6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer at 0x1050a788 twice with offsets from a struct if the struct
 *   is valid.
 * summary:
 *   Checks if the first byte of param_1 is non-zero and the integer at offset 4 is non-
 *   zero. If valid, it calls the function at 0x1050a788 with param_1+0x30 and
 *   param_1+4+0x6e8, then again with param_1+0x4c and param_1+4+0x704. The function at
 *   0x1050a788 is not identified in the database.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_callbacks_on_struct(char *param_1)

{
  if ((*param_1 != '\0') && (*(int *)(param_1 + 4) != 0)) {
    (*(code *)0x1050a788/*ROM*/)(param_1 + 0x30,*(int *)(param_1 + 4) + 0x6e8);
    (*(code *)0x1050a788/*ROM*/)(param_1 + 0x4c,*(int *)(param_1 + 4) + 0x704);
  }
  return;
}
