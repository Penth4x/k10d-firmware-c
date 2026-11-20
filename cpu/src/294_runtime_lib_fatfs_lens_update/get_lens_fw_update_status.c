/* @k10d get_lens_fw_update_status @ 0x10546fbc
 * A thin forwarder to alloc_and_init_lens_fw_buffer. It passes the caller's four register
 * arguments (r4-r7: buffer, count, elem_size, init_fn) straight through and supplies the last
 * two stack arguments itself as 0,0 (the original pushes two zero words before the tail call).
 * The decompiler mistyped it as (void) reading r4_in..r7_in, which dropped every caller's
 * argument setup; the callers have been restored to pass the real arguments explicitly. @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_lens_fw_update_status(int param_1,int param_2,int param_3,code *param_4)
{
  return alloc_and_init_lens_fw_buffer(param_1,param_2,param_3,param_4,(code *)0x0,0);
}
