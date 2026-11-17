/* @k10d override_slot4_call_base @ 0x1041bba6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Virtual slot 4 override that forwards to the base class slot 4 implementation.
 * summary:
 *   This function is virtual method slot 4 of class cls_1059d1d8. It contains no local
 *   logic and simply calls invoke_virtual_slot_3_three_times, which is the corresponding
 *   virtual slot 4 of the parent class cls_1059cbf0. This pattern indicates a pass-through
 *   override where the derived class does not modify the base class behavior for this
 *   specific virtual method.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void override_slot4_call_base(void)

{
  invoke_virtual_slot_3_three_times(__frv_reg_unset(4));
  return;
}
