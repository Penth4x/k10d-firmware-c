/* @k10d process_stream_into_buffer @ 0x104da798
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Iterates over a source stream, writing each element into a destination buffer until the
 *   source is exhausted.
 * summary:
 *   The function constructs several cls_105bb0b8 objects on the stack and performs a series
 *   of setup calls (retry_operation_until_success_104de540, scan_buffer_for_matching_bytes,
 *   validate_and_copy_string) with specific data pointers. It then enters a loop that
 *   repeatedly calls get_upper_half_of_result to check for more data and
 *   append_byte_to_buffer_104d5aec to process/write each item. If no items are processed,
 *   it calls a cleanup routine; otherwise, it finalizes the buffer and performs additional
 *   setup via check_and_process_two_params. All stack-allocated objects are destroyed via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_stream_into_buffer(uint32_t param_1,int *param_2,uint32_t param_3)

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
    if ((((iVar1 != 0) && (iVar1 = validate_and_copy_string((void *)auStack_6c,(void *)0x105ba82c/*ROM*/), iVar1 != 0)) &&
        (iVar1 = scan_buffer_for_matching_bytes((void *)auStack_8c,(void *)auStack_6c), iVar1 != 0)) &&
       (iVar1 = validate_and_copy_string((void *)auStack_6c,(void *)0x105ba838/*ROM*/), iVar1 != 0)) {
      cls_105bb0b8_new((void *)__frv_reg_unset(4));
      iVar1 = scan_buffer_for_matching_bytes((void *)auStack_8c,(void *)auStack_4c);
      if (iVar1 != 0) {
        uVar2 = allocate_buffer_via_helper();
        adjust_pointer_by_flag(param_3,1);
        uVar3 = add_offset_to_pointer_104d65b6(__frv_reg_unset(4));
        iVar1 = find_entry_by_key_in_table(uVar3,uVar2);
        if (iVar1 != 0) {
          write_byte_to_four_offsets_104d5b1c(iVar1,0);
          iVar6 = 0;
          uStack_c = 0;
          while (bVar5 = get_upper_half_of_result(param_2,&uStack_c), bVar5) {
            iVar4 = append_byte_to_buffer_104d5aec(iVar1,uStack_c,1);
            if (iVar4 == 0) goto LAB_104da8d4;
            iVar6 = iVar6 + 1;
          }
          if (iVar6 == 0) {
            uVar2 = add_offset_by_flag(param_3,0);
            (*(code *)0x104d7eb2/*ROM*/)(uVar2,1);
          }
          else {
            (*(code *)0x104d5c94/*ROM*/)(iVar1,1);
            cls_105bb0b8_new((void *)auStack_2c);
            iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba844/*ROM*/);
            if (iVar1 != 0) {
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
              reset_vtable_and_free_if_flagged_104ddfe6(auStack_8c,2);
              return 1;
            }
            reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
          }
LAB_104da8d4:
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
          goto LAB_104da962;
        }
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_6c,2);
  }
LAB_104da962:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_8c,2);
  return 0;
}
