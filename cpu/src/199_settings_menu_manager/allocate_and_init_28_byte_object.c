/* @k10d allocate_and_init_28_byte_object @ 0x1049679a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104967b6) overlaps instruction at (ram,0x104967b4)
    */

uint32_t * allocate_and_init_28_byte_object(uint32_t *param_1)

{
  uint32_t uVar1;
  int iStack_c;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_105a5c2c_new((cls_105a5c2c *)(param_1 + 1),0);
    uVar1 = get_or_init_singleton_10491684();
    *param_1 = uVar1;
    iStack_c = 0x2e;
    do {
      uVar1 = chain_two_helper_calls_10495db2(param_1);
      send_param_to_80048f7c(uVar1);
      uVar1 = chain_two_helper_calls_10495db2(param_1);
      send_param_to_80048f7c(uVar1);
      iStack_c = iStack_c + -1;
    } while (-1 < iStack_c);
  }
  return param_1;
}
