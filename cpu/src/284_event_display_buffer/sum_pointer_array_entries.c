/* @k10d sum_pointer_array_entries @ 0x10527d6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 284_event_display_buffer (unit names are model-proposed)
 * purpose:
 *   Iterates over a count-sized array of pointers and sums the results of calling a helper
 *   on each.
 * summary:
 *   Reads a count from offset 0x20c of the object in param_1. If the count is positive, it
 *   loops that many times, stepping through a 4-byte-aligned array starting at offset
 *   0x214. For each entry, it calls the function at 0x10526f6e with the entry value and the
 *   object pointer, accumulating the return values into a total. Returns the accumulated
 *   sum.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sum_pointer_array_entries(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < (int)param_1[0x83]) {
    iVar2 = 0;
    do {
      iVar1 = (*(code *)0x10526f6e/*ROM*/)(*(uint32_t *)((int)param_1 + iVar2 + 0x214),*param_1);
      iVar2 = iVar2 + 4;
      iVar4 = iVar1 + iVar4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x83]);
  }
  return iVar4;
}
