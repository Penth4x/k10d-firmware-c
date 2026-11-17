/* @k10d iterate_virtual_object_array @ 0x1000f4f0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of virtual objects and calls a virtual method on each, then
 *   enters an infinite loop.
 * summary:
 *   The function reads a count from DAT_10011d18 and a base pointer from PTR_DAT_10011cb8.
 *   It loops through the array, calling a virtual function (slot 1) on each object with
 *   arguments (1, 0, 0, base_ptr+4). After the loop, it enters an infinite do-while loop,
 *   effectively halting execution. No specific camera subsystem or RTOS primitive is
 *   identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_virtual_object_array(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_10011d18/*ROM*/) {
    iVar1 = 0;
    do {
      (**(code **)(PTR_DAT_10011cb8 + iVar1 + 8))(1,0,0,*(uint32_t *)(PTR_DAT_10011cb8 + 4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xc;
    } while (iVar2 < DAT_10011d18/*ROM*/);
  }
  __halt();
}
