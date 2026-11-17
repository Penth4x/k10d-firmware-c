/* @k10d wait_and_copy_buffer_block @ 0x10468aba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wait_and_copy_buffer_block(void *param_1)

{
  int iVar1;
  
  iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  while (iVar1 != 0) {
    iVar1 = check_flag_via_helper(*(int *)((int)param_1 + 0x240));
  }
  iVar1 = read_bytes_via_transfer_loop(*(int *)((int)param_1 + 0x240),0xf0,_DAT_800042c0/*SDRAM*/ + 0x840000,0x40000);
  return iVar1 == _DAT_105a7ce8/*ROM*/;
}
