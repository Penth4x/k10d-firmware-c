/* @k10d iterate_and_apply_virtual_ops @ 0x104a2b06
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint iterate_and_apply_virtual_ops(cls_105d6574 *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint32_t uVar6;
  
  uVar6 = *(uint32_t*)(param_1->field_0xc);
  iVar1 = (((vtbl_entry*)(param_1->field_0x1c))[10].fn)
                    ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x1c))[10].adj);
  uVar3 = (uint)(iVar1 != 0);
  uVar5 = 0;
  if ((uVar3 == 1) &&
     (iVar1 = (((vtbl_entry*)(param_1->field_0x1c))[10].fn)
                        ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x1c))[10].adj),
     iVar1 != 0)) {
    do {
      puVar2 = (uint32_t *)
               (**(code **)(param_1->field_0x1c + 0x4c))
                         ((int)&param_1->field_0x0 + (int)*(short *)(param_1->field_0x1c + 0x48),
                          uVar5);
      iVar1 = *(int *)param_1->field_0x10;
      iVar1 = (((vtbl_entry*)(iVar1))[6].fn)
                        ((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar1))[6].adj,uVar6,*puVar2,0);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = *(int *)param_1->field_0x10;
        uVar3 = (((vtbl_entry*)(iVar1))[5].fn)
                          ((int)param_1->field_0x10 + (int)((vtbl_entry*)(iVar1))[5].adj,uVar6,puVar2[1],
                           puVar2[2]);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar3 == 1) &&
            (uVar4 = (((vtbl_entry*)(param_1->field_0x1c))[10].fn)
                               ((int)&param_1->field_0x0 +
                                (int)((vtbl_entry*)(param_1->field_0x1c))[10].adj), uVar5 < uVar4));
  }
  return uVar3;
}
