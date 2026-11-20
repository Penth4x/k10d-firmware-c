/* @k10d process_buffer_chunk @ 0x104aedc4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_buffer_chunk(cls_105b77e8 *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1->field_0x24 != (uint32_t)((uint32_t *)0x0)) {
    uVar5 = (uint)param_1->field_0x24 / (uint)param_1->field_0x34;
    iVar2 = dispatch_param5_status_handler(param_1,param_1->field_0x2c,*(int *)&param_1->field_0x20,uVar5,
                         (int *)param_1->field_0x28);
    param_1->field_0x2c = (uintptr_t)((uint32_t *)((int)param_1->field_0x2c + uVar5));
    iVar4 = param_1->field_0x30 - uVar5;
    param_1->field_0x30 = iVar4;
    puVar1 = (uint32_t *)(iVar4 * param_1->field_0x34);
    if ((iVar2 != 0) && (puVar1 != (uint32_t *)0x0)) {
      if ((uint32_t)(puVar1) < param_1->field_0x24) {
        param_1->field_0x24 = (uintptr_t)(puVar1);
      }
      uVar3 = invoke_virtual_slot_1((int *)param_1,*(uint32_t *)&param_1->field_0x20,
                           (int)param_1->field_0x24);
      return uVar3;
    }
  }
  zero_struct_fields_20_to_30_104aef4a(param_1);
  return 0;
}
