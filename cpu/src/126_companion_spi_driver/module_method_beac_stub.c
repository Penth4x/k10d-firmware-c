/* @k10d module_method_beac_stub @ 0x1044beac
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed return_input_r4)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns the value in register r4 unchanged.
 * summary:
 *   The function consists solely of a return statement that passes through the value in r4.
 *   No memory accesses, MMIO operations, or kernel calls are present. The caller at
 *   0x1044a1e2 invokes this function, likely as a placeholder or no-op stub in a dispatch
 *   table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t module_method_beac_stub(void)

{
  uint32_t r4_in;
  
  return r4_in;
}
