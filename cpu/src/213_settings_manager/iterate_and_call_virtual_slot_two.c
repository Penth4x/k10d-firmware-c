/* @k10d iterate_and_call_virtual_slot_two @ 0x104afc04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_call_virtual_slot_two(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  *(uint32_t *)(param_1 + 0x50) = 0;
  *(uint32_t *)(param_1 + 0x58) = 0;
  *(uint32_t *)(param_1 + 0x60) = 0;
  *(uint32_t *)(param_1 + 0x68) = 0;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x38) != '\0') {
    do {
      if (*(int *)(*(int *)(param_1 + 0x40) + uVar3 * 4) == 0) {
        return 0;
      }
      initialize_object_and_call_virtual_slot_2((uint32_t *)__frv_reg_unset(4));
      piVar1 = *(int **)(*(int *)(param_1 + 0x44) + uVar3 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1),
         iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x38));
  }
  return 1;
}
