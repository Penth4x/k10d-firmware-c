/* @k10d copy_and_init_struct_block @ 0x1047ba52
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 16-byte block from a helper result into a struct and initializes related
 *   fields.
 * summary:
 *   Checks a value at param_1+0x48, then calls query_status_and_fill_result to obtain 16
 *   bytes which are copied into param_1+0x74 and then forwarded to a sub-object at
 *   param_1+0x70+0xc. It initializes a local 16-byte buffer to zero, calls
 *   alloc_and_init_small_struct_1045c524 with a constant, and performs several small helper
 *   calls (get_or_init_sram_object_10483206, check_setting_0x9c_is_one,
 *   check_setting_0xa3_not_two, check_setting_0x3d_is_zero) to populate local variables.
 *   Finally it calls call_helper_with_field_0x1c, stores the result and a boolean flag into
 *   the sub-object, and calls forward_param_with_fetched_value. The function appears to be
 *   a setup/initialization routine for a data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_and_init_struct_block(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_54 [16];
  uint8_t *apuStack_30 [4];
  uint8_t uStack_20;
  uint8_t uStack_1f;
  uint16_t *puStack_1c;
  uint8_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t auStack_10 [4];
  
  puVar4 = auStack_54;
  iVar1 = check_six_char_pattern((void *)(param_1 + 0x48));
  if (iVar1 != 0) {
    alloc_zeroed_struct_104ce600((uint32_t *)__frv_reg_unset(4));
    iVar1 = query_status_and_fill_result(param_1, (void *)(apuStack_30 + 1));
    if (iVar1 != 0) {
      iVar1 = 0xc;
      do {
        iVar3 = iVar1 + -4;
        *(uint32_t *)(iVar3 + param_1 + 0x74) = *(uint32_t *)((int)apuStack_30 + iVar1);
        iVar1 = iVar3;
      } while (iVar3 != 0);
      iVar3 = 0x14;
      iVar1 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
      do {
        iVar3 = iVar3 + -4;
        *(uint32_t *)(iVar3 + iVar1) = *(uint32_t *)(iVar3 + param_1 + 0x74);
      } while (iVar3 != 0);
      puVar4[3] = 0;
      puVar4[7] = 0;
      puVar4[0xb] = 0;
      puVar4[0xf] = 0;
      alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar4[3],puVar4[7],puVar4[0xb],puVar4[0xf]);
      iVar3 = get_or_create_singleton_object_1046d20c();
      collect_and_forward_object_state(*(uint32_t *)(iVar3 + 4),auStack_10);
      apuStack_30[0] = &uStack_20;
      init_small_struct_or_alloc((uint8_t *)__frv_reg_unset(4));
      puStack_1c = auStack_10;
      get_or_init_sram_object_10483206();
      uStack_20 = check_setting_0x9c_is_one(__frv_reg_unset(4));
      get_or_init_sram_object_10483206();
      uStack_1f = check_setting_0xa3_not_two(__frv_reg_unset(4));
      get_or_init_sram_object_10483206();
      uStack_18 = check_setting_0x3d_is_zero(__frv_reg_unset(4));
      uStack_14 = 0;
      uStack_16 = 0;
      iVar3 = call_helper_with_field_0x1c(*(int *)(param_1 + 0x50));
      *(int *)(iVar1 + 0x10) = iVar3;
      *(bool *)(iVar1 + 0xc) = iVar3 != 0;
      uVar2 = get_or_init_sram_object_10483206();
      forward_param_with_fetched_value(uVar2,*(uint32_t *)(param_1 + 0x68),iVar3);
      *(uint32_t *)(param_1 + 0x34) = 0;
      free_if_flag_set_1051d1de(apuStack_30[0],2);
      free_heap_if_flag_set_1045c56c(auStack_10,2);
    }
    free_if_flag_set_104ce624(apuStack_30 + 1,2);
  }
  return;
}
