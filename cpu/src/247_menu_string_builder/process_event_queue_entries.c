/* @k10d process_event_queue_entries @ 0x104dac0c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Iterates over entries from param_2, processes each via a helper, and reports success or
 *   failure based on the count of successful operations.
 * summary:
 *   The function initializes several cls_105bb0b8 objects on the stack and performs a
 *   sequence of setup calls (retry_operation_until_success_104de540,
 *   scan_buffer_for_matching_bytes, validate_and_copy_string) that appear to configure a
 *   processing context. It then enters a loop calling get_upper_half_of_result to retrieve
 *   items from param_2, processing each with append_byte_to_buffer_104d5d52 and counting
 *   successes. If no items were processed successfully, it calls a failure handler;
 *   otherwise, it calls a success handler and performs additional setup via
 *   check_and_process_two_params. All stack-allocated objects are destroyed via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_queue_entries(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  bool bVar5;
  int iVar4;
  int iVar6;
  uintptr_t sp;
  uint8_t auStack_8c [32];
  uint8_t auStack_6c [32];
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new((void *)auStack_8c);
  iVar1 = retry_operation_until_success_104de540(param_2,auStack_8c);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_6c);
    iVar1 = scan_buffer_for_matching_bytes((void *)auStack_8c,(void *)auStack_6c);
    if ((((iVar1 != 0) && (iVar1 = validate_and_copy_string((void *)auStack_6c,(void *)0x105ba880/*ROM*/), iVar1 != 0)) &&
        (iVar1 = scan_buffer_for_matching_bytes((void *)auStack_8c,(void *)auStack_6c), iVar1 != 0)) &&
       (iVar1 = validate_and_copy_string((void *)auStack_6c,(void *)0x105ba888/*ROM*/), iVar1 != 0)) {
      cls_105bb0b8_new((void *)__frv_reg_unset(4));
      iVar1 = scan_buffer_for_matching_bytes((void *)auStack_8c,(void *)auStack_4c);
      if (iVar1 != 0) {
        uVar2 = allocate_buffer_via_helper();
        adjust_pointer_by_flag(param_3,1);
        uVar3 = add_offset_to_pointer_104d65b6(__frv_reg_unset(4));
        iVar1 = find_entry_in_fixed_table(uVar3,uVar2);
        if (iVar1 != 0) {
          write_three_bytes_to_struct_104d5d80(iVar1,0);
          iVar6 = 0;
          uStack_c = 0;
          while (bVar5 = get_upper_half_of_result(param_2,&uStack_c), bVar5) {
            iVar4 = append_byte_to_buffer_104d5d52(iVar1,uStack_c,1);
            if (iVar4 != 0) {
              iVar6 = iVar6 + 1;
            }
          }
          if (iVar6 == 0) {
            uVar2 = add_offset_by_flag(param_3,0);
            (*(code *)0x104d7eb2/*ROM*/)(uVar2,1);
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
          }
          else {
            (*(code *)0x104d5ea6/*ROM*/)(iVar1,1);
            cls_105bb0b8_new((void *)auStack_2c);
            iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba894/*ROM*/);
            if (iVar1 != 0) {
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_8c,2);
              return 1;
            }
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
          }
          goto LAB_104dadee;
        }
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
  }
LAB_104dadee:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_8c,2);
  return 0;
}
