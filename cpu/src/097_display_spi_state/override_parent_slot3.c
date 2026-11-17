/* @k10d override_parent_slot3 @ 0x1041bb96
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Calls the base class virtual method slot 3 and returns 1.
 * summary:
 *   This function is virtual method slot 3 of class cls_1059d1d8. It unconditionally
 *   invokes the corresponding base class method (slot 3 of cls_1059cbf0) and returns the
 *   constant value 1. No other state is modified or inspected.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t override_parent_slot3(void)

{
  return_constant_one_1041aeb6();
  return 1;
}
