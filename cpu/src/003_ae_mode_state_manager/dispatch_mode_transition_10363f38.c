/* @k10d dispatch_mode_transition_10363f38 @ 0x10363f38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_transition_10363f38(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar4;
  ushort *puVar3;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  cVar4 = read_byte_at_offset_0x1d(*(int *)(param_1 + 0x70));
  if (cVar4 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)(param_1 + 0x70),1);
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if (iVar2 == 0) {
    read_two_words_from_buffer(param_1);
  }
  else if (iVar2 == 1) {
    iVar2 = **(int **)(param_1 + 0x70);
    (**(code **)(iVar2 + 0xec))((int)*(int **)(param_1 + 0x70) + (int)*(short *)(iVar2 + 0xe8),1);
  }
  else if (iVar2 == 2) {
    cVar4 = read_byte_at_offset_four_1051e508(param_1 + 0x1c);
    uVar6 = 0;
    if (cVar4 != '\0') {
      do {
        iVar7 = param_1 + 0x1c;
        puVar3 = (ushort *)read_array_element_at_offset(iVar7,uVar6);
        uVar1 = *puVar3;
        iVar2 = read_array_element_at_offset(iVar7,uVar6);
        dispatch_event_to_handler_103653a0(param_1,uVar6,(uint)uVar1,(uint)*(ushort *)(iVar2 + 2));
        uVar6 = uVar6 + 1 & 0xff;
        bVar5 = read_byte_at_offset_four_1051e508(iVar7);
      } while (uVar6 < bVar5);
    }
    iVar2 = **(int **)(param_1 + 0x70);
    (**(code **)(iVar2 + 0xec))((int)*(int **)(param_1 + 0x70) + (int)*(short *)(iVar2 + 0xe8),0);
  }
  else if (iVar2 == 3) {
    iVar2 = **(int **)(param_1 + 0x70);
    (**(code **)(iVar2 + 0xec))((int)*(int **)(param_1 + 0x70) + (int)*(short *)(iVar2 + 0xe8),0);
  }
  cVar4 = read_byte_at_offset_0x1d(*(int *)(param_1 + 0x70));
  if (cVar4 != '\0') {
    dispatch_object_state_update_10491fb2(*(int *)(param_1 + 0x70),0);
  }
  return;
}
