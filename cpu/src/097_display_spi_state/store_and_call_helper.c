/* @k10d store_and_call_helper @ 0x10419e46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Stores three parameters into an object at fixed offsets, calls a helper, and stores its
 *   return value.
 * summary:
 *   The function writes param_2, param_3, and param_4 to offsets 0x1578, 0x157c, and 0x1580
 *   of the object pointed to by param_1. It initializes the byte at offset 0x1582 to 0,
 *   then calls process_sensor_readout_data with the same four arguments. The return value
 *   from the helper is stored back into the byte at offset 0x1582 and returned to the
 *   caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int store_and_call_helper(int param_1,uint32_t param_2,int param_3,uint16_t param_4)

{
  char cVar1;
  
  *(uint32_t *)(param_1 + 0x1578) = param_2;
  *(int *)(param_1 + 0x157c) = param_3;
  *(uint16_t *)(param_1 + 0x1580) = param_4;
  *(uint8_t *)(param_1 + 0x1582) = 0;
  cVar1 = process_sensor_readout_data(param_1,param_2,param_3,param_4);
  *(char *)(param_1 + 0x1582) = cVar1;
  return (int)cVar1;
}
