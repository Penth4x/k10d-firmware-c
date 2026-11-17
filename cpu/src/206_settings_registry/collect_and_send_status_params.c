/* @k10d collect_and_send_status_params @ 0x104a1e42
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Gathers status values from two object pointers and sends them via a helper function.
 * summary:
 *   The function reads a pointer from param_1+0x14 and param_1+0x10. It performs virtual
 *   calls (slot 2) on these objects to retrieve several byte/short values (arguments 1,
 *   0x12, 0x29, 8, 0x13). It also calls query_object_state_flag_104a28e4 and a virtual call
 *   (slot 3) on the first object. These values are packed into a local buffer and passed to
 *   dispatch_rtos_call_with_conditional_args. The result is then sent to param_2 via two
 *   calls to write_to_dynamic_array (indices 0 and 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void collect_and_send_status_params(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  uint8_t uVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  uint16_t uVar3;
  uint8_t uVar7;
  uint32_t uVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint8_t *puVar11;
  uint8_t auStack_48 [20];
  
  puVar11 = auStack_48;
  uVar8 = *(uint32_t *)(param_1 + 0x2c);
  iVar9 = **(int **)(param_1 + 0x14);
  uVar1 = (**(code **)(iVar9 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar9 + 0x10),1);
  uVar2 = query_object_state_flag_104a28e4(param_1);
  iVar9 = **(int **)(param_1 + 0x14);
  iVar9 = (**(code **)(iVar9 + 0x1c))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar9 + 0x18),0x10);
  iVar10 = **(int **)(param_1 + 0x14);
  uVar4 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar10 + 0x10),0x12);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar5 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar10 + 0x10),0x29);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar6 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar10 + 0x10),1);
  iVar10 = **(int **)(param_1 + 0x10);
  uVar3 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x10) + (int)*(short *)(iVar10 + 0x10),8);
  iVar10 = **(int **)(param_1 + 0x14);
  uVar7 = (**(code **)(iVar10 + 0x14))
                    ((int)*(int **)(param_1 + 0x14) + (int)*(short *)(iVar10 + 0x10),0x13);
  puVar11[3] = uVar4;
  puVar11[7] = uVar5;
  puVar11[0xb] = uVar6;
  *(uint16_t *)(puVar11 + 0xe) = uVar3;
  puVar11[0x13] = uVar7;
  uVar2 = dispatch_rtos_call_with_conditional_args(uVar8,uVar1 & 0xff,uVar2,iVar9,puVar11[3],puVar11[7],puVar11[0xb],
                       *(uint16_t *)(puVar11 + 0xe),puVar11[0x13]);
  write_to_dynamic_array(param_2,0,uVar2);
  write_to_dynamic_array(param_2,1,10);
  return;
}
