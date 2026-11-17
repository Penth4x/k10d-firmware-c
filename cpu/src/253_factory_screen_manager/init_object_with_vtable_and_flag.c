/* @k10d init_object_with_vtable_and_flag @ 0x104e61c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting its vtable pointer and conditionally calling a setup
 *   routine.
 * summary:
 *   If the object pointer is non-null, writes the vtable address 0x105c0d78 to offset 0x18.
 *   Calls virtual method slot 1 of the base class cls_105c0074 with argument 0. If the
 *   second parameter's least significant bit is set, calls release_heap_block_104e624e on
 *   the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_vtable_and_flag(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x18) = 0x105c0d78/*ROM*/;
    reset_vtable_and_free_if_flagged_104e33c2(param_1,0);
    if ((param_2 & 1) != 0) {
      release_heap_block_104e624e(param_1);
    }
  }
  return;
}
