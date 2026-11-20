/* @k10d send_data_blocks_via_channel @ 0x10525d56
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Iterates over a buffer in 0x10-byte chunks, sending each chunk via a channel interface
 *   with periodic header writes.
 * summary:
 *   The function calculates the number of 0x10-byte blocks from param_4 and loops through
 *   them. For each block, it calls parse_two_string_lists_into_array to transmit data from
 *   param_5 and param_3, followed by append_newline_to_buffer. Every 64 iterations, it
 *   calls append_bytes_to_ring_buffer three times with fixed addresses (0x105d8ffc,
 *   0x105d9058, 0x105d90b4), likely to send headers or control packets. The specific
 *   subsystem (e.g., CF card, lens, or PRIME) is not identifiable from the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10525d78) overlaps instruction at (ram,0x10525d76)
    */

void send_data_blocks_via_channel(uint32_t param_1,int param_2,int param_3,int param_4,void *param_5)

{
  uint uVar1;
  int iStack_2c;
  
  iStack_2c = (int)(((uint)(param_4 >> 3) >> 0x1c) + param_4) >> 4;
  if (0 < iStack_2c) {
    uVar1 = 0;
    iStack_2c = iStack_2c + -3;
    if (2 < iStack_2c) {
      do {
        if (uVar1 == ((int)uVar1 >> 6) * 0x40) {
          append_bytes_to_ring_buffer(param_2,0x105d8ffc/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d9058/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d90b4/*ROM*/,3);
          uVar1 = 0;
        }
        parse_two_string_lists_into_array(param_2,param_5,param_3,(void *)3);
        append_newline_to_buffer(param_2,3);
        uVar1 = uVar1 + 1 & 0xffff;
        if (uVar1 == ((int)uVar1 >> 6) * 0x40) {
          append_bytes_to_ring_buffer(param_2,0x105d8ffc/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d9058/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d90b4/*ROM*/,3);
          uVar1 = 0;
        }
        parse_two_string_lists_into_array((int)(param_2),(void *)((int)param_5 + 0x10),(int)(param_3 + 0x10),(void *)3);
        append_newline_to_buffer(param_2,3);
        uVar1 = uVar1 + 1 & 0xffff;
        if (uVar1 == ((int)uVar1 >> 6) * 0x40) {
          append_bytes_to_ring_buffer(param_2,0x105d8ffc/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d9058/*ROM*/,3);
          append_bytes_to_ring_buffer(param_2,0x105d90b4/*ROM*/,3);
          uVar1 = 0;
        }
        parse_two_string_lists_into_array((int)(param_2),(void *)((int)param_5 + 0x20),(int)(param_3 + 0x20),(void *)3);
        append_newline_to_buffer(param_2,3);
        param_3 = param_3 + 0x30;
        uVar1 = uVar1 + 1 & 0xffff;
        param_5 = (void *)((int)param_5 + 0x30);
        iStack_2c = iStack_2c + -3;
      } while (-1 < iStack_2c);
    }
    for (iStack_2c = iStack_2c + 2; -1 < iStack_2c; iStack_2c = iStack_2c + -1) {
      if (uVar1 == ((int)uVar1 >> 6) * 0x40) {
        append_bytes_to_ring_buffer(param_2,0x105d8ffc/*ROM*/,3);
        append_bytes_to_ring_buffer(param_2,0x105d9058/*ROM*/,3);
        append_bytes_to_ring_buffer(param_2,0x105d90b4/*ROM*/,3);
        uVar1 = 0;
      }
      parse_two_string_lists_into_array(param_2,param_5,param_3,(void *)3);
      append_newline_to_buffer(param_2,3);
      param_3 = param_3 + 0x10;
      param_5 = (void *)((int)param_5 + 0x10);
      uVar1 = uVar1 + 1 & 0xffff;
    }
  }
  return;
}
