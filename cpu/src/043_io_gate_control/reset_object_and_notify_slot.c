/* @k10d reset_object_and_notify_slot @ 0x1039f2f8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_object_and_notify_slot(int param_1)

{
  int iVar1;
  
  set_bit_in_object_field(*(uint32_t *)(param_1 + 0xbc),0);
  set_flag_bit1_in_word_at_offset_0x18(*(uint32_t *)(param_1 + 0xbc),0);
  forward_two_fields_to_helper_104f243e(*(uint32_t *)(param_1 + 0xbc));
  store_param_and_call_helper(*(uint32_t *)(param_1 + 0xbc),0,0);
  set_flag_at_offset_0x10(*(uint32_t *)(param_1 + 0xbc),0);
  dispatch_state_transition_1039ed80(param_1,0);
  *(uint8_t *)(param_1 + 0x34) = 0;
  *(uint8_t *)(param_1 + 0x35) = 0;
  *(uint32_t *)(param_1 + 0x38) = 0;
  *(uint32_t *)(param_1 + 0x3c) = 0;
  *(uint8_t *)(param_1 + 0x40) = 0;
  *(uint32_t *)(param_1 + 0x44) = 0;
  *(uint32_t *)(param_1 + 0x48) = 0;
  *(uint32_t *)(param_1 + 0x5c) = 0;
  *(uint8_t *)(param_1 + 0xc2) = 0;
  *(uint8_t *)(param_1 + 0xc3) = 0;
  *(uint8_t *)(param_1 + 0xc5) = 0;
  *(uint8_t *)(param_1 + 0xd7) = 0;
  *(uint32_t *)(param_1 + 200) = 0;
  iVar1 = **(int **)(param_1 + 0x30);
  (**(code **)(iVar1 + 0x14))
            ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar1 + 0x10),0x1170002,0);
  return;
}
