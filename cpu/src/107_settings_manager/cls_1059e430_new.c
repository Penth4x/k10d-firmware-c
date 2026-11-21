/* @k10d cls_1059e430_new @ 0x10427d7a
 * name: verified (structural evidence: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e430 (vtable 0x1059e430, 0x104 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x104) when NULL; stores vtable 0x1059e430; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1059e3e0 * cls_1059e430_new(cls_1059e430 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_1059e430 *)0x0) ||
     (param_1 = (cls_1059e430 *)heap_alloc((void *)0x104), (cls_1059e3e0 *)param_1 != (cls_1059e3e0 *)0x0))
  {
    cls_1059e3e0_new((cls_1059e3e0 *)param_1);
    ((cls_1059e3e0 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1059e430/*ROM*/);
    iVar2 = 7;
    iVar1 = 0;
    do {
      /* All eight stores are BYTE-addressed: the original clears the whole 0x104-byte object with a
       * uniform base+fieldoff+iVar1 stride (iVar1 steps 0x10; low block 0x4..0x80 and high block
       * 0x84..0x100). Ghidra emitted `&field + iVar1` for six of them, and field being uint32_t that
       * SCALES iVar1 by 4, turning the 0x10 step into a 0x40 stride that overruns the object and
       * zeroes the adjacent object's vtable slots (the deactivate_dual_object_pair null-vtable crash:
       * P+8 at 0x805527d8). Cast each `&field` to (int) before the add, exactly as the two faithful
       * stores already do. Bug class B-9 pointer-arith-scaling: `&field + idx` for `(int)&field + idx`. */
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field1_0x4 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0x84 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0x8 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0x88 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0xc + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0x8c + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)param_1)->field_0x10 + iVar1) = 0;
      *(uint32_t *)((int)&((cls_1059e3e0 *)((int)param_1 + 0x90))->field_0x0 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return (cls_1059e3e0 *)param_1;
}
