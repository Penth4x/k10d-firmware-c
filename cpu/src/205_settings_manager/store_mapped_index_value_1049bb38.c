/* @k10d store_mapped_index_value_1049bb38 @ 0x1049bb38
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0-4 return code from read_u16_from_struct_array to 1-5 (or 0) and writes it to
 *   an object field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0. Converts the resulting short value
 *   (0-4) to an integer (1-5), defaulting to 0 for other values. Stores this integer at
 *   offset 0x14 of the object pointed to by the pointer at offset 0x10 of param_1. The
 *   specific meaning of the stored value and the object structure is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_index_value_1049bb38(int param_1,int param_2)

{
  uint32_t uVar1;
  short sVar2;
  
  sVar2 = read_u16_from_struct_array(param_2,0);
  if (sVar2 == 0) {
    uVar1 = 1;
  }
  else if (sVar2 == 1) {
    uVar1 = 2;
  }
  else if (sVar2 == 2) {
    uVar1 = 3;
  }
  else if (sVar2 == 3) {
    uVar1 = 4;
  }
  else if (sVar2 == 4) {
    uVar1 = 5;
  }
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x14) = uVar1;
  return;
}
