/* @k10d check_two_config_entries @ 0x104dc17c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Validates two configuration entries from a source buffer and returns a success flag.
 * summary:
 *   The function constructs two temporary objects of class cls_105bb0b8 on the stack. It
 *   calls check_two_conditions_and_return_flag to process the first entry (using string
 *   0x105babd0) and check_and_process_two_params to process the second entry (using string
 *   0x105babdc). If the first check fails, it invokes a callback via add_offset_0x2254 and
 *   returns 0. If both checks pass, it returns 1; otherwise, it returns 0. The temporary
 *   objects are destroyed via their virtual destructor (slot 1) in all exit paths.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_config_entries(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_48,(char *)0x105babd0/*ROM*/);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
    uVar2 = 0;
  }
  else {
    uVar2 = add_offset_0x2254(param_3);
    (*(code *)0x104d521c/*ROM*/)(uVar2,1);
    cls_105bb0b8_new((void *)auStack_28);
    iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105babdc/*ROM*/);
    if (iVar1 == 0) {
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
      uVar2 = 0;
    }
    else {
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
      uVar2 = 1;
    }
  }
  return uVar2;
}
