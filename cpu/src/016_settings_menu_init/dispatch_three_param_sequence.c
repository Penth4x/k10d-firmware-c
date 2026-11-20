/* @k10d dispatch_three_param_sequence @ 0x1036aa4e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Checks a state flag and conditionally calls a helper three times with incrementing
 *   indices, then invokes a virtual method and cleanup routines.
 * summary:
 *   The function first calls query_state_and_flag_range; if it returns 0, it checks
 *   check_and_send_status_packet_1036ac68. If the result is 1, it calls
 *   retry_operation_five_times_1036ad5e three times with indices 0, 1, and 2, passing fixed
 *   SDRAM pointers (0x80015af0, 0x800158dc) and other constants. If the result is 2, it
 *   calls write_four_values_and_interval and init_object_with_three_params_1036aec2. In
 *   both cases, it performs a virtual call via vtable offset 0x44, then calls
 *   init_object_with_offset_field_1036add0, write_second_field_via_helper_1036c486 (with
 *   arg 180000), and write_second_field_of_struct. On error or after success, it calls
 *   get_or_create_singleton_object_1036c796 and read_array_element_bounded to return a
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557ba8 * dispatch_three_param_sequence(cls_10557ba8 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_24 [8];
  
  puVar4 = (uint32_t *)auStack_24;
  iVar1 = query_state_and_flag_range(param_1,(uint32_t *)0x0);
  if (iVar1 == 0) {
    iVar1 = check_and_send_status_packet_1036ac68(param_1);
    if (iVar1 == 1) {
      *puVar4 = 0x80015af0/*SDRAM*/;
      puVar4[1] = 0x800158dc/*SDRAM*/;
      iVar1 = retry_operation_five_times_1036ad5e((int)param_1,(uint32_t)(0),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
      if (iVar1 == 0) {
        *puVar4 = 0x80015af0/*SDRAM*/;
        puVar4[1] = 0x800158dc/*SDRAM*/;
        iVar1 = retry_operation_five_times_1036ad5e((int)param_1,(uint32_t)(1),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
        if (iVar1 == 0) {
          *puVar4 = 0x80015af0/*SDRAM*/;
          puVar4[1] = 0x800158dc/*SDRAM*/;
          iVar1 = retry_operation_five_times_1036ad5e((int)param_1,(uint32_t)(2),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
          if (iVar1 == 0) {
            uVar2 = get_or_create_singleton_object_1036c796();
            uVar3 = 2;
            goto LAB_1036aad8;
          }
        }
      }
    }
    else if (iVar1 == 2) {
      write_four_values_and_interval(param_1);
      init_object_with_three_params_1036aec2(param_1);
    }
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj);
    init_object_with_offset_field_1036add0(param_1);
    write_second_field_via_helper_1036c486(param_1,180000);
    write_second_field_of_struct(param_1,0);
  }
  else {
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 1;
LAB_1036aad8:
    param_1 = (cls_10557ba8 *)read_array_element_bounded(uVar2,uVar3);
  }
  return param_1;
}
