/* @k10d poll_input_and_update_state @ 0x104136d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t poll_input_and_update_state(cls_1059c10c *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  uint8_t uVar5;
  uint32_t uStack_1c;
  
  uStack_1c = 1;
  if (*(int *)&param_1[1].field_0x5cc < 0x65) {
    iVar3 = *(int *)&param_1[1].field_0x5cc + 1;
  }
  else {
    iVar3 = 100;
  }
  *(int *)&param_1[1].field_0x5cc = iVar3;
  iVar3 = (((vtbl_entry*)(*param_2))[4].fn)((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,0x1c);
  if (iVar3 == 0) {
    if (cRam8000fb98 == '\0') {
      uRam8000fb96 = 0;
      goto LAB_1041375e;
    }
  }
  else {
    cRam8000fb98 = '\x01';
  }
  uVar4 = uRam8000fb96 << 1;
  uRam8000fb96 = uVar4;
  iVar3 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x1c);
  uRam8000fb96 = uVar4 | iVar3 != 0;
LAB_1041375e:
  iVar3 = (((vtbl_entry*)(*param_2))[6].fn)((int)((vtbl_entry*)(*param_2))[6].adj + (int)param_2,0x2e);
  if (iVar3 != 0) {
    set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  }
  iVar3 = (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,1);
  if ((iVar3 != 0) &&
     (iVar3 = (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,0x24),
     iVar3 != 0)) {
    if (param_1[1].field_0x56a != '\0') {
      set_flg_obj((uint32_t *)&param_1[1].field_0x580);
    }
    if ((uRam8000fb96 & 7) == 7) {
      iVar3 = (*(code *)0x104efd30/*ROM*/)(*(uint32_t *)&param_1->field_0x5c);
      if (iVar3 == 0) {
        set_flg_obj((uint32_t *)&param_1[1].field_0x580);
      }
      uRam8000fb96 = 0;
      cRam8000fb98 = '\0';
    }
  }
  if ((param_1[1].field_0x53c != '\0') &&
     (iVar3 = query_object_property_via_temp_104f2570(*(uint32_t *)&param_1->field_0x5c), iVar3 == 0)) {
    set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  }
  cVar1 = param_1[1].field_0x565;
  cVar2 = param_1[1].field_0x566;
  uVar5 = 0;
  iVar3 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,1);
  if ((((iVar3 != 0) ||
       (iVar3 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x27)
       , iVar3 != 0)) ||
      (iVar3 = (**(code **)(*param_2 + 0x14))((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x23),
      iVar3 != 0)) ||
     (iVar3 = (**(code **)(*param_2 + 0x14))((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0x24),
     iVar3 != 0)) {
    uVar5 = 1;
  }
  param_1[1].field_0x565 = uVar5;
  uVar5 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,0);
  param_1[1].field_0x566 = uVar5;
  if (((cVar1 != '\0') || (cVar2 != '\0')) &&
     ((param_1[1].field_0x565 == '\0' && (param_1[1].field_0x566 == '\0')))) {
    set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  }
  iVar3 = (((vtbl_entry*)(*param_2))[5].fn)((int)((vtbl_entry*)(*param_2))[5].adj + (int)param_2,0);
  if ((iVar3 != 0) && (param_1[1].field_0x564 != '\0')) {
    set_flg_obj((uint32_t *)&param_1[1].field_0x580);
  }
  iVar3 = invoke_virtual_slot_7_104ea29c((cls_105c2050 *)&param_1->field_0x60);
  if (iVar3 != 0) {
    uStack_1c = invoke_virtual_slot_8_on_member((cls_105c2050 *)&param_1->field_0x60);
  }
  return uStack_1c;
}
