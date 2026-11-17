/* @k10d construct_object_with_six_subinits @ 0x104d6474
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 0x8a8-byte object when param_1 is NULL, then calls six sub-object
 *   initializers at fixed offsets plus a final whole-object init.
 * summary:
 *   Follows the standard Cfront constructor idiom: if param_1 is NULL it calls
 *   heap_alloc(0x8a8) and uses the returned pointer in r4. It then invokes
 *   allocate_and_init_four_entry_table on the base, init_32_entry_pointer_table at +7,
 *   allocate_and_init_24_byte_object at +0x30, allocate_and_init_28_byte_struct at +0x36,
 *   alloc_and_init_24_byte_struct at +0x3d, init_object_with_vtable_and_ids at +0x43, and
 *   finally init_six_struct_members on the whole object. The initialized pointer is
 *   returned in r4. No camera-specific behavior is visible in the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int construct_object_with_six_subinits(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x8a8), param_1 != (uint32_t *)0x0)) {
    allocate_and_init_four_entry_table(param_1);
    init_32_entry_pointer_table(param_1 + 7);
    allocate_and_init_24_byte_object(param_1 + 0x30);
    allocate_and_init_28_byte_struct(param_1 + 0x36);
    alloc_and_init_24_byte_struct(param_1 + 0x3d);
    init_object_with_vtable_and_ids(param_1 + 0x43);
    init_six_struct_members(param_1);
  }
  return (int)param_1;
}
