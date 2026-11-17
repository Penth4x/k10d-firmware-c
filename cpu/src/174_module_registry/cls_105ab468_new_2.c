/* @k10d cls_105ab468_new_2 @ 0x10480b00
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105ab468; returns param_1)
 * unit: 174_module_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab468 (vtable 0x105ab468, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105ab468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab468_new_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) || (param_1 = heap_alloc((void *)0x20), param_1 != 0)) {
    *(void **)(param_1 + 0x1c) = &DAT_105ab468/*ROM*/;
    *(uint8_t *)(param_1 + 0xd) = *(uint8_t *)(param_2 + 0xd);
    *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(param_2 + 0x10);
    *(uint16_t *)(param_1 + 0x14) = *(uint16_t *)(param_2 + 0x14);
    *(uint8_t *)(param_1 + 0x16) = *(uint8_t *)(param_2 + 0x16);
    *(uint8_t *)(param_1 + 0x17) = *(uint8_t *)(param_2 + 0x17);
    *(uint8_t *)(param_1 + 0x18) = *(uint8_t *)(param_2 + 0x18);
    *(uint8_t *)(param_1 + 0x19) = *(uint8_t *)(param_2 + 0x19);
    *(uint8_t *)(param_1 + 0x1a) = *(uint8_t *)(param_2 + 0x1a);
    *(uint8_t *)(param_1 + 0x1b) = *(uint8_t *)(param_2 + 0x1b);
    iVar1 = 0;
    iVar3 = 3;
    do {
      *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + param_2);
      iVar2 = iVar1 + 2;
      *(uint8_t *)(iVar1 + 1 + param_1) = *(uint8_t *)(iVar1 + 1 + param_2);
      iVar1 = iVar1 + 3;
      iVar3 = iVar3 + -1;
      *(uint8_t *)(iVar2 + param_1) = *(uint8_t *)(iVar2 + param_2);
    } while (-1 < iVar3);
    *(uint8_t *)(iVar1 + param_1) = *(uint8_t *)(iVar1 + param_2);
  }
  return;
}
