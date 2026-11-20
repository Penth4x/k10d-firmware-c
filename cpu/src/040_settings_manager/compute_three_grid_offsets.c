/* @k10d compute_three_grid_offsets @ 0x1039cc06
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes three 2D grid coordinates based on a mode parameter and passes them to a
 *   helper function.
 * summary:
 *   The function takes a mode selector (param_8) and two indices (param_6, param_7). It
 *   calculates three distinct offsets using a stride of 0x18 (24) and calls app_obj_factory
 *   three times with these offsets and different data pointers (param_3, param_4, param_5).
 *   The results are then passed to invoke_virtual_then_call_helper_10494188 along with
 *   param_2. The specific offsets vary depending on whether param_8 is 1, 2, or 3,
 *   suggesting a selection of different grid positions or patterns.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_three_grid_offsets(int param_1,int param_2,void *param_3,void *param_4,void *param_5,short param_6, short param_7,int param_8)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint32_t uStack_18;
  uint32_t uStack_14;
  
  iVar1 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  if (param_8 == 1) {
    sVar2 = (param_6 + -1) * 0x18 + 0x20;
    uStack_14 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)(sVar2), (void *)((param_7 + -1) * 0x18 + 0x18)));
    uStack_18 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_4),(void *)(sVar2), (void *)((param_7 + 1) * 0x18 + 0x18)));
    sVar3 = param_7 + 3;
  }
  else if (param_8 == 2) {
    sVar2 = (param_6 + -1) * 0x18 + 0x20;
    uStack_14 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)(sVar2), (void *)((param_7 + -1) * 0x18 + 0x18)));
    uStack_18 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_4),(void *)(sVar2), (void *)((param_7 + -3) * 0x18 + 0x18)));
    sVar3 = param_7 + 1;
  }
  else {
    if (param_8 != 3) goto LAB_1039cd2e;
    sVar2 = (param_6 + -1) * 0x18 + 0x20;
    uStack_14 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)(sVar2), (void *)((param_7 + -1) * 0x18 + 0x18)));
    uStack_18 = (uint32_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_4),(void *)(sVar2), (void *)((param_7 + -5) * 0x18 + 0x18)));
    sVar3 = param_7 + -3;
  }
  iVar1 = (uintptr_t)(app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_5),(void *)(sVar2),(void *)(sVar3 * 0x18 + 0x18)));
LAB_1039cd2e:
  invoke_virtual_then_call_helper_10494188(param_2,uStack_14);
  invoke_virtual_then_call_helper_10494188(param_2,uStack_18);
  invoke_virtual_then_call_helper_10494188(param_2,iVar1);
  return;
}
