/* @k10d process_entry_list_until_sentinel @ 0x10514de8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of entries, calling a handler for entries with type 1 until a
 *   sentinel value 0x14 is reached.
 * summary:
 *   The function reads a base pointer and an index from offsets 0x20 and 0x24 of param_2.
 *   It loops, reading a 16-bit type field from the entry at the current index. If the type
 *   is 1, it calls release_buffer_slot_by_index with a parameter read from offset 0xa0 of
 *   the entry. The index is incremented each iteration. The loop terminates when the type
 *   field equals 0x14. Finally, it calls forward_param_to_callee_10515fbc with the original
 *   parameters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_entry_list_until_sentinel(int param_1,void *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (void *)0x0) {
    iVar3 = *(int *)((int)param_2 + 0x20);
    iVar2 = *(int *)((int)param_2 + 0x24);
    sVar1 = *(short *)(iVar3 + iVar2 * 2);
    while (sVar1 != 0x14) {
      if (*(short *)(iVar3 + iVar2 * 2) == 1) {
        release_buffer_slot_by_index(param_1,(int)param_2,(uint)*(ushort *)(iVar3 + 0xa0 + iVar2 * 2));
      }
      iVar2 = *(int *)((int)param_2 + 0x24) + 1;
      *(int *)((int)param_2 + 0x24) = iVar2;
      iVar3 = *(int *)((int)param_2 + 0x20);
      sVar1 = *(short *)(iVar3 + iVar2 * 2);
    }
    forward_param_to_callee_10515fbc(param_1,param_2);
  }
  return;
}
