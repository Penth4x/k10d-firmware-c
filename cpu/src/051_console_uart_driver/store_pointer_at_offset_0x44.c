/* @k10d store_pointer_at_offset_0x44 @ 0x103b85da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_pointer_at_offset_0x44(int param_1,void *param_2)

{
  *(void **)(param_1 + 0x44) = param_2;
  return;
}
