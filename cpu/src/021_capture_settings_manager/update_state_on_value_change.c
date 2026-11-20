/* @k10d update_state_on_value_change @ 0x1036cdbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 021_capture_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_on_value_change(cls_10557d80 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  byte bVar5;
  ushort uVar3;
  ushort uVar4;
  int iVar6;
  uint32_t *puVar7;
  int iStack_10;
  
  iVar6 = param_1->field_0x18;
  uVar1 = get_or_create_singleton_object_1036c796();
  iVar2 = read_array_element_bounded(uVar1,7);
  if (iVar6 != iVar2) {
    puVar7 = &param_1->field_0x1c;
    bVar5 = read_byte_at_offset_five_1051e50e((int)puVar7);
    uVar3 = read_table_entry_at_offset((int)puVar7,(uint)bVar5);
    uVar4 = read_second_word_from_pointer_array((int)puVar7,(uint)bVar5);
    dispatch_three_params_and_return_offset(param_1,(uint)uVar3,(uint)uVar4);
    dispatch_event_with_buffer_lock(param_1,1,puVar7);
    iStack_10 = 3;
    iVar2 = 0;
    do {
      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffea0d4)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffea0d4)))[2].adj + iVar2 + -0x7ffea0e8);
      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9ec0)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9ec0)))[2].adj + iVar2 + -0x7ffe9ed4);
      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9cac)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9cac)))[2].adj + iVar2 + -0x7ffe9cc0);
      (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9a98)))[2].fn)
                (((vtbl_entry*)(*(int *)(iVar2 + -0x7ffe9a98)))[2].adj + iVar2 + -0x7ffe9aac);
      iVar2 = iVar2 + 0x850;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
  }
  empty_stub_1036d16c((uint32_t)(param_1));
  param_1->field_0x70 = 0;
  return;
}
