/* @k10d alloc_and_init_16_byte_struct @ 0x104d518a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 16-byte structure, initializes specific fields with constants, and calls an
 *   initialization routine.
 * summary:
 *   The function attempts to allocate 16 bytes from the heap if the input pointer is null.
 *   It initializes the first two words to 0x90000000 and 0x90010000, clears the third word
 *   and the low byte of the fourth, and calls clear_two_struct_fields_104d51f0 on the
 *   allocated block. It is called by a verified constructor for class cls_105ba0cc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d51a4) overlaps instruction at (ram,0x104d51a2)
    */

uint32_t * alloc_and_init_16_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,8);
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 0;
    *param_1 = 0x90000000;
    param_1[1] = 0x90010000;
    clear_two_struct_fields_104d51f0(param_1);
  }
  return param_1;
}
