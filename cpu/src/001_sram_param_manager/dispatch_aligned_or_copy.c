/* @k10d dispatch_aligned_or_copy @ 0x100f1bf2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Routes a pointer to a direct handler if 4-byte aligned, otherwise copies it to a fixed
 *   buffer first.
 * summary:
 *   Checks if param_1 is a multiple of 4. If aligned, it calls initialize_control_block
 *   directly with the pointer. If not aligned, it calls initialize_control_block with a
 *   fixed SDRAM address (0x800480d0) and then calls copy_128_bytes to copy data from
 *   param_1 to that buffer. This pattern suggests handling unaligned data by staging it
 *   into a known location before processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x100f1c1a) */
/* WARNING: Removing unreachable block (ram,0x100f1c0e) */

void dispatch_aligned_or_copy(uint param_1)

{
  if ((param_1 & 3) == 0) {
    initialize_control_block(param_1);
  }
  else {
    initialize_control_block(0x800480d0/*SDRAM*/);
    copy_128_bytes(param_1,0x800480d0/*SDRAM*/);
  }
  return;
}
