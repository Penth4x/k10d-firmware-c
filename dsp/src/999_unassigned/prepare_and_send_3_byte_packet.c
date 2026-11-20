/* @k10d prepare_and_send_3_byte_packet @ 0x000f723a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Constructs a 3-byte payload from a parameter and a computed value, then sends it via
 *   send_two_byte_command_with_payload.
 * summary:
 *   The function checks status flags in DAT_0003c128 and DAT_0003ce06/05. If valid, it
 *   stores param_1 (potentially ORed with 0x8000) into _DAT_0003ce24. It calls
 *   FUN_000f7094, then computes a value using clamp_shifted_value_to_16_bits with
 *   _DAT_0003cc6a and _DAT_0003ce0e. The result is packed into a 3-byte buffer at
 *   DAT_0003c13c (with sign extension logic) and sent via
 *   send_two_byte_command_with_payload with arguments 0x89, 0x12, and length 3. Finally, it
 *   sets bit 0x10 in DAT_0003ce05.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void prepare_and_send_3_byte_packet(ushort param_1)

{
  uint uVar1;
  
  if (((DAT_0003c128 & 0x40) != 0) && (_DAT_0003cc6a != 0)) {
    _DAT_0003ce22 = 0;
    _DAT_0003ce24 = param_1;
    if (((DAT_0003ce06 & 0x20) != 0) && ((DAT_0003ce05 & 0x20) != 0)) {
      _DAT_0003ce24 = param_1 | 0x8000;
    }
    FUN_000f7094();
    if ((short)_DAT_0003cc6a < 0) {
      _DAT_0003ce24 = param_1;
      uVar1 = clamp_shifted_value_to_16_bits(-(uint)_DAT_0003cc6a & 0xffff);
      _DAT_0003cc30 = (short)uVar1;
    }
    else {
      _DAT_0003ce24 = param_1;
      uVar1 = clamp_shifted_value_to_16_bits((uint)_DAT_0003cc6a);
      _DAT_0003cc30 = (short)uVar1;
    }
    DAT_0003c13c = 0;
    DAT_0003c13d = (byte)((ushort)_DAT_0003cc30 >> 8) & 0x3f;
    DAT_0003c13e = (uint8_t)_DAT_0003cc30;
    if ((short)_DAT_0003cc6a < 0) {
      DAT_0003c13d = DAT_0003c13d | 0x80;
    }
    send_two_byte_command_with_payload(0x89,0x12,&DAT_0003c13c,3);
    DAT_0003ce05 = DAT_0003ce05 | 0x10;
  }
  return;
}
