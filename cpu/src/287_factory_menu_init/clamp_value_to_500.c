/* @k10d clamp_value_to_500 @ 0x1052bde6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_to_500(int param_1)

{
  uint uVar1;
  
  get_shared_sram_buffer();
  uVar1 = (*(code *)0x104e4bb6/*ROM*/)();
  *(uint8_t *)(param_1 + 0x2b7c) = 0;
  if (500 < uVar1) {
    uVar1 = 500;
    *(uint8_t *)(param_1 + 0x2b7c) = 1;
  }
  return uVar1;
}
