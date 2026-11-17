/* @k10d get_value_from_struct_by_index @ 0x100f1fd6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_value_from_struct_by_index(int param_1)

{
  uint32_t uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x10);
  }
  else if (param_1 == 1) {
    uVar1 = *(uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x14);
  }
  else if (param_1 == 2) {
    uVar1 = *(uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x18);
  }
  else if (param_1 == 3) {
    uVar1 = *(uint32_t *)(_DAT_800482d4/*SDRAM*/ + 0x1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
