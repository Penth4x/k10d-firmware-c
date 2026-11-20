/* @k10d invoke_slot2_on_four_members_10442536 @ 0x10442536
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_slot2_on_four_members_10442536(cls_105a0d28 *param_1)

{
  void **ppuVar1;
  void *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  ppuVar1 = &param_1->field_0x4;
  puVar2 = *ppuVar1;
  if (puVar2 != 0) {
    (((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[3].fn)
              ((char*)*ppuVar1 + ((vtbl_entry*)(*(int *)((char*)*ppuVar1 + 4)))[3].adj,0);
  }
  bVar3 = param_1->field_0x8 != 0;
  if (bVar3) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[3].fn)
              (param_1->field_0x8 + ((vtbl_entry*)(*(int *)(param_1->field_0x8 + 4)))[3].adj,0);
  }
  bVar4 = param_1->field_0xc != 0;
  if (bVar4) {
    (((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[3].fn)
              (param_1->field_0xc + ((vtbl_entry*)(*(int *)(param_1->field_0xc + 4)))[3].adj,0);
  }
  bVar5 = param_1->field_0x10 != 0;
  if (bVar5) {
    (((vtbl_entry*)(*(int *)(param_1->field_0x10 + 4)))[3].fn)
              (param_1->field_0x10 + ((vtbl_entry*)(*(int *)(param_1->field_0x10 + 4)))[3].adj,0);
  }
  return bVar5 || (bVar4 || (bVar3 || puVar2 != 0));
}
