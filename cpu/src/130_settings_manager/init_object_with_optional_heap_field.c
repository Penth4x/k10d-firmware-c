/* @k10d init_object_with_optional_heap_field @ 0x1045cca8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_optional_heap_field(uint32_t *param_1)

{
  int iVar1;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(uint8_t *)(param_1 + 4) = 0;
  if (param_1[3] == 0) {
    iVar1 = heap_alloc((void *)4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      cls_105a5c3c_new((void *)iVar1);
    }
    param_1[3] = iVar1;
    if (iVar1 != 0) {
      *(uint8_t *)(param_1 + 4) = 1;
    }
  }
  return;
}
