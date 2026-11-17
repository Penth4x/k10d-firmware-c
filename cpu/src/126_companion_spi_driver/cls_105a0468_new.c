/* @k10d cls_105a0468_new @ 0x1043b9bc
 * name: verified (structural evidence: heap_alloc(0x248) when NULL; stores vtable 0x105a0468; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0468 (vtable 0x105a0468, 0x248 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x248) when NULL; stores vtable 0x105a0468; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a0468_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x248), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105a0468/*ROM*/;
    cls_105a2be0_new(param_1 + 0x78);
    cls_105a2be0_new(param_1 + 0x7a);
    cls_105a2be0_new(param_1 + 0x7c);
    cls_105a2be0_new(param_1 + 0x7e);
    cls_105a2be0_new(param_1 + 0x80);
    cls_105a2be0_new(param_1 + 0x82);
    cls_105a2be0_new(param_1 + 0x84);
    cls_105a2be0_new(param_1 + 0x86);
    cls_105a2be0_new(param_1 + 0x88);
    iVar1 = 0;
    iVar2 = 0x74;
    do {
      iVar3 = iVar2;
      *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 8) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc) = 0;
      iVar2 = iVar3 + -3;
      iVar1 = iVar1 + 0xc;
    } while (-1 < iVar2);
    iVar3 = iVar3 + -1;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 4) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar3);
    *(uint8_t *)(param_1 + 0x8a) = 0;
    *(uint8_t *)((int)param_1 + 0x229) = 0x70;
    *(uint8_t *)((int)param_1 + 0x22a) = 0xef;
    *(uint8_t *)((int)param_1 + 0x22b) = 0xff;
    *(uint8_t *)(param_1 + 0x8b) = 0x7f;
    *(uint8_t *)((int)param_1 + 0x22d) = 0xfe;
    *(uint8_t *)((int)param_1 + 0x22e) = 0xe0;
    *(uint8_t *)((int)param_1 + 0x22f) = 0x1f;
    *(uint8_t *)(param_1 + 0x8c) = 0x7e;
    *(uint8_t *)((int)param_1 + 0x231) = 5;
    *(uint8_t *)((int)param_1 + 0x232) = 0xff;
    *(uint8_t *)((int)param_1 + 0x233) = 0xff;
    *(uint8_t *)(param_1 + 0x8d) = 0xf3;
    *(uint8_t *)((int)param_1 + 0x235) = 0xff;
    *(uint8_t *)((int)param_1 + 0x236) = 0xff;
    *(uint8_t *)((int)param_1 + 0x237) = 1;
    *(uint8_t *)(param_1 + 0x8e) = 0;
    *(uint8_t *)((int)param_1 + 0x239) = 0xf;
    *(uint8_t *)((int)param_1 + 0x23a) = 0xf7;
    *(uint8_t *)((int)param_1 + 0x23b) = 0;
    *(uint8_t *)(param_1 + 0x8f) = 0;
    *(uint8_t *)((int)param_1 + 0x23d) = 0xec;
    *(uint8_t *)((int)param_1 + 0x23e) = 0x10;
    *(uint8_t *)((int)param_1 + 0x23f) = 0;
    *(uint8_t *)(param_1 + 0x90) = 0xfe;
    *(uint8_t *)((int)param_1 + 0x241) = 4;
    *(uint8_t *)((int)param_1 + 0x242) = 0;
    *(uint8_t *)((int)param_1 + 0x243) = 0;
    *(uint8_t *)(param_1 + 0x91) = 0;
    *(uint8_t *)((int)param_1 + 0x245) = 0;
    *(uint8_t *)((int)param_1 + 0x246) = 0;
    *(uint8_t *)((int)param_1 + 0x247) = 0;
  }
  return param_1;
}
