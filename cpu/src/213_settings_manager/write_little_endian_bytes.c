/* @k10d write_little_endian_bytes @ 0x104acbaa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_little_endian_bytes(int param_1,uint param_2,uint param_3)

{
  uint32_t uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (param_3 < 5) {
    uVar2 = 0;
    if (0 < (int)param_3) {
      do {
        *(char *)(param_1 + uVar2) = (char)param_2;
        uVar2 = uVar2 + 1 & 0xff;
        param_2 = param_2 >> 8;
      } while ((int)uVar2 < (int)param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}
