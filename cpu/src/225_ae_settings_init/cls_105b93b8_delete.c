/* @k10d cls_105b93b8_delete @ 0x104bf37c
 * name: verified (structural evidence: stores vtable 0x105b93b8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b93b8 (vtable 0x105b93b8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b93b8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bf390) overlaps instruction at (ram,0x104bf38e)
    */

void cls_105b93b8_delete(uint32_t *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  
  puVar1 = &uStack_1c;
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105b93b8/*ROM*/;
    uStack_1c = 0;
    uStack_18 = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    cls_105b9400_delete(param_1 + 0x502,2);
    free_heap_if_flagged_1051ec9e(param_1 + 0x235,2);
    cls_105b934c_delete(param_1 + 0x22b,2);
    cls_105aae94_delete(param_1 + 0x224,2);
    cls_105aae94_delete(param_1 + 0x21d,2);
    free_heap_if_flag_set_1045c56c(param_1 + 0x21b,2);
    cls_105b9a6c_delete(param_1 + 0x13c,2);
    destroy_and_maybe_free_object(param_1 + 0x137,2);
    cls_105d67cc_delete(param_1 + 299,2);
    free_heap_if_flag_set_1047e380(param_1 + 0x12a,2);
    free_heap_if_flag_set_1047e0e6(param_1 + 0x123,2);
    cls_105aadf4_delete(param_1 + 0xd4,2);
    cls_105aae7c_delete(param_1 + 0x8c,2);
    cls_105b572c_delete(param_1 + 0x1d,2);
    free_heap_if_flag_set_1047e5d2(param_1 + 0x1b,2);
    cls_105ab468_delete(param_1 + 0x13,2);
    cls_105a2af8_delete(param_1 + 8,2);
    cls_1059e288_delete(param_1 + 1,2);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
