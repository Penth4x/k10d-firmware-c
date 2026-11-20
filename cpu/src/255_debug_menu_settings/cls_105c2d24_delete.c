/* @k10d cls_105c2d24_delete @ 0x104eda9a
 * name: verified (structural evidence: stores vtable 0x105c2d24 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2d24 (vtable 0x105c2d24): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2d24 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104edab0) overlaps instruction at (ram,0x104edaae)
    */

void cls_105c2d24_delete(cls_105c2d24 *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_38 [8];
  
  puVar1 = (uint32_t *)auStack_38;
  if (param_1 != (cls_105c2d24 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c2d24/*ROM*/);
    free_heap_if_flagged_1052e424(&param_1[3].field_0x7f8,2);
    cls_105fa760_delete(&param_1[3].field_0x7f4,2);
    *(uint32_t *)&param_1[3].field_0x7ec = 0x105f9304/*ROM*/;
    *(uint32_t *)&param_1[3].field_0x7ec = 0x105d9168/*ROM*/;
    param_1->field_0x4 = 0x105f9a44/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *(void **)&param_1[1].field_0x250 = &DAT_105f9250/*ROM*/;
    *(void **)&param_1[1].field_0x250 = &DAT_105f91c0/*ROM*/;
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0xdb8 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0xb64 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0x910 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0x6bc = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0x468 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0x214 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    param_1->field_0x4 = 0x105d9168/*ROM*/;
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
