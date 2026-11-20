/* @k10d dispatch_mode_transition_10424c7a @ 0x10424c7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10424d24) overlaps instruction at (ram,0x10424d22)
    */

cls_1059de3c * dispatch_mode_transition_10424c7a(cls_1059de3c *param_1,int param_2)

{
  int iVar1;
  cls_1059de3c *pcVar2;
  
  *(int *)&param_1->field_0x14 = param_2;
  pcVar2 = param_1;
  if (param_2 == 0x27) {
    iVar1 = setting_get(param_1->field_0x8,0xb0);
    if (iVar1 == 0) {
      pcVar2 = (cls_1059de3c *)initialize_singleton_object_103d4044();
    }
    else {
      pcVar2 = (cls_1059de3c *)get_or_init_sram_object_103c0f94();
    }
  }
  if (*(int *)&param_1->field_0x14 == 0x28) {
    pcVar2 = (cls_1059de3c *)get_or_init_singleton_object_103c74d0();
  }
  if (*(int *)&param_1->field_0x14 == 0x25) {
    pcVar2 = (cls_1059de3c *)get_or_init_singleton_object_103c8200();
    param_1->field_0x18 = 0x10e000c;
  }
  if (*(int *)&param_1->field_0x14 == 0x26) {
    pcVar2 = (cls_1059de3c *)init_singleton_object_103cc008();
    param_1->field_0x18 = 0x10e000c;
  }
  iVar1 = *(int *)&param_1->field_0x14;
  if ((((iVar1 == 7) || (iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 3)) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  if ((*(int *)&param_1->field_0x14 == 0x19) || (*(int *)&param_1->field_0x14 == 9)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x18) {
    param_1->field_0x22 = 0xb4;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 0x2c) {
    param_1->field_0x22 = 0x8c;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  if (*(int *)&param_1->field_0x14 == 10) {
    param_1->field_0x22 = 200;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  if (param_1->field_0x18 == 0x10e0009) {
    if (*(int *)&param_1->field_0x14 == 0x10) {
      pcVar2 = (cls_1059de3c *)init_singleton_object_103cc008();
    }
    else if (*(int *)&param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_1059de3c *)get_or_init_sram_object_10423e2c((uint32_t)(pcVar2));
    }
  }
  if ((param_1->field_0x18 == 0x10e000c) && (*(int *)&param_1->field_0x14 == 0xd)) {
    pcVar2 = (cls_1059de3c *)get_or_init_sram_object_104231ce();
  }
  if (param_1->field_0x18 == 0x10e000f) {
    if (*(int *)&param_1->field_0x14 == 0xf) {
      pcVar2 = (cls_1059de3c *)get_or_init_singleton_object_103c8200();
    }
    else if (*(int *)&param_1->field_0x14 == 0xd) {
      pcVar2 = (cls_1059de3c *)get_or_create_sram_object_10424eda();
    }
  }
  if ((*(int *)&param_1->field_0x14 == 0xc) || (*(int *)&param_1->field_0x14 == 0x11)) {
    param_1->field_0x22 = 0x50;
    pcVar2 = (cls_1059de3c *)0x0;
  }
  return pcVar2;
}
