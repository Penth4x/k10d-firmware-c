/* @k10d init_object_with_two_ids_104e803e @ 0x104e803e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling two helper functions on sub-structures and setting a
 *   field to 3.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization steps.
 *   It calls alloc_pool_and_init_task with a pointer to offset 0x10, size 0x10, and other
 *   parameters. It then calls wait_flg_obj with a pointer to offset 0x188 and 0. Finally,
 *   it writes the value 3 to the 16-bit field at offset 0x17c and returns 1. The specific
 *   roles of the callees and the object type are not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_two_ids_104e803e(void *param_1)

{
  alloc_pool_and_init_task((int *)((int)param_1 + 0x10),0x10,0x1000,4);
  wait_flg_obj((void *)((int)param_1 + 0x188),0);
  *(uint16_t *)((int)param_1 + 0x17c) = 3;
  return 1;
}
