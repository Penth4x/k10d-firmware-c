/* @k10d write_four_values_to_sram @ 0x104299a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Reads four 32-bit values from a ROM table and writes them sequentially to a fixed SDRAM
 *   location.
 * summary:
 *   The function calls add_offset_to_pointer_10428d5c with a pointer to DAT_1000bfcc, then
 *   passes the result to copy_bytes_to_offset_0x98 with a SDRAM address (0x8001dedc) and a
 *   constant 0xa3. It then loops through indices 0 to 2, calling
 *   compute_struct_field_offset_1042853e to fetch values from the DAT_1000bfcc table and
 *   writing them to consecutive 4-byte offsets in SDRAM via
 *   copy_words_to_struct_offset_10428474. The specific camera subsystem role is not
 *   determinable from the provided pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_values_to_sram(uint32_t param_x0)

{
  int iVar1;
  
  iVar1 = add_offset_to_pointer_10428d5c(&DAT_1000bfcc/*ROM*/);
  copy_bytes_to_offset_0x98(0x8001dedc/*SDRAM*/,iVar1,0xa3);
  iVar1 = compute_struct_field_offset_1042853e(&DAT_1000bfcc/*ROM*/,0);
  copy_words_to_struct_offset_10428474(0x8001dedc/*SDRAM*/,0,iVar1,4);
  iVar1 = compute_struct_field_offset_1042853e(&DAT_1000bfcc/*ROM*/,1);
  copy_words_to_struct_offset_10428474(0x8001dedc/*SDRAM*/,1,iVar1,4);
  iVar1 = compute_struct_field_offset_1042853e(&DAT_1000bfcc/*ROM*/,2);
  copy_words_to_struct_offset_10428474(0x8001dedc/*SDRAM*/,2,iVar1,4);
  return;
}
