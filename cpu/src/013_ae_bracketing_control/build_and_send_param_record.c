/* @k10d build_and_send_param_record @ 0x10368e4a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * purpose:
 *   Copies a 12-byte block from a table, appends two 16-bit values, and passes the result
 *   to a handler.
 * summary:
 *   The function reads a pointer from param_1+0x13c, uses it as an index into a table
 *   (stride 0x214), and copies three 32-bit words to the stack. It calls
 *   copy_two_words_from_param2 to initialize a local buffer, extracts two 16-bit values via
 *   return_first_word_1045c514 and read_struct_field_at_offset_4, and finally calls
 *   register_menu_item_entry_10381d32 with a pointer to param_1+0x6c, the index, and the
 *   constructed stack data. free_heap_if_flagged_1045c402 is called to finalize or release
 *   the local buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_send_param_record(int param_1)

{
  struct {
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint16_t uStack_1c;
  } _cfg_28;
  uint32_t uVar1;
  uintptr_t sp;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  _cfg_28.uStack_28 = *(uint32_t *)(*(int *)(param_1 + 0x13c) * 0x214 + -0x7ffea0c8);
  _cfg_28.uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x13c) * 0x214 + -0x7ffea0c4);
  _cfg_28.uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x13c) * 0x214 + -0x7ffea0c0);
  copy_two_words_from_param2((int)auStack_18,*(int *)(param_1 + 0x13c) * 0x214 + -0x7ffea0e8);
  uVar1 = return_first_word_1045c514(auStack_18);
  _cfg_28.uStack_1c = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(auStack_18);
  uStack_1a = (short)uVar1;
  register_menu_item_entry_10381d32((cls_10558e74 *)(param_1 + 0x6c),*(int *)(param_1 + 0x13c),&_cfg_28.uStack_28);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
