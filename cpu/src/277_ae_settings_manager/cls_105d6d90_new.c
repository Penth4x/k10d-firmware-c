/* @k10d cls_105d6d90_new @ 0x1051d6aa
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x105d6d90; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6d90 (vtable 0x105d6d90, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x105d6d90; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6d90_new(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x70), param_1 != (void *)0x0)) {
    *(void **)((int)param_1 + 0x6c) = &DAT_105d6d90/*ROM*/;
    *(uint16_t *)((int)param_1 + 0x68) = 0xffff;
    *(uint8_t *)((int)param_1 + 0x6a) = 0xff;
    iVar1 = 0xc;
    iVar2 = 0;
    do {
      *(uint32_t *)(iVar2 + (int)param_1) = 0;
      *(uint32_t *)(iVar2 + 4 + (int)param_1) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 8;
    } while (-1 < iVar1);
    *(uint32_t *)((int)param_1 + 100) = 0xfffffffe;
  }
  return;
}
