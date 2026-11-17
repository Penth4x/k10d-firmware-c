/* @k10d run_infinite_event_loop @ 0x10471138
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 164_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Executes an infinite loop that processes events by calling helper functions and waiting
 *   for status flags.
 * summary:
 *   The function initializes several subsystems via callees and then enters a do-while loop
 *   that never terminates. Inside the loop, it retrieves a value, processes it with
 *   multiple helper calls, and waits in a sub-loop for a status check to return non-zero.
 *   It uses a local stack buffer to pass data to dispatch_actuator_drive_command with
 *   varying parameters (1, 3, 7).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_infinite_event_loop(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStack_84 [12];
  void *pvStack_5c;
  uint8_t auStack_58 [80];
  
  puVar4 = auStack_84;
  eventflag_wai_flg((uint32_t *)(param_1 + 0x4c),1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x4c),1);
  dispatch_seven_subroutines(param_1);
  allocate_display_buffers_and_enable(param_1);
  trigger_sr_cal_transfer_1047142a(param_1);
  *(uint16_t *)(puVar4 + 2) = 6;
  *(uint16_t *)(puVar4 + 6) = 0xff;
  puVar4[0xb] = 0;
  dispatch_actuator_drive_command(param_1,1,2,0x105a9b30/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
               puVar4[0xb]);
  dispatch_on_flag_with_context(param_1,1);
  pvVar3 = (void *)0x105a9b58/*ROM*/;
  pvStack_5c = (void *)0x105a9b58/*ROM*/;
  do {
    pvVar1 = (void *)poll_and_store_value_at_offset_0x44(param_1);
    trigger_sr_cal_transfer_1047142a(param_1);
    format_string_to_buffer_10545140(auStack_58,(char *)0x105a9b44/*ROM*/,pvVar1,pvVar3);
    *(uint16_t *)(puVar4 + 2) = 6;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
    dispatch_actuator_drive_command(param_1,3,2,auStack_58,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
                 puVar4[0xb]);
    release_struct_fields_10466d8a(*(void **)(param_1 + 0x1c));
    dispatch_timer_callback(param_1,pvVar1);
    release_three_sub_objects(*(uint32_t *)(param_1 + 0x1c));
    iVar2 = check_mode_in_valid_set(param_1,pvVar1);
    if (iVar2 != 0) {
      iVar2 = check_transaction_context_valid(*(int *)(param_1 + 0x1c));
      while (iVar2 == 0) {
        check_kernel_call_success_10459fea();
        iVar2 = check_transaction_context_valid(*(int *)(param_1 + 0x1c));
      }
    }
    release_struct_fields_10466d8a(*(void **)(param_1 + 0x1c));
    if (pvVar1 != (void *)0x0) {
      dispatch_virtual_slot_six(param_1,pvVar1);
    }
    release_three_sub_objects(*(uint32_t *)(param_1 + 0x1c));
    release_object_at_offset_0x24_104717e6(param_1);
    *(uint16_t *)(puVar4 + 2) = 6;
    *(uint16_t *)(puVar4 + 6) = 0xff;
    puVar4[0xb] = 0;
    pvVar3 = pvStack_5c;
    dispatch_actuator_drive_command(param_1,7,2,0x105a9b58/*ROM*/,*(uint16_t *)(puVar4 + 2),*(uint16_t *)(puVar4 + 6),
                 puVar4[0xb]);
  } while( true );
}
