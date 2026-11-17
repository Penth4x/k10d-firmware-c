/* @k10d count_matching_entries_in_range @ 0x10476cd2
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates an index range and counts how many fetched objects return non-zero from a
 *   virtual call.
 * summary:
 *   Reads a start index at param_1+0x10 and an end index at param_1+0x12. For each index in
 *   the inclusive range, it calls read_bounded_array_element_10477358(param_1+0xc, index)
 *   to obtain an object pointer, then invokes virtual slot 2 on that object (Cfront idiom
 *   via *piVar2+0x14). It increments a counter whenever the virtual call returns non-zero.
 *   The caller is check_and_fetch_value_104765a4; the callee
 *   read_bounded_array_element_10477358 is unnamed, so the specific camera subsystem is not
 *   determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short count_matching_entries_in_range(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x10);
  sVar1 = 0;
  if (uVar4 <= *(ushort *)(param_1 + 0x12)) {
    do {
      piVar2 = (int *)read_bounded_array_element_10477358(param_1 + 0xc,uVar4 & 0xffff);
      if ((piVar2 != (int *)0x0) &&
         (iVar3 = (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2),
         iVar3 != 0)) {
        sVar1 = sVar1 + 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 <= (int)(uint)*(ushort *)(param_1 + 0x12));
  }
  return sVar1;
}
