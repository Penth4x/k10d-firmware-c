/* @k10d cls_105a8a1c_new @ 0x1046b092
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105a8a1c; returns param_1)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a8a1c (vtable 0x105a8a1c, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105a8a1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a8a1c_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_105b40c4_new(param_1);
    *param_1 = (uint32_t)&DAT_105a8a1c/*ROM*/;
    iVar1 = 0;
    iVar2 = 2;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 4) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x13) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x22) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x31) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 5) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x14) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x23) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x32) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 6) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x15) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x24) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x33) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 7) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x16) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x25) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x34) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 8) = 0xff;
      *(uint8_t *)((int)param_1 + iVar1 + 0x17) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x26) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x35) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 5;
    } while (-1 < iVar2);
  }
  return param_1;
}
