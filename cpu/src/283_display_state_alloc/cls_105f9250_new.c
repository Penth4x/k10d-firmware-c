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

cls_105f9250 * cls_105f9250_new(cls_105f9250 *param_1)

{
  int iVar1;
  int iVar2;
  cls_105f9250 *pcVar3;
  
  if ((param_1 != (cls_105f9250 *)0x0) ||
     (param_1 = (cls_105f9250 *)heap_alloc((void *)0x254), param_1 != (cls_105f9250 *)0x0)) {
    pcVar3 = param_1;
    if ((param_1 != (cls_105f9250 *)0x0) ||
       (pcVar3 = (cls_105f9250 *)heap_alloc((void *)0x20c), pcVar3 != (cls_105f9250 *)0x0)) {
      pcVar3->field_0x208 = (uintptr_t)(&DAT_105f91c0/*ROM*/);
      pcVar3->field_0x0 = 0;
      pcVar3->field_0x4 = 0;
      get_lens_fw_update_status((int)pcVar3 + 8, 0x10, 0x10, (code *)alloc_and_zero_16_bytes_10527af6);
      get_lens_fw_update_status((int)pcVar3 + 0x108, 0x10, 0x10, (code *)alloc_zeroed_16_byte_block);
    }
    param_1->field_0x208 = (uintptr_t)(&DAT_105f9250/*ROM*/);
    param_1->field_0x20c = 0;
    param_1->field_0x210 = 0x100;
    iVar2 = 3;
    iVar1 = 0;
    do {
      /* B-6b: this contiguous clear starts at in-object offset 0x214, NOT param_1[1]
         (= base+0x254, the end of this 0x254-byte object). The original (0x10527c0c)
         loads r12=base+0x214 each iteration and a running offset r0 grows by 4 across
         all four stores, tiling 0x214..0x254 exactly. The decompiler mis-based all four
         stores as param_1[1], marching them 0x254..0x294 past the object and zeroing
         adjacent heap objects' vtable pointers -> null-vtable crash in a later dispatch. */
      *(uint32_t *)((int)param_1 + 0x214 + iVar1) = 0;
      *(uint32_t *)((int)param_1 + 0x218 + iVar1) = 0;
      *(uint32_t *)((int)param_1 + 0x21c + iVar1) = 0;
      *(uint32_t *)((int)param_1 + 0x220 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
