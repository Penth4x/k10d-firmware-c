/* @k10d reset_state_on_mode_change @ 0x103638e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Resets object state and invokes virtual methods on four global objects when a stored
 *   mode value changes.
 * summary:
 *   The function compares a value at offset 0x18 in the object against a result from
 *   read_array_element_bounded. If they differ and offset 0x204 is not 5, it calls helpers
 *   on a sub-object at offset 0x1c, then iterates three times calling virtual slot 2 on
 *   four distinct global objects. Finally, it calls virtual slot 3 on a sub-object at
 *   offset 0x224, calls empty_virtual_slot_10363f36, and clears the field at offset 0x70.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_on_mode_change(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  byte bVar5;
  ushort uVar3;
  ushort uVar4;
  int iVar6;
  void *pvVar7;
  int iStack_10;
  
  iVar6 = *(int *)((int)param_1 + 0x18);
  uVar1 = get_or_create_singleton_object_1036c796();
  iVar2 = read_array_element_bounded(uVar1,3);
  if ((iVar6 != iVar2) && (*(int *)((int)param_1 + 0x204) != 5)) {
    pvVar7 = (void *)((int)param_1 + 0x1c);
    bVar5 = read_byte_at_offset_five_1051e50e((int)pvVar7);
    uVar3 = read_table_entry_at_offset((int)pvVar7,(uint)bVar5);
    uVar4 = read_second_word_from_pointer_array((int)pvVar7,(uint)bVar5);
    dispatch_three_params_and_return_offset(param_1,(uint)uVar3,(uint)uVar4);
    dispatch_event_with_buffer_lock(param_1,1,pvVar7);
    iStack_10 = 3;
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
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
  }
  release_object_heap_blocks_1047e1ec((int)param_1 + 0x224);
  empty_virtual_slot_10363f36((int)param_1);
  *(uint32_t *)((int)param_1 + 0x70) = 0;
  return;
}
