/* @k10d read_table_entry_field @ 0x10427828
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 4-byte field at offset 8 of a table entry selected by an index.
 * summary:
 *   Takes a base pointer (param_1) and an index (param_2). If the index is less than 0x100,
 *   it computes the entry address as base + index*0xc and checks that the first byte of the
 *   entry is non-zero. If valid, it returns the 32-bit value at offset 8 of that entry;
 *   otherwise it returns 0. No callees are invoked. The 0xc stride suggests a 12-byte
 *   record layout, but the specific data domain is not identifiable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_table_entry_field(void *param_1,int param_2)

{
  char *pcVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((param_2 < 0x100) && (pcVar1 = (char *)(param_2 * 0xc + (int)param_1), *pcVar1 != '\0')) {
    uVar2 = *(uint32_t *)(pcVar1 + 8);
  }
  return uVar2;
}
