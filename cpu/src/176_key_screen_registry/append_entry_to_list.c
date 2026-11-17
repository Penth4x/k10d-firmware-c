/* @k10d append_entry_to_list @ 0x10481f84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t append_entry_to_list(void *param_1,uint32_t param_2,uint8_t *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0x14)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)((int)param_1 + 0xc) + iVar2) == 0) {
        iVar1 = iVar1 * 8;
        *(uint32_t *)(*(int *)((int)param_1 + 0xc) + iVar1) = param_2;
        *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 + 4) = *param_3;
        *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 + 5) = 0;
        *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 + 6) = 0;
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar1 < *(int *)((int)param_1 + 0x14));
  }
  return 0;
}
