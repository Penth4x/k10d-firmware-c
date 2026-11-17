/* @k10d check_all_virtual_slots @ 0x1048967e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_all_virtual_slots(uint32_t param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x14))
                      ((int)*(short *)(*param_2 + 0x10) + (int)param_2,
                       *(uint32_t *)(iVar2 + 0x105b3828/*ROM*/));
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  return 1;
}
