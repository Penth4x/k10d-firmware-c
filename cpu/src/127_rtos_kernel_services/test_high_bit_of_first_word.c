/* @k10d test_high_bit_of_first_word @ 0x10454562
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_high_bit_of_first_word(uint32_t *param_1)

{
  return (*(ushort *)*param_1 & 0x8000) != 0;
}
