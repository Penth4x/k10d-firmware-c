/* @k10d wait_for_flag_with_timeout_100f0e2c @ 0x100f0e2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t wait_for_flag_with_timeout_100f0e2c(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  
  set_flag_and_halt(100);
  sVar3 = 100;
  while( true ) {
    iVar1 = poll_status_until_bit5_set();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    iVar1 = wait_for_event_with_retry(0xff8000);
    if ((iVar1 == 0) && (uVar2 = call_helper_with_zero_arg_100f19a0(), (uVar2 & 0x80000000/*SDRAM*/) != 0)) break;
    set_flag_and_halt(1);
    bVar4 = sVar3 == 0;
    sVar3 = sVar3 + -1;
    if (bVar4) {
      return 0xffffffff;
    }
  }
  return 0;
}
