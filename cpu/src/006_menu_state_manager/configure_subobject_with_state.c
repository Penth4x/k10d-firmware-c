/* @k10d configure_subobject_with_state @ 0x103660a0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Configures a sub-object at offset 0x18 of param_1, branching on a global flag to either
 *   reset it or populate it with computed values.
 * summary:
 *   The function first calls register_two_menu_items_1037be8e on the sub-object at
 *   param_1+0x18, passing two 16-bit values read from a pointer stored at param_1+0x70. It
 *   then checks the global DAT_80015f14; if zero, it calls
 *   invoke_virtual_method_on_object_1037be60 with 0. Otherwise, it copies three 32-bit
 *   values from globals into a stack buffer, calls copy_two_words_from_param2 with a
 *   constant, extracts two 16-bit values via return_first_word_1045c514 and
 *   read_struct_field_at_offset_4, and finally calls register_menu_item_with_data_1037bdfa
 *   and invoke_virtual_method_on_object_1037be60 with 1, followed by
 *   free_heap_if_flagged_1045c402. The specific subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_subobject_with_state(int param_1)

{
  uint32_t uVar1;
  cls_10558b34 *pcVar2;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  pcVar2 = (cls_10558b34 *)(param_1 + 0x18);
  register_two_menu_items_1037be8e((int)(pcVar2),(uint16_t)(*(uint16_t *)(*(int *)(param_1 + 0x70) + 4)), (uint16_t)(*(uint16_t *)(*(int *)(param_1 + 0x70) + 6)));
  if (DAT_80015f14/*SDRAM*/ == '\0') {
    invoke_virtual_method_on_object_1037be60((int)(pcVar2),(uint32_t)(0));
  }
  else {
    uStack_28 = _DAT_80015d24/*SDRAM*/;
    uStack_24 = _DAT_80015d28/*SDRAM*/;
    uStack_20 = _DAT_80015d2c/*SDRAM*/;
    copy_two_words_from_param2((int)auStack_18,-0x7ffea2fc);
    uVar1 = return_first_word_1045c514(auStack_18);
    uStack_1c = (short)uVar1;
    uVar1 = read_struct_field_at_offset_4(auStack_18);
    uStack_1a = (short)uVar1;
    register_menu_item_with_data_1037bdfa(pcVar2,1,&uStack_28);
    invoke_virtual_method_on_object_1037be60((int)(pcVar2),(uint32_t)(1));
    free_heap_if_flagged_1045c402(auStack_18,2);
  }
  return;
}
