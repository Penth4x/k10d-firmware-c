/* @k10d collect_and_send_object_properties @ 0x104a4cac
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Gathers several properties from two objects via virtual calls and passes them to a
 *   helper function.
 * summary:
 *   The function reads a pointer from param_1+0x14 and param_1+0x18, treating them as
 *   objects with virtual method tables. It invokes virtual slot 2 (offset 0x14) on both
 *   objects with various integer arguments (1, 0x12, 0x29, 8, 0x13) and slot 3 (offset
 *   0x1c) on the first object with argument 0x10. It also calls
 *   query_object_slot_three_104a6a48(param_1). The results are packed into a local buffer
 *   and passed, along with a value from param_1+0x50, to
 *   dispatch_rtos_call_with_conditional_args. The return value of
 *   dispatch_rtos_call_with_conditional_args is then passed to
 *   write_word_to_dynamic_array(param_2, 0, result).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_and_send_object_properties(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  uint32_t uVar3;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  uint16_t uVar4;
  uint8_t uVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_48 [20];
  
  puVar11 = auStack_48;
  uVar1 = *(uint32_t *)(param_1 + 0x50);
  iVar9 = **(int **)(param_1 + 0x14);
  uVar2 = (**(code **)(iVar9 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar9 + 0x10),1);
  uVar3 = query_object_slot_three_104a6a48(param_1);
  iVar9 = **(int **)(param_1 + 0x14);
  iVar9 = (**(code **)(iVar9 + 0x1c))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar9 + 0x18),0x10);
  iVar10 = **(int **)(param_1 + 0x14);
  uVar5 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar10 + 0x10),0x12);
  iVar10 = **(int **)(param_1 + 0x18);
  uVar6 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar10 + 0x10),0x29);
  iVar10 = **(int **)(param_1 + 0x18);
  uVar7 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar10 + 0x10),1);
  iVar10 = **(int **)(param_1 + 0x18);
  uVar4 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x18) + (int)*(short *)(iVar10 + 0x10),8);
  iVar10 = **(int **)(param_1 + 0x14);
  uVar8 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar10 + 0x10),0x13);
  puVar11[3] = uVar5;
  puVar11[7] = uVar6;
  puVar11[0xb] = uVar7;
  *(uint16_t *)(puVar11 + 0xe) = uVar4;
  puVar11[0x13] = uVar8;
  uVar1 = dispatch_rtos_call_with_conditional_args(uVar1,uVar2 & 0xff,uVar3,iVar9,puVar11[3],puVar11[7],puVar11[0xb],
                       *(uint16_t *)(puVar11 + 0xe),puVar11[0x13]);
  write_word_to_dynamic_array(param_2,0,(short)uVar1);
  return;
}
