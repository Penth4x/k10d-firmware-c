/* @k10d init_object_subfields_103b8a18 @ 0x103b8a18
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Initializes three sub-fields of an object by calling three helper functions on offsets
 *   0x1c, 0x48, and 0x40.
 * summary:
 *   The function takes a pointer to an object and calls alloc_pool_and_init_task on the
 *   field at offset 0x1c with parameters 0x10, 0x2000, and 4. It then calls wait_flg_obj on
 *   the field at offset 0x48 with a zero argument, and finally calls create_kernel_object
 *   on the field at offset 0x40. It returns 1. The specific roles of the callees are
 *   unknown, but the pattern suggests initialization or configuration of object members.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_subfields_103b8a18(int param_1)

{
  alloc_pool_and_init_task((int *)(param_1 + 0x1c),0x10,0x2000,4);
  wait_flg_obj((void *)(param_1 + 0x48),0);
  create_kernel_object((void *)(param_1 + 0x40));
  return 1;
}
