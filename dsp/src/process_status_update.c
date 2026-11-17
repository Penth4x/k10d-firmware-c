/* @k10d process_status_update @ 0x000f6cca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a global flag, calls a status handler, and writes a 2- or 3-byte status word to
 *   an unknown destination.
 * summary:
 *   The function first checks bit 6 of DAT_0003c128 and returns 0 if clear. It calls
 *   call_with_low_two_bits(0) and, if non-zero, calls build_and_send_status_byte. Depending
 *   on param_1, it constructs a 2-byte or 3-byte value in DAT_0003c13c using various global
 *   flags and calls send_two_byte_command_with_payload to transmit it. The specific meaning
 *   of the status bits and the destination of send_two_byte_command_with_payload are not
 *   determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_status_update(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0003c128 & 0x40) == 0) {
    return 0;
  }
  iVar2 = call_with_low_two_bits();
  if (iVar2 != 0) {
    build_and_send_status_byte();
    if (((DAT_0003ce05 & 1) != 0) && ((DAT_0003ce01 & 1) == 0)) {
      FUN_000f7094();
    }
    if (param_1 == 0) {
      _DAT_0003c13c = _DAT_0003cc6a & 0x7fff;
      if ((DAT_0003ce02 & 4) == 0) {
        _DAT_0003c13c = _DAT_0003c13c | 0x8000;
      }
      send_two_byte_command_with_payload(0x89,0,&DAT_0003c13c,2);
    }
    else {
      _DAT_0003c13c = CONCAT11((char)_DAT_0003ce1c,(char)((ushort)_DAT_0003cc30 >> 8)) & 0xff3f;
      if ((DAT_0003ce02 & 4) == 0) {
        _DAT_0003c13c = _DAT_0003c13c | 0x80;
      }
      if ((DAT_0003ce05 & 2) == 0) {
        DAT_0003c13e = (uint8_t)_DAT_0003cc30;
      }
      else {
        _DAT_0003c13c = _DAT_0003c13c & 0xff80;
        DAT_0003c13e = 0;
      }
      check_and_update_byte_flag();
      if ((DAT_0003ce06 & 4) != 0) {
        bVar1 = false;
        if (((DAT_0003c12e & 0x10) != 0) || ((DAT_0003c12e & 0xc) == 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          return 1;
        }
      }
      send_two_byte_command_with_payload(0x89,0x12,&DAT_0003c13c,3);
    }
  }
  return 1;
}
