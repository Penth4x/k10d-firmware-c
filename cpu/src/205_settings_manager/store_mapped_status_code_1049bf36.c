/* @k10d store_mapped_status_code_1049bf36 @ 0x1049bf36
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 2-bit status from a helper call into a 0/1/2 code and stores it in an object
 *   field.
 * summary:
 *   Calls read_u16_from_struct_array with param_2 and 0. If the result is 0, stores 1; if
 *   1, stores 2; otherwise stores 0. The value is written to the memory location at
 *   (*(param_1 + 0x10) + 0x18). The function acts as a virtual method (slot 4) for an
 *   object, updating a specific state field based on the helper's return value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_mapped_status_code_1049bf36(int param_1,int param_2)

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
  else {
    uVar1 = 0;
  }
  *(uint32_t *)(*(int *)(param_1 + 0x10) + 0x18) = uVar1;
  return;
}
