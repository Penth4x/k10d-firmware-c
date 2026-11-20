/* @k10d get_setting_based_id @ 0x10426bb2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Returns a specific ID from a pair based on a setting value comparison.
 * summary:
 *   Checks if param_2 matches 0x1c10014. If so, it reads a setting (0xc1) from the object's
 *   field at offset 8. It compares this value against two global bytes (bRam1059e074 and
 *   bRam1059e075) to select an index (0, 1, or default 0xff). It then returns the
 *   corresponding value from a local array {0x1c1000a, 0x1c1000f}.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_based_id(cls_1059e078 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1c10014) {
    auStack_10[0] = 0x1c1000a;
    auStack_10[1] = 0x1c1000f;
    uVar3 = setting_get(param_1->field_0x8,0xc1);
    iVar2 = 0xff;
    if (bRam1059e074 == uVar3) {
      iVar2 = 0;
    }
    if (bRam1059e075 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
