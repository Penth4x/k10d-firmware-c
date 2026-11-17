/* @k10d cls_105a1a84_new @ 0x10447436
 * name: verified (structural evidence: heap_alloc(0x3cc) when NULL; stores vtable 0x105a1a84; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a1a84 (vtable 0x105a1a84, 0x3cc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3cc) when NULL; stores vtable 0x105a1a84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a1a84_new(uint32_t *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x3cc), param_1 != (uint32_t *)0x0)) {
    cls_105a1798_new(param_1,param_2);
    param_1[1] = 0x105a1a84/*ROM*/;
    param_1[2] = 0x105a1b04/*ROM*/;
    *(uint8_t *)(param_1 + 0x37) = 0;
    *(uint8_t *)((int)param_1 + 0xdd) = 0;
    *(uint8_t *)((int)param_1 + 0xde) = 1;
    *(uint16_t *)(param_1 + 0x38) = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    *(uint8_t *)(param_1 + 0x3c) = 1;
    *(uint16_t *)((int)param_1 + 0xf2) = 0;
    *(uint16_t *)(param_1 + 0x3d) = 0;
    *(uint8_t *)((int)param_1 + 0xf6) = 0;
    *(uint8_t *)((int)param_1 + 0xf7) = 0;
    *(uint8_t *)(param_1 + 0x3e) = 0;
    param_1[0x3f] = 0;
    *(uint16_t *)(param_1 + 0x40) = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    cls_105c2120_new(param_1 + 0x49);
    *(uint8_t *)((int)param_1 + 0x15a) = 0;
    iVar1 = 0;
    iVar2 = 0x10;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x138) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x139) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 2;
    } while (-1 < iVar2);
    param_1[0x57] = 0;
    *(uint8_t *)(param_1 + 0x58) = 1;
    init_four_byte_struct((void *)((int)param_1 + 0x161));
    zero_initialize_16_bytes_1044b964((void *)((int)param_1 + 0x165));
    zero_init_eight_byte_struct((void *)((int)param_1 + 0x175));
    zero_initialize_16_bytes_1044ba70((void *)((int)param_1 + 0x17d));
    initialize_lens_update_object(param_1 + 100,4);
    alloc_and_zero_16_bytes_10446ee2((void *)(param_1 + 0x65));
    alloc_and_zero_16_bytes_10446ff8((void *)(param_1 + 0x69));
    alloc_and_init_512_bytes(param_1 + 0x6d);
    param_1[0xf1] = 0;
    param_1[0xf2] = 0;
    param_1[0xed] = 0;
    param_1[0xee] = 0;
    param_1[0xef] = 0;
    param_1[0xf0] = 0;
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x18) = *(uint32_t *)(iVar1 + 0x105a19d8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x20) = *(uint32_t *)(iVar1 + 0x105a19e0/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x28) = *(uint32_t *)(iVar1 + 0x105a19e8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x30) = *(uint32_t *)(iVar1 + 0x105a19f0/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x38) = *(uint32_t *)(iVar1 + 0x105a19f8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x40) = *(uint32_t *)(iVar1 + 0x105a1a00/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x48) = *(uint32_t *)(iVar1 + 0x105a1a08/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x50) = *(uint32_t *)(iVar1 + 0x105a1a10/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x58) = *(uint32_t *)(iVar1 + 0x105a1a18/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x60) = *(uint32_t *)(iVar1 + 0x105a1a20/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x68) = *(uint32_t *)(iVar1 + 0x105a1a28/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x70) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x78) = *(uint32_t *)(iVar1 + 0x105a1a38/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x80) = *(uint32_t *)(iVar1 + 0x105a1a40/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x88) = *(uint32_t *)(iVar1 + 0x105a1a48/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x90) = *(uint32_t *)(iVar1 + 0x105a1a50/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0x98) = *(uint32_t *)(iVar1 + 0x105a19f8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xa0) = *(uint32_t *)(iVar1 + 0x105a1a58/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xa8) = *(uint32_t *)(iVar1 + 0x105a1a20/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xb0) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xb8) = *(uint32_t *)(iVar1 + 0x105a1a60/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xc0) = *(uint32_t *)(iVar1 + 0x105a1a68/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 200) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)param_1 + iVar1 + 0xd0) = *(uint32_t *)(iVar1 + 0x105a1a70/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return (int)param_1;
}
