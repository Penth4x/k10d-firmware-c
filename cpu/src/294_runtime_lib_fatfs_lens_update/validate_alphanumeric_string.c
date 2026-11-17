/* @k10d validate_alphanumeric_string @ 0x1053ecf2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_alphanumeric_string(char *param_1)

{
  byte bVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (char *)0x0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar3 = count_string_bytes(param_1);
    uVar3 = uVar3 & 0xffff;
    if ((uVar3 == 0) || (8 < uVar3)) {
      uVar2 = 0xfffffdf8;
    }
    else {
      for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1 & 0xffff) {
        bVar1 = param_1[uVar4];
        if ((((bVar1 < 0x30) || ((0x39 < bVar1 && (bVar1 < 0x41)))) ||
            ((0x5a < bVar1 && (bVar1 < 0x61)))) || (0x7a < bVar1)) {
          return 0xfffffdf8;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}
