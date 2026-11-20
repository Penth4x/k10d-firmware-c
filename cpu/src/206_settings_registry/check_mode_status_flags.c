/* @k10d check_mode_status_flags @ 0x104a6b38
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a virtual object and two status flags to determine if a specific mode condition
 *   is met.
 * summary:
 *   The function performs a virtual call on an object pointer stored at param_1+0x10, using
 *   slot 2 (offset 0x14). It checks the return value against 0xd, 0xe, or 0xf. Based on
 *   this result, it calls settings_getter with parameters from param_1+0x44 and constants
 *   0xb2 or 0xb3 to check status flags. It returns 1 if the specific combination of virtual
 *   call result and flag checks is satisfied, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104a6b64) overlaps instruction at (ram,0x104a6b62)
    */

uint32_t check_mode_status_flags(int param_1)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = **(int **)(param_1 + 0x10);
  iVar3 = (((vtbl_entry*)(iVar3))[2].fn)
                    ((int)*(int **)(param_1 + 0x10) + (int)((vtbl_entry*)(iVar3))[2].adj,0);
  if (((iVar3 == 0xd) || (iVar3 == 0xe)) || (iVar3 == 0xf)) {
    cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xb2);
    uVar2 = 1;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  else {
    cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xb3);
    if (cVar1 != '\0') {
      cVar1 = settings_getter(*(int *)(param_1 + 0x44),0xb2);
      uVar2 = 1;
      if (cVar1 != '\0') {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
