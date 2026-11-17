/* @k10d cls_1059be70_new @ 0x1040f6f6
 * name: verified (structural evidence: heap_alloc(0x288) when NULL; stores vtable 0x1059be70; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059be70 (vtable 0x1059be70, 0x288 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x288) when NULL; stores vtable 0x1059be70; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059be70_new(uint32_t *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x288), param_1 != (uint32_t *)0x0)) {
    puVar2 = param_1;
    if ((param_1 != (uint32_t *)0x0) ||
       (puVar2 = (uint32_t *)heap_alloc((void *)0x10), puVar2 != (uint32_t *)0x0)) {
      cls_1059e2e0_new(puVar2);
      puVar2[1] = 0x1059bcc8/*ROM*/;
      puVar2[2] = 0x1059be38/*ROM*/;
    }
    param_1[1] = 0x1059be70/*ROM*/;
    param_1[2] = 0x1059bfe8/*ROM*/;
    param_1[4] = 1;
    *(uint8_t *)(param_1 + 8) = 0;
    *(uint8_t *)((int)param_1 + 0x21) = 0;
    *(uint8_t *)((int)param_1 + 0x22) = 0;
    alloc_and_zero_struct_1040f68a(param_1 + 9);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
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
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    cls_105a2af8_new(param_1 + 0x1d);
    *(uint8_t *)(param_1 + 0x1f) = 0;
    *(uint8_t *)((int)param_1 + 0x7d) = 0;
    *(uint16_t *)((int)param_1 + 0x7e) = 0;
    *(uint16_t *)(param_1 + 0x20) = 0;
    *(uint16_t *)((int)param_1 + 0x82) = 0;
    *(uint16_t *)(param_1 + 0x21) = 0;
    *(uint16_t *)((int)param_1 + 0x86) = 0;
    *(uint16_t *)(param_1 + 0x22) = 0;
    *(uint16_t *)((int)param_1 + 0x8a) = 0;
    *(uint16_t *)(param_1 + 0x23) = 0;
    *(uint16_t *)((int)param_1 + 0x8e) = 0;
    *(uint16_t *)(param_1 + 0x24) = 0;
    *(uint16_t *)((int)param_1 + 0x92) = 0;
    *(uint16_t *)(param_1 + 0x25) = 0;
    *(uint16_t *)((int)param_1 + 0x96) = 0;
    *(uint16_t *)(param_1 + 0x26) = 0;
    *(uint16_t *)((int)param_1 + 0x9a) = 0x17f;
    *(uint16_t *)(param_1 + 0x27) = 0x17f;
    *(uint8_t *)((int)param_1 + 0x9e) = 0;
    *(uint8_t *)((int)param_1 + 0x9f) = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *(uint16_t *)(param_1 + 0x2a) = 0;
    *(uint16_t *)((int)param_1 + 0xaa) = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    *(uint8_t *)(param_1 + 0x2f) = 0;
    *(uint8_t *)((int)param_1 + 0xbd) = 0;
    *(uint8_t *)((int)param_1 + 0xbe) = 0;
    *(uint8_t *)((int)param_1 + 0xbf) = 0;
    *(uint8_t *)(param_1 + 0x30) = 0;
    *(uint8_t *)((int)param_1 + 0xc1) = 0;
    *(uint8_t *)((int)param_1 + 0xc2) = 0;
    *(uint8_t *)((int)param_1 + 0xc3) = 1;
    *(uint8_t *)(param_1 + 0x31) = 0;
    *(uint8_t *)((int)param_1 + 0xc5) = 1;
    *(uint8_t *)((int)param_1 + 0xc6) = 0;
    *(uint8_t *)((int)param_1 + 199) = 0;
    *(uint16_t *)(param_1 + 0x32) = 0x30;
    *(uint16_t *)((int)param_1 + 0xca) = 0x3100;
    *(uint16_t *)(param_1 + 0x33) = 8;
    *(uint8_t *)((int)param_1 + 0xce) = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x17) = 0;
    *(uint8_t *)((int)param_1 + 0x15) = 0;
    *(uint8_t *)(param_1 + 6) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    *(uint8_t *)((int)param_1 + 0x19) = 0;
    *(uint8_t *)((int)param_1 + 0x1a) = 0;
    *(uint8_t *)((int)param_1 + 0x1b) = 0;
    *(uint8_t *)(param_1 + 7) = 0;
    *(uint8_t *)((int)param_1 + 0x1d) = 0;
    *(uint8_t *)((int)param_1 + 0x1e) = 0;
    *(uint8_t *)((int)param_1 + 0x1f) = 0;
    iVar1 = 0x15;
    iVar3 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar3 + 0xd0) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0xd4) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0xd8) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0xdc) = 0;
      *(uint32_t *)((int)param_1 + iVar3 + 0xe0) = 0;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 0x14;
    } while (-1 < iVar1);
    *(uint16_t *)((int)param_1 + 0x7e) = 0xc2b;
    *(uint16_t *)(param_1 + 0x20) = 0xa3;
    *(uint16_t *)((int)param_1 + 0x82) = 0x8c2;
    *(uint16_t *)(param_1 + 0x21) = 0x9eb;
    *(uint16_t *)((int)param_1 + 0x86) = 0x77c;
    *(uint16_t *)(param_1 + 0x22) = 0xf1d;
    *(uint16_t *)((int)param_1 + 0x8a) = 0x906;
    *(uint16_t *)(param_1 + 0x23) = 0x946;
    *(uint16_t *)(param_1 + 0x24) = 0x946;
    *(uint16_t *)((int)param_1 + 0x92) = 0x9c7;
    *(uint16_t *)(param_1 + 0x26) = 0x6a5;
    *(uint16_t *)((int)param_1 + 0x96) = 0x6a5;
  }
  return param_1;
}
