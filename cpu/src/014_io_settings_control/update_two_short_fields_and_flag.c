/* @k10d update_two_short_fields_and_flag @ 0x1036a606
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Copies three words from an object, extracts two short values via helper calls, and
 *   writes them plus a flag to a sub-object.
 * summary:
 *   The function reads three 32-bit values from offsets 0xb8-0xc0 of param_1 into a local
 *   buffer. It calls copy_two_words_from_param2 twice with param_1+0x98, then uses
 *   return_first_word_1045c514 and read_struct_field_at_offset_4 to extract two 16-bit
 *   values stored in _cfg_20.uStack_14 and uStack_12. Finally, it calls
 *   register_thirteen_menu_items with 0, register_menu_item_and_update_10382a9c with a byte
 *   from param_1+0x2a8 and the local buffer, and conditionally calls
 *   register_thirteen_menu_items with 1 if that byte is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_short_fields_and_flag(int param_1)

{
  struct {
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint16_t uStack_14;
  } _cfg_20;
  uint32_t uVar1;
  cls_10558fd4 *pcVar2;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint16_t uStack_12;
  
  _cfg_20.uStack_20 = *(uint32_t *)(param_1 + 0xb8);
  _cfg_20.uStack_1c = *(uint32_t *)(param_1 + 0xbc);
  _cfg_20.uStack_18 = *(uint32_t *)(param_1 + 0xc0);
  copy_two_words_from_param2((int)auStack_28,param_1 + 0x98);
  uVar1 = return_first_word_1045c514(auStack_28);
  _cfg_20.uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,param_1 + 0x98);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  pcVar2 = (cls_10558fd4 *)(param_1 + 0x14);
  register_thirteen_menu_items(pcVar2,0);
  register_menu_item_and_update_10382a9c(pcVar2,(uint)*(byte *)(param_1 + 0x2a8),&_cfg_20.uStack_20);
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    register_thirteen_menu_items(pcVar2,1);
  }
  return;
}
