/* @k10d alloc_and_init_512_bytes @ 0x10447314
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x200-byte block and initializes it via two helper calls.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc(0x200) to obtain a 512-byte buffer. It then
 *   calls initialize_lens_update_object and fill_byte_array on the buffer, likely
 *   performing zeroing or initialization. Returns the pointer to the allocated or provided
 *   buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10447330) overlaps instruction at (ram,0x1044732e)
    */

void * alloc_and_init_512_bytes(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x200), param_1 != (void *)0x0)) {
    initialize_lens_update_object(param_1,0x200);
    fill_byte_array(param_1,0,0x200);
  }
  return param_1;
}
