/* @k10d alloc_and_init_0x14_object @ 0x104960ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_0x14_object(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_1061e4c0_new((void *)iVar1);
  }
  return iVar1;
}
