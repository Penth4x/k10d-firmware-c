/* @k10d allocate_and_init_24_byte_object @ 0x104d5840
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 24-byte heap object, initializes its fields with specific constants, and
 *   calls a setup routine.
 * summary:
 *   The function allocates 0x18 (24) bytes from the heap if param_1 is NULL. It initializes
 *   the first two words of the allocated block using initialize_lens_update_object with
 *   values 0xc and 3, sets the third word to 0, and the fourth byte to 0. It then writes
 *   the constants 0x54000000, 0x54010000, and 0x54020000 into the first three words of the
 *   object. Finally, it calls init_struct_and_call_helper_104d58be with the object pointer
 *   as an argument. The function returns the pointer to the initialized object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d585a) overlaps instruction at (ram,0x104d5858)
    */

uint32_t * allocate_and_init_24_byte_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0xc);
    initialize_lens_update_object(param_1 + 3,3);
    param_1[4] = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    *param_1 = 0x54000000;
    param_1[1] = 0x54010000;
    param_1[2] = 0x54020000;
    init_struct_and_call_helper_104d58be(param_1);
  }
  return param_1;
}
