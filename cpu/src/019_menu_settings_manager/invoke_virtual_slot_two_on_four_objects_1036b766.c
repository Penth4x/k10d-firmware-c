/* @k10d invoke_virtual_slot_two_on_four_objects_1036b766 @ 0x1036b766
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on four Cfront objects and then loops three times calling slot 2
 *   on four more objects.
 * summary:
 *   The function first calls reset_object_fields_and_call_base (virtual slot 2 of
 *   cls_105b9458) on three SDRAM addresses (0x800158dc, 0x80015af0, 0x80015d04). It then
 *   enters a loop running three times, each iteration invoking virtual slot 2 (offset
 *   +0x14) on four objects located at fixed stack-relative addresses, with the this-pointer
 *   adjusted by the short at offset +0x10. The loop counter is stored on the stack. No
 *   other side effects or MMIO writes are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_four_objects_1036b766(void)

{
  int iVar1;
  uint32_t uStack_c;
  
  iVar1 = 0;
  reset_object_fields_and_call_base((cls_105b9458 *)0x800158dc/*SDRAM*/);
  reset_object_fields_and_call_base((cls_105b9458 *)0x80015af0/*SDRAM*/);
  reset_object_fields_and_call_base((cls_105b9458 *)0x80015d04/*SDRAM*/);
  uStack_c = 3;
  do {
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffea0d4)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffea0d4)))[2].adj + iVar1 + -0x7ffea0e8);
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9ec0)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9ec0)))[2].adj + iVar1 + -0x7ffe9ed4);
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9cac)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9cac)))[2].adj + iVar1 + -0x7ffe9cc0);
    (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9a98)))[2].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + -0x7ffe9a98)))[2].adj + iVar1 + -0x7ffe9aac);
    iVar1 = iVar1 + 0x850;
    uStack_c = uStack_c + -1;
  } while (-1 < uStack_c);
  return;
}
