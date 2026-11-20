/* @k10d get_setting_option_index @ 0x103e05f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting value to an index into a fixed table of five option identifiers.
 * summary:
 *   When param_2 equals 0x1a60023, it reads setting 0xce via setting_get and compares the
 *   result against five consecutive RAM bytes (0x10596be8-0x10596bec) to select an index
 *   0-4 (default 0xff). It then returns the corresponding entry from a local table of five
 *   constants (0x1a6000a, 0x1a6000f, 0x1a60014, 0x1a60019, 0x1a6001e). The function is
 *   virtual slot 8 of cls_10596bf0 and returns 0 for other param_2 values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_option_index(cls_10596bf0 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_1c [5];
  
  uVar1 = 0;
  if (param_2 == 0x1a60023) {
    auStack_1c[0] = 0x1a6000a;
    auStack_1c[1] = 0x1a6000f;
    auStack_1c[2] = 0x1a60014;
    auStack_1c[3] = 0x1a60019;
    auStack_1c[4] = 0x1a6001e;
    uVar3 = setting_get(param_1->field_0x8,0xce);
    iVar2 = 0xff;
    if (bRam10596be8 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596be9 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10596bea == uVar3) {
      iVar2 = 2;
    }
    if (bRam10596beb == uVar3) {
      iVar2 = 3;
    }
    if (bRam10596bec == uVar3) {
      iVar2 = 4;
    }
    uVar1 = auStack_1c[iVar2];
  }
  return uVar1;
}
