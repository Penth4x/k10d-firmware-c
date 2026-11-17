/* @k10d alloc_and_init_0x10c_object @ 0x104d7972
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x10c-byte object, zero-initializes its header fields, and calls an
 *   init routine.
 * summary:
 *   Allocates 0x10c bytes via heap_alloc if param_1 is NULL. Sets the first word to 0,
 *   calls initialize_lens_update_object on the second word with size 0x100, zeroes two
 *   fields at offsets 0x104 and 0x108, then calls clear_struct_fields_104d79d2 on the
 *   object. Returns the object pointer. The specific role of the object is not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_init_0x10c_object(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10c), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    initialize_lens_update_object(param_1 + 1,0x100);
    param_1[0x41] = 0;
    *(uint8_t *)(param_1 + 0x42) = 0;
    clear_struct_fields_104d79d2(param_1);
  }
  return param_1;
}
