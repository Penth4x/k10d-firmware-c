/* @k10d construct_large_camera_object @ 0x10506452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 267_test_mode_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t * construct_large_camera_object(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStack_1c [16];
  
  puVar4 = auStack_1c;
  puVar5 = auStack_1c;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x530), puVar5 = puVar4, param_1 != (uint32_t *)0x0)) {
    cls_105a6d8c_new(param_1);
    cls_105a6abc_new(param_1 + 7);
    cls_105a6cfc_new(param_1 + 0xc);
    cls_105a6ef4_new(param_1 + 0x1f);
    cls_105a6f3c_new(param_1 + 0x27);
    cls_105a6f84_new(param_1 + 0x29);
    cls_105a6d44_new(param_1 + 0x2c);
    cls_105a6dd4_new(param_1 + 0x31);
    cls_105a6e1c_new(param_1 + 0x36);
    cls_105a6b04_new(param_1 + 0x3b);
    cls_105a705c_new(param_1 + 0x3f);
    cls_105a6e64_new(param_1 + 0x43);
    cls_105a6eac_new(param_1 + 0x45);
    cls_105a6c24_new(param_1 + 0x47);
    cls_105a6c6c_new(param_1 + 0x50);
    initialize_lens_update_object(param_1 + 0x59,0x344);
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(param_1 + 0x12a),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],
                 puVar5[0xb],puVar5[0xf]);
    cls_105a5d5c_new(param_1 + 300);
    cls_105a70a4_new(param_1 + 0x12f);
    param_1[0x131] = 0;
    param_1[0x132] = 0;
    param_1[0x133] = 0;
    param_1[0x134] = 0;
    param_1[0x135] = 0;
    *(uint16_t *)(param_1 + 0x136) = 0;
    *(uint16_t *)((int)param_1 + 0x4da) = 0;
    *(uint16_t *)(param_1 + 0x137) = 0;
    *(uint16_t *)((int)param_1 + 0x4de) = 0;
    *(uint16_t *)(param_1 + 0x138) = 0;
    *(uint16_t *)((int)param_1 + 0x4e2) = 0;
    *(uint16_t *)(param_1 + 0x139) = 0x1800;
    *(uint8_t *)((int)param_1 + 0x4e6) = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    param_1[0x13e] = 0;
    param_1[0x13f] = 0;
    param_1[0x140] = 0;
    param_1[0x141] = 0;
    param_1[0x142] = 0;
    *(uint8_t *)(param_1 + 0x143) = 0;
    pvVar3 = (void *)heap_alloc((void *)0x40);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      initialize_lens_update_object(pvVar3,0x40);
    }
    param_1[0x134] = (uint32_t)(uintptr_t)pvVar3;
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x510) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x514) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x518) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x51c) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
