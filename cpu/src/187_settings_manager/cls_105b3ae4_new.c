/* @k10d cls_105b3ae4_new @ 0x1048a932
 * name: verified (structural evidence: heap_alloc(0x124) when NULL; stores vtable 0x105b3ae4; returns param_1)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3ae4 (vtable 0x105b3ae4, 0x124 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x124) when NULL; stores vtable 0x105b3ae4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3ae4_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x124), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    param_1[0x12] = (uint32_t)&DAT_105b3ae4/*ROM*/;
    param_1[0x13] = 0;
    *(uint8_t *)(param_1 + 0x47) = 0;
    *(uint8_t *)((int)param_1 + 0x11d) = 0;
    *(uint8_t *)((int)param_1 + 0x11e) = 0;
    *(uint8_t *)((int)param_1 + 0x11f) = 0;
    *(uint8_t *)(param_1 + 0x48) = 0;
    *(uint8_t *)((int)param_1 + 0x121) = 0;
    *(uint8_t *)((int)param_1 + 0x122) = 0;
    *(uint8_t *)((int)param_1 + 0x123) = 0;
    iVar2 = initialize_singleton_object_1045d6a0();
    param_1[0x13] = *(uint32_t *)(iVar2 + 0x1c);
    iVar1 = 0x10;
    iVar2 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar2 + 0x50) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x54) = 0;
      *(uint32_t *)((int)param_1 + iVar2 + 0x58) = 0;
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 0xc;
    } while (-1 < iVar1);
  }
  return (int)param_1;
}
