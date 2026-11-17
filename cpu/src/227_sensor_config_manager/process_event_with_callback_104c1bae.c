/* @k10d process_event_with_callback_104c1bae @ 0x104c1bae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event descriptor by copying state fields and invoking a handler if a
 *   resource check passes.
 * summary:
 *   Checks if the second parameter's third field is -1; if not, it copies several fields
 *   from the object at param_1 to a sub-structure at offset 0x230, calls
 *   write_two_words_to_struct_104c1ff4 with two 16-bit values from param_2, and then calls
 *   invoke_object_method_and_check_flag_104bf71e. If that returns non-zero, it sets up a
 *   pointer at offset 0x74, calls invoke_object_method_and_check_flag_104bf9c0, and if that
 *   succeeds, calls copy_four_channel_params. Finally, it calls
 *   invoke_virtual_method_on_object_104bf7ee. The function returns the result of
 *   invoke_object_method_and_check_flag_104bf9c0 or false.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool process_event_with_callback_104c1bae(int param_1,uint32_t *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint32_t uVar5;
  
  if (param_2[2] == -1) {
    bVar2 = false;
  }
  else {
    store_value_at_two_offsets(param_1,*param_2);
    iVar4 = param_1 + 0x230;
    *(uint32_t *)(param_1 + 0x23c) = *(uint32_t *)(param_1 + 0x34);
    write_two_words_to_struct_104c1ff4(param_1,*(uint16_t *)(param_2 + 1),*(uint16_t *)((int)param_2 + 6));
    if ((uint16_t *)(param_1 + 0x238) != (uint16_t *)(param_1 + 0x44)) {
      *(uint16_t *)(param_1 + 0x238) = *(uint16_t *)(param_1 + 0x44);
      *(uint16_t *)(param_1 + 0x23a) = *(uint16_t *)(param_1 + 0x46);
    }
    uVar5 = param_2[2];
    *(uint32_t *)(param_1 + 0x3c) = uVar5;
    *(uint32_t *)(param_1 + 0x234) = uVar5;
    iVar1 = invoke_object_method_and_check_flag_104bf71e(param_1,iVar4);
    bVar2 = false;
    if (iVar1 != 0) {
      *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
      piVar3 = (int *)(param_1 + 0x74);
      *piVar3 = iVar4;
      *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
      *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
      *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
      *(uint32_t *)(param_1 + 0x224) = 0;
      bVar2 = invoke_object_method_and_check_flag_104bf9c0(param_1,piVar3);
      if (bVar2) {
        copy_four_channel_params(param_1,param_2,piVar3);
      }
      invoke_virtual_method_on_object_104bf7ee(param_1,iVar4);
    }
  }
  return bVar2;
}
