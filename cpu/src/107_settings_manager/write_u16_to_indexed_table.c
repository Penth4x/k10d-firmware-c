/* @k10d write_u16_to_indexed_table @ 0x1042854a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-bit value into a table at an offset computed from a base pointer and two
 *   indices.
 * summary:
 *   The function selects a stride offset (0x50, 0x68, 0x80, or 0x38) based on param_5. It
 *   then calculates a memory address using param_1 as a base, param_2 as a row index
 *   (stride 8), and param_3 as a column index (stride 2). Finally, it stores the 16-bit
 *   value param_4 at the computed location. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_u16_to_indexed_table(int param_1,int param_2,int param_3,uint16_t param_4,int param_5)

{
  int iVar1;
  
  if (param_5 == 0) {
    iVar1 = 0x50;
  }
  else if (param_5 == 1) {
    iVar1 = 0x68;
  }
  else {
    iVar1 = 0x80;
    if (param_5 != 2) {
      iVar1 = 0x38;
    }
  }
  *(uint16_t *)(iVar1 + param_1 + param_3 * 2 + param_2 * 8) = param_4;
  return;
}
