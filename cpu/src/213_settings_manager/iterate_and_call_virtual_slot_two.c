/* @k10d iterate_and_call_virtual_slot_two @ 0x104afc04
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_call_virtual_slot_two(cls_105b7994 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  param_1->field_0x50 = 0;
  param_1->field_0x58 = 0;
  param_1->field_0x60 = 0;
  param_1->field_0x68 = 0;
  uVar3 = 0;
  if (param_1->field_0x38 != 0) {
    do {
      if (*(int *)(param_1->field_0x40 + uVar3 * 4) == 0) {
        return 0;
      }
      initialize_object_and_call_virtual_slot_2((uint32_t *)__frv_reg_unset(4));
      piVar1 = *(int **)(param_1->field_0x44 + uVar3 * 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
         iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < param_1->field_0x38);
  }
  return 1;
}
