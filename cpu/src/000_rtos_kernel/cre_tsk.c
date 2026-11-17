/* @k10d cre_tsk @ 0x1000f420
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed reset_tcb_dormant_state)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Initializes a task control block at a given index to a dormant state with specific
 *   status and priority fields.
 * summary:
 *   The function calculates the address of a TCB using param_1 * 0x44 as an offset into a
 *   global array at 0x6a001c00. It sets the status field (offset 0x1e) to 2 (DORMANT) and
 *   the priority (offset 0x22) to 3. It clears several other fields (offsets 0x16, 0x18,
 *   0x3c) and copies the value from offset 0x02 to offsets 0x00 and 0x04. This matches the
 *   standard µITRON/REALOS TCB initialization for a dormant task.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cre_tsk(short param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x44;
  *(uint8_t *)(iVar1 + 0x6a001c06) = 2;
  *(uint8_t *)(iVar1 + 0x6a001c0a) = 3;
  *(uint32_t *)(iVar1 + 0x6a001c24) = 0;
  *(uint16_t *)(iVar1 + 0x6a001c16) = 0;
  *(uint16_t *)(iVar1 + 0x6a001c18) = 0;
  *(uint16_t *)(iVar1 + 0x6a001c00) = *(uint16_t *)(iVar1 + 0x6a001c02);
  *(uint16_t *)(iVar1 + 0x6a001c04) = *(uint16_t *)(iVar1 + 0x6a001c02);
  return;
}
