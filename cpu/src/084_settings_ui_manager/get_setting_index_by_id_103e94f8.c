/* @k10d get_setting_index_by_id_103e94f8 @ 0x103e94f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Maps a setting ID to an index (0, 1, or 0xff) by comparing it against two RAM-stored
 *   reference IDs.
 * summary:
 *   Checks if param_2 equals the magic constant 0x1b90014. If so, it reads a setting value
 *   from the object's working copy (offset 8, ID 0xd0) using setting_get. It then compares
 *   this value against two global RAM bytes (bRam10597710 and bRam10597711) to determine an
 *   index (0 or 1), defaulting to 0xff if no match is found. This index is used to select a
 *   value from a local array {0x1b9000f, 0x1b9000a} which is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_index_by_id_103e94f8(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  uVar1 = 0;
  if (param_2 == 0x1b90014) {
    auStack_10[0] = 0x1b9000f;
    auStack_10[1] = 0x1b9000a;
    uVar3 = setting_get(*(int *)(param_1 + 8),0xd0);
    iVar2 = 0xff;
    if (bRam10597710 == uVar3) {
      iVar2 = 0;
    }
    if (bRam10597711 == uVar3) {
      iVar2 = 1;
    }
    uVar1 = auStack_10[iVar2];
  }
  return uVar1;
}
