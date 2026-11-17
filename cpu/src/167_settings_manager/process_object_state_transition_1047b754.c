/* @k10d process_object_state_transition_1047b754 @ 0x1047b754
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_object_state_transition_1047b754(int param_1)

{
  int iVar1;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*(int *)(param_1 + 0x70) + 0xc);
    *(int *)(iVar1 + 0x14) = param_1 + 0x20;
    iVar1 = link_object_into_list_10477ee6(*(int *)(param_1 + 0x50),iVar1);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x44) == '\0') {
        *(uint32_t *)(param_1 + 0x34) = 1;
      }
      else {
        allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
        *(uint32_t *)(param_1 + 0x34) = 2;
      }
    }
    else {
      allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
      iVar1 = call_helper_with_offset_0x1c(*(int *)(param_1 + 0x50));
      if (iVar1 != 0) {
        *(uint8_t *)(param_1 + 0x80) = 1;
      }
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
  }
  return;
}
