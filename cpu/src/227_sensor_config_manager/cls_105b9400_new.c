/* @k10d cls_105b9400_new @ 0x104c23b4
 * name: verified (structural evidence: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9400 (vtable 0x105b9400, 0x1dc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1dc) when NULL; stores vtable 0x105b9400; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t * cls_105b9400_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStack_24 [16];
  
  puVar4 = auStack_24;
  puVar5 = auStack_24;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1dc), puVar5 = puVar4, param_1 != (uint32_t *)0x0)) {
    param_1[0x76] = (uint32_t)&DAT_105b9400/*ROM*/;
    *param_1 = 0xffffffff;
    *(uint16_t *)(param_1 + 1) = 0;
    *(uint16_t *)((int)param_1 + 6) = 0;
    param_1[2] = 0xffffffff;
    *(uint8_t *)((int)param_1 + 0x19) = 0;
    param_1[7] = 0;
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(param_1 + 8),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],puVar5[0xb]
                 ,puVar5[0xf]);
    *(uint8_t *)(param_1 + 10) = 0;
    param_1[0xb] = 0;
    *(uint8_t *)(param_1 + 0xc) = 0;
    get_lens_fw_update_status();
    puVar5[3] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[0xf] = 0;
    alloc_and_init_small_struct_1045c524((uint16_t *)(param_1 + 0x73),(uint)_DAT_105a5c18/*ROM*/,1,1,puVar5[3],puVar5[7],
                 puVar5[0xb],puVar5[0xf]);
    *(uint16_t *)(param_1 + 0x75) = 0;
    *(uint8_t *)((int)param_1 + 0x1d6) = 0;
    *(uint8_t *)((int)param_1 + 0x1d7) = 0;
    iVar3 = 3;
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      *(uint8_t *)((int)param_1 + iVar2 + 0xc) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0xd) = 0;
      *(uint8_t *)((int)param_1 + iVar2 + 0xe) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar2 + 3;
    } while (-1 < iVar3);
    *(uint8_t *)((int)param_1 + iVar2 + 0xf) = 0;
    *(uint8_t *)((int)param_1 + 0x31) = 0;
    *(uint8_t *)((int)param_1 + 0x32) = 0;
    *(uint8_t *)((int)param_1 + 0x33) = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    iVar3 = 8;
    iVar1 = 0;
    do {
      *(uint32_t *)((int)param_1 + iVar1 + 0x118) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x11c) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x120) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x124) = 0;
      *(uint32_t *)((int)param_1 + iVar1 + 0x128) = 0;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar3);
  }
  return param_1;
}
