/* @k10d compute_and_dispatch_state_value @ 0x103b2586
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Computes a state byte from object fields and dispatches it to a handler or virtual
 *   method.
 * summary:
 *   The function reads a type identifier at offset 0x48 and a data pointer at 0x28. It
 *   conditionally calls get_mode_dependent_setting_104f0252 or compute_exposure_params to
 *   compute a value stored at offset 0x4f. Based on this value, it either calls
 *   render_exposure_value_digits_103b27c6 with computed offsets or invokes a virtual method
 *   via menu_item_register and alloc_two_word_pair_1045bc2e. The logic manages state-
 *   dependent dispatch based on the computed byte.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103b264a) overlaps instruction at (ram,0x103b2648)
    */

void compute_and_dispatch_state_value(void *param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint32_t uVar6;
  uint8_t uVar7;
  int iVar8;
  int iVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_30 [4];
  uint32_t auStack_10 [2];
  
  puVar10 = auStack_30;
  iVar9 = (int)param_1 + 8;
  iVar5 = menu_item_register(iVar9);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  iVar5 = menu_item_register(iVar9);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  if ((*(char *)((int)param_1 + 0x4f) == '\0') &&
     (((cVar2 = *(char *)((int)param_1 + 0x48), cVar2 == '\x1e' || (cVar2 == '\x1c')) ||
      (cVar2 == '\x18')))) {
    uVar6 = get_mode_dependent_setting_104f0252(*(int *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x4e));
    *(char *)((int)param_1 + 0x4f) = (char)uVar6;
  }
  else if (*(char *)((int)param_1 + 0x48) == '\x16') {
    *(uint8_t *)((int)param_1 + 0x4f) = 0;
  }
  else if (*(char *)((int)param_1 + 0x48) == '\f') {
    uVar7 = compute_exposure_params(*(uint32_t *)((int)param_1 + 0x28),*(uint8_t *)((int)param_1 + 0x50));
    *(uint8_t *)((int)param_1 + 0x4f) = uVar7;
  }
  bVar3 = *(byte *)((int)param_1 + 0x4f);
  if (bVar3 == 0) {
    iVar5 = *(int *)((int)param_1 + 0x28);
    uVar6 = get_mode_dependent_setting_104f0252(iVar5,(uint)*(byte *)((int)param_1 + 0x4e));
    iVar5 = lookup_shutter_speed_value(iVar5,uVar6);
    uVar4 = (uint)(iVar5 < 1000);
    iVar5 = *(int *)((int)param_1 + 0x28);
    uVar6 = get_setting_by_mode_index_104f01e2(iVar5,(uint)*(byte *)((int)param_1 + 0x4e));
    iVar5 = lookup_shutter_speed_value(iVar5,uVar6);
    uVar6 = get_setting_by_mode_index_104f01e2(*(int *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x4e));
    puVar10[3] = 1;
    render_exposure_value_digits_103b27c6((int)param_1,uVar6,(0xd - ((iVar5 < 1000) + uVar4)) * 0x18 + 0x20 & 0xffff,0xd8,
                 puVar10[3]);
    uVar6 = get_mode_dependent_setting_104f0252(*(int *)((int)param_1 + 0x28),(uint)*(byte *)((int)param_1 + 0x4e));
    puVar10[3] = 2;
    render_exposure_value_digits_103b27c6((int)param_1,uVar6,(8 - uVar4) * 0x18 + 0x20 & 0xffff,0xd8,puVar10[3]);
    iVar5 = menu_item_register(iVar9);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    iVar5 = menu_item_register(iVar9);
    iVar8 = *(int *)(iVar5 + 0xc);
    sVar1 = *(short *)(iVar8 + 0x10);
    uVar6 = alloc_two_word_pair_1045bc2e(auStack_10,(0xc - uVar4) * 0x18 + 0x20 & 0xffff,0xd8);
    (**(code **)(iVar8 + 0x14))(iVar5 + sVar1,uVar6);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    iVar5 = menu_item_register(iVar9);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  else {
    puVar10[3] = 0;
    render_exposure_value_digits_103b27c6((int)param_1,(uint)bVar3,0x68,0xd8,puVar10[3]);
  }
  return;
}
