/* @k10d virtual_call_then_delay_1043c38c @ 0x1043c38c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object if a size parameter is below a threshold, then
 *   performs a busy-wait delay.
 * summary:
 *   Checks if param_2 is less than 0x1fc668. If true, it performs a virtual function call
 *   on the object pointed to by param_1 (slot 5, offset 0x2c) and then calls
 *   timer_delay_busywait with a calculated count based on the lower 16 bits of param_2.
 *   Returns 1 unconditionally.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t virtual_call_then_delay_1043c38c(void *param_1,uint param_2)

{
  if (param_2 < 0x1fc668) {
    (**(code **)(*(int *)((int)param_1 + 4) + 0x2c))
              ((int)*(short *)(*(int *)((int)param_1 + 4) + 0x28) + (int)param_1);
    timer_delay_busywait(param_1,(param_2 & 0xffff) * 0x80e + -1,0x800);
  }
  return 1;
}
