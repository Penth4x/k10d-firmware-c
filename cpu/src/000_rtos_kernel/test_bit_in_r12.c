/* @k10d test_bit_in_r12 @ 0x1001001e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_in_r12(void)

{
  uint r0_in;
  uint r12_in;
  
  return (r12_in & r0_in) != 0;
}
