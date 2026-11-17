/* @k10d write_array_from_table @ 0x1051c9a6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects a 4-byte table based on a flag check and writes its entries to a destination
 *   buffer.
 * summary:
 *   Calls settings_getter with a value from param_1+0x14 and constant 0xc2 to determine
 *   which of two static tables (0x105d6b9c or 0x105d6bcc) to use. If the count field at
 *   param_2+4 is non-zero, it loops and calls write_to_dynamic_array to write each 4-byte
 *   entry from the selected table into param_2. The loop runs count*2 times, suggesting it
 *   may be writing 8-byte records or handling paired entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_array_from_table(int param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x14),0xc2);
  if (cVar1 == '\0') {
    iVar4 = 0x105d6b9c/*ROM*/;
  }
  else {
    iVar4 = 0x105d6bcc/*ROM*/;
  }
  uVar2 = 0;
  if ((*(uint *)((int)param_2 + 4) & 0x7fffffff) != 0) {
    iVar3 = 0;
    do {
      write_to_dynamic_array((int)param_2,uVar2,*(uint32_t *)(iVar4 + iVar3));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)(*(int *)((int)param_2 + 4) << 1));
  }
  return;
}
