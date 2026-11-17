/* @k10d process_buffer_transfer_request @ 0x104e007c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_buffer_transfer_request(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uintptr_t sp;
  bool bVar8;
  int iStack_10;
  int iStack_c;
  
  iVar5 = 1;
  uVar1 = **(uint **)(param_1 + 0x38);
  if (cRam80010930 == '\0') {
    return 9;
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar3 = iVar6 + *(int *)(param_1 + 0x58);
  if (uVar1 < uVar3) {
    *(uint *)(param_1 + 0x54) = uVar1;
    iVar2 = *(int *)(param_1 + 0x48);
    iVar6 = uVar1 - *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      iVar5 = dispatch_buffer_copy_by_index(*(int *)(param_1 + 0x34),*(uint *)(param_1 + 0x28),
                           *(int *)(param_1 + 0x50),
                           *(int *)(*(int *)(param_1 + 0x38) + 8) + *(int *)(param_1 + 0x58),iVar6);
      bVar8 = iVar5 == 0;
    }
    else if (iVar2 == 1) {
      iVar5 = dispatch_via_table_entry(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x28),
                           *(uint32_t *)(param_1 + 0x50),
                           *(int *)(*(int *)(param_1 + 0x38) + 8) + *(int *)(param_1 + 0x58),iVar6);
      bVar8 = iVar5 == 0;
    }
    else {
      if (iVar2 == 2) {
        iStack_10 = 0;
        iStack_c = 0;
        iVar5 = indirect_call_via_table(*(int *)(param_1 + 0x34),&iStack_c,&iStack_10,*(int *)(param_1 + 0x28))
        ;
        iStack_c = iStack_c + *(int *)(param_1 + 0x50);
        iVar4 = *(int *)(*(int *)(param_1 + 0x38) + 8);
        iVar7 = *(int *)(param_1 + 0x58);
        iVar2 = iVar6;
        while (iVar6 = iStack_10, iVar2 != 0) {
          iVar2 = iVar2 + -1;
          *(uint8_t *)(iVar2 + iVar4 + iVar7) = *(uint8_t *)(iVar2 + iStack_c);
        }
      }
      bVar8 = iVar5 == 0;
    }
    if (!bVar8) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - iVar6;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar6;
      if (*(char *)(param_1 + 0x5c) != '\0') {
        *(uint8_t *)(param_1 + 0x5c) = 0;
        *(uint32_t *)(param_1 + 0x58) = 0;
      }
      iVar5 = invoke_virtual_slot_2_on_member(param_1,1);
      if (iVar5 != 1) {
        return iVar5;
      }
      return 5;
    }
    goto LAB_104e022c;
  }
  if (iVar6 == 0) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      *(uint *)(param_1 + 0x54) = uVar3;
      iVar5 = invoke_virtual_slot_2_on_member(param_1,0);
      if (iVar5 == 1) {
        iVar5 = 5;
      }
      *(uint8_t *)(param_1 + 0x44) = 0;
      return iVar5;
    }
    return 1;
  }
  *(uint32_t *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x58) + iVar6;
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x34);
    uVar1 = *(uint *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x50);
    iVar4 = *(int *)(*(int *)(param_1 + 0x38) + 8) + *(int *)(param_1 + 0x58);
LAB_104e021e:
    iVar5 = dispatch_buffer_copy_by_index(iVar5,uVar1,iVar2,iVar4,iVar6);
    bVar8 = iVar5 == 0;
  }
  else if (iVar5 == 1) {
    iVar5 = dispatch_via_table_entry(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x28),
                         *(uint32_t *)(param_1 + 0x50),
                         *(int *)(*(int *)(param_1 + 0x38) + 8) + *(int *)(param_1 + 0x58),iVar6);
    bVar8 = iVar5 == 0;
  }
  else {
    if (iVar5 == 2) {
      iVar5 = *(int *)(param_1 + 0x34);
      uVar1 = *(uint *)(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x50);
      iVar4 = *(int *)(*(int *)(param_1 + 0x38) + 8) + *(int *)(param_1 + 0x58);
      goto LAB_104e021e;
    }
    bVar8 = false;
  }
  if (!bVar8) {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(uint8_t *)(param_1 + 0x5c) = 0;
      *(uint32_t *)(param_1 + 0x58) = 0;
    }
    iVar5 = invoke_virtual_slot_2_on_member(param_1,0);
    if (iVar5 != 1) {
      return iVar5;
    }
    return 5;
  }
LAB_104e022c:
  (*(code *)0x104dfafa/*ROM*/)(param_1,0x2002);
  return 9;
}
