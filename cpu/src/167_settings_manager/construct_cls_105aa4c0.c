/* @k10d construct_cls_105aa4c0 @ 0x10476f1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes an instance of class cls_105aa4c0, setting its vtable pointer
 *   and member fields.
 * summary:
 *   This function acts as a constructor for class cls_105aa4c0. It first attempts to use
 *   the provided pointer (param_1) or allocates a new 0x10-byte block via
 *   allocate_heap_pool_block_10477182 if param_1 is null. It then calls the base class
 *   constructor cls_105aae4c_new, sets the vtable pointer to 0x105aa4c0, and initializes
 *   specific member fields to 0, 0xffff, and 0. The caller allocate_and_link_event_object
 *   invokes this to create an object of this type.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105aae4c * construct_cls_105aa4c0(cls_105aae4c *param_1)

{
  if ((param_1 != (cls_105aae4c *)0x0) ||
     (param_1 = (cls_105aae4c *)allocate_heap_pool_block_10477182((void *)0x10), param_1 != (cls_105aae4c *)0x0)) {
    cls_105aae4c_new(param_1);
    param_1->field_0x0 = 0x105aa4c0/*ROM*/;
    *(uint16_t *)&param_1[1].field_0x0 = 0;
    *(uint16_t *)((int)&param_1[1].field_0x0 + 2) = 0xffff;
    param_1[2].field_0x0 = 0;
    *(uint8_t *)&param_1[3].field_0x0 = 0;
  }
  return param_1;
}
