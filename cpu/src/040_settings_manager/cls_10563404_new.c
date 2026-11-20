/* @k10d cls_10563404_new @ 0x103985be
 * name: verified (structural evidence: heap_alloc(0xe8) when NULL; stores vtable 0x10563404; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563404 (vtable 0x10563404, 0xe8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xe8) when NULL; stores vtable 0x10563404; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10563404 * cls_10563404_new(cls_10563404 *param_1)

{
  if ((param_1 != (cls_10563404 *)0x0) ||
     (param_1 = (cls_10563404 *)heap_alloc((void *)0xe8), param_1 != (cls_10563404 *)0x0)) {
    cls_10563dd8_new((cls_10563dd8 *)param_1);
    param_1->field_0x0 = (uintptr_t)(&DAT_10563404/*ROM*/);
    param_1->field_0x4 = (uintptr_t)(&DAT_10563474/*ROM*/);
    param_1->field_0x8 = (uintptr_t)(&DAT_1056349c/*ROM*/);
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x30 = 0;
    initialize_lens_update_object(&param_1->field_0x34,4);
    initialize_lens_update_object(&param_1->field_0x38,4);
    initialize_lens_update_object(&param_1->field_0x3c,3);
    *(uint32_t *)&param_1->field_0x40 = 0;
    *(uint32_t *)&param_1->field_0x44 = 0;
    *(uint32_t *)&param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    *(uint32_t *)&param_1->field_0x58 = 0;
    *(uint32_t *)&param_1->field_0x5c = 0;
    *(uint32_t *)&param_1->field_0x60 = 0;
    *(uint32_t *)&param_1->field_0x64 = 0;
    *(uint32_t *)&param_1->field_0x68 = 0;
    *(uint32_t *)&param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    param_1->field_0x74 = 0;
    param_1->field_0x78 = 0;
    param_1->field_0x7c = 0;
    param_1->field_0x80 = 0;
    *(uint32_t *)&param_1->field_0x84 = 0;
    param_1->field_0x88 = 0;
    param_1->field_0x8c = 0;
    param_1->field_0x90 = 0;
    param_1->field_0x94 = 0;
    param_1->field_0x98 = 0;
    param_1->field_0x9c = 0;
    param_1->field_0xa0 = 0;
    param_1->field_0xa4 = 0;
    param_1->field_0xa8 = 0;
    param_1->field_0xac = 0;
    param_1->field_0xb0 = 0;
    param_1->field_0xb4 = 0;
    param_1->field_0xb8 = 0;
    param_1->field_0xbc = 0;
    param_1->field_0xc0 = 0;
    param_1->field_0xc4 = 0;
    param_1->field_0xc8 = 0;
    param_1->field_0xcc = 0;
    param_1->field_0xd0 = 0;
    param_1->field_0xd4 = 0;
    param_1->field_0xd8 = 0;
    param_1->field_0xdc = 0;
    param_1->field_0xe0 = 0;
    param_1->field_0xe4 = 0x5060003;
    set_bytes_0x34_to_0x3e(param_1);
  }
  return param_1;
}
