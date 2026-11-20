/* @k10d read_two_shorts_from_buffer @ 0x1036e26a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Extracts two 16-bit values from a buffer at param_1+0x9c and passes them with context
 *   to a helper.
 * summary:
 *   The function copies three 32-bit words from param_1+0xbc to the stack. It then calls
 *   copy_two_words_from_param2 to initialize a local buffer (auStack_28) from param_1+0x9c,
 *   reads a short via return_first_word_1045c514, and cleans up with
 *   free_heap_if_flagged_1045c402. It repeats this process with
 *   read_struct_field_at_offset_4 to get a second short. Finally, it calls
 *   register_menu_item_and_update_1038d246 with param_1+0x18, a byte from param_1+0x2ac,
 *   and the stack data containing the copied words and the two extracted shorts.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_two_shorts_from_buffer(int param_1)

{
  struct {
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint16_t uStack_14;
  } _cfg_20;
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint16_t uStack_12;
  
  _cfg_20.uStack_20 = *(uint32_t *)(param_1 + 0xbc);
  _cfg_20.uStack_1c = *(uint32_t *)(param_1 + 0xc0);
  _cfg_20.uStack_18 = *(uint32_t *)(param_1 + 0xc4);
  copy_two_words_from_param2((int)auStack_28,param_1 + 0x9c);
  uVar1 = return_first_word_1045c514(auStack_28);
  _cfg_20.uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,param_1 + 0x9c);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  register_menu_item_and_update_1038d246((cls_10559dac *)(param_1 + 0x18),(uint)*(byte *)(param_1 + 0x2ac),&_cfg_20.uStack_20);
  return;
}
