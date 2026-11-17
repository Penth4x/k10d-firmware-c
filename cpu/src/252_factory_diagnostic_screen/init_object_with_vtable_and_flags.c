/* @k10d init_object_with_vtable_and_flags @ 0x104e3954
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting its vtable pointer and conditionally calling setup
 *   routines.
 * summary:
 *   The function checks if param_1 is non-null. It writes the vtable address 0x105c03c8 to
 *   offset 0x18 of the object. If the integer at offset 4 is non-zero, it calls
 *   release_heap_block_104e6378. It then calls reset_vtable_and_free_if_flagged_104e33c2
 *   with the object and 0. If the least significant bit of param_2 is set, it calls
 *   release_heap_block_104e400a with the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_vtable_and_flags(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x18) = 0x105c03c8/*ROM*/;
    if (*(int *)((int)param_1 + 4) != 0) {
      release_heap_block_104e6378((void *)__frv_reg_unset(4));
    }
    reset_vtable_and_free_if_flagged_104e33c2(param_1,0);
    if ((param_2 & 1) != 0) {
      release_heap_block_104e400a(param_1);
    }
  }
  return;
}
