/* @k10d cls_105b7dfc_new @ 0x104b05c0
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b7dfc; returns param_1)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7dfc (vtable 0x105b7dfc, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b7dfc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b7dfc_new(cls_105b7dfc *param_1,char param_2,uint32_t param_3,int param_4,int param_5,
                    uint32_t param_6,int param_7,int param_8)

{
  uint uVar1;
  
  if ((param_1 != (cls_105b7dfc *)0x0) ||
     (param_1 = (cls_105b7dfc *)heap_alloc((void *)0xc), param_1 != (cls_105b7dfc *)0x0)) {
    cls_105b7e2c_new((cls_105b7e2c *)param_1,
                     (uint)(byte)(*(char *)(param_7 + 0x10) + '\t' + *(char *)(param_8 + 0x10)),2);
    param_1->field_0x8 = 0x105b7dfc/*ROM*/;
    set_byte_in_buffer_if_in_range(param_1,9,0);
    insert_element_at_index(param_1,param_1->field_0x4,2,1);
    if (param_4 != 0) {
      set_byte_in_buffer_if_in_range(param_1,7,1);
    }
    set_byte_in_buffer_if_in_range(param_1,*(uint8_t *)(param_7 + 5),4);
    set_byte_in_buffer_if_in_range(param_1,param_2 + '\x01',5);
    set_byte_in_buffer_if_in_range(param_1,param_3,6);
    uVar1 = 0xc0;
    if (*(char *)(param_5 + 0x105f9c01/*ROM*/) == '\0') {
      uVar1 = 0x80;
    }
    if (*(char *)(param_5 + 0x105f9c03/*ROM*/) != '\0') {
      uVar1 = uVar1 | 0x20;
    }
    set_byte_in_buffer_if_in_range(param_1,uVar1,7);
    set_byte_in_buffer_if_in_range(param_1,(int)(*(ushort *)(param_5 * 2 + 0x105f9c06/*ROM*/) + 2) >> 1 & 0xff,8);
    uVar1 = iterate_and_dispatch_byte_records((int *)param_1,param_7,9);
    iterate_and_dispatch_byte_records((int *)param_1,param_8,uVar1);
  }
  return (int)param_1;
}
