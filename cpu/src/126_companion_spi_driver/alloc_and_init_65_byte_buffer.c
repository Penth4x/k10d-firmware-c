/* @k10d alloc_and_init_65_byte_buffer @ 0x1044b6d4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1044b6ee) overlaps instruction at (ram,0x1044b6ec)
    */

int alloc_and_init_65_byte_buffer(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x41), param_1 != (void *)0x0)) {
    initialize_lens_update_object(param_1,0x40);
    *(uint8_t *)((int)param_1 + 0x40) = 0;
    fill_byte_array(param_1,0,0x40);
  }
  return (int)param_1;
}
