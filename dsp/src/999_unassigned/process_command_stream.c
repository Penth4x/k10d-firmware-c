/* @k10d process_command_stream @ 0x000e9a6c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Iterates through a command buffer, dispatching on command codes to read/write data via
 *   helper functions.
 * summary:
 *   The function initializes a pointer to a data buffer (DAT_0003c223) and enters a loop
 *   that polls a status register (DAT_0003c218) until a specific bit is clear. It then
 *   reads a command code from DAT_0003c219 and executes one of seven cases: reading
 *   byte/word data, writing byte/word data, calling a function with a parameter, or calling
 *   a two-argument function. The loop continues until a termination condition (bit 2 of
 *   status) is met. All callees are unverified, but the pattern strongly suggests a command
 *   interpreter or protocol handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_command_stream(void)

{
  undefined3 uVar1;
  byte bVar2;
  int iVar3;
  
  poll_status_bit_sequence();
  uVar1 = SUB43(_DAT_0003c223,0);
  iVar3 = _DAT_0003c21e + 0x30000;
  _DAT_0003c220 = (uint16_t)((uint)iVar3 >> 0x10);
  DAT_0003c222 = (uint8_t)((uint)iVar3 >> 8);
  DAT_0003c223 = (uint8_t)iVar3;
  _DAT_0003c223 = (ushort *)CONCAT13(DAT_0003c223,uVar1);
  _DAT_0003c21a = _DAT_0003c21e;
  while( true ) {
    set_flag_and_call_helper_000e9e08();
    do {
      set_global_to_eight_and_call_helper();
      bVar2 = DAT_0003c218;
    } while ((DAT_0003c218 & 2) != 0);
    set_flag_and_call_helper_000e9e08();
    DAT_0003c218 = bVar2;
    if ((bVar2 & 4) != 0) break;
    switch(DAT_0003c219) {
    case 2:
      _DAT_0003c21e = (ushort)*(byte *)_DAT_0003c223;
      FUN_000e9d46();
      break;
    case 3:
      _DAT_0003c21e = *_DAT_0003c223;
      _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
      FUN_000e9d46();
      break;
    case 4:
      poll_status_bit_sequence();
      *(byte *)_DAT_0003c223 = DAT_0003c21f;
      break;
    case 5:
      poll_status_bit_sequence();
      *(byte *)_DAT_0003c223 = DAT_0003c21e;
      _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
      *(byte *)_DAT_0003c223 = DAT_0003c21f;
      break;
    case 6:
      _DAT_0003c21e = FUN_000e9fd2(_DAT_0003c21a);
      FUN_000e9d46();
      break;
    case 7:
      poll_status_bit_sequence();
      check_and_run_two_routines(_DAT_0003c21a,_DAT_0003c21e);
    }
    _DAT_0003c223 = (ushort *)((int)_DAT_0003c223 + 1);
    _DAT_0003c21a = _DAT_0003c21a + 1;
  }
  return;
}
