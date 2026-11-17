/* @k10d dispatch_mode_handler_1043eb7c @ 0x1043eb7c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a setup routine then dispatches to one of three handlers based on a mode field at
 *   offset 0x54.
 * summary:
 *   The function first calls clear_gpio_pin_bits with the object pointer. It then reads an
 *   integer at offset 0x54 of the object and uses it as a switch index (0, 1, or 2) to call
 *   one of three distinct functions (set_bit24_in_6b000014, set_bit29_in_6b000014,
 *   set_bit26_in_6b000014), passing the pointer at offset 0x5c and the constant 1. The
 *   specific subsystem (e.g., exposure mode, flash mode) is not identifiable from the
 *   provided callees or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_mode_handler_1043eb7c(void *param_1)

{
  int iVar1;
  
  clear_gpio_pin_bits(param_1);
  iVar1 = *(int *)((int)param_1 + 0x54);
  if (iVar1 == 0) {
    set_bit24_in_6b000014(*(uint32_t *)((int)param_1 + 0x5c),1);
  }
  else if (iVar1 == 1) {
    set_bit29_in_6b000014(*(uint32_t *)((int)param_1 + 0x5c),1);
  }
  else if (iVar1 == 2) {
    set_bit26_in_6b000014(*(uint32_t *)((int)param_1 + 0x5c),1);
  }
  return 1;
}
