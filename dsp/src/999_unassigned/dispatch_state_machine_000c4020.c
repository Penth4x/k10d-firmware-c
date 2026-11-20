/* @k10d dispatch_state_machine_000c4020 @ 0x000c4020
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Routes execution to one of several sub-functions based on a hierarchy of bit flags in
 *   global state variables.
 * summary:
 *   The function initializes several global variables (DAT_0003c492, DAT_0003c567) and
 *   clears specific bits in others. It then evaluates a nested series of conditions on bits
 *   in DAT_0003c129, DAT_0003c589, DAT_0003c193, DAT_0003c004, and DAT_0003c18f to select
 *   one of nine callee functions. Finally, it conditionally clears bit 0 of DAT_0003c589 if
 *   bit 1 of DAT_0003c58b is set. The specific roles of the callees and the meaning of the
 *   state flags are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_machine_000c4020(void)

{
  DAT_0003c492 = 0xff;
  DAT_0003c567 = 0;
  DAT_0003c4de = DAT_0003c4de & 0xf7;
  DAT_0003c588 = DAT_0003c588 & 0xbf;
  if ((DAT_0003c129 & 1) == 0) {
    if ((DAT_0003c589 & 1) == 0) {
      if ((DAT_0003c193 & 1) == 0) {
        if ((DAT_0003c004 & 2) != 0) {
          update_flag_bytes_on_state_bit();
        }
      }
      else {
        update_key_state_flags_000c40ae();
      }
    }
    else {
      if (((DAT_0003c18f & 0x20) == 0) || ((DAT_0003c18f & 4) != 0)) {
        if ((DAT_0003c18f & 0x10) == 0) {
          if ((((DAT_0003c18e & 0x20) == 0) || ((DAT_0003c18e & 8) != 0)) ||
             ((DAT_0003c18f & 1) != 0)) {
            update_char_flag_bytes();
          }
          else {
            update_key_state_flags_000c4400();
          }
        }
        else {
          FUN_000c4316();
        }
      }
      else {
        update_status_flag_bits_000c42b4();
      }
      compute_offset_from_flag_bits();
      update_clamped_level_byte();
    }
  }
  else {
    update_state_flags_from_globals();
  }
  if ((DAT_0003c58b & 2) != 0) {
    DAT_0003c589 = DAT_0003c589 & 0xbf;
  }
  return;
}
