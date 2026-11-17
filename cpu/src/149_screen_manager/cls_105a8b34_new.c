/* @k10d cls_105a8b34_new @ 0x1046b3ca
 * name: verified (structural evidence: heap_alloc(0x1bc) when NULL; stores vtable 0x105a8b34; returns param_1)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8b34 (vtable 0x105a8b34, 0x1bc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1bc) when NULL; stores vtable 0x105a8b34; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a8b34_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1bc), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e458_new(param_1 + 1);
    cls_105a2c1c_new(param_1 + 2);
    *param_1 = 0x105a8b34/*ROM*/;
    param_1[1] = 0x105a8b74/*ROM*/;
    param_1[6] = 0x105a8b94/*ROM*/;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    *(uint8_t *)(param_1 + 0x1d) = 1;
    cls_105a8a1c_new(param_1 + 0x1e);
    param_1[0x2e] = 0;
    get_lens_fw_update_status();
    get_lens_fw_update_status();
    get_lens_fw_update_status();
    cls_105a2be0_new(param_1 + 0x6b);
    cls_105a2af8_new(param_1 + 0x6d);
    iVar1 = 0;
    iVar2 = 2;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x1c) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2b) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x3a) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x49) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x1d) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2c) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x3b) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x4a) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x1e) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2d) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x3c) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x4b) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x1f) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2e) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x3d) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x4c) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x20) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x2f) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x3e) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x4d) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 5;
    } while (-1 < iVar2);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  return param_1;
}
