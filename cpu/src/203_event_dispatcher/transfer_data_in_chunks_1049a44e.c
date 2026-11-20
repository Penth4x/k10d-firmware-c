/* @k10d transfer_data_in_chunks_1049a44e @ 0x1049a44e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Splits a data buffer into chunks and transfers them via a virtual interface, returning
 *   success if all chunks are sent.
 * summary:
 *   The function calculates chunk sizes using compute_struct_array_offset and
 *   read_struct_field_by_index_1049a7dc. It iterates, calling return_min_of_two_1049a362 to
 *   determine the current chunk size and invoking a virtual method (slot 3) on an object in
 *   param_1[2] to perform the transfer. It updates offsets and continues until the total
 *   size is reached or an error occurs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool transfer_data_in_chunks_1049a44e(int *param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = false;
  uVar1 = **(uint32_t **)param_1[1];
  iVar3 = compute_struct_array_offset((int)param_1[1],param_2);
  uVar2 = *(uint32_t *)(iVar3 + 0x30);
  iVar4 = *(int *)(param_1[1] + 8);
  iVar3 = read_struct_field_by_index_1049a7dc((void *)param_1[1],param_2);
  iVar5 = *(int *)param_1[2];
  iVar5 = (((vtbl_entry*)(iVar5))[6].fn)(param_1[2] + (int)((vtbl_entry*)(iVar5))[6].adj,uVar1,uVar2,0);
  if (iVar5 != 0) {
    while( true ) {
      iVar5 = return_min_of_two_1049a362(iVar3,param_1[3]);
      iVar6 = *(int *)param_1[2];
      iVar6 = (((vtbl_entry*)(iVar6))[4].fn)
                        (param_1[2] + (int)((vtbl_entry*)(iVar6))[4].adj,uVar1,iVar4,iVar5);
      if (iVar6 == 0) break;
      iVar6 = invoke_virtual_slot_two_1049a4f8(param_1,iVar5);
      iVar3 = iVar3 - iVar5;
      iVar4 = iVar5 + iVar4;
      if ((iVar3 == 0) || (iVar6 == 0)) break;
    }
    bVar7 = iVar3 == 0;
  }
  return bVar7;
}
