/* @k10d count_set_bits_in_mask @ 0x10477094
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short count_set_bits_in_mask(void *param_1)

{
  ushort uVar1;
  short sVar2;
  
  sVar2 = 0;
  uVar1 = 0;
  do {
    sVar2 = sVar2 + (ushort)((1 << ((byte)uVar1 & 0xf) &
                             (uint)(*(ushort *)((int)param_1 + 4) & *(ushort *)((int)param_1 + 6)))
                            != 0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return sVar2;
}
