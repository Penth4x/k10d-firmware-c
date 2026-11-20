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

int cls_105ba0cc_new(cls_105ba0cc *param_1)

{
  if ((param_1 != (cls_105ba0cc *)0x0) ||
     (param_1 = (cls_105ba0cc *)heap_alloc((void *)0x2b1c), param_1 != (cls_105ba0cc *)0x0)) {
    *(uint32_t *)&param_1[2].field_0xde0 = 0x105ba0cc/*ROM*/;
    initialize_heap_object(param_1);
    initialize_heap_object(&param_1->field_0x2f8);
    construct_object_with_six_subinits(&param_1->field_0x5f0);
    construct_object_with_six_subinits(&param_1->field_0xe98);
    init_object_with_seven_subinits((uint32_t *)&param_1[1].field_0x8a4);
    allocate_and_init_object_104d7a2a(&param_1[1].field_0x988);
    init_object_with_address_table(&param_1[1].field_0xaa4);
    init_object_with_address_table(&param_1[1].field_0xacc);
    init_object_with_seven_helpers_104d8948((uint32_t *)&param_1[1].field_0xaf4);
    alloc_and_init_16_byte_struct(&param_1[2].field_0x51c);
    alloc_and_init_0x10c_object(&param_1[2].field_0x52c);
    *(uint32_t *)&param_1[2].field_0x638 = 0xffffffff;
    init_object_with_vtable_and_ids(&param_1[2].field_0x63c);
    *(uint32_t *)&param_1[2].field_0xdd8 = 0;
    *(uint32_t *)&param_1[2].field_0xddc = 0;
    store_value_at_offset_0x794((int)&param_1[2].field_0x63c,0);
  }
  return (int)param_1;
}
