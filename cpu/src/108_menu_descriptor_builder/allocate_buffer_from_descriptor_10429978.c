/* @k10d allocate_buffer_from_descriptor_10429978 @ 0x10429978
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Allocates a 680-byte buffer in SDRAM using a size derived from a descriptor.
 * summary:
 *   Calls add_offset_to_pointer_10428d5c with a pointer to a ROM descriptor (0x1000bfcc) to
 *   obtain a size or handle. Passes that result, along with a fixed SDRAM address
 *   (0x8001dedc) and a size of 0x2a8 (680 bytes), to copy_bytes_to_offset_0x98. The
 *   function appears to initialize or allocate a specific data structure in memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_buffer_from_descriptor_10429978(void)

{
  int iVar1;
  
  iVar1 = add_offset_to_pointer_10428d5c(&DAT_1000bfcc/*ROM*/);
  copy_bytes_to_offset_0x98(0x8001dedc/*SDRAM*/,iVar1,0x2a8);
  return;
}
