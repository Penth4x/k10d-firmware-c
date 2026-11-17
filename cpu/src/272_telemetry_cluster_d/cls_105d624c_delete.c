/* @k10d cls_105d624c_delete @ 0x10513e8c
 * name: verified (structural evidence: stores vtable 0x105d624c to *this; heap_free(this) under (param_2 & 1))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d624c (vtable 0x105d624c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d624c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10513ea0) overlaps instruction at (ram,0x10513e9e)
    */

void cls_105d624c_delete(uint32_t *param_1,uint param_2)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_1c [8];
  
  puVar1 = (uint32_t *)auStack_1c;
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d624c/*ROM*/;
    param_1[1] = 0x105d62a4/*ROM*/;
    param_1[2] = 0x105d62bc/*ROM*/;
    param_1[3] = 0x105d62dc/*ROM*/;
    param_1[9] = 0x105d6304/*ROM*/;
    param_1[0xc] = 0x105d631c/*ROM*/;
    cls_105a2af8_delete(param_1 + 0xd3,2);
    cls_105a2be0_delete(param_1 + 0xd1,2);
    virtual_destructor_free_10428222(param_1 + 0xca,2);
    free_heap_if_flagged_10513c18(param_1 + 0xc1,2);
    free_heap_if_flagged_10513c18(param_1 + 0xba,2);
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    *puVar1 = 0;
    puVar1[1] = 0;
    lens_fw_update_teardown();
    cls_105a2ab0_delete(param_1 + 10,0);
    cls_105a2c1c_delete(param_1 + 5,0);
    cls_1059e408_delete(param_1 + 3,0);
    reset_vtable_and_free_if_owned_10428142(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
