/* @k10d lookup_table_entry_by_index_10482026 @ 0x10482026
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t lookup_table_entry_by_index_10482026(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint8_t *r5_in;
  
  iVar1 = screen_key_find(param_1,r5_in);
  if (iVar1 < 0) {
    uVar2 = *(uint32_t *)((int)param_1 + 0x10);
  }
  else {
    uVar2 = *(uint32_t *)(*(int *)((int)param_1 + 0xc) + iVar1 * 8);
  }
  return uVar2;
}
