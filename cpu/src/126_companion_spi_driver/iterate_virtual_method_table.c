/* @k10d iterate_virtual_method_table @ 0x1044a65e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates through a table of virtual method descriptors and calls each one until one
 *   returns a value other than 1.
 * summary:
 *   The function reads a count from a helper at 0x104470d8. If the count is greater than 3,
 *   it loops through entries in a table starting at param_1 + 0xbc. Each entry is a 16-byte
 *   structure containing a this-pointer offset and a virtual method pointer. The function
 *   resolves the method pointer (handling a sign bit check for potential this-adjustment)
 *   and calls it with the resolved object pointer. The loop continues as long as the called
 *   method returns 1 and the table index is less than 0x20. It returns the result of the
 *   last method call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_virtual_method_table(int param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (*(code *)0x104470d8/*ROM*/)(param_1 + 0x1a4);
  iVar4 = 1;
  if (3 < iVar3) {
    iVar3 = 0;
    do {
      psVar1 = (short *)(param_1 + 0xbc + iVar3);
      iVar4 = *psVar1 + param_1;
      if (psVar1[1] < 0) {
        pcVar2 = *(code **)(psVar1 + 2);
      }
      else {
        psVar1 = (short *)(*(int *)((short)*(uint32_t *)(psVar1 + 2) + iVar4) + psVar1[1] * 8);
        iVar4 = *psVar1 + iVar4;
        pcVar2 = *(code **)(psVar1 + 2);
      }
      iVar4 = (*pcVar2)(iVar4);
      iVar3 = iVar3 + 8;
    } while ((iVar3 < 0x20) && (iVar4 == 1));
  }
  return iVar4;
}
