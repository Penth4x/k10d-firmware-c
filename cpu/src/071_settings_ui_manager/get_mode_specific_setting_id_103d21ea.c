/* @k10d get_mode_specific_setting_id_103d21ea @ 0x103d21ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 071_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Returns a mode-specific setting ID based on the current setting value and a mode
 *   selector.
 * summary:
 *   The function checks if param_2 equals 0x1ab001e. If so, it reads a setting (ID 0xb8)
 *   from the object's working copy via setting_get. It then compares this value against
 *   four RAM bytes (0x1059602c-0x1059602f) to determine an index (0-3). Finally, it returns
 *   the corresponding value from a local array of four constants (0x1ab000a, 0x1ab000f,
 *   0x1ab0014, 0x1ab0019). If the condition is not met, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_mode_specific_setting_id_103d21ea(cls_10596030 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  uVar1 = 0;
  if (param_2 == 0x1ab001e) {
    auStack_18[0] = 0x1ab000a;
    auStack_18[1] = 0x1ab000f;
    auStack_18[2] = 0x1ab0014;
    auStack_18[3] = 0x1ab0019;
    uVar3 = setting_get(param_1->field_0x8,0xb8);
    iVar2 = 0xff;
    if (bRam1059602c == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059602d == uVar3) {
      iVar2 = 1;
    }
    if (bRam1059602e == uVar3) {
      iVar2 = 2;
    }
    if (bRam1059602f == uVar3) {
      iVar2 = 3;
    }
    uVar1 = auStack_18[iVar2];
  }
  return uVar1;
}
