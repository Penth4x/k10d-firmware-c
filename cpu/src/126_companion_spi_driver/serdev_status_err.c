/* @k10d serdev_status_err @ 0x10444f50
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed check_device_idle_state)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns 1 if three status queries on the object at offset 0x10 all return zero, else 0.
 * summary:
 *   The function takes a pointer in param_1 and reads the pointer at offset 0x10. It calls
 *   test_bit7_of_offset_0x1c, check_flag_bit5_at_offset_0x20, and check_flag_at_offset_0x20
 *   sequentially with that value. If all three return 0, it returns 1; otherwise it returns
 *   0. The specific meaning of the status bits is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t serdev_status_err(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = test_bit7_of_offset_0x1c(*(uint32_t *)(param_1 + 0x10));
  uVar2 = 1;
  if (((iVar1 == 0) && (iVar1 = check_flag_bit5_at_offset_0x20(*(uint32_t *)(param_1 + 0x10)), iVar1 == 0)) &&
     (iVar1 = check_flag_at_offset_0x20(*(uint32_t *)(param_1 + 0x10)), iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}
