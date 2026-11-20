/* @k10d write_conditional_byte_to_0x89 @ 0x000f31bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally writes a single byte to address 0x89 based on flag checks and a selector
 *   value.
 * summary:
 *   Checks three global flags (DAT_0003c126, DAT_0003c143, DAT_00000008). If all are set,
 *   it determines a byte value for DAT_0003c13c based on DAT_0003c003 and DAT_0003c060,
 *   then calls send_two_byte_command_with_payload to write that byte to offset 0x89. The
 *   specific meaning of the flags and the target address 0x89 is not determinable from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_conditional_byte_to_0x89(void)

{
  if ((((DAT_0003c126 & 0x20) != 0) && ((DAT_0003c143 & 0x40) != 0)) && ((DAT_00000008 & 2) != 0)) {
    if ((DAT_0003c003 & 0x10) == 0) {
      DAT_0003c13c = 0x53;
    }
    else if (DAT_0003c060 == '\x03') {
      DAT_0003c13c = DAT_0003c1ef;
    }
    else if (DAT_0003c060 == '\x02') {
      DAT_0003c13c = DAT_0003c1ee;
    }
    else {
      DAT_0003c13c = 0x53;
    }
    send_two_byte_command_with_payload(0x89,0x24,(void *)&DAT_0003c13c,1);
  }
  return;
}
