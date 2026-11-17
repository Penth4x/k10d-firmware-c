/* @k10d test_bit_zero_of_r0 @ 0x1001001c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_zero_of_r0(void)

{
  uint r0_in;
  
  return (r0_in & 1) != 0;
}
