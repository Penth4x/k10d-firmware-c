/* @k10d construct_large_camera_object @ 0x10506452
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 267_test_mode_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_105a6d8c * construct_large_camera_object(cls_105a6d8c *param_1)

{
  int iVar1;
  int iVar2;
  void *puVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStack_1c [16];
  
  puVar4 = auStack_1c;
  puVar5 = auStack_1c;
  if ((param_1 != (cls_105a6d8c *)0x0) ||
     (param_1 = (cls_105a6d8c *)heap_alloc((void *)0x530), puVar5 = puVar4, param_1 != (cls_105a6d8c *)0x0))
  {
    cls_105a6d8c_new(param_1);
    cls_105a6abc_new((cls_105a6abc *)(param_1 + 7));
    cls_105a6cfc_new((cls_105a6cfc *)(param_1 + 0xc));
    cls_105a6ef4_new((cls_105a6ef4 *)(param_1 + 0x1f));
    cls_105a6f3c_new((cls_105a6f3c *)(param_1 + 0x27));
    cls_105a6f84_new((cls_105a6f84 *)(param_1 + 0x29));
    cls_105a6d44_new((cls_105a6d44 *)(param_1 + 0x2c));
    cls_105a6dd4_new((cls_105a6dd4 *)(param_1 + 0x31));
    cls_105a6e1c_new((cls_105a6e1c *)(param_1 + 0x36));
    cls_105a6b04_new((cls_105a6b04 *)(param_1 + 0x3b));
    cls_105a705c_new((cls_105a705c *)(param_1 + 0x3f));
    cls_105a6e64_new((cls_105a6e64 *)(param_1 + 0x43));
    cls_105a6eac_new((cls_105a6eac *)(param_1 + 0x45));
    cls_105a6c24_new((cls_105a6c24 *)(param_1 + 0x47));
    cls_105a6c6c_new((cls_105a6c6c *)(param_1 + 0x50));
    initialize_lens_update_object(param_1 + 0x59,0x344);
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(param_1 + 0x12a),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],
                 puVar5[0xb],puVar5[0xf]);
    cls_105a5d5c_new((cls_105a5d5c *)(param_1 + 300));
    cls_105a70a4_new((cls_105a70a4 *)(param_1 + 0x12f));
    param_1[0x131].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x132].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x133].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x134].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x135].field_0x0 = (uintptr_t)((void *)0x0);
    *(uint16_t *)&param_1[0x136].field_0x0 = 0;
    *(uint16_t *)((int)&param_1[0x136].field_0x0 + 2) = 0;
    *(uint16_t *)&param_1[0x137].field_0x0 = 0;
    *(uint16_t *)((int)&param_1[0x137].field_0x0 + 2) = 0;
    *(uint16_t *)&param_1[0x138].field_0x0 = 0;
    *(uint16_t *)((int)&param_1[0x138].field_0x0 + 2) = 0;
    *(uint16_t *)&param_1[0x139].field_0x0 = 0x1800;
    *(uint8_t *)((int)&param_1[0x139].field_0x0 + 2) = 0;
    param_1[0x13a].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x13b].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x13c].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x13d].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x13e].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x13f].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x140].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x141].field_0x0 = (uintptr_t)((void *)0x0);
    param_1[0x142].field_0x0 = (uintptr_t)((void *)0x0);
    *(uint8_t *)&param_1[0x143].field_0x0 = 0;
    puVar3 = (void *)heap_alloc((void *)0x40);
    if (puVar3 == 0) {
      puVar3 = (void *)0x0;
    }
    else {
      initialize_lens_update_object(puVar3,0x40);
    }
    param_1[0x134].field_0x0 = (uintptr_t)(puVar3);
    iVar2 = 1;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)&param_1[0x144].field_0x0 + iVar1) = 0;
      *(uint32_t *)((int)&param_1[0x145].field_0x0 + iVar1) = 0;
      *(uint32_t *)((int)&param_1[0x146].field_0x0 + iVar1) = 0;
      *(uint32_t *)((int)&param_1[0x147].field_0x0 + iVar1) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return param_1;
}
