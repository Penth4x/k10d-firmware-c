/* @k10d update_object_flag_bits_10457a56 @ 0x10457a56
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit field at offset 0x16 of a sub-object, masks it with 0x7707, inserts the
 *   low 2 bits of param_3 into bits 4-5, and sets bit 6 if param_2 is non-zero.
 * summary:
 *   The function performs a read-modify-write on a 16-bit value located at *(param_1 +
 *   0x10) + 0x16. It preserves bits defined by the mask 0x7707, overwrites bits 4 and 5
 *   with the lower two bits of param_3, and conditionally sets bit 6 based on param_2. No
 *   kernel calls or MMIO writes are observed, indicating this is a pure in-memory state
 *   update, likely for a task or object control block within the RTOS wrapper module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_flag_bits_10457a56(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) & 0x7707 | (param_3 & 3) << 4;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x40;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) = uVar1;
  return;
}
