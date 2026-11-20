/* @k10d query_and_log_object_state @ 0x104a91fe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries a virtual method on param_2, logs a result string based on the return value,
 *   and returns the result of another virtual query.
 * summary:
 *   The function calls virtual slot 8 (offset 0x44) on the object pointed to by param_2.
 *   Based on whether the return value is zero, it selects one of two string constants
 *   (DAT_105b5ad8 or DAT_105b5ad6). It then calls virtual slot 2 (offset 0x14) on two
 *   different objects (derived from param_1 and param_2) to log these strings along with
 *   data from param_1 and a global pointer _DAT_80049080. Finally, it calls virtual slot 9
 *   (offset 0x4c) on param_2 and returns whether that result is zero. The specific camera
 *   subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool query_and_log_object_state(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *puStack_c;
  
  iVar1 = (((vtbl_entry*)(*param_2))[8].fn)((int)((vtbl_entry*)(*param_2))[8].adj + (int)param_2);
  if (iVar1 == 0) {
    puStack_c = &DAT_105b5ad8/*ROM*/;
  }
  else {
    puStack_c = &DAT_105b5ad6/*ROM*/;
  }
  iVar1 = *param_2;
  iVar2 = (int)*(short *)(iVar1 + 0x10) + (int)param_2;
  if (*(char *)(param_1 + 0xc) == '\0') {
    (((vtbl_entry*)(iVar1))[2].fn)(iVar2,0x105b5ac4/*ROM*/,*(uint32_t *)_DAT_80049080/*SDRAM*/,*(uint32_t *)(param_1 + 8));
    (((vtbl_entry*)(*param_2))[2].fn)
              ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,puStack_c,2,
               *(int *)(param_1 + 8) + (uint)(ushort)((uint32_t *)_DAT_80049080)/*SDRAM*/[3]);
    iVar1 = *param_2;
  }
  else {
    (((vtbl_entry*)(iVar1))[2].fn)
              (iVar2,*(uint32_t *)(_DAT_80049080/*SDRAM*/ + 10),((uint32_t *)_DAT_80049080)/*SDRAM*/[5],
               *(uint32_t *)(param_1 + 8));
    (((vtbl_entry*)(*param_2))[2].fn)
              ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,puStack_c,2,
               *(int *)(param_1 + 8) + (uint)(ushort)((uint32_t *)_DAT_80049080)/*SDRAM*/[8]);
    iVar1 = *param_2;
  }
  iVar1 = (((vtbl_entry*)(iVar1))[9].fn)((int)((vtbl_entry*)(iVar1))[9].adj + (int)param_2);
  return iVar1 == 0;
}
