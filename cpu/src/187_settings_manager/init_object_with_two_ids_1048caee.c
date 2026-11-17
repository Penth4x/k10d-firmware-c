/* @k10d init_object_with_two_ids_1048caee @ 0x1048caee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_two_ids_1048caee(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t uStack_18;
  uint32_t auStack_14 [3];
  
  uVar2 = select_buffer_by_index((void *)(*(uint32_t *)(param_1 + 0x1c)));
  *(uint32_t *)(param_1 + 4) = uVar2;
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = 8;
  do {
    iVar4 = iVar3 + -4;
    *(uint32_t *)((int)auStack_14 + iVar3) = *(uint32_t *)(iVar4 + iVar1 + 0x10);
    iVar3 = iVar4;
  } while (iVar4 != 0);
  iVar3 = 8;
  do {
    iVar1 = iVar3 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar3) = *(uint32_t *)((int)auStack_14 + iVar3);
    iVar3 = iVar1;
  } while (iVar1 != 0);
  uVar2 = return_first_word_1045c514(&uStack_18);
  *(short *)(param_1 + 0x14) = (short)uVar2;
  free_heap_if_flagged_1045c402(&uStack_18,2);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = 8;
  do {
    iVar4 = iVar3 + -4;
    *(uint32_t *)((int)auStack_14 + iVar3) = *(uint32_t *)(iVar4 + iVar1 + 0x10);
    iVar3 = iVar4;
  } while (iVar4 != 0);
  iVar3 = 8;
  do {
    iVar1 = iVar3 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar3) = *(uint32_t *)((int)auStack_14 + iVar3);
    iVar3 = iVar1;
  } while (iVar1 != 0);
  uVar2 = read_struct_field_at_offset_4(&uStack_18);
  *(short *)(param_1 + 0x16) = (short)uVar2;
  free_heap_if_flagged_1045c402(&uStack_18,2);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  uVar2 = (**(code **)(iVar3 + 0x24))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar3 + 0x20));
  set_byte_at_offset_0x18(param_1,uVar2);
  (**(code **)(*(int *)(param_1 + 0x20) + 0x14))
            (*(short *)(*(int *)(param_1 + 0x20) + 0x10) + param_1);
  return;
}
