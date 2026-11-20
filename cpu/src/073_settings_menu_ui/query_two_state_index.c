/* @k10d query_two_state_index @ 0x103d3064
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 073_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Returns a state index (0 or 1) by comparing a callee's result against two RAM bytes.
 * summary:
 *   When param_2 equals 0x1a70014, it calls get_setting_by_index(param_1, 2) and compares
 *   the result to bRam10596150 and bRam10596151. It returns 0x1a7000a if the first byte
 *   matches, 0x1a7000f if the second matches, or 0 otherwise. The function is virtual slot
 *   8 of cls_10596154.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_two_state_index(cls_10596154 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1a70014) {
    auStack_10[0] = 0x1a7000a;
    auStack_10[1] = 0x1a7000f;
    uVar3 = get_setting_by_index((int)param_1,2);
    iVar2 = 0xff;
    if (bRam10596150 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596151 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
