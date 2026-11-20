/* @k10d cls_105b7eac_new @ 0x104b163c
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7eac; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7eac (vtable 0x105b7eac, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7eac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b165e) overlaps instruction at (ram,0x104b165c)
    */

int cls_105b7eac_new(cls_105b7eac *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                    uint8_t param_5,uint8_t param_6,uint8_t param_7,uint8_t param_8)

{
  if ((param_1 != (cls_105b7eac *)0x0) ||
     (param_1 = (cls_105b7eac *)heap_alloc((void *)0xc), param_1 != (cls_105b7eac *)0x0)) {
    cls_105b7e2c_new((cls_105b7e2c *)param_1,9,4);
    ((cls_105b7e2c *)param_1)->field_0x8 = 0x105b7eac/*ROM*/;
    set_byte_in_buffer_if_in_range(param_1,param_2,2);
    set_byte_in_buffer_if_in_range(param_1,param_3,3);
    set_byte_in_buffer_if_in_range(param_1,param_4,4);
    set_byte_in_buffer_if_in_range(param_1,param_5,5);
    set_byte_in_buffer_if_in_range(param_1,param_6,6);
    set_byte_in_buffer_if_in_range(param_1,param_7,7);
    set_byte_in_buffer_if_in_range(param_1,param_8,8);
  }
  return (int)param_1;
}
