/* @k10d init_object_fields_and_flags @ 0x1048608c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 178_menu_context_init (unit names are model-proposed)
 * purpose:
 *   Initializes specific fields of an object structure by calling helper functions and
 *   storing a value from a getter.
 * summary:
 *   The function takes a pointer to an object (param_1) and performs initialization on
 *   several offsets. It calls alloc_pool_and_init_task on offset 0x1c with parameters 0xf,
 *   0x1800, and 4. It calls wait_flg_obj on offset 0x48 with 0. It calls
 *   create_kernel_object on offset 0x40. Finally, it retrieves a value from
 *   get_or_create_singleton_object_10486db8 and stores it at offset 0x54. It returns 1. The
 *   specific roles of the callees are unknown, so the operation is described mechanically
 *   as field initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_fields_and_flags(int param_1)

{
  uint32_t uVar1;
  
  alloc_pool_and_init_task((int *)(param_1 + 0x1c),0xf,0x1800,4);
  wait_flg_obj((void *)(param_1 + 0x48),0);
  create_kernel_object((void *)(param_1 + 0x40));
  uVar1 = get_or_create_singleton_object_10486db8();
  *(uint32_t *)(param_1 + 0x54) = uVar1;
  return 1;
}
