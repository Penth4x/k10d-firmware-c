/* @k10d cls_10557a18_new @ 0x10368710
 * name: verified (structural evidence: heap_alloc(0x140) when NULL; stores vtable 0x10557a18; returns param_1)
 * unit: 012_capture_context_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10557a18 (vtable 0x10557a18, 0x140 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x140) when NULL; stores vtable 0x10557a18; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557c88 * cls_10557a18_new(cls_10557a18 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_10557a18 *)0x0) ||
     (param_1 = (cls_10557a18 *)heap_alloc((void *)0x140), (cls_10557c88 *)param_1 != (cls_10557c88 *)0x0))
  {
    cls_10557c88_new((cls_10557c88 *)param_1);
    ((cls_10557c88 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10557a18/*ROM*/);
    ((cls_10557c88 *)param_1)->field8_0x14 = 0;
    ((cls_10557c88 *)param_1)->field_0x15 = 0;
    ((cls_10557c88 *)param_1)->field_0x16 = 0;
    *(uint16_t *)&((cls_10557c88 *)param_1)->field_0x18 = 0;
    init_0x50_byte_object_1051e840(&((cls_10557c88 *)param_1)->field_0x1c);
    cls_10558e74_new((cls_10558e74 *)&((cls_10557c88 *)param_1)->field65_0x6c);
    ((cls_10557c88 *)param_1)->field_0x114 = 0;
    cls_105aae94_new((cls_105aae94 *)&((cls_10557c88 *)param_1)->field_0x118);
    iVar1 = 0;
    ((cls_10557c88 *)param_1)->field_0x13c = 0;
    iVar2 = 1;
    do {
      *(uint16_t *)(&((cls_10557c88 *)param_1)->field_0x130 + iVar1) = 0;
      *(uint16_t *)(&((cls_10557c88 *)param_1)->field_0x132 + iVar1) = 0;
      *(uint16_t *)(&((cls_10557c88 *)param_1)->field_0x134 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 6;
    } while (-1 < iVar2);
  }
  return (cls_10557c88 *)param_1;
}
