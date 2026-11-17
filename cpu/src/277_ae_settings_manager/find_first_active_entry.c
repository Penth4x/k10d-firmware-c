/* @k10d find_first_active_entry @ 0x1051ed6c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a pointer to the first non-null entry in a 6-element array, or to a specific
 *   entry by index.
 * summary:
 *   The function takes a base pointer (param_1) and an index (param_2). If param_2 is -1,
 *   it iterates through 6 slots (each 0x1dc bytes apart, starting at offset 0xc) and
 *   returns the address of the first slot where the byte at offset 5 is non-zero. If
 *   param_2 is a valid index, it directly returns the address of that slot. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_first_active_entry(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = 0;
    do {
      if (*(char *)(param_1 + 5 + iVar1) != '\0') {
        return param_1 + 0xc + iVar1 * 0x1dc;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    iVar1 = param_1 + 0xc;
  }
  else {
    iVar1 = param_1 + 0xc + param_2 * 0x1dc;
  }
  return iVar1;
}
