/* @k10d allocate_and_init_four_entry_table @ 0x104d5228
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d5242) overlaps instruction at (ram,0x104d5240)
    */

uint32_t * allocate_and_init_four_entry_table(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0x10);
    initialize_lens_update_object(param_1 + 4,4);
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    *param_1 = (uint32_t)&DAT_50000000;
    param_1[1] = 0x50010000;
    param_1[2] = 0x50020000;
    param_1[3] = 0x50030000;
    init_struct_and_call_helper_104d52b0(param_1);
  }
  return param_1;
}
