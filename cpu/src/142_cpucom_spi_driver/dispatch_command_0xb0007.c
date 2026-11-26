/* @k10d dispatch_command_0xb0007 @ 0x10466bd8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a7df8": ignoring multiple overlapping fields */

uint32_t dispatch_command_0xb0007(cls_105a7df8 *param_1,int param_2)

{
  if (param_2 == 0xb0007) {
    /* B-3v: original loads r5=0x40003 (the forwarded event) before this call (asm 0x10466be6). */
    invoke_virtual_slot_3_on_member_10466ffa(param_1, 0x40003);
  }
  return 1;
}
