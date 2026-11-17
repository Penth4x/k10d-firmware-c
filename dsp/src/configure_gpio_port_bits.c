/* @k10d configure_gpio_port_bits @ 0x000e579a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Writes specific bit patterns to GPIO port registers based on state flags.
 * summary:
 *   The function reads several state flags from DAT_0003c0xx and calls
 *   write_byte_to_ram_and_call_two_routines and write_masked_field_and_call_two_routines
 *   with computed values. It appears to configure output levels or directions for a byte-
 *   addressed GPIO port, likely the key port at 0x40060000, by masking and combining flag
 *   bits. The final call to write_two_bit_field_to_dat_0003c008(0) may trigger an update or
 *   interrupt.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_gpio_port_bits(void)

{
  if ((DAT_0003c067 & 1) == 0) {
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0x9f | 0x10);
  }
  else {
    write_masked_field_and_call_two_routines(0x15,DAT_0003c006 & 0x9f | 0x90);
  }
  write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b & 0xce);
  write_byte_to_ram_and_call_two_routines(8,DAT_0003c009 | 0xdf);
  write_byte_to_ram_and_call_two_routines(6,0x50);
  if ((DAT_0003c021 & 0x40) == 0) {
    if ((DAT_0003c066 & 1) == 0) {
      if ((DAT_0003c067 & 1) == 0) {
        write_byte_to_ram_and_call_two_routines(10,0);
      }
      else {
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b & 0xe);
      }
    }
    else {
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b & 0xce);
    }
    write_byte_to_ram_and_call_two_routines(9,0x70);
  }
  else {
    if ((DAT_0003c066 & 1) == 0) {
      if ((DAT_0003c067 & 1) == 0) {
        write_byte_to_ram_and_call_two_routines(10,0);
      }
      else {
        write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b & 0xe);
      }
    }
    else {
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b & 0xce);
    }
    write_byte_to_ram_and_call_two_routines(9,0x70);
  }
  write_byte_to_ram_and_call_two_routines(8,0xff);
  write_two_bit_field_to_dat_0003c008(0);
  write_byte_to_ram_and_call_two_routines(0xb,1);
  if ((DAT_0003c00f & 0x40) == 0) {
    write_byte_to_ram_and_call_two_routines(0xc,0);
  }
  write_masked_field_and_call_two_routines(0xf,0);
  return;
}
