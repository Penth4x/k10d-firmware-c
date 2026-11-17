/* @k10d init_object_with_seven_helpers_104d8948 @ 0x104d8948
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x8c4-byte object if needed and initializes its fields via seven helper
 *   calls.
 * summary:
 *   If param_1 is NULL, it heap-allocates 0x8c4 bytes. It then calls
 *   init_32_entry_pointer_table on the base, allocate_and_init_24_byte_object on offset
 *   0x29, initialize_lens_update_object on offset 0x2f with size 0x10, sets a flag at 0x33,
 *   and calls four more initializers at offsets 0x34, 0x21b, 0x222, and 0x229. It sets a
 *   flag at 0x22f, clears a byte at 0x230, and finally calls
 *   initialize_struct_with_subobjects on the object. Returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_seven_helpers_104d8948(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x8c4), param_1 != (uint32_t *)0x0)) {
    init_32_entry_pointer_table(param_1);
    allocate_and_init_24_byte_object(param_1 + 0x29);
    initialize_lens_update_object(param_1 + 0x2f,0x10);
    param_1[0x33] = 1;
    init_object_with_vtable_and_ids(param_1 + 0x34);
    allocate_and_init_28_byte_struct(param_1 + 0x21b);
    allocate_and_init_four_entry_table(param_1 + 0x222);
    alloc_and_init_24_byte_struct(param_1 + 0x229);
    param_1[0x22f] = 1;
    *(uint8_t *)(param_1 + 0x230) = 0;
    initialize_struct_with_subobjects(param_1);
  }
  return (int)param_1;
}
