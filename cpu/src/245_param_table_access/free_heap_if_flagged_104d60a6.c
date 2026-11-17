/* @k10d free_heap_if_flagged_104d60a6 @ 0x104d60a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_104d60a6(int param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint32_t uStack_18;
  uint32_t uStack_14;
  
  puVar1 = &uStack_18;
  if (param_1 != 0) {
    uStack_18 = 0;
    uStack_14 = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
