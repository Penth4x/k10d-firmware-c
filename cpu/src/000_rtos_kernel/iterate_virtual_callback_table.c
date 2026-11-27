/* @k10d iterate_virtual_callback_table @ 0x1000f4a8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates over a table of virtual function pointers and invokes each with a fixed first
 *   argument.
 * summary:
 *   The function reads a count from DAT_10011d18 and a base pointer from PTR_DAT_10011cb8.
 *   It loops through the table, calling each entry at offset 8 with arguments (2, param_1,
 *   param_2, and a value from offset 4 of the table). After the loop, it enters an infinite
 *   loop, suggesting it may be a task entry point or a blocking dispatcher. The module
 *   context indicates this is part of the RTOS kernel services.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_virtual_callback_table(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar1 = 0;
    do {
      /* each record is 0xc bytes; its fn pointer is at offset +8 (entry[0].fn @ 0x10011c14) */
      (*(code *)*(uint32_t *)((char *)PTR_DAT_10011cb8 + iVar1 + 8))
                (2,param_1,param_2,*(uint32_t *)((char *)PTR_DAT_10011cb8 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
