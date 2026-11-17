/* @k10d alloc_and_init_object_1049609e @ 0x1049609e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_object_1049609e(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x4c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b4ad4_new((void *)iVar1);
  }
  return iVar1;
}
