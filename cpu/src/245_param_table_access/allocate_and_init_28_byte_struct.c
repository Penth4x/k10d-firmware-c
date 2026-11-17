/* @k10d allocate_and_init_28_byte_struct @ 0x104d5a50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 28-byte structure, initializes its fields with specific constants, and
 *   calls a setup routine.
 * summary:
 *   The function allocates 0x1c (28) bytes from the heap if param_1 is NULL. It initializes
 *   the first two words using initialize_lens_update_object, sets the 5th and 6th words to
 *   zero, and writes four specific 0x52xx0000 values into the first four words. Finally, it
 *   calls init_struct_and_call_helper_104d5ad8 on the allocated block and returns the
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d5a6a) overlaps instruction at (ram,0x104d5a68)
    */

uint32_t * allocate_and_init_28_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0x10);
    initialize_lens_update_object(param_1 + 4,4);
    param_1[5] = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    *param_1 = 0x52000000;
    param_1[1] = 0x52010000;
    param_1[2] = 0x52020000;
    param_1[3] = 0x52030000;
    init_struct_and_call_helper_104d5ad8(param_1);
  }
  return param_1;
}
