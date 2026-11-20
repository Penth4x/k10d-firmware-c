/* @k10d initialize_object_with_three_entries @ 0x10370560
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 030_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10557fec * initialize_object_with_three_entries(cls_10557fec *param_1)

{
  int iVar1;
  uint32_t uVar2;
  cls_10557fec *pcVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t auStack_28 [8];
  int iStack_c;
  
  puVar4 = (uint32_t *)auStack_28;
  iStack_c = 5;
  iVar1 = query_state_and_flag_range(param_1,&iStack_c);
  if (iVar1 == 0) {
    if (iStack_c == 1) {
      init_object_with_fixed_state_10370b68((void *)__frv_reg_unset(4));
      return param_1;
    }
    iVar1 = dispatch_event_and_return_offset(param_1,&param_1->field_0x70,0xffffffff);
    if (iVar1 == 1) {
      write_six_param_config_block_10370be6((int)param_1);
      iVar1 = check_status_and_send_command(param_1);
      if (iVar1 == 1) {
        *puVar4 = 0x80015af0/*SDRAM*/;
        puVar4[1] = 0x800158dc/*SDRAM*/;
        iVar1 = retry_call_with_timeout((int)param_1,(uint32_t)(0),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
        if (iVar1 == 0) {
          *puVar4 = 0x80015af0/*SDRAM*/;
          puVar4[1] = 0x800158dc/*SDRAM*/;
          iVar1 = retry_call_with_timeout((int)param_1,(uint32_t)(1),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
          if (iVar1 == 0) {
            *puVar4 = 0x80015af0/*SDRAM*/;
            puVar4[1] = 0x800158dc/*SDRAM*/;
            iVar1 = retry_call_with_timeout((int)param_1,(uint32_t)(2),(void *)(0x80018058/*SDRAM*/),(uint32_t)(0x80015d04/*SDRAM*/),(uint32_t)(*puVar4),(uint32_t)(puVar4[1]));
            if (iVar1 == 0) {
              invoke_virtual_slot_two_on_four_objects_1036b766();
            }
          }
        }
      }
      else if (iVar1 == 2) {
        init_object_with_three_params_10370ca6((int)param_1);
      }
      initialize_subobject_with_flags((int)param_1);
      init_struct_with_two_zero_fields(param_1);
      param_1->field_0x75 = 0;
      write_second_field_via_helper_1036c486(param_1,0xfa);
      return param_1;
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  pcVar3 = (cls_10557fec *)read_array_element_bounded(uVar2,1);
  return pcVar3;
}
