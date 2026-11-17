/* @k10d cpucom_ctx_init @ 0x1043c1d4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed zero_initialize_eight_word_block)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Zeroes eight 32-bit words of a caller-provided buffer, or heap-allocates and zeroes a
 *   0x20-byte block if the pointer is NULL.
 * summary:
 *   The function takes a pointer to an 8-word structure. If the pointer is non-NULL, it
 *   writes zero to all eight words in place. If the pointer is NULL, it calls heap_alloc
 *   for 0x20 bytes and zeroes the newly allocated block. The allocated pointer is not
 *   returned to the caller, so any allocation made in the NULL case is effectively lost.
 *   The caller is a virtual method slot 2 of an unknown class, providing no further context
 *   on the structure's role.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cpucom_ctx_init(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x20), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}
