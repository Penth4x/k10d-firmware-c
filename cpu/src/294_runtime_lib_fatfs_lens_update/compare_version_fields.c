/* @k10d compare_version_fields @ 0x105447aa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Compares two packed version fields and returns a signed difference or error code.
 * summary:
 *   Extracts 8-bit fields from bits 23-30 of both parameters. Returns 0xffffffff on invalid
 *   combinations (e.g., both zero, or specific mismatched patterns). For valid inputs,
 *   computes the signed difference between the fields, clamping to 0x7f800000 or 0 if the
 *   difference exceeds the 7-bit range. The module context suggests this is used for lens
 *   firmware version comparison during the update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x105447f2) */

uint compare_version_fields(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 >> 0x17;
  uVar2 = param_1 >> 0x17 & 0xff;
  if (uVar2 == 0) {
    if ((uVar1 & 0xff) == 0) {
      return 0xffffffff;
    }
    if ((uVar1 & 0xff) != 0xff) goto LAB_105447a2;
  }
  else {
    if (uVar2 == 0xff) {
      if ((uVar1 & 0xff) == 0xff) {
        return 0xffffffff;
      }
      if ((param_1 & 0x7fffff) != 0) {
        return 0xffffffff;
      }
code_r0x1054478e:
      return ((param_1 ^ param_2) >> 0x17 | 0xff) << 0x17;
    }
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0) goto code_r0x1054478e;
    if (uVar1 != 0xff) {
      uVar3 = (uVar2 - uVar1) + 0x7f;
      uVar2 = (param_1 ^ param_2) & 0x80000000/*SDRAM*/;
      if ((uVar3 < 0x7f800000) && ((uVar3 & 0x7f800000) != 0)) {
        return uVar3 | uVar2;
      }
      if ((int)(uVar1 - 0x7f) < 0) {
        return uVar2 | 0x7f800000;
      }
      return uVar2;
    }
  }
  if ((param_2 & 0x7fffff) != 0) {
    return 0xffffffff;
  }
LAB_105447a2:
  return (param_1 ^ param_2) & 0x80000000/*SDRAM*/;
}
