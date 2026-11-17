/* @k10d initialize_sram_block_10429a28 @ 0x10429a28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Initializes a 0x28-byte block in SDRAM by copying a template and setting a header
 *   field.
 * summary:
 *   The function calls copy_channel_bytes_from_struct to copy 0x28 bytes from a ROM
 *   template (DAT_1000bfcc) to a local stack buffer. It then calls
 *   read_byte_from_three_buffers with a SDRAM address (0x8001dedc) and size 0xb0, storing
 *   the result in the first word of the buffer. Finally, it calls
 *   copy_bytes_to_struct_offset_10428a0e to write the buffer contents to a fixed SDRAM
 *   location (0x8001dedc). The specific role of the initialized data is not determinable
 *   from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_sram_block_10429a28(uint32_t param_1,int param_2)

{
  uintptr_t sp;
  uint8_t auStack_30 [40];
  
  copy_channel_bytes_from_struct(&DAT_1000bfcc/*ROM*/,auStack_30,0x28,param_2);
  auStack_30[0] = read_byte_from_three_buffers(0x8001dedc/*SDRAM*/,0xb0,param_2);
  copy_bytes_to_struct_offset_10428a0e(-0x7ffe2124,(int)auStack_30,0x28,param_2);
  return;
}
