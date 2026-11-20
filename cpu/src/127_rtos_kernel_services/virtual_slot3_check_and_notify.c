/* @k10d virtual_slot3_check_and_notify @ 0x10450f40
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Checks a condition via read_gpio_key_bit15 and calls set_gpio_key_port_bit15 with
 *   param_1 and 0 if true, always returning 1.
 * summary:
 *   This is virtual method slot 3 of class cls_105a20cc. It calls read_gpio_key_bit15 to
 *   test a condition; if non-zero, it invokes set_gpio_key_port_bit15 passing the input
 *   parameter and 0. The function unconditionally returns 1. The specific roles of the
 *   callees are unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t virtual_slot3_check_and_notify(cls_105a20cc *param_1)

{
  int iVar1;
  
  iVar1 = read_gpio_key_bit15();
  if (iVar1 != 0) {
    set_gpio_key_port_bit15((int)param_1,0);
  }
  return 1;
}
