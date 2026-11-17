/* @k10d find_entry_by_id_in_table @ 0x104a87d0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_entry_by_id_in_table(int param_1,uint param_2)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = *(uint32_t **)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x28) + 2;
  if (puVar1 != *(uint32_t **)(param_1 + 8)) {
    do {
      if (param_2 == *(ushort *)*puVar1) {
        return iVar2;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (puVar1 != *(uint32_t **)(param_1 + 8));
  }
  return iVar2;
}
