/* @k10d find_byte_in_buffer_105363a6 @ 0x105363a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte find_byte_in_buffer_105363a6(void *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)((int)param_1 + 0x18);
  bVar1 = 0;
  if (*(char *)((int)param_1 + 0x14) != '\0') {
    do {
      if (*pbVar2 == param_2) {
        return bVar1;
      }
      bVar1 = bVar1 + 1;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 < *(byte *)((int)param_1 + 0x14));
  }
  return bVar1;
}
