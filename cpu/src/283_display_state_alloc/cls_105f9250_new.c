/* @k10d cls_105f9250_new @ 0x10527b78
 * name: verified (structural evidence: heap_alloc(0x254) when NULL; stores vtable 0x105f9250; returns param_1)
 * unit: 283_display_state_alloc (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9250 (vtable 0x105f9250, 0x254 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x254) when NULL; stores vtable 0x105f9250; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105f9250 * cls_105f9250_new(cls_105f9250 *this_ptr)

{
  int iVar1;
  int iVar2;
  cls_105f9250 *sub_obj;

  if ((this_ptr != (cls_105f9250 *)0x0) ||
     (this_ptr = (cls_105f9250 *)heap_alloc((void *)0x254), this_ptr != (cls_105f9250 *)0x0)) {
    sub_obj = this_ptr;
    if ((this_ptr != (cls_105f9250 *)0x0) ||
       (sub_obj = (cls_105f9250 *)heap_alloc((void *)0x20c), sub_obj != (cls_105f9250 *)0x0)) {
      sub_obj->field_0x208 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
      sub_obj->field_0x0 = 0;
      sub_obj->field_0x4 = 0;
      get_lens_fw_update_status((int)sub_obj + 8, 0x10, 0x10, (code *)alloc_and_zero_16_bytes_10527af6);
      get_lens_fw_update_status((int)sub_obj + 0x108, 0x10, 0x10, (code *)alloc_zeroed_16_byte_block);
    }
    this_ptr->field_0x208 = (uintptr_t)(&DAT_105f9250/*ROM*/);
    this_ptr->field_0x20c = 0;
    this_ptr->field_0x210 = 0x100;
    iVar2 = 3;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)this_ptr + 0x214 + iVar1) = 0;
      *(uint32_t *)((int)this_ptr + 0x218 + iVar1) = 0;
      *(uint32_t *)((int)this_ptr + 0x21c + iVar1) = 0;
      *(uint32_t *)((int)this_ptr + 0x220 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return this_ptr;
}
