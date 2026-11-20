/* @k10d set_mode_parameter_and_flag @ 0x103e2db2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e2e12) overlaps instruction at (ram,0x103e2e10)
    */

void set_mode_parameter_and_flag(cls_10596dc4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint8_t uVar3;
  
  param_1->field_0x18 = param_2;
  if ((((((param_2 == 0x1810012) || (param_2 == 0x1810014)) || (param_2 == 0x1810016)) ||
       ((param_2 == 0x1810018 || (param_2 == 0x181001c)))) ||
      ((param_2 == 0x181001e || ((param_2 == 0x1810020 || (param_2 == 0x1810022)))))) ||
     (param_2 == 0x1810024)) {
    param_1->field_0x26 = 1;
  }
  iVar2 = param_1->field_0x18;
  if (iVar2 == 0x1810012) {
    *(uint32_t *)&param_1->field_0x20 = 0x1810012;
    uVar3 = uRam10596db8;
  }
  else if (iVar2 == 0x1810014) {
    *(uint32_t *)&param_1->field_0x20 = 0x1810014;
    uVar3 = uRam10596db9;
  }
  else if (iVar2 == 0x1810016) {
    *(uint32_t *)&param_1->field_0x20 = 0x1810016;
    uVar3 = uRam10596dba;
  }
  else if (iVar2 == 0x1810018) {
    *(uint32_t *)&param_1->field_0x20 = 0x1810018;
    uVar3 = uRam10596dbb;
  }
  else {
    uVar3 = uRam10596dbc;
    if (iVar2 != 0x181001c) {
      if (iVar2 == 0x181001e) {
        *(uint32_t *)&param_1->field_0x20 = 0x181001e;
        uVar3 = uRam10596dbd;
      }
      else if (iVar2 == 0x1810020) {
        *(uint32_t *)&param_1->field_0x20 = 0x1810020;
        uVar3 = uRam10596dbe;
      }
      else if (iVar2 == 0x1810022) {
        *(uint32_t *)&param_1->field_0x20 = 0x1810022;
        uVar3 = uRam10596dbf;
      }
      else {
        if (iVar2 != 0x1810024) {
          bVar1 = bRam10596dc1;
          if ((iVar2 != 0x1810030) && (bVar1 = bRam10596dc2, iVar2 != 0x181002f)) {
            return;
          }
          apply_setting_from_table(param_1,0x11,(uint)bVar1);
          return;
        }
        *(uint32_t *)&param_1->field_0x20 = 0x1810024;
        uVar3 = uRam10596dc0;
      }
    }
  }
  param_1->field_0x24 = uVar3;
  send_two_object_messages((int *)__frv_reg_unset(4));
  return;
}
