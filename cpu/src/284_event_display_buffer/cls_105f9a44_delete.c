/* @k10d cls_105f9a44_delete @ 0x10528ba2
 * name: verified (structural evidence: stores vtable 0x105f9a44 to *this; heap_free(this) under (param_2 & 1))
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105f9a44 (vtable 0x105f9a44): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105f9a44 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10528bb8) overlaps instruction at (ram,0x10528bb6)
    */

void cls_105f9a44_delete(uint32_t *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  
  puVar1 = &uStack_30;
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105f9a44/*ROM*/;
    uStack_30 = 0;
    uStack_2c = 0;
    lens_fw_update_teardown();
    param_1[0x402] = (uint32_t)&DAT_105f9250/*ROM*/;
    param_1[0x402] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x36d] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x2d8] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x243] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x1ae] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x119] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1[0x84] = (uint32_t)&DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *param_1 = 0x105d9168/*ROM*/;
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
