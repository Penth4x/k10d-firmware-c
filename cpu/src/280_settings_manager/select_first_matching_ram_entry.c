/* @k10d select_first_matching_ram_entry @ 0x105214fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks three RAM addresses in order and returns the index and offset of the first non-
 *   zero match.
 * summary:
 *   The function reads a pointer from param_2 + 0x224 and calls
 *   compare_null_terminated_strings with that pointer and three sequential RAM addresses
 *   (0x80013400, 0x80013408, 0x80013410). It returns 0 if none match. If a match is found,
 *   it stores a small integer (2, 3, or 4) into param_1 + 0x10 and returns the
 *   corresponding offset (2, 4, or 6). The specific role of compare_null_terminated_strings
 *   is unknown, so the camera subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_first_matching_ram_entry(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_2 + 0x224);
  iVar2 = compare_null_terminated_strings(pvVar4,(void *)pvRam80013400);
  if (iVar2 == 0) {
    uVar3 = 2;
    uVar1 = 2;
  }
  else {
    iVar2 = compare_null_terminated_strings(pvVar4,(void *)pvRam80013408);
    if (iVar2 == 0) {
      uVar3 = 4;
      uVar1 = 3;
    }
    else {
      iVar2 = compare_null_terminated_strings(pvVar4,(void *)pvRam80013410);
      if (iVar2 != 0) {
        return 0;
      }
      uVar3 = 6;
      uVar1 = 4;
    }
  }
  *(uint32_t *)(param_1 + 0x10) = uVar1;
  return uVar3;
}
