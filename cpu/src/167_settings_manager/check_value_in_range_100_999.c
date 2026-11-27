/* @k10d check_value_in_range_100_999 @ 0x10473736
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a value via a helper, checks if it is between 100 and 999, and returns a
 *   boolean status.
 * summary:
 *   The function initializes local buffers and calls several helpers
 *   (get_or_init_sram_object_10483206, check_setting_0x9c_is_one,
 *   check_setting_0x3d_is_zero) to gather state. It then calls
 *   call_function_at_offset_8_104767f8 with a parameter derived from param_1 to obtain an
 *   integer value. If this value is greater than 0x3e5 (997), it calls
 *   increment_file_number_if_needed to get a second value and checks if it is within the
 *   range [100, 999]. The function returns 1 if the condition is met, 0 otherwise, and
 *   cleans up local resources via free_heap_if_flag_set_1045c56c and
 *   free_if_flag_set_1051d1de.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_value_in_range_100_999(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_40 [16];
  uint8_t auStack_20 [4];
  uint16_t *puStack_1c;
  uint8_t uStack_18;
  uint16_t auStack_10 [4];
  
  puVar3 = auStack_40;
  init_small_struct_or_alloc(auStack_20);
  get_or_init_sram_object_10483206();
  auStack_20[0] = check_setting_0x9c_is_one((uint32_t)param_1);
  get_or_init_sram_object_10483206();
  uStack_18 = check_setting_0x3d_is_zero((uint32_t)param_1);
  puVar3[3] = 0;
  puVar3[7] = 0;
  puVar3[0xb] = 0;
  puVar3[0xf] = 0;
  alloc_and_init_small_struct_1045c524(auStack_10,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar3[3],puVar3[7],puVar3[0xb],puVar3[0xf]);
  uVar2 = 1;
  iVar1 = get_or_create_singleton_object_1046d20c();
  collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),auStack_10);
  puStack_1c = auStack_10;
  iVar1 = call_function_at_offset_8_104767f8(*(int *)(param_1 + 8));
  if (0x3e5 < iVar1) {
    get_or_init_sram_buffer_10478858();
    iVar1 = increment_file_number_if_needed(param_1,auStack_20);
    if ((iVar1 < 100) || (uVar2 = 1, 999 < iVar1)) {
      uVar2 = 0;
    }
  }
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  free_if_flag_set_1051d1de(auStack_20,2);
  return uVar2;
}
