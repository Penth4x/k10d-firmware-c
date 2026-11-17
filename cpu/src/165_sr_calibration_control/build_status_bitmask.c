/* @k10d build_status_bitmask @ 0x10471a44
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Builds a 5-bit status mask by testing four object fields via a helper predicate.
 * summary:
 *   The function reads four pointers from offsets 0x30, 0x34, 0x38, and 0x40 of the object
 *   in param_1. It calls test_flag_set on each pointer and sets bits 1, 2, 3, and 4 (values
 *   2, 4, 8, 0x10) in the return value if the helper returns true. The bit at offset 0x30
 *   is returned directly as bit 0. The specific meaning of the bits and the object type is
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte build_status_bitmask(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = test_flag_set(*(void **)(param_1 + 0x30));
  bVar6 = test_flag_set(*(void **)(param_1 + 0x34));
  if (bVar6) {
    bVar1 = 2;
  }
  else {
    bVar1 = 0;
  }
  bVar6 = test_flag_set(*(void **)(param_1 + 0x38));
  if (bVar6) {
    bVar2 = 4;
  }
  else {
    bVar2 = 0;
  }
  bVar6 = test_flag_set(*(void **)(param_1 + 0x3c));
  if (bVar6) {
    bVar3 = 8;
  }
  else {
    bVar3 = 0;
  }
  bVar6 = test_flag_set(*(void **)(param_1 + 0x40));
  if (bVar6) {
    bVar4 = 0x10;
  }
  else {
    bVar4 = 0;
  }
  return bVar5 | bVar1 | bVar2 | bVar3 | bVar4;
}
