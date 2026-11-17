/* @k10d alloc_and_init_24_byte_struct @ 0x104d5cc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Allocates a 24-byte structure, initializes its fields with specific constants, and
 *   calls a setup routine.
 * summary:
 *   The function accepts an optional pointer; if null, it allocates 0x18 bytes via
 *   heap_alloc. It initializes the first three words with 0x57000000, 0x57010000, and
 *   0x57ff0000, sets the fourth word to 0, and the fifth byte to 0. It then calls
 *   initialize_lens_update_object twice with offsets and values 0xc and 3, and finally
 *   calls init_struct_and_call_helper_104d5d3e on the structure. The constants 0x57xxxxxx
 *   do not match known K10D MMIO regions (0x4006, 0x5c00, 0x6700, 0x8000), suggesting they
 *   are internal state or configuration values rather than direct hardware addresses.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d5cda) overlaps instruction at (ram,0x104d5cd8)
    */

uint32_t * alloc_and_init_24_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    initialize_lens_update_object(param_1,0xc);
    initialize_lens_update_object(param_1 + 3,3);
    param_1[4] = 0;
    *(uint8_t *)(param_1 + 5) = 0;
    *param_1 = 0x57000000;
    param_1[1] = 0x57010000;
    param_1[2] = 0x57ff0000;
    init_struct_and_call_helper_104d5d3e(param_1);
  }
  return param_1;
}
