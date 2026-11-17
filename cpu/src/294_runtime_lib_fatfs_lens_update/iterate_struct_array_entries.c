/* @k10d iterate_struct_array_entries @ 0x1053dace
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of 0x14-byte structures, calling a handler on entries whose
 *   fourth field equals 1 until one returns non-zero.
 * summary:
 *   The function loops through an array of structures pointed to by param_2[9], where each
 *   entry is 0x14 bytes. It checks if the fourth field (piVar2[3]) is 1, and if so, calls
 *   write_sequential_data_blocks to process the entry. The loop advances by the value in
 *   the second field (piVar2[1]) and terminates when the index exceeds the count in
 *   *param_2 or when write_sequential_data_blocks returns non-zero. It calls
 *   merge_overlapping_fw_blocks at the start and end of the loop, likely for initialization
 *   or cleanup of the state associated with param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_struct_array_entries(void *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  merge_overlapping_fw_blocks(param_1,param_2);
  uVar1 = 0;
  while( true ) {
    if (*param_2 <= uVar1) {
      merge_overlapping_fw_blocks(param_1,param_2);
      return iVar3;
    }
    piVar2 = (int *)(param_2[9] + uVar1 * 0x14);
    if ((piVar2[3] == 1) && (iVar3 = write_sequential_data_blocks((int)param_1,param_2,piVar2), iVar3 != 0)) break;
    uVar1 = uVar1 + piVar2[1];
  }
  return iVar3;
}
