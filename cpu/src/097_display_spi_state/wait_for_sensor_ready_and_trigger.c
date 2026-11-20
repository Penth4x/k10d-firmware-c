/* @k10d wait_for_sensor_ready_and_trigger @ 0x104199e0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Polls status flags with timeouts and calls a trigger function if the sensor state is
 *   ready.
 * summary:
 *   Maps param_2 (1, 2, 3) to an internal mode (1, 0, 2). Calls call_kernel_with_short_id
 *   to initialize a state at param_1+0x1558. Waits for flags at param_1+0x92 and 0x93 to
 *   clear, polling with check_kernel_call_success_10459fea(0x32) up to 40 times. Calls
 *   check_mode_flag_or_byte and check_object_flag_at_offset_0x14 to check status. If ready,
 *   waits for param_1+0x1504 to become 2, then calls eventflag_clr_flg twice and
 *   dispatch_mode_transition_104b7cd0 to perform the action. Finally calls
 *   check_kernel_call_success_10459d88 to finalize the state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_sensor_ready_and_trigger(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint32_t uVar4;
  
  if (param_2 == 1) {
    uVar4 = 1;
  }
  else if (param_2 == 2) {
    uVar4 = 0;
  }
  else {
    if (param_2 != 3) {
      return 0;
    }
    uVar4 = 2;
  }
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x1558));
  bVar2 = true;
  iVar3 = 0;
  if (*(char *)(param_1 + 0x92) != '\0') goto LAB_10419a26;
  cVar1 = *(char *)(param_1 + 0x93);
  while (cVar1 != '\0') {
LAB_10419a26:
    do {
      check_kernel_call_success_10459fea();
      iVar3 = iVar3 + 1;
      if (0x28 < iVar3) {
        bVar2 = false;
        goto LAB_10419a4c;
      }
    } while (*(char *)(param_1 + 0x92) != '\0');
    cVar1 = *(char *)(param_1 + 0x93);
  }
LAB_10419a4c:
  check_mode_flag_or_byte(*(uint32_t *)(param_1 + 0x50));
  iVar3 = check_object_flag_at_offset_0x14(*(uint32_t *)(param_1 + 0x5c));
  if ((iVar3 == 0) && (bVar2)) {
    if (*(int *)(param_1 + 0x1504) != 2) {
      iVar3 = 0;
      do {
        check_kernel_call_success_10459fea();
        iVar3 = iVar3 + 1;
        if (0x28 < iVar3) {
          bVar2 = false;
          break;
        }
      } while (*(int *)(param_1 + 0x1504) != 2);
    }
    if (bVar2) {
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1548),(uint)(1));
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1548),(uint)(2));
      iVar3 = get_or_create_singleton_object_104bb22a();
      uVar4 = dispatch_mode_transition_104b7cd0((int)(*(uint32_t *)(iVar3 + 4)),(void *)(param_1 + 0x40),(int)(uVar4));
      check_kernel_call_success_10459fea();
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1558));
  return uVar4;
}
