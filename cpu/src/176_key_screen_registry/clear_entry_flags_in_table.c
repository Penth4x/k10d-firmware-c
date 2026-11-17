/* @k10d clear_entry_flags_in_table @ 0x104820e6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_entry_flags_in_table(void *param_1,uint8_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = screen_key_find(param_1,param_2);
  if ((iVar1 < 0) || (*(int *)((int)param_1 + 0x14) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 * 8 + 7) = 0;
    *(uint8_t *)(*(int *)((int)param_1 + 0xc) + iVar1 * 8 + 6) = 0;
    uVar2 = 1;
  }
  return uVar2;
}
