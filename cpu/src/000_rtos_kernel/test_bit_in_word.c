/* @k10d test_bit_in_word @ 0x10010012
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_bit_in_word(void)

{
  int r0_in;
  char r13_in;
  
  return (*(ushort *)(r13_in + r0_in) & 1) != 0;
}
