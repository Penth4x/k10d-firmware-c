/* @k10d cls_105b2e98_new @ 0x104866d2
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x105b2e98; returns param_1)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b2e98 (vtable 0x105b2e98, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x105b2e98; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b2e98_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    param_1[0x12] = (uint32_t)&DAT_105b2e98/*ROM*/;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 0xc) = 0;
    *(uint8_t *)((int)param_1 + 0x31) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    iVar2 = get_or_create_singleton_object_10470d84();
    *param_1 = *(uint32_t *)(iVar2 + 4);
    iVar2 = get_sensor_singleton();
    param_1[1] = *(uint32_t *)(iVar2 + 4);
    iVar1 = 1;
    iVar2 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar2 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0xc) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x10) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x14) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x18) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0x14;
    } while (-1 < iVar1);
    set_two_fields_to_four((int)param_1);
  }
  return param_1;
}
