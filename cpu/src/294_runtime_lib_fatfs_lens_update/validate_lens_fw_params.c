/* @k10d validate_lens_fw_params @ 0x105439e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Checks if two integer parameters fall within specific valid ranges, returning 0 if
 *   valid or -1 if invalid.
 * summary:
 *   The function validates param_1 and param_2 against disjoint ranges. param_1 must be in
 *   [0x81, 0x9f] or [0xe0, 0xfc], and param_2 must be in [0x40, 0x7e] or [0x80, 0xfc]. It
 *   returns 0 if both are valid, otherwise -1. Given the module context
 *   'lens_firmware_update', these likely represent lens firmware version or status codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105439f2) overlaps instruction at (ram,0x105439f0)
    */

uint32_t validate_lens_fw_params(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if ((((param_1 < 0x81) || (0x9f < param_1)) && ((param_1 < 0xe0 || (0xfc < param_1)))) ||
     (((param_2 < 0x40 || (0x7e < param_2)) && ((param_2 < 0x80 || (0xfc < param_2)))))) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
