/* @k10d init_class_with_vtable_and_flag @ 0x1052e4ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting its vtable pointer and conditionally calling a helper
 *   based on a flag.
 * summary:
 *   The function checks if param_1 is non-null. If so, it writes the vtable address
 *   0x105fa778 to offset 0x10 of the object. It then calls release_object_and_free_payload
 *   (the base class constructor/destructor) with a zero argument. If the least significant
 *   bit of param_2 is set, it calls release_mempool_block_104a8e60 on the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_class_with_vtable_and_flag(void *param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)((int)param_1 + 0x10) = 0x105fa778/*ROM*/;
    release_object_and_free_payload(param_1,0);
    if ((param_2 & 1) != 0) {
      release_mempool_block_104a8e60(param_1);
    }
  }
  return;
}
