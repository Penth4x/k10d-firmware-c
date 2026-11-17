/* @k10d mode_ctrl_execute_action @ 0x10430eb6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Locks the mode controller, validates state, and executes a parameterized action
 *   sequence with cleanup.
 * summary:
 *   Acquires a lock via mode_ctrl_lock and checks a state flag via
 *   check_two_conditions_on_object. If valid, it initializes two cls_1059f170 objects,
 *   configures them with parameters, and calls clone_object_with_sem_guard to perform the
 *   core operation. It releases the lock and returns the result of the core operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int mode_ctrl_execute_action(int param_1,int param_2,int param_3,uint8_t param_4)

{
  int iVar1;
  uintptr_t sp;
  int iStack_48;
  uint8_t auStack_3c [20];
  uint8_t auStack_28 [20];
  int iStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  iStack_48 = 0;
  iVar1 = mode_ctrl_lock(param_1,0);
  if (iVar1 != 0) {
    iVar1 = check_two_conditions_on_object((void *)param_1);
    if (iVar1 == 0) {
      store_three_values_if_valid((uint32_t *)(param_1 + 0x44),param_2,param_3,0);
      cls_1059f170_new((void *)auStack_3c);
      cls_1059f170_new((void *)auStack_28);
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      copy_five_values_between_objects(param_1,auStack_3c);
      iStack_14 = param_1 + 0x20;
      store_value_at_offset_eight_104330a6(auStack_3c,1);
      set_byte_at_offset_0xc(auStack_28,param_4);
      write_param_to_buffer(*(uint32_t *)(param_1 + 0x30),auStack_3c,1);
      iStack_48 = clone_object_with_sem_guard(param_1,auStack_3c);
      if (iStack_48 == 0) {
        release_sem_and_clear_obj((uint32_t *)(param_1 + 0x44));
      }
      cls_1059f170_destructor(auStack_28,2);
      cls_1059f170_destructor(auStack_3c,2);
    }
    mode_ctrl_unlock((void *)param_1);
  }
  return iStack_48;
}
