/* @k10d cls_105b3cdc_new_2 @ 0x1048c48e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3cdc (vtable 0x105b3cdc, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105b3cdc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3cdc_new_2(uint16_t *param_1,int param_2,uint32_t param_3,uint32_t param_4,
                       uint8_t param_5,uint8_t param_6)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x24), param_1 != (uint16_t *)0x0)) {
    *(void **)(param_1 + 0x10) = &DAT_105b3cdc/*ROM*/;
    *param_1 = ((uint16_t)((uint64_t)(param_3) >> 16));
    param_1[1] = ((uint16_t)((uint64_t)(param_4) >> 16));
    iVar2 = 0x14;
    do {
      iVar1 = iVar2 + -4;
      *(uint32_t *)((int)param_1 + iVar2) = *(uint32_t *)(iVar1 + param_2);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    *(uint8_t *)(param_1 + 0xc) = param_5;
    *(uint8_t *)((int)param_1 + 0x19) = param_6;
    *(uint32_t *)(param_1 + 0xe) = 0;
  }
  return;
}
