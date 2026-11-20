/* @k10d advance_buffer_read_pointer_104ad4f8 @ 0x104ad4f8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a chunk from a buffer, advancing the internal offset by the number of bytes
 *   consumed.
 * summary:
 *   Checks if the buffer object (param_1) is valid and if the current offset (param_1[2])
 *   is within bounds. Depending on whether the offset is 4-byte aligned, it calls either
 *   copy_bytes_with_alignment or copy_bytes_aligned to copy data into param_2. It then
 *   updates the offset in param_1[2] by the return value of the copy function. The specific
 *   behavior of the callees is unknown, but the structure strongly suggests a buffered I/O
 *   or stream reading operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int advance_buffer_read_pointer_104ad4f8(int *param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    uVar2 = param_1[2];
    if ((uVar2 & 3) == 0) {
      iVar1 = extract_bitfield_with_offset(uVar2,4,0);
      iVar1 = copy_bytes_with_alignment((uint32_t *)(param_2),(uint32_t *)(*param_1 + iVar1 * 4),(uint)(param_3),(uint)(param_1[3] - param_1[2]));
    }
    else {
      iVar1 = copy_bytes_aligned((uint8_t *)(param_2),(uint8_t *)(*param_1 + uVar2),(uint)(param_3),(uint)(param_1[3] - uVar2));
    }
    param_1[2] = param_1[2] + iVar1;
  }
  return iVar1;
}
