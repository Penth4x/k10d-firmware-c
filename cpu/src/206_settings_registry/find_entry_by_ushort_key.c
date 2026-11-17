/* @k10d find_entry_by_ushort_key @ 0x104a87a8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ushort * find_entry_by_ushort_key(int param_1,uint param_2)

{
  uint32_t *puVar1;
  
  puVar1 = *(uint32_t **)(param_1 + 4);
  if (puVar1 != *(uint32_t **)(param_1 + 8)) {
    do {
      if (param_2 == *(ushort *)*puVar1) {
        return (ushort *)*puVar1;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(uint32_t **)(param_1 + 8));
  }
  return (ushort *)0x0;
}
