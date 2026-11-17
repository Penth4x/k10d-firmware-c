/* @k10d update_state_on_value_change @ 0x1036cdbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_on_value_change(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  byte bVar5;
  ushort uVar3;
  ushort uVar4;
  int iVar6;
  void *pvVar7;
  uint32_t uStack_10;
  
  iVar6 = *(int *)((int)param_1 + 0x18);
  uVar1 = get_or_create_singleton_object_1036c796();
  iVar2 = read_array_element_bounded(uVar1,7);
  if (iVar6 != iVar2) {
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar5 = read_byte_at_offset_five_1051e50e((int)pvVar7);
    uVar3 = read_table_entry_at_offset((int)pvVar7,(uint)bVar5);
    uVar4 = read_second_word_from_pointer_array((int)pvVar7,(uint)bVar5);
    dispatch_three_params_and_return_offset(param_1,(uint)uVar3,(uint)uVar4);
    dispatch_event_with_buffer_lock(param_1,1,pvVar7);
    uStack_10 = 3;
    iVar2 = 0;
    do {
      (**(code **)(*(int *)(iVar2 + -0x7ffea0d4) + 0x14))
                (*(short *)(*(int *)(iVar2 + -0x7ffea0d4) + 0x10) + iVar2 + -0x7ffea0e8);
      (**(code **)(*(int *)(iVar2 + -0x7ffe9ec0) + 0x14))
                (*(short *)(*(int *)(iVar2 + -0x7ffe9ec0) + 0x10) + iVar2 + -0x7ffe9ed4);
      (**(code **)(*(int *)(iVar2 + -0x7ffe9cac) + 0x14))
                (*(short *)(*(int *)(iVar2 + -0x7ffe9cac) + 0x10) + iVar2 + -0x7ffe9cc0);
      (**(code **)(*(int *)(iVar2 + -0x7ffe9a98) + 0x14))
                (*(short *)(*(int *)(iVar2 + -0x7ffe9a98) + 0x10) + iVar2 + -0x7ffe9aac);
      iVar2 = iVar2 + 0x850;
      uStack_10 = uStack_10 + -1;
    } while (-1 < uStack_10);
  }
  empty_stub_1036d16c((int)param_1);
  *(uint32_t *)((int)param_1 + 0x70) = 0;
  return;
}
