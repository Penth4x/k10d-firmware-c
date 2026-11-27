/* @k10d lookup_entry_in_table @ 0x104be04a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Searches a table of 0xb34-byte entries for a non-zero match and returns the entry
 *   address or a default.
 * summary:
 *   Calculates a base address using param_1 and param_2. Iterates up to 6 times, calling
 *   read_byte_at_offset_1051ed64 to check for a match. If a match is found, calls
 *   find_first_active_entry to retrieve the result. If no match is found, calls
 *   initialize_large_struct and returns a default address (param_1 + 0x1408).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int lookup_entry_in_table(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iStack_1c;
  
  iStack_1c = param_1 + 0x1408;
  iVar1 = (param_2 & 0xffff) * 0xb34;
  psVar6 = (short *)(param_1 + 0x2c4c + iVar1);
  if ((*psVar6 != 0) || (psVar6[1] != 0)) {
    iVar3 = 0;
    iVar4 = 5;
    do {
      iVar5 = iVar4;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar5 = iVar3;
      }
      cVar2 = read_byte_at_offset_1051ed64((void *)(param_1 + 0x2c4c + iVar1),iVar5);
      if (cVar2 != '\0') {
        iStack_1c = find_first_active_entry((param_2 & 0xffff) * 0xb34 + param_1 + 0x2c4c,iVar5);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar3 < 6);
  }
  if (iStack_1c == param_1 + 0x1408) {
    initialize_large_struct((uint32_t *)(uint32_t)param_1);
  }
  return iStack_1c;
}
