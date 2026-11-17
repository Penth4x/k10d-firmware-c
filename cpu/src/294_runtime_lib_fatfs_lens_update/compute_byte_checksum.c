/* @k10d compute_byte_checksum @ 0x1053a6be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_byte_checksum(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  for (iVar3 = 0xb; 0 < iVar3; iVar3 = iVar3 + -1) {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = ((int)uVar2 >> 1) + (uVar2 & 1) * 0x80 + (uint)bVar1 & 0xff;
  }
  return uVar2;
}
