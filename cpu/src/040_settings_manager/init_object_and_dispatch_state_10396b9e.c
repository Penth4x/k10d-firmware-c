/* @k10d init_object_and_dispatch_state_10396b9e @ 0x10396b9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object's internal pointer, calls a sequence of setup functions, and
 *   dispatches a virtual method based on a status check.
 * summary:
 *   The function sets param_1[1] to point to param_1+2, then calls several initialization
 *   routines (call_helper_with_second_field_10396d1e,
 *   clear_flag_and_call_two_helpers_104d8346, etc.). It performs a status check via
 *   check_flag_and_set_out_param_104d810e; if the status is non-zero, it calls a series of
 *   additional setup functions (get_or_init_global_object_103964f8, set_subfield_flag_pair,
 *   etc.) before invoking a virtual method at offset 0x34. Finally, it calls
 *   heap_free_if_flagged and returns the updated object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * init_object_and_dispatch_state_10396b9e(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uintptr_t sp;
  uint8_t auStack_1a [13];
  uint8_t auStack_d [4];
  char cStack_9;
  
  param_1[1] = (int)(param_1 + 2);
  call_helper_with_second_field_10396d1e((void *)__frv_reg_unset(4));
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  clear_flag_and_call_two_helpers_104d8346(__frv_reg_unset(4));
  heap_alloc_one_byte_1045926e((int)auStack_d);
  uVar2 = (*(code *)0x10459356/*ROM*/)(auStack_d);
  format_string_to_buffer_10545140(auStack_1a,(char *)0x10562fe0/*ROM*/,(void *)((int)uVar2 >> 8),(void *)(uVar2 & 0xff));
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  pcVar3 = (char *)return_pentax_corp_string_ptr((int)auStack_d);
  pcVar4 = (char *)(*(code *)0x10459346/*ROM*/)(auStack_d);
  set_three_object_properties(iVar1,pcVar3,auStack_1a,pcVar4);
  cStack_9 = '\0';
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  iVar1 = check_flag_and_set_out_param_104d810e(iVar1,&cStack_9);
  if (iVar1 == 0) {
    if (cStack_9 == '\0') {
      (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
      param_1 = (int *)create_and_configure_object_10393b48(0,0,param_1);
    }
  }
  else {
    get_or_init_global_object_103964f8();
    set_subfield_flag_pair(__frv_reg_unset(4));
    get_or_init_singleton_1039201c();
    set_object_field_c_to_one_then_zero(__frv_reg_unset(4));
    get_or_create_singleton_object_10395bd6();
    reset_four_subobjects(__frv_reg_unset(4));
    get_or_init_singleton_10392e96();
    call_virtual_slot_two_10393058(__frv_reg_unset(4));
    (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
    param_1 = (int *)get_or_init_sram_object_103973c4();
  }
  heap_free_if_flagged(auStack_d,2);
  return param_1;
}
