/* @k10d cls_10557d70_new @ 0x1036c68a
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x10557d70; returns param_1)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557d70 (vtable 0x10557d70, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x10557d70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557d70 * cls_10557d70_new(cls_10557d70 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_10557d70 *)0x0) || (param_1 = (cls_10557d70 *)heap_alloc((void *)0x44), param_1 != (cls_10557d70 *)0x0)) {
    param_1->field_0x40 = (uint32_t)(&DAT_10557d70/*ROM*/);
    uVar1 = get_or_init_singleton_1036e58a();
    param_1->field_0x0 = uVar1;
    uVar1 = get_or_init_singleton_1036b040();
    param_1->field_0x4 = uVar1;
    uVar1 = get_or_init_singleton_1036e58a();
    param_1->field_0x8 = uVar1;
    uVar1 = get_or_create_singleton_object_1036c852();
    param_1->field_0xc = uVar1;
    uVar1 = get_or_init_singleton_object_10368f62();
    param_1->field_0x10 = uVar1;
    uVar1 = get_or_init_global_object_1037032a();
    param_1->field_0x14 = uVar1;
    uVar1 = get_or_init_singleton_1036541a();
    param_1->field_0x18 = uVar1;
    uVar1 = get_or_create_singleton_103631bc();
    param_1->field_0x1c = uVar1;
    uVar1 = get_or_create_singleton_object_10372a0e();
    param_1->field_0x20 = uVar1;
    uVar1 = get_or_create_singleton_object_10370f12();
    param_1->field_0x24 = uVar1;
    uVar1 = get_or_init_singleton_object_103676f8();
    param_1->field_0x28 = uVar1;
    uVar1 = get_or_init_singleton_10366156();
    param_1->field_0x2c = uVar1;
    uVar1 = get_or_init_global_object_10368304();
    param_1->field_0x30 = uVar1;
    uVar1 = get_or_init_singleton_object_1036a8b2();
    param_1->field_0x34 = uVar1;
    uVar1 = get_or_create_singleton_object_1036db70();
    param_1->field_0x38 = uVar1;
    uVar1 = get_or_init_singleton_object_1040b5c2();
    param_1->field_0x3c = uVar1;
  }
  return param_1;
}
