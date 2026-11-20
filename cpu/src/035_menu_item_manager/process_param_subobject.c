/* @k10d process_param_subobject @ 0x10373bf6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Reads fields from a sub-object pointed to by param_1+0x38 and calls helpers to process
 *   them.
 * summary:
 *   Checks if the pointer at param_1+0x38 is non-null. If so, it copies three 32-bit values
 *   from offsets 0x20, 0x24, and 0x28 of that sub-object onto the stack. It then calls
 *   copy_two_words_from_param2 with a local buffer and the sub-object pointer, extracts two
 *   16-bit values via return_first_word_1045c514 and read_struct_field_at_offset_4, and
 *   finally calls register_menu_item_with_data_1038f780 and free_heap_if_flagged_1045c402.
 *   The specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_param_subobject(int param_1)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uStack_28 = *(uint32_t *)(*(int *)(param_1 + 0x38) + 0x20);
    uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x38) + 0x24);
    uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x38) + 0x28);
    copy_two_words_from_param2((int)auStack_18,*(int *)(param_1 + 0x38));
    uVar1 = return_first_word_1045c514(auStack_18);
    uStack_1c = (short)uVar1;
    uVar1 = read_struct_field_at_offset_4(auStack_18);
    uStack_1a = (short)uVar1;
    register_menu_item_with_data_1038f780((cls_1055a234 *)(param_1 + 0x464),1,&uStack_28);
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  return;
}
