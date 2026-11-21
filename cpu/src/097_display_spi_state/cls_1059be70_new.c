/* @k10d cls_1059be70_new @ 0x1040f6f6
 * name: verified (structural evidence: heap_alloc(0x288) when NULL; stores vtable 0x1059be70; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059be70 (vtable 0x1059be70, 0x288 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x288) when NULL; stores vtable 0x1059be70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059be70 * cls_1059be70_new(cls_1059be70 *param_1)

{
  int iVar1;
  cls_1059be70 *pcVar2;
  int iVar3;
  
  if ((param_1 != (cls_1059be70 *)0x0) ||
     (param_1 = (cls_1059be70 *)heap_alloc((void *)0x288), param_1 != (cls_1059be70 *)0x0)) {
    pcVar2 = param_1;
    if ((param_1 != (cls_1059be70 *)0x0) ||
       (pcVar2 = (cls_1059be70 *)heap_alloc((void *)0x10), pcVar2 != (cls_1059be70 *)0x0)) {
      cls_1059e2e0_new((cls_1059e2e0 *)pcVar2);
      pcVar2->field_0x4 = 0x1059bcc8/*ROM*/;
      pcVar2->field_0x8 = 0x1059be38/*ROM*/;
    }
    param_1->field_0x4 = 0x1059be70/*ROM*/;
    param_1->field_0x8 = 0x1059bfe8/*ROM*/;
    param_1->field_0x10 = 1;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    alloc_and_zero_struct_1040f68a(&param_1->field_0x24);
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    param_1->field_0x3c = 0;
    param_1->field_0x40 = 0;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = 0;
    param_1->field_0x54 = 0;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
    param_1->field_0x64 = 0;
    param_1->field_0x68 = 0;
    param_1->field_0x6c = 0;
    param_1->field_0x70 = 0;
    cls_105a2af8_new((cls_105a2af8 *)&param_1->field_0x74);
    param_1->field_0x7c = 0;
    param_1->field_0x7d = 0;
    param_1->field_0x7e = 0;
    param_1->field_0x80 = 0;
    param_1->field_0x82 = 0;
    param_1->field_0x84 = 0;
    param_1->field_0x86 = 0;
    param_1->field_0x88 = 0;
    param_1->field_0x8a = 0;
    param_1->field_0x8c = 0;
    param_1->field_0x8e = 0;
    param_1->field_0x90 = 0;
    param_1->field_0x92 = 0;
    param_1->field_0x94 = 0;
    param_1->field_0x96 = 0;
    param_1->field_0x98 = 0;
    param_1->field_0x9a = 0x17f;
    param_1->field_0x9c = 0x17f;
    param_1->field_0x9e = 0;
    param_1->field_0x9f = 0;
    param_1->field_0xa0 = 0;
    param_1->field_0xa4 = 0;
    param_1->field_0xa8 = 0;
    param_1->field_0xaa = 0;
    param_1->field_0xac = 0;
    param_1->field_0xb0 = 0;
    param_1->field_0xb4 = 0;
    param_1->field_0xb8 = 0;
    param_1->field_0xbc = 0;
    param_1->field_0xbd = 0;
    param_1->field_0xbe = 0;
    param_1->field_0xbf = 0;
    param_1->field_0xc0 = 0;
    param_1->field_0xc1 = 0;
    param_1->field_0xc2 = 0;
    param_1->field_0xc3 = 1;
    param_1->field_0xc4 = 0;
    param_1->field_0xc5 = 1;
    param_1->field_0xc6 = 0;
    param_1->field_0xc7 = 0;
    param_1->field_0xc8 = 0x30;
    param_1->field_0xca = 0x3100;
    param_1->field_0xcc = 8;
    param_1->field_0xce = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x17 = 0;
    param_1->field_0x15 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x16 = 0;
    param_1->field_0x19 = 0;
    param_1->field_0x1a = 0;
    param_1->field_0x1b = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x1d = 0;
    param_1->field_0x1e = 0;
    param_1->field_0x1f = 0;
    iVar1 = 0x15;
    iVar3 = 0;
    do {
      *(uint32_t *)((int)&param_1->field_0xd0 + iVar3) = 0;
      *(uint32_t *)((int)&param_1->field_0xd4 + iVar3) = 0;
      *(uint32_t *)((int)&param_1->field_0xd8 + iVar3) = 0;
      *(uint32_t *)((int)&param_1->field_0xdc + iVar3) = 0;
      /* B-6b: the 5th store of this contiguous clear is offset 0xe0, NOT param_1[1]
         (= base+0x288, the end of this 0x288-byte object). The original (0x1040f8c6)
         resets r12=base+0xd0 each iteration while r13 grows by 4 continuously, so the
         five stores/iteration are consecutive words 0xd0,0xd4,0xd8,0xdc,0xe0 tiling
         0xd0..0x288 exactly. The decompiler mis-based the 5th as param_1[1], marching it
         past the object and zeroing the next heap object's vtable pointer -> null-vtable
         crash in a later virtual dispatch. 0xe0 = field_0xdc + 4. */
      *(uint32_t *)((int)&param_1->field_0xdc + 4 + iVar3) = 0;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 0x14;
    } while (-1 < iVar1);
    param_1->field_0x7e = 0xc2b;
    param_1->field_0x80 = 0xa3;
    param_1->field_0x82 = 0x8c2;
    param_1->field_0x84 = 0x9eb;
    param_1->field_0x86 = 0x77c;
    param_1->field_0x88 = 0xf1d;
    param_1->field_0x8a = 0x906;
    param_1->field_0x8c = 0x946;
    param_1->field_0x90 = 0x946;
    param_1->field_0x92 = 0x9c7;
    param_1->field_0x98 = 0x6a5;
    param_1->field_0x96 = 0x6a5;
  }
  return param_1;
}
