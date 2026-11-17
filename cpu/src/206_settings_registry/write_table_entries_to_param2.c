/* @k10d write_table_entries_to_param2 @ 0x104a2666
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Selects a 4-byte table based on a flag and writes its entries into a buffer pointed to
 *   by param_2.
 * summary:
 *   Calls check_flag_at_offset_0x24(param_1) to get a boolean flag. If true, uses table at
 *   0x105b60dc, otherwise 0x105b60e4. Reads a count from *(param_2 + 4) and loops, calling
 *   write_to_dynamic_array(param_2, index, table_value) for each entry. The loop runs count
 *   * 2 times, suggesting each table entry might correspond to two operations or the count
 *   is in a different unit. No camera-specific subsystem is evident from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_table_entries_to_param2(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = check_flag_at_offset_0x24(param_1);
  if (bVar1) {
    iVar4 = 0x105b60dc/*ROM*/;
  }
  else {
    iVar4 = 0x105b60e4/*ROM*/;
  }
  uVar2 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      write_to_dynamic_array(param_2,uVar2,*(uint32_t *)(iVar4 + iVar3));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
