/* @k10d cls_105b4dac_new @ 0x10494c28
 * name: verified (structural evidence: heap_alloc(0xb4) when NULL; stores vtable 0x105b4dac; returns param_1)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b4dac (vtable 0x105b4dac, 0xb4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xb4) when NULL; stores vtable 0x105b4dac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b4dac_new(uint32_t *param_1,void *param_2,uint8_t param_3,uint32_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xb4), param_1 != (uint32_t *)0x0)) {
    cls_105b44b4_new(param_1);
    param_1[3] = (uint32_t)&DAT_105b4dac/*ROM*/;
    param_1[0x1f] = 0;
    iVar3 = 8;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)((int)param_1 + iVar3 + 0x7c) = *(uint32_t *)(iVar2 + (int)param_2);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    iVar3 = 8;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)((int)param_1 + iVar3 + 0x84) = *(uint32_t *)((int)param_2 + iVar3 + 4);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    allocate_and_init_widget(param_1 + 0x24);
    *(uint8_t *)(param_1 + 0x28) = param_3;
    param_1[0x29] = *param_4;
    param_1[0x2a] = param_4[1];
    *(uint8_t *)(param_1 + 0x2b) = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    uVar1 = get_or_init_singleton_10491684();
    param_1[0x2c] = uVar1;
  }
  return (int)param_1;
}
