/* @k10d write_two_stage_command @ 0x1040a3f8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Clears a flag at offset 0x69 and issues two sequential commands via a helper, retrying
 *   the second with saved parameters if the first fails.
 * summary:
 *   The function writes 0 to byte offset 0x69 of the object pointed to by param_1. It then
 *   calls retry_operation_five_times_1040ab6e with mode 1 and parameters param_3 through
 *   param_6. If that call returns 0, it saves param_5 and param_6 to the stack and calls
 *   retry_operation_five_times_1040ab6e again with mode 2 and the same parameters. The
 *   caller context suggests this is part of a multi-step operation sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_stage_command(void *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)&stack0xffffffdc;
  *(uint8_t *)((int)param_1 + 0x69) = 0;
  iVar1 = retry_operation_five_times_1040ab6e(param_1,1,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    *puVar2 = param_5;
    puVar2[1] = param_6;
    retry_operation_five_times_1040ab6e(param_1,2,param_3,param_4,*puVar2,puVar2[1]);
  }
  return;
}
