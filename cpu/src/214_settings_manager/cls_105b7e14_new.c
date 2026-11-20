/* @k10d cls_105b7e14_new @ 0x104b0770
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7e14; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7e14 (vtable 0x105b7e14, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7e14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b0792) overlaps instruction at (ram,0x104b0790)
    */

int cls_105b7e14_new(cls_105b7e14 *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                    uint8_t param_5,int param_6,int param_7,uint32_t param_8,int param_9)

{
  if ((param_1 != (cls_105b7e14 *)0x0) ||
     (param_1 = (cls_105b7e14 *)heap_alloc((void *)0xc), param_1 != (cls_105b7e14 *)0x0)) {
    cls_105b7e2c_new((cls_105b7e2c *)param_1,0x12,1);
    ((cls_105b7e2c *)param_1)->field_0x8 = 0x105b7e14/*ROM*/;
    insert_element_at_index(param_1,uRam105f9c0a,2,1);
    set_byte_in_buffer_if_in_range(param_1,0,4);
    set_byte_in_buffer_if_in_range(param_1,0,5);
    set_byte_in_buffer_if_in_range(param_1,0,6);
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)(param_6 + 0x105f9bc9/*ROM*/),7);
    insert_element_at_index(param_1,*(uint16_t *)(param_7 + 8),8,1);
    insert_element_at_index(param_1,param_2,10,1);
    insert_element_at_index(param_1,*(uint16_t *)(param_7 + 2),0xc,1);
    set_byte_in_buffer_if_in_range(param_1,param_3,0xe);
    set_byte_in_buffer_if_in_range(param_1,param_4,0xf);
    set_byte_in_buffer_if_in_range(param_1,param_5,0x10);
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)(param_9 + 5),0x11);
  }
  return (int)param_1;
}
