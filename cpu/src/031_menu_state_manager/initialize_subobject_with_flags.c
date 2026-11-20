/* @k10d initialize_subobject_with_flags @ 0x10370e44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x18 of param_1 by copying fields and setting state
 *   flags based on a global condition.
 * summary:
 *   The function takes a pointer param_1 and operates on the sub-structure at param_1 +
 *   0x18. It calls register_two_menu_items_1038f2dc with two 16-bit values read from a
 *   pointer stored at param_1 + 0x70, and copies a byte from that same source to param_1 +
 *   0x74. It then calls invoke_virtual_method_on_object_1038f332. If the global
 *   DAT_80015f14 is zero, it calls invoke_virtual_method_on_object_1038f2ae with 0.
 *   Otherwise, it prepares a stack buffer, calls copy_two_words_from_param2, extracts two
 *   16-bit values via return_first_word_1045c514 and read_struct_field_at_offset_4, and
 *   calls register_menu_item_with_data_1038f248 and
 *   invoke_virtual_method_on_object_1038f2ae with 1, followed by
 *   free_heap_if_flagged_1045c402. The specific camera subsystem is not identifiable from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_subobject_with_flags(int param_1)

{
  struct {
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint16_t uStack_1c;
  } _cfg_28;
  uint32_t uVar1;
  cls_1055a164 *pcVar2;
  uintptr_t sp;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  pcVar2 = (cls_1055a164 *)(param_1 + 0x18);
  register_two_menu_items_1038f2dc((int)(pcVar2),(uint16_t)(*(uint16_t *)(*(int *)(param_1 + 0x70) + 4)), (uint16_t)(*(uint16_t *)(*(int *)(param_1 + 0x70) + 6)));
  *(uint8_t *)(param_1 + 0x74) = *(uint8_t *)(*(int *)(param_1 + 0x70) + 0x28);
  invoke_virtual_method_on_object_1038f332((int)(pcVar2), (uint32_t)(__frv_reg_unset(5)));
  if (DAT_80015f14/*SDRAM*/ == '\0') {
    invoke_virtual_method_on_object_1038f2ae((int)(pcVar2),(uint32_t)(0));
  }
  else {
    _cfg_28.uStack_28 = _DAT_80015d24/*SDRAM*/;
    _cfg_28.uStack_24 = _DAT_80015d28/*SDRAM*/;
    _cfg_28.uStack_20 = _DAT_80015d2c/*SDRAM*/;
    copy_two_words_from_param2((int)auStack_18,-0x7ffea2fc);
    uVar1 = return_first_word_1045c514(auStack_18);
    _cfg_28.uStack_1c = (short)uVar1;
    uVar1 = read_struct_field_at_offset_4(auStack_18);
    uStack_1a = (short)uVar1;
    register_menu_item_with_data_1038f248(pcVar2,1,&_cfg_28.uStack_28);
    invoke_virtual_method_on_object_1038f2ae((int)(pcVar2),(uint32_t)(1));
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  return;
}
