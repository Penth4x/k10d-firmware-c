/* @k10d cls_1062112c_new @ 0x10535a46
 * name: verified (structural evidence: heap_alloc(0x70) when NULL; stores vtable 0x1062112c; returns param_1)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1062112c (vtable 0x1062112c, 0x70 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x70) when NULL; stores vtable 0x1062112c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1062112c_new(uint8_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x70), param_1 != (uint8_t *)0x0)) {
    *(void **)(param_1 + 0x6c) = &DAT_1062112c;
    iVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 1;
    param_1[0x1c] = 1;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *(uint16_t *)(param_1 + 0x20) = 0;
    *(uint16_t *)(param_1 + 0x22) = 0;
    *(uint32_t *)(param_1 + 0x24) = 0;
    *(uint32_t *)(param_1 + 0x28) = 0;
    *(uint16_t *)(param_1 + 0x2c) = 0x20;
    *(uint16_t *)(param_1 + 0x2e) = 0x20;
    *(uint16_t *)(param_1 + 0x30) = 0;
    *(uint16_t *)(param_1 + 0x32) = 0;
    *(uint16_t *)(param_1 + 0x34) = 8;
    *(uint16_t *)(param_1 + 0x36) = 0;
    *(uint16_t *)(param_1 + 0x38) = 0;
    *(uint16_t *)(param_1 + 0x3a) = 0;
    *(uint16_t *)(param_1 + 0x3c) = 0;
    *(uint16_t *)(param_1 + 0x3e) = 0;
    *(uint16_t *)(param_1 + 0x40) = 0;
    iVar2 = 1;
    do {
      *(uint32_t *)(param_1 + iVar1 + 0x44) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x48) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x4c) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x50) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x54) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar2);
  }
  return;
}
