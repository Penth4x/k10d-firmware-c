/* @k10d dispatch_virtual_by_type @ 0x104a8eaa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual call on param_2 based on a type code derived from param_1.
 * summary:
 *   Calls map_mode_to_bitmask with a global and a 16-bit field from param_1 to obtain a
 *   type code. Depending on the code (1, 2, 4, or 8), it invokes a specific virtual method
 *   slot on the object in param_2, passing param_4, a field from param_1, and param_3.
 *   Returns 1 if a dispatch occurred, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_virtual_by_type(int param_1,int *param_2,uint32_t param_3,uint32_t param_4)

{
  int iVar1;
  uint32_t uStack_c;
  
  iVar1 = map_mode_to_bitmask(_DAT_80049078/*SDRAM*/,*(uint16_t *)(param_1 + 2));
  if (iVar1 == 1) {
    (((vtbl_entry*)(*param_2))[2].fn)
              ((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,param_4,*(uint32_t *)(param_1 + 4),
               param_3);
    uStack_c = 1;
  }
  else if (iVar1 == 2) {
    (((vtbl_entry*)(*param_2))[3].fn)
              ((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,param_4,*(uint32_t *)(param_1 + 4),
               param_3);
    uStack_c = 1;
  }
  else if (iVar1 == 4) {
    (((vtbl_entry*)(*param_2))[4].fn)
              ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_4,*(uint32_t *)(param_1 + 4),
               param_3);
    uStack_c = 1;
  }
  else if ((iVar1 == 8) && (*(short *)(param_1 + 2) != 0xc)) {
    (((vtbl_entry*)(*param_2))[4].fn)
              ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_4,*(int *)(param_1 + 4) << 1,
               param_3);
    uStack_c = 1;
  }
  else {
    uStack_c = 0;
  }
  return uStack_c;
}
