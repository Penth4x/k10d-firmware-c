/* @k10d append_newline_to_buffer @ 0x104f4a34
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Appends a newline character to a text buffer if the buffer is active and the index is
 *   valid.
 * summary:
 *   Checks if the object at param_1 has a non-null flag at offset 0x40 and if param_2 is
 *   less than 4. Calls compute_indexed_difference to validate the index, then writes the
 *   ASCII newline character (0x0a) to the buffer at offset 0x30 plus the calculated index,
 *   incrementing the length counter. The caller execute_capture_sequence suggests this is
 *   used for logging or status display during the capture process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_newline_to_buffer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (((*(char *)(param_1 + 0x40) != '\0') && (param_2 < 4)) &&
     (uVar3 = compute_indexed_difference(param_1,param_2), 2 < uVar3)) {
    iVar4 = param_2 * 4;
    iVar2 = param_1 + 0x30;
    **(uint8_t **)(iVar4 + iVar2) = 0xd;
    iVar1 = *(int *)(iVar4 + iVar2);
    *(int *)(iVar4 + iVar2) = iVar1 + 1;
    *(uint8_t *)(iVar1 + 1) = 10;
    *(int *)(iVar4 + iVar2) = *(int *)(iVar4 + iVar2) + 1;
  }
  return;
}
