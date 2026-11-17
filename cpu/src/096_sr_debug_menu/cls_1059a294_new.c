/* @k10d cls_1059a294_new @ 0x1040c3d4
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x1059a294; returns param_1)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059a294 (vtable 0x1059a294, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x1059a294; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059a294_new(uint32_t *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e478_new(param_1);
    *param_1 = 0x1059a294/*ROM*/;
    pvVar1 = (void *)get_system_heap();
    uVar2 = mempool_get_block(pvVar1,(void *)0x465000,1);
    param_1[1] = uVar2;
    pvVar1 = (void *)get_system_heap();
    uVar2 = mempool_get_block(pvVar1,(void *)0x54600,1);
    param_1[2] = uVar2;
    param_1[3] = 0;
    param_1[4] = 0;
    cls_105a2af8_new(param_1 + 5);
    iVar3 = get_or_create_singleton_object_104fb12e();
    param_1[3] = *(uint32_t *)(iVar3 + 0x18);
    param_1[4] = *(uint32_t *)(iVar3 + 100);
    wait_flg_obj(param_1 + 5,0);
  }
  return param_1;
}
