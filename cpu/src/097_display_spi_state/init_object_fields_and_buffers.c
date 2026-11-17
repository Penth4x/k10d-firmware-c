/* @k10d init_object_fields_and_buffers @ 0x10412fc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Initializes a large object by copying a value from a global and calling helper
 *   functions to set up internal buffers and fields.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization. It
 *   calls get_or_create_singleton_object_10485138 to get a base address, copies a 4-byte
 *   value from offset 8 of that address to offset 0x7c of the object. It then calls
 *   alloc_pool_and_init_task with parameters suggesting buffer setup (offset 0x1c, size
 *   0xc, 0x2000, 4). It calls wait_flg_obj three times to zero out or initialize fields at
 *   offsets 0x1538, 0x1540, and 0x1548. It calls forward_three_args_to_helper_10459d64
 *   twice to initialize fields at 0x1550 and 0x1558 with values 1 and 0x1f. Finally, it
 *   calls set_field_and_call_helper_1050b06c to initialize a field at 0x14bc with value
 *   0x1e. The function returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_and_buffers(void *param_1)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10485138();
  *(uint32_t *)((int)param_1 + 0x7c) = *(uint32_t *)(iVar1 + 8);
  alloc_pool_and_init_task((int *)((int)param_1 + 0x1c),0xc,0x2000,4);
  wait_flg_obj((void *)((int)param_1 + 0x1538),0);
  wait_flg_obj((void *)((int)param_1 + 0x1540),0);
  wait_flg_obj((void *)((int)param_1 + 0x1548),0);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1550),1,0x1f);
  forward_three_args_to_helper_10459d64((void *)((int)param_1 + 0x1558),1,0x1f);
  set_field_and_call_helper_1050b06c((void *)((int)param_1 + 0x14bc),0x1e);
  return 1;
}
