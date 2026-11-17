/* @k10d update_object_flag_bits_10457a18 @ 0x10457a18
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit field at offset 0x16 of a sub-object, masks it with 0x7077, inserts the
 *   low 2 bits of param_3 into bits 8-9, and optionally sets bit 10.
 * summary:
 *   The function treats param_1 as a pointer to a structure containing a pointer at offset
 *   0x10. It dereferences that pointer and accesses a 16-bit value at offset 0x16. It
 *   preserves specific bits (0x7077) while replacing bits 8-9 with the lower 2 bits of
 *   param_3. If param_2 is non-zero, it sets bit 10 (0x400). The result is written back to
 *   the same location. No kernel calls or MMIO writes are visible in the pseudocode,
 *   despite the module context suggesting RTOS wrappers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_flag_bits_10457a18(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) & 0x7077 | (param_3 & 3) << 8;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x400;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) = uVar1;
  return;
}
