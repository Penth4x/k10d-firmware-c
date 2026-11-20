/* @k10d any_item_predicate_true @ 0x1049454a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char any_item_predicate_true(cls_105b48dc *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = param_1->field_0x9;
  piVar1 = (void*)(param_1->field11_0x18);
  if ((uint32_t)(piVar1) != param_1->field_0x1c) {
    do {
      iVar3 = *(int *)(*piVar1 + 0xc);
      iVar3 = (((vtbl_entry*)(iVar3))[9].fn)(*piVar1 + (int)((vtbl_entry*)(iVar3))[9].adj);
      cVar2 = iVar3 != 0 || cVar2 != '\0';
      piVar1 = piVar1 + 1;
    } while ((uint32_t)(piVar1) != param_1->field_0x1c);
  }
  return cVar2;
}
