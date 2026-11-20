/* @k10d set_state_and_timeout @ 0x103ef9fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103efa86) overlaps instruction at (ram,0x103efa84)
    */

cls_10597b5c * set_state_and_timeout(cls_10597b5c *param_1,int param_2)

{
  int iVar1;
  cls_10597b5c *pcVar2;
  void *pvVar3;
  
  iVar1 = get_or_create_singleton_object_10485138();
  pvVar3 = *(void **)(iVar1 + 0x24);
  param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0xc) {
    pcVar2 = (cls_10597b5c *)get_or_init_singleton_object_103c8200();
  }
  if (param_1->field_0x14 == 0x11) {
    if ((param_1->field_0xc & 1) != 1) {
      call_two_helpers_on_struct_10485110(param_1->field_0x8,0);
    }
    write_structured_data_blocks(pvVar3);
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  iVar1 = param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  if ((param_1->field_0x14 == 0x19) || (param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  if (param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  if (param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  if (param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_10597b5c *)0x0;
  }
  return pcVar2;
}
