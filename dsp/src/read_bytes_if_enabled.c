/* @k10d read_bytes_if_enabled @ 0x000e14be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Conditionally reads param_3 bytes into param_2 based on a global enable flag and
 *   param_1 range.
 * summary:
 *   Checks bit 5 of DAT_0003c127 and validates param_1 against specific ranges (0x38-0x3b
 *   or 0x65-0x6c) to determine if a read operation should proceed. If enabled, it calls
 *   clear_status_flags_and_reset_counters, initializes a read via
 *   retry_two_times_and_return_status, and loops calling wait_for_flag_and_return_state to
 *   fill the buffer until param_3 bytes are read or a timeout/status flag (DAT_0003c122) is
 *   set. Finally, it calls FUN_000e16d8 and returns the status from DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char read_bytes_if_enabled(uint param_1,uint8_t *param_2,short param_3)

{
  int iVar1;
  uint8_t uVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((DAT_0003c127 & 0x20) != 0) {
    if ((param_1 < 0x3c) && (0x37 < param_1)) {
      if (((DAT_0003c127 & 0x40) != 0) && ((param_1 != 0x3b || ((DAT_0003c114 & 4) != 0)))) {
        bVar3 = true;
      }
    }
    else if ((param_1 < 0x65) || (0x6c < param_1)) {
      bVar3 = true;
    }
    else {
      bVar3 = (DAT_0003c128 & 0x80) != 0;
    }
  }
  if (bVar3) {
    clear_status_flags_and_reset_counters();
    iVar1 = retry_two_times_and_return_status(param_1 & 0xff);
    if (iVar1 == 0) {
      bRam00000000 = bRam00000000 | 8;
      do {
        uVar2 = wait_for_flag_and_return_state();
        *param_2 = uVar2;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        if (param_3 == 0) break;
      } while (DAT_0003c122 == '\0');
      poll_status_flag_and_set_ready();
      if (DAT_0003c122 != '\0') {
        DAT_0003c122 = DAT_0003c122 + '@';
      }
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
