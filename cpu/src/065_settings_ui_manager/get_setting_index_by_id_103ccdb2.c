/* @k10d get_setting_index_by_id_103ccdb2 @ 0x103ccdb2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting value to one of two indices based on comparison with two stored bytes.
 * summary:
 *   Checks if param_2 equals 0x19c0014. If so, reads setting 0xb6 via setting_get and
 *   compares it to bRam10595a60 and bRam10595a61. Returns 0x19c000a if the first matches,
 *   0x19c000f if the second matches, or 0xff otherwise. The specific meaning of the setting
 *   ID and the two RAM bytes is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_id_103ccdb2(cls_10595a64 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x19c0014) {
    auStack_10[0] = 0x19c000a;
    auStack_10[1] = 0x19c000f;
    uVar3 = setting_get(param_1->field_0x8,0xb6);
    iVar2 = 0xff;
    if (bRam10595a60 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10595a61 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
