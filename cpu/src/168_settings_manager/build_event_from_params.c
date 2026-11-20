/* @k10d build_event_from_params @ 0x1047c36c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a local event structure from input parameters and dispatches it via a
 *   helper.
 * summary:
 *   The function initializes a local buffer using alloc_and_init_0x68_struct, then
 *   populates it with values from param_2, param_3, param_4, and param_5. It clamps a value
 *   from param_4 to a maximum of 99 and copies additional bytes. It calls
 *   copy_eight_bytes_1045c584 and copy_null_terminated_string to process sub-structures,
 *   retrieves a value via call_helper_with_second_field_1047a608, and finally calls
 *   free_object_if_flag_set_1047a4c0 with the constructed buffer and a size of 2, returning
 *   the result of call_helper_with_second_field_1047a608.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
build_event_from_params(int param_1,uint16_t *param_2,uint32_t param_3,ushort *param_4,int *param_5)

{
  struct {
    ushort uStack_70;
    uint8_t uStack_6e;
    uint8_t uStack_6d;
  } _cfg_70;
  uint32_t uVar1;
  uintptr_t sp;
  uint8_t auStack_6c [80];
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint16_t auStack_12 [5];
  
  alloc_and_init_0x68_struct(&_cfg_70.uStack_70);
  uStack_18 = *param_2;
  uStack_16 = param_2[1];
  uStack_14 = (uint16_t)param_5[0x67];
  uStack_1c = param_3;
  copy_eight_bytes_1045c584(auStack_12,(uint16_t *)(param_5 + 0x6a));
  copy_null_terminated_string(auStack_6c,(void *)(*param_5 + 0x19));
  _cfg_70.uStack_70 = *param_4;
  if (99 < _cfg_70.uStack_70) {
    _cfg_70.uStack_70 = 0;
  }
  _cfg_70.uStack_6e = *(uint8_t *)((int)param_4 + 3);
  _cfg_70.uStack_6d = *(uint8_t *)(param_4 + 1);
  uVar1 = call_helper_with_second_field_1047a608(*(int *)(param_1 + 0x54));
  free_object_if_flag_set_1047a4c0(&_cfg_70.uStack_70,2);
  return uVar1;
}
