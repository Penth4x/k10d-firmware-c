/* @k10d test_mode_capture_direct @ 0x1050f2d6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_subobject_and_clear_flags)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a sub-object at offset 0x148, clears two byte flags, invokes a virtual
 *   method, and copies a flag.
 * summary:
 *   The function calls test_mode_state_reset on the sub-object at param_1+0x148. It then
 *   calls test_mode_config_singleton and passes its result to exposure_cfg_loader along
 *   with the sub-object pointer and 0. It clears bytes at offsets 0x29 and 0x2f, invokes a
 *   virtual method (slot 0x17c/8) on the object at param_1+0x8d4, and finally copies the
 *   value at offset 0x29 to offset 0x62e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_mode_capture_direct(int param_1)

{
  uint32_t uVar1;
  
  test_mode_state_reset((void *)(param_1 + 0x148));
  uVar1 = test_mode_config_singleton();
  exposure_cfg_loader(uVar1,(void *)(param_1 + 0x148),0);
  *(uint8_t *)(param_1 + 0x29) = 0;
  *(uint8_t *)(param_1 + 0x2f) = 0;
  (**(code **)(*(int *)(param_1 + 0x8d4) + 0x17c))
            (*(short *)(*(int *)(param_1 + 0x8d4) + 0x178) + param_1);
  *(uint8_t *)(param_1 + 0x62e) = *(uint8_t *)(param_1 + 0x29);
  return;
}
