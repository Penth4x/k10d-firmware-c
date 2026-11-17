/* @k10d recursively_traverse_directory_tree @ 0x104e5918
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t recursively_traverse_directory_tree(int param_1,char *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_18c [4];
  uint uStack_170;
  uint32_t uStack_150;
  char acStack_14c [256];
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint8_t uStack_44;
  char acStack_35 [33];
  uint uStack_14;
  int iStack_10;
  uint16_t uStack_a;
  
  puVar7 = (uint32_t *)auStack_18c;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  iVar1 = count_string_bytes(param_2);
  iVar3 = iVar1;
  if (iVar1 < 0x100) {
    while (iVar3 != 0) {
      acStack_14c[iVar3 + -1] = param_2[iVar3 + -1];
      iVar3 = iVar3 + -1;
    }
    fill_byte_array(acStack_14c + iVar1,0,0x100 - iVar1);
    acStack_14c[iVar1] = '\\';
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_150 = -0x2c;
    cls_105ab468_new(acStack_35 + 1);
    uStack_44 = 0;
    uStack_14 = 0;
    uStack_170 = 0;
    iStack_10 = 0;
    if (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x34)) {
      iVar3 = *(int *)(param_1 + 0x4c);
      *puVar7 = &uStack_4c;
      iVar3 = call_inner_with_lock_pair(iVar3,param_2,uRam80010b98,1,*puVar7);
      if (iVar3 == 1) {
        do {
          uStack_a = 0;
          pcVar6 = acStack_35 + 1;
          iVar3 = chain_two_helper_calls_104e58d4(param_1,pcVar6,&uStack_a);
          if (iVar3 == 1) {
            uVar4 = allocate_queue_slot(param_1);
            if (uVar4 == 0xffffffff) break;
            uStack_14 = uStack_14 + 1;
            if (uStack_170 == 0) {
              uStack_170 = uVar4;
            }
            piVar5 = (int *)insert_node_into_array(param_1,param_3,uVar4);
            *(uint16_t *)(piVar5 + 5) = uStack_a;
            *piVar5 = uVar4 + 100;
            (**(code **)(piVar5[6] + 0x44))((int)*(short *)(piVar5[6] + 0x40) + (int)piVar5,pcVar6);
            invoke_virtual_slot_14_104e6148((void *)param_1,piVar5);
            insert_sorted_list_entry((void *)param_1,uStack_14,uVar4,&iStack_10);
            iVar3 = count_string_bytes(pcVar6);
            fill_byte_array(acStack_14c + iVar1 + 1,0,0xff - iVar1);
            while (iVar3 != 0) {
              iVar3 = iVar3 + -1;
              (acStack_14c + iVar1 + 1)[iVar3] = pcVar6[iVar3];
            }
            *puVar7 = &iStack_10;
            iVar3 = recursively_traverse_directory_tree(param_1,acStack_14c,uVar4,(int *)&uStack_14,(int *)*puVar7);
            if (iVar3 == 0) break;
          }
          iVar3 = call_helper_with_lock_guard(*(int *)(param_1 + 0x4c),&uStack_4c);
        } while (iVar3 != 0);
        call_three_helpers_on_param(*(int *)(param_1 + 0x4c),&uStack_4c);
      }
    }
    empty_noop_stub_104e6164(param_1,uStack_170,uStack_14);
    *param_4 = *param_4 + uStack_14;
    *param_5 = *param_5 + iStack_10;
    process_pending_event_list((void *)param_1,param_3,uStack_170,uStack_14);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
    cls_105ab468_delete(&stack0xfffffff8 + uStack_150,2);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
