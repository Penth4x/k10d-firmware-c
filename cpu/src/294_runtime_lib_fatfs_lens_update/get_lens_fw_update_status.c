/* @k10d get_lens_fw_update_status @ 0x10546fbc
 * A thin forwarder: passes its (register + stack) arguments straight through to
 * alloc_and_init_lens_fw_buffer. The decompiler mistyped it as (void) reading r4_in..r7_in;
 * giving it the real 6-arg signature lets callers set the arguments explicitly (and existing
 * callers that still call it bare keep forwarding r4-r7 unchanged). @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_lens_fw_update_status(int param_1,int param_2,int param_3,code *param_4,code *param_5,int param_6)
{
  return alloc_and_init_lens_fw_buffer(param_1,param_2,param_3,param_4,param_5,param_6);
}
