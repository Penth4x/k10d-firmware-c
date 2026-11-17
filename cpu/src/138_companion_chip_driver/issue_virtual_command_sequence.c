/* @k10d issue_virtual_command_sequence @ 0x104619ba
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Issues a sequence of command and data operations on an object handle via a series of
 *   helper calls.
 * summary:
 *   The function performs a virtual call on the object in param_1, then uses param_1[6] as
 *   a handle to issue a sequence of operations: setting a command (cpucom_msg_set_cmd),
 *   writing data (cpucom_resp_set_insize, set_object_field_at_offset_0x14), and configuring
 *   parameters (write_word_at_offset_16). It retrieves a value via a virtual call and
 *   passes it to set_ptr_if_field_is_null. Finally, it calls get_registered_reply_code and
 *   returns its result. The specific subsystem or device being controlled is not
 *   determinable from the provided pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t issue_virtual_command_sequence(int *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  uint32_t uVar2;
  void *pvVar3;
  
  (**(code **)(*param_1 + 0x4c))
            ((int)*(short *)(*param_1 + 0x48) + (int)param_1,0,param_3 != 0,0xff);
  cpucom_msg_set_cmd((void *)param_1[6],DAT_105a71f0/*ROM*/);
  cpucom_resp_set_insize((void *)param_1[6],(uint)DAT_105a71f1/*ROM*/);
  pvVar3 = (void *)param_1[6];
  pvVar1 = (void *)(**(code **)(*param_1 + 0x6c))((int)*(short *)(*param_1 + 0x68) + (int)param_1);
  set_ptr_if_field_is_null(pvVar3,pvVar1);
  set_object_field_at_offset_0x14((void *)param_1[6],param_2);
  write_word_at_offset_16((void *)param_1[6],0x104000d);
  uVar2 = get_registered_reply_code(param_1);
  return uVar2;
}
