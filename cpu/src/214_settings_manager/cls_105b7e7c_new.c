/* @k10d cls_105b7e7c_new @ 0x104b1498
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7e7c; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7e7c (vtable 0x105b7e7c, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7e7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b14b6) overlaps instruction at (ram,0x104b14b4)
    */

int cls_105b7e7c_new(cls_105b7e7c *param_1,int param_2,uint32_t param_3,int param_4)

{
  if ((param_1 != (cls_105b7e7c *)0x0) ||
     (param_1 = (cls_105b7e7c *)heap_alloc((void *)0xc), param_1 != (cls_105b7e7c *)0x0)) {
    cls_105b7e2c_new((cls_105b7e2c *)param_1,10,6);
    ((cls_105b7e2c *)param_1)->field_0x8 = 0x105b7e7c/*ROM*/;
    insert_element_at_index(param_1,uRam105f9c0a,2,1);
    set_byte_in_buffer_if_in_range(param_1,0,4);
    set_byte_in_buffer_if_in_range(param_1,0,5);
    set_byte_in_buffer_if_in_range(param_1,0,6);
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)(param_2 + 0x105f9bc9/*ROM*/),7);
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)(param_4 + 5),8);
    set_byte_in_buffer_if_in_range(param_1,0,9);
  }
  return (int)param_1;
}
