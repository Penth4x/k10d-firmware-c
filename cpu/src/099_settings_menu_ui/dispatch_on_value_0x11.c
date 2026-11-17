/* @k10d dispatch_on_value_0x11 @ 0x104230e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Checks if param_2 equals 0x11 and calls init_singleton_object_103cc008 if true.
 * summary:
 *   The function performs a simple comparison of the second argument against the constant
 *   0x11. If the condition is met, it invokes the callee init_singleton_object_103cc008.
 *   Otherwise, it returns immediately without side effects. The role of the callee is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_value_0x11(uint32_t param_1,int param_2)

{
  if (param_2 == 0x11) {
    init_singleton_object_103cc008();
  }
  return;
}
