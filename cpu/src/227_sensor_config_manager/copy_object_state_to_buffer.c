/* @k10d copy_object_state_to_buffer @ 0x104c10d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies object state and iterates a linked list to populate a destination buffer with
 *   entries.
 * summary:
 *   Calls invoke_callback_and_check_flag to check or initialize state at param_1+0x48. If
 *   successful, it copies two 16-bit values from param_1+0x44 to param_2. It then iterates
 *   a linked list starting from a virtual object at param_1+0x48, calling virtual slots to
 *   get the first and next items. For each item, it calls write_byte_at_offset_1051ed5c and
 *   find_first_active_entry to create/allocate an entry in param_2, then fills that entry
 *   with data from param_1 (including a value from param_1+0x8cc and the previously copied
 *   16-bit values).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int copy_object_state_to_buffer(int param_1,uint16_t *param_2)

{
  uint16_t uVar1;
  uint16_t uVar2;
  int iVar3;
  uint8_t uVar5;
  uint32_t *puVar4;
  int iVar6;
  
  iVar3 = invoke_callback_and_check_flag(param_1,param_1 + 0x48);
  if (iVar3 == 0) {
    if ((uint16_t *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34) != param_2) {
      initialize_three_block_struct(param_2);
    }
  }
  else {
    initialize_three_block_struct(param_2);
    uVar1 = *(uint16_t *)(param_1 + 0x44);
    uVar2 = *(uint16_t *)(param_1 + 0x46);
    *param_2 = uVar1;
    param_2[1] = uVar2;
    iVar6 = **(int **)(param_1 + 0x48);
    uVar5 = (**(code **)(iVar6 + 0x14))
                      ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar6 + 0x10));
    *(uint8_t *)(param_2 + 2) = uVar5;
    iVar6 = **(int **)(param_1 + 0x48);
    for (iVar6 = (**(code **)(iVar6 + 0x24))
                           ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar6 + 0x20));
        iVar6 != -1;
        iVar6 = (**(code **)(iVar6 + 0x2c))
                          ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar6 + 0x28))) {
      write_byte_at_offset_1051ed5c(param_2,iVar6,1);
      puVar4 = (uint32_t *)find_first_active_entry((int)param_2,iVar6);
      *puVar4 = *(uint32_t *)(param_1 + 0x8cc);
      *(uint16_t *)(puVar4 + 1) = uVar1;
      *(uint16_t *)((int)puVar4 + 6) = uVar2;
      puVar4[2] = iVar6;
      *(uint8_t *)(puVar4 + 10) = uVar5;
      iVar6 = **(int **)(param_1 + 0x48);
    }
  }
  return iVar3;
}
