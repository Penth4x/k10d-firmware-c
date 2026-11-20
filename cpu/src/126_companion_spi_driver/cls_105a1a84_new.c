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

int cls_105a1a84_new(cls_105a1a84 *param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a1a84 *)0x0) ||
     (param_1 = (cls_105a1a84 *)heap_alloc((void *)0x3cc), param_1 != (cls_105a1a84 *)0x0)) {
    cls_105a1798_new((cls_105a1798 *)param_1,param_2);
    param_1->field_0x4 = 0x105a1a84/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105a1b04/*ROM*/;
    param_1->field_0xdc = 0;
    param_1->field_0xdd = 0;
    param_1->field_0xde = 1;
    param_1->field_0xe0 = 0;
    param_1->field_0xe4 = 0;
    param_1->field_0xe8 = 0;
    param_1->field_0xec = 0;
    param_1->field_0xf0 = 1;
    param_1->field_0xf2 = 0;
    param_1->field_0xf4 = 0;
    param_1->field_0xf6 = 0;
    param_1->field_0xf7 = 0;
    param_1->field_0xf8 = 0;
    param_1->field_0xfc = 0;
    param_1->field_0x100 = 0;
    param_1->field_0x104 = 0;
    param_1->field_0x108 = 0;
    param_1->field_0x10c = 0;
    param_1->field_0x110 = 0;
    *(uint32_t *)&param_1->field_0x114 = 0;
    param_1->field_0x118 = 0;
    param_1->field_0x11c = 0;
    param_1->field_0x120 = 0;
    cls_105c2120_new((cls_105c2120 *)&param_1->field_0x124);
    param_1->field_0x15a = 0;
    iVar1 = 0;
    iVar2 = 0x10;
    do {
      (&param_1->field_0x138)[iVar1] = 0;
      (&param_1->field_0x139)[iVar1] = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 2;
    } while (-1 < iVar2);
    param_1->field_0x15c = 0;
    param_1->field_0x160 = 1;
    init_four_byte_struct(&param_1->field_0x161);
    zero_initialize_16_bytes_1044b964(&param_1->field_0x165);
    zero_init_eight_byte_struct(&param_1->field_0x175);
    zero_initialize_16_bytes_1044ba70(&param_1->field_0x17d);
    initialize_lens_update_object(&param_1->field_0x190,4);
    alloc_and_zero_16_bytes_10446ee2(&param_1->field_0x194);
    alloc_and_zero_16_bytes_10446ff8(&param_1->field_0x1a4);
    alloc_and_init_512_bytes(&param_1->field_0x1b4);
    param_1->field_0x3c4 = 0;
    param_1->field_0x3c8 = 0;
    param_1->field_0x3b4 = 0;
    param_1->field_0x3b6 = 0;
    param_1->field_0x3b8 = 0;
    param_1->field_0x3bc = 0;
    param_1->field_0x3c0 = 0;
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)((int)&param_1->field_0x18 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19d8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x20 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19e0/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x28 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19e8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x30 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19f0/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x38 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19f8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x40 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a00/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x48 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a08/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x50 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a10/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x58 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a18/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x60 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a20/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x68 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a28/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x70 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x78 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a38/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x80 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a40/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x88 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a48/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x90 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a50/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0x98 + iVar1) = *(uint32_t *)(iVar1 + 0x105a19f8/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xa0 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a58/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xa8 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a20/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xb0 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xb8 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a60/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xc0 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a68/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xc8 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a30/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    iVar1 = 8;
    do {
      iVar2 = iVar1 + -4;
      *(uint32_t *)(&param_1->field_0xd0 + iVar1) = *(uint32_t *)(iVar1 + 0x105a1a70/*ROM*/);
      iVar1 = iVar2;
    } while (iVar2 != 0);
  }
  return (int)param_1;
}
