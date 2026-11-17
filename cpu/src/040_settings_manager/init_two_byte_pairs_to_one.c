/* @k10d init_two_byte_pairs_to_one @ 0x1039a616
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_two_byte_pairs_to_one(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 2;
  do {
    *(uint8_t *)((int)param_1 + iVar1 + 0x28) = 1;
    *(uint8_t *)((int)param_1 + iVar1 + 0x29) = 1;
    *(uint8_t *)((int)param_1 + iVar1 + 0x2a) = 1;
    *(uint8_t *)((int)param_1 + iVar1 + 0x2b) = 1;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 4;
  } while (-1 < iVar2);
  return;
}
