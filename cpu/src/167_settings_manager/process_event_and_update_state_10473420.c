/* @k10d process_event_and_update_state_10473420 @ 0x10473420
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event by calling a chain of handlers and updates the output structure with
 *   results and pointers.
 * summary:
 *   The function takes an object pointer, an output structure, and a data buffer. It calls
 *   update_short_value_if_changed to validate or process the input, then
 *   invoke_virtual_slot_two_and_store_result and update_object_state_field for further
 *   processing. If successful, it prepares a local buffer, calls call_three_param_helpers,
 *   and then copy_12_bytes_if_length_12. It performs a virtual call on an object retrieved
 *   from the main object's vtable-like structure, and if that succeeds, it writes the
 *   result to the output structure, updates a pointer field, and copies data using
 *   copy_null_terminated_string. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_and_update_state_10473420(int param_1,uint32_t *param_2,char *param_3)

{
  short sVar1;
  ushort uVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  int extraout_r4;
  void *pvVar6;
  uint32_t uVar7;
  short *psVar8;
  int *piVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_40 [4];
  uint32_t uStack_24;
  uint8_t auStack_19 [13];
  uint32_t uStack_c;
  
  puVar10 = auStack_40;
  uStack_24 = 0;
  uVar3 = param_2[1];
  psVar8 = (short *)(param_2 + 2);
  iVar4 = update_short_value_if_changed(param_1,param_3,psVar8);
  if (iVar4 != 0) {
    iVar4 = param_1 + 0x14;
    invoke_virtual_slot_two_and_store_result(*(uint32_t *)(param_1 + 8),*psVar8,iVar4);
    iVar5 = update_object_state_field(param_1,(int)param_3,psVar8,uVar3);
    if (iVar5 != 0) {
      uVar3 = *(uint32_t *)(param_1 + 0x10);
      uVar2 = *(ushort *)((int)param_2 + 10);
      uVar7 = param_2[1];
      puVar10[3] = param_3[9];
      call_three_param_helpers(uVar3,auStack_19,(uint)uVar2,uVar7,puVar10[3]);
      if (extraout_r4 != 0) {
        copy_12_bytes_if_length_12(iVar4,auStack_19);
        uStack_c = 0;
        piVar9 = *(int **)(param_1 + 4);
        iVar5 = *piVar9;
        sVar1 = *(short *)(iVar5 + 0x28);
        uVar3 = (*(code *)0x10477a62/*ROM*/)(iVar4);
        iVar5 = (**(code **)(iVar5 + 0x2c))((int)piVar9 + (int)sVar1,uVar3,0,&uStack_c);
        if (iVar5 != 0) {
          *param_2 = uStack_c;
          if (*(int *)(param_1 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 4) + 4;
          }
          param_2[4] = iVar5;
          pvVar6 = (void *)(*(code *)0x10477a62/*ROM*/)(iVar4);
          copy_null_terminated_string((void *)((int)param_2 + 0x19),pvVar6);
          uStack_24 = 1;
        }
      }
    }
  }
  return uStack_24;
}
