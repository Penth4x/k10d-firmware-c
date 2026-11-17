/* @k10d cls_105d7078_delete @ 0x10520008
 * name: verified (structural evidence: stores vtable 0x105d7078 to *this; heap_free(this) under (param_2 & 1))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d7078 (vtable 0x105d7078): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d7078 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d7078_delete(uint32_t *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d7078/*ROM*/;
    param_1[3] = 0;
    iVar2 = 1;
    iVar1 = 0x18;
    do {
      destroy_object_members_10520720((uint32_t *)(*(uint32_t *)(param_1[2] + iVar1)),3);
      *(uint32_t *)(param_1[2] + iVar1) = 0;
      destroy_object_members_10520720((uint32_t *)(*(uint32_t *)(param_1[2] + iVar1 + -4)),3);
      *(uint32_t *)(param_1[2] + iVar1 + -4) = 0;
      destroy_object_members_10520720((uint32_t *)(*(uint32_t *)(param_1[2] + iVar1 + -8)),3);
      *(uint32_t *)(param_1[2] + iVar1 + -8) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + -0xc;
    } while (-1 < iVar2);
    destroy_object_members_10520720((uint32_t *)(*(uint32_t *)(param_1[2] + iVar1)),3);
    *(uint32_t *)(param_1[2] + iVar1) = 0;
    heap_free_2(param_1[2]);
    param_1[2] = 0;
    zero_four_words_and_maybe_free((uint32_t *)(param_1[1]),3);
    reset_vtable_and_free_if_flagged_104b2852(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
