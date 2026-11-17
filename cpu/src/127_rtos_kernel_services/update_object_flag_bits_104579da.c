/* @k10d update_object_flag_bits_104579da @ 0x104579da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Reads a 16-bit field at offset 0x16 of an object, masks it with 0x777, inserts param_3
 *   into bits 12-13, and sets bit 14 if param_2 is non-zero.
 * summary:
 *   The function performs an atomic-style read-modify-write on a 16-bit status or control
 *   word located at *(param_1 + 0x10) + 0x16. It preserves bits 0-9 and 11 (mask 0x777),
 *   overwrites bits 12-13 with the lower two bits of param_3, and conditionally sets bit 14
 *   (0x4000) based on param_2. No kernel calls or MMIO writes are visible, indicating this
 *   is a pure memory manipulation routine likely used to update state flags within a task
 *   or object control block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_object_flag_bits_104579da(int param_1,int param_2,ushort param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) & 0x777 | (param_3 & 3) << 0xc;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x16) = uVar1;
  return;
}
