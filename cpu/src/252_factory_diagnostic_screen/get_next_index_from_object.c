/* @k10d get_next_index_from_object @ 0x104e35ba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_next_index_from_object(cls_105c1150 *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_0x10;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[11].fn)
                      (((vtbl_entry*)(*(int *)(iVar1 + 0x18)))[11].adj + iVar1);
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}
