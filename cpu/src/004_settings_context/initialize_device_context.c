/* @k10d initialize_device_context @ 0x10365696
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 004_settings_context (unit names are model-proposed)
 * purpose:
 *   Initializes a device context structure by setting up flags, calling setup routines, and
 *   registering three handlers.
 * summary:
 *   The function takes a context pointer, calls query_state_and_flag_range to check a state
 *   (expecting 1), and if successful, proceeds to initialize fields at offsets 0x74-0x81
 *   based on flags from init_sram_block_and_store_param. It then calls
 *   check_and_send_status_message and, if successful, invokes
 *   retry_operation_five_times_1036602e three times with indices 0, 1, and 2, passing fixed
 *   SDRAM addresses (0x80015af0, 0x800158dc, 0x80018058, 0x80015d04). Finally, it calls
 *   write_second_field_via_helper_1036c486 with argument 0xfa. On failure paths, it calls
 *   get_or_create_singleton_object_1036c796 and read_array_element_bounded to handle errors
 *   or cleanup.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * initialize_device_context(void *param_1)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  uint uVar5;
  uint32_t uVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_28 [8];
  int iStack_c;
  
  puVar7 = (uint32_t *)auStack_28;
  iStack_c = 5;
  iVar2 = query_state_and_flag_range(param_1,&iStack_c);
  if (iVar2 == 0) {
    if (iStack_c == 1) {
      init_object_with_state_three_10365dc4((void *)__frv_reg_unset(4));
      return param_1;
    }
    iVar2 = dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x70),0xffffffff);
    if (iVar2 == 1) {
      if (*(char *)(*(int *)((int)param_1 + 0x70) + 0x28) == '\0') {
        uVar5 = init_sram_block_and_store_param(param_1);
        *(uint *)((int)param_1 + 0x74) = uVar5;
        *(uint32_t *)((int)param_1 + 0x78) = 0xffffffff;
        *(uint32_t *)((int)param_1 + 0x7c) = 0xffffffff;
        if ((uVar5 & 1) != 0) {
          *(uint32_t *)((int)param_1 + 0x78) = 0;
        }
        if ((*(uint *)((int)param_1 + 0x74) & 2) != 0) {
          *(uint32_t *)((int)param_1 + 0x78) = 1;
        }
        if ((*(uint *)((int)param_1 + 0x74) & 4) != 0) {
          *(uint32_t *)((int)param_1 + 0x7c) = 2;
        }
        if ((*(uint *)((int)param_1 + 0x74) & 8) != 0) {
          *(uint32_t *)((int)param_1 + 0x7c) = 3;
        }
        if ((*(int *)((int)param_1 + 0x78) == -1) ||
           (uVar1 = 1, *(int *)((int)param_1 + 0x7c) == -1)) {
          uVar1 = 0;
        }
        *(uint8_t *)((int)param_1 + 0x80) = uVar1;
        write_exposure_params_to_object((int)param_1);
        iVar2 = check_and_send_status_message(param_1);
        if (iVar2 == 1) {
          *puVar7 = 0x80015af0/*SDRAM*/;
          puVar7[1] = 0x800158dc/*SDRAM*/;
          iVar2 = retry_operation_five_times_1036602e((int)param_1,0,0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
          if (iVar2 == 0) {
            *puVar7 = 0x80015af0/*SDRAM*/;
            puVar7[1] = 0x800158dc/*SDRAM*/;
            iVar2 = retry_operation_five_times_1036602e((int)param_1,1,0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
            if (iVar2 == 0) {
              *puVar7 = 0x80015af0/*SDRAM*/;
              puVar7[1] = 0x800158dc/*SDRAM*/;
              iVar2 = retry_operation_five_times_1036602e((int)param_1,2,0x80018058/*SDRAM*/,0x80015d04/*SDRAM*/,*puVar7,puVar7[1]);
              if (iVar2 == 0) {
                invoke_virtual_slot_two_on_four_objects_1036b766();
              }
            }
          }
        }
        else if (iVar2 == 2) {
          init_object_with_three_params_10365f02((int)param_1);
        }
        configure_subobject_with_state((int)param_1);
        init_object_with_subroutine_calls(param_1);
        *(uint8_t *)((int)param_1 + 0x81) = 0;
        write_second_field_via_helper_1036c486(param_1,0xfa);
        return param_1;
      }
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar6 = 2;
    }
    else {
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar6 = 1;
    }
  }
  else {
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar6 = 1;
  }
  pvVar4 = (void *)read_array_element_bounded(uVar3,uVar6);
  return pvVar4;
}
