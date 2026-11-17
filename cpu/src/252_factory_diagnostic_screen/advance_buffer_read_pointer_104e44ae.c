/* @k10d advance_buffer_read_pointer_104e44ae @ 0x104e44ae
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Advances a read index within a buffer and copies a 9-byte chunk to a destination array.
 * summary:
 *   Checks if the current read index (param_1+0x14) is less than the total count
 *   (param_1+4). If so, it calls an unknown function at 0x104e6350 to process 9 bytes from
 *   a source buffer, increments the byte offset and row index, and calls an unknown
 *   function at 0x104e384c to copy data to a destination buffer. Returns 1 on success, 0 if
 *   the buffer is exhausted.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_buffer_read_pointer_104e44ae(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 4)) {
    (*(code *)0x104e6350/*ROM*/)
              (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x18) * 8,
               *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x20),9);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 9;
    iVar1 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar1 + 1;
    (*(code *)0x104e384c/*ROM*/)
              (*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x14) * 0x20,
               *(int *)(param_1 + 0x28) + iVar1 * 8);
    iVar1 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x14) * 0x20;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
