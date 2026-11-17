/* @k10d init_three_stage_sequence @ 0x1040ac02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Initializes a three-stage process by calling a helper with indices 0, 1, and 2, setting
 *   a completion flag on success.
 * summary:
 *   Checks if a byte at offset 0x68 in the object is zero. If so, it calls
 *   retry_operation_five_times_1040ab6e three times with second arguments 0, 1, and 2,
 *   passing fields from offsets 0x58, 0x3c, 0x34, and 0x30. If all calls return 0, it sets
 *   the byte at offset 0x69 to 1. If any call returns a value other than 2, it calls a
 *   sequence of three other functions (get_or_init_sram_block_10391bfa,
 *   read_first_word_10391cba, dispatch_virtual_method_on_object_10391578).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_three_stage_sequence(void *param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint32_t *puVar6;
  
  puVar6 = (uint32_t *)&stack0xfffffff0;
  if (*(char *)((int)param_1 + 0x68) == '\0') {
    iVar1 = retry_operation_five_times_1040ab6e(param_1,0,*(uint32_t *)((int)param_1 + 0x58),
                         *(uint32_t *)((int)param_1 + 0x3c),*(uint32_t *)((int)param_1 + 0x34),
                         *(uint32_t *)((int)param_1 + 0x30));
    if (iVar1 == 0) {
      uVar3 = *(uint32_t *)((int)param_1 + 0x58);
      uVar4 = *(uint32_t *)((int)param_1 + 0x3c);
      uVar5 = *(uint32_t *)((int)param_1 + 0x30);
      *puVar6 = *(uint32_t *)((int)param_1 + 0x34);
      puVar6[1] = uVar5;
      iVar1 = retry_operation_five_times_1040ab6e(param_1,1,uVar3,uVar4,*puVar6,puVar6[1]);
      if (iVar1 == 0) {
        uVar3 = *(uint32_t *)((int)param_1 + 0x58);
        uVar4 = *(uint32_t *)((int)param_1 + 0x3c);
        uVar5 = *(uint32_t *)((int)param_1 + 0x30);
        *puVar6 = *(uint32_t *)((int)param_1 + 0x34);
        puVar6[1] = uVar5;
        iVar1 = retry_operation_five_times_1040ab6e(param_1,2,uVar3,uVar4,*puVar6,puVar6[1]);
        if (iVar1 == 0) {
          *(uint8_t *)((int)param_1 + 0x69) = 1;
        }
      }
    }
    if (iVar1 != 2) {
      puVar2 = (uint32_t *)get_or_init_sram_block_10391bfa();
      uVar3 = read_first_word_10391cba(puVar2);
      dispatch_virtual_method_on_object_10391578(uVar3,1);
    }
  }
  return;
}
