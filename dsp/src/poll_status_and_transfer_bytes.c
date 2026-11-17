/* @k10d poll_status_and_transfer_bytes @ 0x000e9b66
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Polls a status flag and transfers bytes between a register pair and a memory buffer
 *   based on a command code.
 * summary:
 *   The function waits for bit 1 of DAT_0003c218 to clear, then reads a command code from
 *   DAT_0003c219. Depending on the code (-0x10 to -0xd), it either reads a byte or word
 *   from the buffer into registers, or writes registers to the buffer. It calls helper
 *   functions poll_status_bit_sequence, FUN_000e9d46, set_global_to_eight_and_call_helper,
 *   and set_flag_and_call_helper_000e9e08 during the process. The loop terminates when bit
 *   2 of the status register is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_status_and_transfer_bytes(void)

{
  byte bVar1;
  
  poll_status_bit_sequence();
  _DAT_0003c220 = _DAT_0003c21e;
  poll_status_bit_sequence();
  DAT_0003c222 = (uint8_t)(_DAT_0003c21e >> 8);
  DAT_0003c223 = (uint8_t)_DAT_0003c21e;
  while( true ) {
    set_flag_and_call_helper_000e9e08();
    do {
      set_global_to_eight_and_call_helper();
      bVar1 = DAT_0003c218;
    } while ((DAT_0003c218 & 2) != 0);
    set_flag_and_call_helper_000e9e08();
    DAT_0003c218 = bVar1;
    if ((bVar1 & 4) != 0) break;
    if (DAT_0003c219 == -0x10) {
      _DAT_0003c21e = (ushort)*(byte *)_DAT_0003c223;
      FUN_000e9d46();
    }
    else if (DAT_0003c219 == -0xf) {
      _DAT_0003c21e = *_DAT_0003c223;
      _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
      FUN_000e9d46();
    }
    else if (DAT_0003c219 == -0xe) {
      poll_status_bit_sequence();
      *(byte *)_DAT_0003c223 = DAT_0003c21f;
    }
    else if (DAT_0003c219 == -0xd) {
      poll_status_bit_sequence();
      *(byte *)_DAT_0003c223 = DAT_0003c21e;
      _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
      *(byte *)_DAT_0003c223 = DAT_0003c21f;
    }
    _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
    _DAT_0003c21a = _DAT_0003c21a + 1;
  }
  return;
}
