/* @k10d allocate_and_bind_object_104751dc @ 0x104751dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object instance and associates it with a parent structure after a
 *   validation check.
 * summary:
 *   The function first calls parse_three_digit_ascii_value with a field from param_1 and
 *   param_2, passing a local stack variable as an output parameter. If this check succeeds,
 *   it queries a state via get_bounded_array_element. If the state is zero, it constructs a
 *   new object using construct_cls_105aa3ec (constructor for cls_105aa3ec), initializes it
 *   with write_bytes_and_clear_flag and set_flag_and_call_on_zero, and links it to the
 *   parent via record_sample_index_in_buffer. If the state is non-zero and param_3 is set,
 *   it performs a different initialization path using set_flag_and_call_on_zero and
 *   update_max_value_if_larger. Returns 1 on successful allocation/linking, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_and_bind_object_104751dc(int param_1,void *param_2,int param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint16_t uStack_a;
  
  uStack_a = 0;
  iVar1 = parse_three_digit_ascii_value(*(uint32_t *)(param_1 + 8),param_2,&uStack_a);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = get_bounded_array_element((int *)(param_1 + 0xc));
    if (iVar1 == 0) {
      iVar1 = (uintptr_t)(construct_cls_105aa3ec(0));
      write_bytes_and_clear_flag(iVar1,param_2);
      set_flag_and_call_on_zero(iVar1,1);
      record_sample_index_in_buffer((int *)(param_1 + 0xc),uStack_a,iVar1);
      uVar2 = 1;
    }
    else if (param_3 != 0) {
      set_flag_and_call_on_zero(iVar1,0);
      update_max_value_if_larger(param_1,uStack_a);
    }
  }
  return uVar2;
}
