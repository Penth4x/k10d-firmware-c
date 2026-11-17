/* @k10d screen_submod_reset @ 0x10449e70
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_module_state)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a module structure by zeroing sub-objects and setting a default value of
 *   8000.
 * summary:
 *   The function takes a pointer to a module structure and calls four unnamed
 *   initialization routines on offsets 0x161, 0x165, 0x175, and 0x17d. It then explicitly
 *   zeroes bytes at offsets 0xdc and 0xf8 and writes the integer 8000 to the 4-byte field
 *   at offset 0x104. The callees are not named, so the specific subsystem (e.g., AE, AF, or
 *   display) cannot be determined from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void screen_submod_reset(void *param_1)

{
  clear_sixteen_bytes((void *)((int)param_1 + 0x165));
  zero_sixteen_bytes((void *)((int)param_1 + 0x17d));
  clear_four_bytes((void *)((int)param_1 + 0x161));
  descriptor8_zero((void *)((int)param_1 + 0x175));
  *(uint8_t *)((int)param_1 + 0xf8) = 0;
  *(uint8_t *)((int)param_1 + 0xdc) = 0;
  *(uint32_t *)((int)param_1 + 0x104) = 8000;
  return;
}
