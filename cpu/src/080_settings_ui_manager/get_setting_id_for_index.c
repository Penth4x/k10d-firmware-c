/* @k10d get_setting_id_for_index @ 0x103dd962
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-3 index to a specific setting ID based on the current value of setting 0xb4.
 * summary:
 *   Checks if param_2 is 0x1990023. If so, it reads setting 0xb4 via setting_get and
 *   compares it against four global bytes (bRam105968d0-d3) to determine an index (0-3). It
 *   then returns the corresponding value from a local array of four constants (0x199000a,
 *   0x199000f, 0x1990014, 0x1990019). Returns 0 if the command ID does not match.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_id_for_index(cls_105968d4 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_18 [4];
  
  uVar1 = 0;
  if (param_2 == 0x1990023) {
    auStack_18[0] = 0x199000a;
    auStack_18[1] = 0x199000f;
    auStack_18[2] = 0x1990014;
    auStack_18[3] = 0x1990019;
    uVar3 = setting_get(param_1->field_0x8,0xb4);
    iVar2 = 0xff;
    if (bRam105968d0 == uVar3) {
      iVar2 = 0;
    }
    if (bRam105968d1 == uVar3) {
      iVar2 = 1;
    }
    if (bRam105968d2 == uVar3) {
      iVar2 = 2;
    }
    if (bRam105968d3 == uVar3) {
      iVar2 = 3;
    }
    uVar1 = auStack_18[iVar2];
  }
  return uVar1;
}
