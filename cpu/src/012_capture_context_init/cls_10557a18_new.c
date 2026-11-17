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

uint32_t * cls_10557a18_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x140), param_1 != (uint32_t *)0x0)) {
    cls_10557c88_new(param_1);
    *param_1 = (uint32_t)&DAT_10557a18/*ROM*/;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint16_t *)((int)param_1 + 0x16) = 0;
    *(uint16_t *)(param_1 + 6) = 0;
    init_0x50_byte_object_1051e840((void *)(param_1 + 7));
    cls_10558e74_new(param_1 + 0x1b);
    param_1[0x45] = 0;
    cls_105aae94_new(param_1 + 0x46);
    iVar1 = 0;
    param_1[0x4f] = 0;
    iVar2 = 1;
    do {
      *(uint16_t *)((int)param_1 + iVar1 + 0x130) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x132) = 0;
      *(uint16_t *)((int)param_1 + iVar1 + 0x134) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 6;
    } while (-1 < iVar2);
  }
  return param_1;
}
