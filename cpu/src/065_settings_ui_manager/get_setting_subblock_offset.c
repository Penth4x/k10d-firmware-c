/* @k10d get_setting_subblock_offset @ 0x103cf218
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns the offset of a sub-block within a settings structure based on a matched
 *   setting value.
 * summary:
 *   The function checks if param_2 is 0x1af0024. If so, it reads setting ID 199 from the
 *   object's working copy (param_1 + 8) using setting_get. It then compares this value
 *   against five consecutive RAM bytes (bRam10595d44-bRam10595d48) to determine an index
 *   (0-4). Finally, it returns the corresponding value from a local array of offsets
 *   (0x1af000c-0x1af001c). If the condition is not met or no match is found, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_subblock_offset(cls_10595d4c *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  uVar1 = 0;
  if (param_2 == 0x1af0024) {
    auStack_1c[0] = 0x1af000c;
    auStack_1c[1] = 0x1af0010;
    auStack_1c[2] = 0x1af0014;
    auStack_1c[3] = 0x1af0018;
    auStack_1c[4] = 0x1af001c;
    uVar3 = setting_get(param_1->field_0x8,199);
    iVar2 = 0xff;
    if (bRam10595d44 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595d45 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10595d46 == uVar3) {
      iVar2 = 2;
    }
    if (bRam10595d47 == uVar3) {
      iVar2 = 3;
    }
    if (bRam10595d48 == uVar3) {
      iVar2 = 4;
    }
    uVar1 = auStack_1c[iVar2];
  }
  return uVar1;
}
