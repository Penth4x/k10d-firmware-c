/* @k10d imgp_a_program_and_start_104fe526 @ 0x104fe526
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Programs and starts image processor engine A from a request block.
 * summary:
 *   The function calls an unknown helper on a field at offset 0x1c of the first argument,
 *   then performs three operations on an object obtained from
 *   get_or_init_singleton_object_1051d40e using index 7. Finally, it calls the verified
 *   function imgp_a_program_and_start to configure and start engine A. The role is
 *   consistent with the verified callee's behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_a_program_and_start_104fe526(int param_1,void *param_2,uint32_t *param_3)

{
  void *pvVar1;
  uint uVar2;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 | 1);
  imgp_a_program_and_start_104fe398(param_1,param_3);
  return;
}
