/* @k10d init_three_stage_object @ 0x1036f05e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a helper three times with incrementing indices and
 *   setting status flags on success.
 * summary:
 *   The function clears two byte fields in the object (offsets 0x2e and 0xb9). It then
 *   calls retry_operation_five_times_1036f156 three times with indices 0, 1, and 2, passing
 *   fixed SDRAM pointers (0x80015d04, 0x80015af0, 0x800158dc). If all calls succeed, it
 *   sets the flag at offset 0x2e to 1. Finally, it calls
 *   dispatch_event_with_state_check_1036f384, performs a virtual call via vtable slot at
 *   offset 0x44, and calls request_ui_sync_code_4 with a pointer from offset 0x2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_three_stage_object(int *param_1)

{
  int iVar1;
  int *piVar2;
  uintptr_t sp;
  uint32_t *puVar3;
  
  puVar3 = (uint32_t *)&stack0xffffffd8;
  *(uint8_t *)(param_1 + 0x2e) = 0;
  *(uint8_t *)((int)param_1 + 0xb9) = 0;
  piVar2 = param_1 + 0x2a;
  iVar1 = retry_operation_five_times_1036f156((int)param_1,0,piVar2,0x80015d04/*SDRAM*/,0x80015af0/*SDRAM*/,0x800158dc/*SDRAM*/);
  if (iVar1 == 0) {
    *(uint8_t *)((int)param_1 + 0xb9) = 1;
    *puVar3 = 0x80015af0/*SDRAM*/;
    puVar3[1] = 0x800158dc/*SDRAM*/;
    iVar1 = retry_operation_five_times_1036f156((int)param_1,1,piVar2,0x80015d04/*SDRAM*/,*puVar3,puVar3[1]);
    if (iVar1 == 0) {
      *puVar3 = 0x80015af0/*SDRAM*/;
      puVar3[1] = 0x800158dc/*SDRAM*/;
      iVar1 = retry_operation_five_times_1036f156((int)param_1,2,piVar2,0x80015d04/*SDRAM*/,*puVar3,puVar3[1]);
      if (iVar1 == 0) {
        *(uint8_t *)(param_1 + 0x2e) = 1;
      }
    }
  }
  dispatch_event_with_state_check_1036f384(param_1,0);
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4((void *)param_1[0xb]);
  return;
}
