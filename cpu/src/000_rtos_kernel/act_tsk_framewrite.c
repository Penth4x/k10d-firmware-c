/* @k10d act_tsk_framewrite @ 0x1000d424
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_tcb_field_0x24)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Stores the second argument into the memory location at offset 0x24 of the object
 *   pointed to by the first argument.
 * summary:
 *   This function performs a single 32-bit write to a field at offset 0x24 within a
 *   structure passed as the first argument. It is called by act_tsk, which is located in
 *   the rtos_kernel module. The specific role of the field at offset 0x24 is not
 *   determinable from the provided pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void act_tsk_framewrite(int param_1,uint32_t param_2)

{
  *(uint32_t *)(param_1 + 0x24) = param_2;
  return;
}
