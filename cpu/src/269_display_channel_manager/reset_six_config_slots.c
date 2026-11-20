/* @k10d reset_six_config_slots @ 0x1050a88a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Invokes six distinct subroutines with a derived pointer and specific constant
 *   arguments.
 * summary:
 *   The function extracts a pointer from offset 8 of the input parameter and adds 0x13 to
 *   it. It then calls six different functions at fixed addresses (0x10450cfe through
 *   0x10450e88), passing the derived pointer and various constants (0, 1, 0x80) as
 *   arguments. No other side effects or memory writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_six_config_slots(cls_105d5428 *param_1)

{
  (*(code *)0x10450cfe/*ROM*/)(param_1->field_0x8 + 0x13,0);
  (*(code *)0x10450d4a/*ROM*/)(param_1->field_0x8 + 0x13,0);
  (*(code *)0x10450d96/*ROM*/)(param_1->field_0x8 + 0x13,0);
  (*(code *)0x10450de2/*ROM*/)(param_1->field_0x8 + 0x13,1);
  (*(code *)0x10450e2e/*ROM*/)(param_1->field_0x8 + 0x13,0,0);
  (*(code *)0x10450e88/*ROM*/)(param_1->field_0x8 + 0x13,0x80,0x80);
  return;
}
