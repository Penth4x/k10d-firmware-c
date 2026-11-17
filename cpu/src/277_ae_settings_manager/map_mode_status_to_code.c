/* @k10d map_mode_status_to_code @ 0x1051e0e8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_status_to_code(uint32_t param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if (*(short *)((int)param_3 + 2) == 3) {
    uVar2 = read_u16_from_struct_array((int)param_3,0);
    if (uVar2 == 4) {
      uVar1 = 4;
    }
    else if (uVar2 < 5) {
      if (uVar2 == 1) {
        uVar1 = 1;
      }
      else if (uVar2 == 2) {
        uVar1 = 2;
      }
      else if (uVar2 == 3) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0;
      }
    }
    else if (uVar2 == 5) {
      uVar1 = 5;
    }
    else if (uVar2 == 6) {
      uVar1 = 6;
    }
    else if (uVar2 == 0xff) {
      uVar1 = 7;
    }
    else {
      uVar1 = 0;
    }
    *(uint32_t *)(param_2 + 0x48) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
