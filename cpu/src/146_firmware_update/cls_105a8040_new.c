/* @k10d cls_105a8040_new @ 0x104678e4
 * name: verified (structural evidence: heap_alloc(0x294) when NULL; stores vtable 0x105a8040; returns param_1)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8040 (vtable 0x105a8040, 0x294 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x294) when NULL; stores vtable 0x105a8040; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a8040_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x294), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    *param_1 = 0x105a8040/*ROM*/;
    heap_alloc_one_byte_1045926e((int)(param_1 + 0x81));
    zero_init_eight_byte_buffer((void *)((int)param_1 + 0x205));
    init_0x24_byte_array(param_1 + 0x84);
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    *(uint16_t *)(param_1 + 0x94) = 0;
    *(uint16_t *)((int)param_1 + 0x252) = 0;
    param_1[0x95] = 0;
    *(uint16_t *)(param_1 + 0x96) = 0;
    *(uint16_t *)((int)param_1 + 0x25a) = 0;
    param_1[0x97] = 0;
    *(uint16_t *)(param_1 + 0x98) = 0;
    *(uint16_t *)((int)param_1 + 0x262) = 0;
    iVar1 = 0;
    iVar2 = 0x3f;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 5) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 6) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 7) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    iVar1 = 0;
    iVar2 = 0x3f;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x104) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x105) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x106) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x107) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
  }
  return param_1;
}
