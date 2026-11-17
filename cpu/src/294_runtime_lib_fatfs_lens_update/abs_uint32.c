/* @k10d abs_uint32 @ 0x1054494a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Computes the absolute value of a 32-bit signed integer and returns it as an unsigned
 *   value.
 * summary:
 *   The function implements a standard absolute value operation using bit manipulation to
 *   avoid branching. It calls compute_lens_fw_crc32 with the computed absolute value as an
 *   argument, likely for logging or side effects, before returning the result. The source
 *   module context suggests this utility is used within the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint abs_uint32(uint param_1)

{
  uint extraout_r4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (int)param_1 >> 0x1f;
  uVar2 = uVar1 << 0x1f;
  compute_lens_fw_crc32((param_1 ^ uVar1) - uVar1);
  return extraout_r4 | uVar2;
}
