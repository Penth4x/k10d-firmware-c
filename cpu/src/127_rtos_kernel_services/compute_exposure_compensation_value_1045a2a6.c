/* @k10d compute_exposure_compensation_value_1045a2a6 @ 0x1045a2a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Calculates an exposure compensation offset from a quantized input parameter using a
 *   lookup table.
 * summary:
 *   The function uses a local 8-byte lookup table to map the lower 3 bits of param_2 to a
 *   base value. It then applies a linear scaling factor based on the upper bits of param_2
 *   to produce a signed short result. This behavior is consistent with calculating an EV
 *   (Exposure Value) compensation step or offset for the camera's exposure system.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_exposure_compensation_value_1045a2a6(uint32_t param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  uintptr_t sp;
  byte abStack_c [8];
  
  abStack_c[0] = 0x32;
  abStack_c[1] = 0x28;
  abStack_c[2] = 0x3c;
  abStack_c[3] = 0x46;
  abStack_c[4] = 0x14;
  abStack_c[5] = 0x1e;
  abStack_c[6] = 10;
  abStack_c[7] = 0;
  uVar1 = ((int)(param_2 & 0xf8) >> 3) * 5;
  if (uVar1 < 0x29) {
    sVar2 = abStack_c[param_2 & 7] - 10;
  }
  else {
    sVar2 = (ushort)abStack_c[param_2 & 7] + (short)uVar1 + -0x32;
  }
  return (int)sVar2;
}
