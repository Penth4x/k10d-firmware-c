/* @k10d get_setting_index_by_id_103e0e14 @ 0x103e0e14
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 081_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting ID (0xb5) to one of three sub-setting IDs based on a stored selection.
 * summary:
 *   Checks if param_2 equals 0x19b0019. If so, it reads setting 0xb5 from the object's
 *   working copy (at offset 8) using setting_get. It compares this value against three
 *   global bytes (bRam10596c80-82) to determine an index (0, 1, or 2, defaulting to 0xff if
 *   no match). It then returns the corresponding value from a local array {0x19b000a,
 *   0x19b000f, 0x19b0014}. This appears to be a virtual method (slot 8) that resolves a
 *   specific setting ID based on a mode or selection stored in the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_id_103e0e14(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  uVar1 = 0;
  if (param_2 == 0x19b0019) {
    auStack_14[0] = 0x19b000a;
    auStack_14[1] = 0x19b000f;
    auStack_14[2] = 0x19b0014;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xb5);
    iVar2 = 0xff;
    if (bRam10596c80 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10596c81 == uVar3) {
      iVar2 = 1;
    }
    if (bRam10596c82 == uVar3) {
      iVar2 = 2;
    }
    uVar1 = auStack_14[iVar2];
  }
  return uVar1;
}
