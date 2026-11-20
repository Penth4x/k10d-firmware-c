/* @k10d dispatch_event_by_type_1040dbbe @ 0x1040dbbe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_by_type_1040dbbe(cls_105643d0 *param_1,int param_2,uint32_t param_3)

{
  bool bVar1;
  uint32_t uVar2;
  int iVar3;
  void *puVar4;
  
  dispatch_event_0x29_via_vtable(param_1,param_2,param_3);
  uVar2 = 0;
  if (param_2 == 1) {
    check_kernel_object_id_valid(&param_1->field40_0x40);
    bVar1 = true;
  }
  else if (param_2 == 0xc) {
    iVar3 = *(uint32_t *)(param_1->field_0x2c);
    (((vtbl_entry*)(iVar3))[2].fn)
              ((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar3))[2].adj,0x1120066,0);
    bVar1 = true;
  }
  else if (param_2 == 0x18) {
    uVar2 = 0x1120001;
    bVar1 = false;
  }
  else {
    if (param_2 == 9) {
      uVar2 = 0x112000c;
      puVar4 = (void *)(param_1->field_0x0);
      goto LAB_1040dc32;
    }
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
  puVar4 = (void *)(param_1->field_0x0);
LAB_1040dc32:
  (((vtbl_entry*)(puVar4))[14].fn)((int)&param_1->field_0x0 + (int)((vtbl_entry*)(puVar4))[14].adj,uVar2,0);
  return;
}
