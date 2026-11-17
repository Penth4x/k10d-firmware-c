/* @k10d cls_105ba0cc_new @ 0x104d65c0
 * name: verified (structural evidence: heap_alloc(0x2b1c) when NULL; stores vtable 0x105ba0cc; returns param_1)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ba0cc (vtable 0x105ba0cc, 0x2b1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2b1c) when NULL; stores vtable 0x105ba0cc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105ba0cc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2b1c), param_1 != (uint32_t *)0x0)) {
    param_1[0xac6] = 0x105ba0cc/*ROM*/;
    initialize_heap_object(param_1);
    initialize_heap_object(param_1 + 0xbe);
    construct_object_with_six_subinits(param_1 + 0x17c);
    construct_object_with_six_subinits(param_1 + 0x3a6);
    init_object_with_seven_subinits(param_1 + 0x5d0);
    allocate_and_init_object_104d7a2a(param_1 + 0x609);
    init_object_with_address_table(param_1 + 0x650);
    init_object_with_address_table(param_1 + 0x65a);
    init_object_with_seven_helpers_104d8948(param_1 + 0x664);
    alloc_and_init_16_byte_struct(param_1 + 0x895);
    alloc_and_init_0x10c_object(param_1 + 0x899);
    param_1[0x8dc] = 0xffffffff;
    init_object_with_vtable_and_ids(param_1 + 0x8dd);
    param_1[0xac4] = 0;
    param_1[0xac5] = 0;
    store_value_at_offset_0x794((int)(param_1 + 0x8dd),0);
  }
  return (int)param_1;
}
