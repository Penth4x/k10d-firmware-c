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

uint32_t * cls_10557d70_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x44), param_1 != (uint32_t *)0x0)) {
    param_1[0x10] = (uint32_t)&DAT_10557d70/*ROM*/;
    uVar1 = get_or_init_singleton_1036e58a();
    *param_1 = uVar1;
    uVar1 = get_or_init_singleton_1036b040();
    param_1[1] = uVar1;
    uVar1 = get_or_init_singleton_1036e58a();
    param_1[2] = uVar1;
    uVar1 = get_or_create_singleton_object_1036c852();
    param_1[3] = uVar1;
    uVar1 = get_or_init_singleton_object_10368f62();
    param_1[4] = uVar1;
    uVar1 = get_or_init_global_object_1037032a();
    param_1[5] = uVar1;
    uVar1 = get_or_init_singleton_1036541a();
    param_1[6] = uVar1;
    uVar1 = get_or_create_singleton_103631bc();
    param_1[7] = uVar1;
    uVar1 = get_or_create_singleton_object_10372a0e();
    param_1[8] = uVar1;
    uVar1 = get_or_create_singleton_object_10370f12();
    param_1[9] = uVar1;
    uVar1 = get_or_init_singleton_object_103676f8();
    param_1[10] = uVar1;
    uVar1 = get_or_init_singleton_10366156();
    param_1[0xb] = uVar1;
    uVar1 = get_or_init_global_object_10368304();
    param_1[0xc] = uVar1;
    uVar1 = get_or_init_singleton_object_1036a8b2();
    param_1[0xd] = uVar1;
    uVar1 = get_or_create_singleton_object_1036db70();
    param_1[0xe] = uVar1;
    uVar1 = get_or_init_singleton_object_1040b5c2();
    param_1[0xf] = uVar1;
  }
  return param_1;
}
