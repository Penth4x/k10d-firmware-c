/* @k10d call_virtual_slot_if_flag_set_104939d8 @ 0x104939d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if a preceding check returns zero and the object's
 *   first field is non-zero.
 * summary:
 *   Invokes an unnamed function at 0x10493dac; if it returns 0, retrieves a pointer via
 *   find_matching_list_entry. If the first integer of that pointer is non-zero, it performs
 *   a virtual call using the vtable pointer at offset 0xc, specifically invoking the
 *   function at vtable offset 0x94 with a this-adjustment from offset 0x90. Returns the
 *   result of the initial check or the virtual call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int call_virtual_slot_if_flag_set_104939d8(cls_105b4dac *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (*(code *)0x10493dac/*ROM*/)();
  if (iVar2 == 0) {
    piVar3 = (int *)find_matching_list_entry((uint32_t)(param_1));
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      iVar2 = (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].fn)
                        (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[18].adj + iVar1);
    }
  }
  return iVar2;
}
