/* @k10d get_setting_index_by_mode_103cd49a @ 0x103cd49a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting value to one of three indices based on a mode parameter.
 * summary:
 *   Checks if param_2 equals 0x19e0019. If so, reads a setting value via setting_get from
 *   the object's field at offset 8. Compares this value against three global bytes
 *   (bRam10595af4-6) to determine an index (0, 1, or 2). Returns the corresponding value
 *   from a local array of three constants (0x19e000a, 0x19e000f, 0x19e0014). Returns 0 if
 *   the mode parameter does not match.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_mode_103cd49a(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  uVar1 = 0;
  if (param_2 == 0x19e0019) {
    auStack_14[0] = 0x19e000a;
    auStack_14[1] = 0x19e000f;
    auStack_14[2] = 0x19e0014;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xbc);
    iVar2 = 0xff;
    if (bRam10595af4 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595af5 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10595af6 == uVar3) {
      iVar2 = 2;
    }
    uVar1 = auStack_14[iVar2];
  }
  return uVar1;
}
