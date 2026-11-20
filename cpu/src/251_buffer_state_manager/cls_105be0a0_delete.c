/* @k10d cls_105be0a0_delete @ 0x104e192e
 * name: verified (structural evidence: stores vtable 0x105be0a0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105be0a0 (vtable 0x105be0a0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105be0a0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105be0a0_delete(cls_105be0a0 *param_1,uint param_2)

{
  if (param_1 != (cls_105be0a0 *)0x0) {
    param_1->field_0x14 = (uintptr_t)((void *)0x105be0a0/*ROM*/);
    if (iRam80010a40 != 0) {
      heap_free_2(iRam80010a40);
    }
    if (iRam80010a44 != 0) {
      heap_free_2(iRam80010a44);
    }
    if (iRam80010a48 != 0) {
      heap_free_2(iRam80010a48);
    }
    if (iRam80010a4c != 0) {
      heap_free_2(iRam80010a4c);
    }
    reset_vtable_and_free_if_owned_104df8f6((int)(param_1),(uint)(0));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
