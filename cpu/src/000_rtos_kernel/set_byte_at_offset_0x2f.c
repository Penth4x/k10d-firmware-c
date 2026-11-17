/* @k10d set_byte_at_offset_0x2f @ 0x1000d340
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x2f(void)

{
  *(uint8_t *)(DAT_10011c60/*ROM*/ + 0x2f) = 0x10;
  return;
}
