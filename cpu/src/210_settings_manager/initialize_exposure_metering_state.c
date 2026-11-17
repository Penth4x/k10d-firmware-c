/* @k10d initialize_exposure_metering_state @ 0x104aba3e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs and initializes a complex state object for the exposure metering subsystem,
 *   including multiple arrays of sub-objects and configuration parameters.
 * summary:
 *   The function allocates and initializes a large structure pointed to by param_1,
 *   populating it with arrays of objects created via cls_105b709c_new, cls_105b703c_new,
 *   and cls_105b719c_new. It also initializes several other fields using
 *   build_parameter_table_entry and lookup_table_entry_by_key, and finally creates an
 *   object via cls_105b71d4_new, calling a virtual method on it and invoking
 *   store_value_if_valid and init_object_field_via_helper with specific constants (0xaa,
 *   0x1d) that likely correspond to metering modes or configuration flags. The caller is a
 *   virtual method of cls_105b7418, suggesting this is an initialization routine for a
 *   camera subsystem, likely related to exposure metering given the complexity and specific
 *   constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_exposure_metering_state(byte *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint16_t *puVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_40 [12];
  uint16_t uStack_14;
  uint16_t uStack_12;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  puVar8 = (uint32_t *)auStack_40;
  uVar1 = get_or_init_sram_block_1052b652();
  uVar4 = 0;
  *param_1 = bRam105f9bc8;
  uVar2 = heap_alloc_2(8);
  *(uint32_t *)(param_1 + 4) = uVar2;
  do {
    iVar6 = *(int *)(param_1 + 4);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b709c_new(0,uVar4);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 2);
  uVar2 = heap_alloc_2(0xc);
  *(uint32_t *)(param_1 + 8) = uVar2;
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 8);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b709c_new(0,uVar4 + 2 & 0xff);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 3);
  uVar2 = heap_alloc_2(8);
  *(uint32_t *)(param_1 + 0xc) = uVar2;
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b703c_new(0,uVar4);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 2);
  uVar2 = heap_alloc_2(0xc);
  *(uint32_t *)(param_1 + 0x10) = uVar2;
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0x10);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b703c_new(0,uVar4 + 2 & 0xff);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 3);
  uVar2 = heap_alloc_2(8);
  *(uint32_t *)(param_1 + 0x14) = uVar2;
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0x14);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b719c_new(0,uVar4);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 2);
  uVar2 = heap_alloc_2(0xc);
  *(uint32_t *)(param_1 + 0x18) = uVar2;
  uVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar5 = uVar4 * 4;
    uVar2 = cls_105b719c_new(0,uVar4 + 2 & 0xff);
    uVar4 = uVar4 + 1 & 0xff;
    *(uint32_t *)(iVar6 + iVar5) = uVar2;
  } while (uVar4 < 3);
  uVar2 = build_parameter_table_entry((uint32_t *)0x0,2,1);
  *(uint32_t *)(param_1 + 0x1c) = uVar2;
  uVar2 = heap_alloc_2((uint)*param_1 << 2);
  *(uint32_t *)(param_1 + 0x20) = uVar2;
  uVar2 = heap_alloc_2((uint)*param_1 << 2);
  *(uint32_t *)(param_1 + 0x24) = uVar2;
  puVar7 = &uStack_14;
  uStack_14 = lookup_table_entry_by_key(uVar1,0,0,1);
  uStack_12 = lookup_table_entry_by_key(uVar1,0,1,1);
  uStack_10 = lookup_table_entry_by_key(uVar1,2,0,1);
  uStack_e = lookup_table_entry_by_key(uVar1,2,1,1);
  uStack_c = lookup_table_entry_by_key(uVar1,3,0,1);
  uStack_a = lookup_table_entry_by_key(uVar1,3,1,1);
  uVar1 = **(uint32_t **)(param_1 + 4);
  uVar2 = **(uint32_t **)(param_1 + 0xc);
  uVar4 = 0;
  *puVar8 = **(uint32_t **)(param_1 + 0x14);
  puVar8[1] = 2;
  puVar8[2] = puVar7;
  uVar1 = cls_106210ec_new((uint32_t *)0x0,0,uVar1,uVar2,*puVar8,puVar8[1],puVar8[2]);
  if (*param_1 != 0) {
    do {
      iVar5 = uVar4 * 4;
      *(uint32_t *)(*(int *)(param_1 + 0x20) + iVar5) = 0;
      if (uVar4 == 0) {
        **(uint32_t **)(param_1 + 0x20) = uVar1;
      }
      else if (uVar4 < 2) {
        iVar6 = *(int *)(param_1 + 0x20);
        uVar2 = *(uint32_t *)(*(int *)(param_1 + 4) + iVar5);
        uVar3 = *(uint32_t *)(*(int *)(param_1 + 0xc) + iVar5);
        *puVar8 = *(uint32_t *)(*(int *)(param_1 + 0x14) + iVar5);
        puVar8[1] = 2;
        puVar8[2] = puVar7;
        uVar2 = cls_105b7288_new((uint32_t *)0x0,uVar4,uVar2,uVar3,*puVar8,puVar8[1],puVar8[2]);
        *(uint32_t *)(iVar6 + iVar5) = uVar2;
      }
      *(uint32_t *)(*(int *)(param_1 + 0x24) + iVar5) = 0;
      if (uVar4 < 3) {
        iVar6 = *(int *)(param_1 + 0x24);
        uVar2 = *(uint32_t *)(*(int *)(param_1 + 8) + iVar5);
        uVar3 = *(uint32_t *)(*(int *)(param_1 + 0x10) + iVar5);
        *puVar8 = *(uint32_t *)(*(int *)(param_1 + 0x18) + iVar5);
        puVar8[1] = 2;
        puVar8[2] = puVar7;
        uVar2 = cls_105b72e0_new((uint32_t *)0x0,uVar4,uVar2,uVar3,*puVar8,puVar8[1],puVar8[2]);
        *(uint32_t *)(iVar6 + iVar5) = uVar2;
      }
      uVar4 = uVar4 + 1 & 0xff;
      puVar7 = puVar7 + 2;
    } while (uVar4 < *param_1);
  }
  *(uint32_t *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + 0x20) = *(uint32_t *)(param_1 + 0x1c);
  *(uint32_t *)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x20) = *(uint32_t *)(param_1 + 0x1c);
  iVar5 = cls_105b71d4_new((uint32_t *)0x0,2,3);
  *(int *)(param_1 + 0x28) = iVar5;
  iVar5 = (**(code **)(*(int *)(iVar5 + 4) + 0x14))
                    (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x10),0);
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    do {
      iVar5 = uVar4 * 4;
      uVar4 = uVar4 + 1 & 0xff;
      *(uint32_t *)(*(int *)(*(int *)(param_1 + 0x28) + 0x1c) + iVar5) =
           *(uint32_t *)(*(int *)(param_1 + 0x20) + iVar5);
    } while (uVar4 < 2);
    uVar4 = 0;
    do {
      iVar5 = uVar4 * 4;
      uVar4 = uVar4 + 1 & 0xff;
      *(uint32_t *)(*(int *)(*(int *)(param_1 + 0x28) + 0x20) + iVar5) =
           *(uint32_t *)(*(int *)(param_1 + 0x24) + iVar5);
    } while (uVar4 < 3);
    iVar5 = store_value_if_valid(*(uint32_t *)(param_1 + 0x28),0xaa);
    if (iVar5 == 0) {
      uVar1 = 0;
    }
    else {
      iVar5 = init_object_field_via_helper(*(int *)(param_1 + 0x28),0x1d);
      uVar1 = 1;
      if (iVar5 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
