/* @k10d validate_ascii_char @ 0x10543a20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_ascii_char(int param_1)

{
  uint32_t uVar1;
  
  if (((param_1 < 0x20) || (0x7e < param_1)) && ((param_1 < 0xa1 || (0xdf < param_1)))) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
