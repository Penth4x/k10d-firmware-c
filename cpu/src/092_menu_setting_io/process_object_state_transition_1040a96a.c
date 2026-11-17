/* @k10d process_object_state_transition_1040a96a @ 0x1040a96a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and conditionally updates object fields or calls a helper based on
 *   a state value.
 * summary:
 *   The function first calls init_object_subsystem_1040a438 to check a status; if it
 *   returns 1, it calls init_object_with_buffer_and_callback_1040a534 with the input object
 *   and a stack variable. If that succeeds and a field at offset 8 is 0 or 1, it reads
 *   several fields from the object (offsets 0x30-0x38, 0x58) and passes them to
 *   write_two_stage_command. Depending on the return value of write_two_stage_command, it
 *   either calls poll_until_two_shorts_change or returns 1. If the initial checks fail or
 *   the field is not 0/1, it calls poll_until_two_shorts_change or returns 0. The specific
 *   camera subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_object_state_transition_1040a96a(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int extraout_r4;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_18 [8];
  int iStack_c;
  
  puVar5 = (uint32_t *)auStack_18;
  iVar1 = init_object_subsystem_1040a438(__frv_reg_unset(4));
  if (iVar1 == 1) {
    iVar1 = init_object_with_buffer_and_callback_1040a534((int)param_1,&iStack_c,0xffffffff);
    if (iVar1 == 1) {
      if ((*(int *)(iStack_c + 8) == 0) || (*(int *)(iStack_c + 8) == 1)) {
        uVar2 = *(uint32_t *)((int)param_1 + 0x58);
        uVar3 = *(uint32_t *)((int)param_1 + 0x38);
        uVar4 = *(uint32_t *)((int)param_1 + 0x30);
        *puVar5 = *(uint32_t *)((int)param_1 + 0x34);
        puVar5[1] = uVar4;
        write_two_stage_command(param_1,0,uVar2,uVar3,*puVar5,puVar5[1]);
        if ((extraout_r4 == 2) || (extraout_r4 == 0)) {
          uVar2 = poll_until_two_shorts_change(param_1);
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = poll_until_two_shorts_change(param_1);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
