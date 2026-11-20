/* @k10d get_lens_fw_update_status @ 0x10546fbc
 * A thin forwarder to alloc_and_init_lens_fw_buffer. The decompiler models it as (void)
 * reading incoming registers r4_in..r7_in; ~22 callers invoke it bare (register passthrough).
 * Retyping it to explicit args requires updating every caller (an incoming-register-passthrough
 * sweep, like cre_tsk_insert_setup) — left as (void) for now. @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_lens_fw_update_status(void)

{
  int r4_in;
  int iVar1;
  int r5_in;
  int r6_in;
  void *r7_in;
  
  iVar1 = alloc_and_init_lens_fw_buffer(r4_in,r5_in,r6_in,r7_in,(void *)0x0,0);
  return iVar1;
}
