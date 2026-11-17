/* @k10d layout_pump @ 0x10447f1e
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed invoke_virtual_slot_5)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a virtual call to slot 5 of an object found at offset 0x10c in param_1,
 *   passing constant 10.
 * summary:
 *   The function dereferences param_1 at offset 0x10c to get a pointer, then reads the
 *   vtable pointer at offset 4 of that object. It calls the function at vtable offset 0x34
 *   (slot 5) with the object pointer (adjusted by the this-adjustment at vtable offset
 *   0x30) and the integer constant 10. No specific camera subsystem or hardware register is
 *   identified from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void layout_pump(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x10c) + 4);
  (**(code **)(iVar1 + 0x34))(*(int *)((int)param_1 + 0x10c) + (int)*(short *)(iVar1 + 0x30),10);
  return;
}
