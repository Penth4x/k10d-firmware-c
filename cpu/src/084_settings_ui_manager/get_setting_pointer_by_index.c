/* @k10d get_setting_pointer_by_index @ 0x103ebb08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to a specific setting entry based on a setting value and a mode ID.
 * summary:
 *   Checks if param_2 matches 0x1ae0024. If so, it reads setting 0xc6 from the object's
 *   context (param_1 + 8) using setting_get. It compares this value against five
 *   consecutive RAM bytes (0x10597964-0x10597968) to determine an index (0-4). It then
 *   returns the corresponding pointer from a local array of constants
 *   (0x1ae000c-0x1ae001c). If the mode ID does not match or no index is found, it returns
 *   0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_pointer_by_index(cls_1059796c *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  uVar1 = 0;
  if (param_2 == 0x1ae0024) {
    auStack_1c[0] = 0x1ae000c;
    auStack_1c[1] = 0x1ae0010;
    auStack_1c[2] = 0x1ae0014;
    auStack_1c[3] = 0x1ae0018;
    auStack_1c[4] = 0x1ae001c;
    uVar3 = setting_get(param_1->field_0x8,0xc6);
    iVar2 = 0xff;
    if (bRam10597964 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10597965 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10597966 == uVar3) {
      iVar2 = 2;
    }
    if (bRam10597967 == uVar3) {
      iVar2 = 3;
    }
    if (bRam10597968 == uVar3) {
      iVar2 = 4;
    }
    uVar1 = auStack_1c[iVar2];
  }
  return uVar1;
}
