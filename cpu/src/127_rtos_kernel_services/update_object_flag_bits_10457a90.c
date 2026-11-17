/* @k10d update_object_flag_bits_10457a90 @ 0x10457a90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit field at offset 0x16 of a sub-object, masks it with 0x7770, ORs in the
 *   low 2 bits of param_3 and bit 2 if param_2 is non-zero, then writes the result back.
 * summary:
 *   The function performs a read-modify-write on a ushort located at *(param_1 + 0x10) +
 *   0x16. It preserves bits 4-14 (mask 0x7770), replaces bits 0-1 with the lower two bits
 *   of param_3, and sets bit 2 (value 4) if param_2 is non-zero. No kernel calls or MMIO
 *   writes are observed, indicating this is a pure in-memory state update on a data
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_flag_bits_10457a90(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) & 0x7770 | param_3 & 3;
  if (param_2 != 0) {
    uVar1 = uVar1 | 4;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) = uVar1;
  return;
}
