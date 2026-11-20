/* @k10d configure_subobject_with_two_values @ 0x10367d2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x18 by setting four fields and appending a two-word
 *   payload built from two helper calls.
 * summary:
 *   The function takes a base pointer in param_1 and operates on the sub-object at
 *   param_1+0x18. It calls four setter-like functions
 *   (dispatch_virtual_calls_on_nine_objects, register_two_menu_items_1037fa96,
 *   register_menu_item_and_set_flag_1037faf4, register_and_set_two_menu_items) with
 *   constants and values read from offsets 0xa0 and 0xa2 of the parent object. It then
 *   constructs a local 8-byte structure using two calls to return_first_word_1045c514 and
 *   read_struct_field_at_offset_4 (each preceded by copy_two_words_from_param2 and followed
 *   by free_heap_if_flagged_1045c402), and finally passes this structure to
 *   copy_menu_item_and_register_1037fa30 along with a global pointer. The specific
 *   subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_subobject_with_two_values(int param_1)

{
  struct {
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint16_t uStack_14;
  } _cfg_20;
  uint32_t uVar1;
  cls_10558da4 *pcVar2;
  uintptr_t sp;
  uint32_t auStack_28 [2];
  uint16_t uStack_12;
  
  pcVar2 = (cls_10558da4 *)(param_1 + 0x18);
  dispatch_virtual_calls_on_nine_objects((int)(pcVar2),(int)(0));
  register_two_menu_items_1037fa96((int)(pcVar2),(uint16_t)(_DAT_80015d3c/*SDRAM*/),(uint16_t)(_DAT_80015d3e/*SDRAM*/));
  register_menu_item_and_set_flag_1037faf4((int)pcVar2,*(short *)(param_1 + 0xa0));
  register_and_set_two_menu_items((int)pcVar2,(uint)*(byte *)(param_1 + 0xa2));
  _cfg_20.uStack_20 = _DAT_80015d24/*SDRAM*/;
  _cfg_20.uStack_1c = _DAT_80015d28/*SDRAM*/;
  _cfg_20.uStack_18 = _DAT_80015d2c/*SDRAM*/;
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = return_first_word_1045c514(auStack_28);
  _cfg_20.uStack_14 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_two_words_from_param2((int)auStack_28,-0x7ffea2fc);
  uVar1 = read_struct_field_at_offset_4(auStack_28);
  uStack_12 = (short)uVar1;
  free_heap_if_flagged_1045c402(auStack_28,2);
  copy_menu_item_and_register_1037fa30(pcVar2,(uint)DAT_80015f14/*SDRAM*/,&_cfg_20.uStack_20);
  return;
}
