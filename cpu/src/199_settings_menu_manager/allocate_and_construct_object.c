/* @k10d allocate_and_construct_object @ 0x10495dc6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_construct_object(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = heap_alloc((void *)0x68);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    cls_105b44b4_new((void *)iVar1);
  }
  return iVar1;
}
