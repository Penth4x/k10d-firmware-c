/* @k10d kernel_panic @ 0x1000f460
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed report_rtos_error_and_hang)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates over registered error handlers to report an error code, then enters an
 *   infinite loop.
 * summary:
 *   The function checks a count at DAT_10011d18 and, if non-zero, calls a series of
 *   function pointers from the table at PTR_DAT_10011cb8, passing 0x10, the two input
 *   parameters, and a value from the table. After the loop, it executes an infinite do-
 *   while loop, effectively halting the processor. This behavior is consistent with a
 *   kernel panic or fatal error handler in the RTOS kernel module.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void kernel_panic(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar1 = 0;
    do {
      (**(code **)(PTR_DAT_10011cb8 + iVar1 + 8))
                (0x10,param_1,param_2,*(uint32_t *)(PTR_DAT_10011cb8 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
