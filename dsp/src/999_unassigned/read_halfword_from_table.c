/* @k10d read_halfword_from_table @ 0x000f228c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 16-bit value at an offset computed as param_1 * 2 + 0x3e000.
 * summary:
 *   The function takes an integer index, multiplies it by 2, adds the base offset 0x3e000,
 *   and dereferences the resulting address as an undefined2 (16-bit) value. It performs no
 *   other operations, has no callees, and does not modify any state. The base address
 *   0x3e000 is not identified in the provided brief, so the specific data table or
 *   structure being accessed is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_halfword_from_table(int param_1)

{
  return *(uint16_t *)(param_1 * 2 + 0x3e000);
}
