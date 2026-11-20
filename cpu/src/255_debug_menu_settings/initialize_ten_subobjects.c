/* @k10d initialize_ten_subobjects @ 0x104eca82
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls ten functions in sequence, each passing a pointer offset from the base object
 *   pointer.
 * summary:
 *   The function takes a base pointer (param_1) and invokes ten distinct code addresses.
 *   Each call passes a pointer calculated by adding a specific offset (ranging from 4 to
 *   0x70) to the base pointer. This pattern is consistent with initializing or resetting
 *   multiple sub-objects or fields within a larger structure. No specific camera subsystem
 *   behavior is evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_ten_subobjects(cls_105c2b6c *param_1)

{
  (*(code *)0x104eb9ec/*ROM*/)(&param_1->field_0x4);
  (*(code *)0x104ebcb6/*ROM*/)(&param_1->field_0x10);
  (*(code *)0x104ebea8/*ROM*/)(&param_1->field_0x1c);
  (*(code *)0x104ebfb6/*ROM*/)(&param_1->field_0x28);
  (*(code *)0x104ec44a/*ROM*/)(&param_1->field_0x34);
  (*(code *)0x104ed414/*ROM*/)(&param_1->field_0x40);
  (*(code *)0x104ed51c/*ROM*/)(&param_1->field_0x4c);
  (*(code *)0x104ed604/*ROM*/)(&param_1->field_0x58);
  (*(code *)0x104ed854/*ROM*/)(&param_1->field_0x64);
  (*(code *)0x1050a888/*ROM*/)(&param_1->field_0x70);
  return;
}
