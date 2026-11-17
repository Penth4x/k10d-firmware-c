/* @k10d read_struct_field_by_index_10481d78 @ 0x10481d78
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_struct_field_by_index_10481d78(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint32_t *)(param_1 + 0x14);
  }
  else if (param_2 == 1) {
    uVar1 = *(uint32_t *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint32_t *)(param_1 + 0xc);
  }
  return uVar1;
}
