/* @k10d write_low_nibble_and_call_helper @ 0x10410bc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_low_nibble_and_call_helper(cls_1059be70 *param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = param_2 & 0xf | 0x200;
  param_1->field_0xcc = param_2 & 0xf;
  send_two_byte_pairs_over_ch2((uint)param_1,0x45,uVar1,uVar1);
  return;
}
