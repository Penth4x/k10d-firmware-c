/* @k10d store_adjusted_value @ 0x1049b9aa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a value by optionally adding an offset from a linked structure and stores the
 *   result in a target field.
 * summary:
 *   The function checks a byte at offset 0x18 (via a pointer at param_1+0xc) to determine
 *   if an adjustment is needed. It calls read_table_entry_by_index with param_2 and 0 to
 *   get a base value. If the check byte is non-zero, it adds an integer from offset 0x14
 *   (via the same pointer) to the base value. The final result is written to offset 0x34
 *   (via a pointer at param_1+0x14). The specific camera subsystem role is not determinable
 *   from the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_adjusted_value(int param_1,void *param_2)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0xc) == '\0') {
    iVar1 = read_table_entry_by_index(param_2,0);
  }
  else {
    iVar1 = read_table_entry_by_index(param_2,0);
    iVar1 = iVar1 + *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  *(int *)(*(int *)(param_1 + 0x14) + 0x30) = iVar1;
  return;
}
