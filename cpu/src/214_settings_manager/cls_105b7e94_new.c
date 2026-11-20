/* @k10d cls_105b7e94_new @ 0x104b1580
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7e94; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7e94 (vtable 0x105b7e94, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7e94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b15a2) overlaps instruction at (ram,0x104b15a0)
    */

int cls_105b7e94_new(cls_105b7e94 *param_1,byte param_2,char param_3,uint32_t param_4,
                    uint16_t param_5,uint8_t param_6)

{
  if ((param_1 != (cls_105b7e94 *)0x0) ||
     (param_1 = (cls_105b7e94 *)heap_alloc((void *)0xc), param_1 != (cls_105b7e94 *)0x0)) {
    cls_105b7e2c_new((cls_105b7e2c *)param_1,7,5);
    ((cls_105b7e2c *)param_1)->field_0x8 = 0x105b7e94/*ROM*/;
    set_byte_in_buffer_if_in_range(param_1,param_3 << 7 | param_2,2);
    set_byte_in_buffer_if_in_range(param_1,param_4,3);
    insert_element_at_index(param_1,param_5,4,1);
    set_byte_in_buffer_if_in_range(param_1,param_6,6);
  }
  return (int)param_1;
}
