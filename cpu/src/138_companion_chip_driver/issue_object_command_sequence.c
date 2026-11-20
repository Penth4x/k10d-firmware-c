/* @k10d issue_object_command_sequence @ 0x10461a5e
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method and a series of helper calls on an object's sixth field,
 *   passing a boolean flag and a constant.
 * summary:
 *   The function calls a virtual method (slot 9) on the object with a boolean derived from
 *   param_3. It then calls cpucom_msg_set_cmd and four other helpers
 *   (cpucom_resp_set_insize, set_ptr_if_field_is_null, set_object_field_at_offset_0x14,
 *   write_word_at_offset_16) using the object's sixth field as the primary argument. The
 *   final call to get_registered_reply_code returns a status value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t issue_object_command_sequence(int *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  (((vtbl_entry*)(*param_1))[9].fn)
            ((int)((vtbl_entry*)(*param_1))[9].adj + (int)param_1,0,param_3 != 0,0xff);
  cpucom_msg_set_cmd((void*)(param_1[6]),DAT_105a71f2/*ROM*/);
  cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71f3/*ROM*/);
  pvVar3 = (void *)param_1[6];
  pvVar1 = (void *)(((vtbl_entry*)(*param_1))[13].fn)((int)((vtbl_entry*)(*param_1))[13].adj + (int)param_1);
  set_ptr_if_field_is_null(pvVar3,pvVar1);
  set_object_field_at_offset_0x14((void *)param_1[6],param_2);
  write_word_at_offset_16((void *)param_1[6],0x104000e);
  uVar2 = get_registered_reply_code(param_1);
  return uVar2;
}
