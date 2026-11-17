/* @k10d check_status_and_set_flag @ 0x1051df96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status field in a structure and conditionally sets a result flag in another
 *   structure.
 * summary:
 *   The function checks if the short value at offset 2 of the structure pointed to by
 *   param_3 is equal to 3. If so, it calls read_u16_from_struct_array with param_3 and 0.
 *   Based on the return value of that call (1, 2, or other), it sets the 4-byte value at
 *   offset 0x28 of the structure pointed to by param_2 to 1, 0, or -1 respectively. It
 *   returns 1 if the initial condition was met, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_status_and_set_flag(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  short sVar2;
  
  uVar1 = 0;
  if (*(short *)(param_3 + 2) == 3) {
    sVar2 = read_u16_from_struct_array(param_3,0);
    uVar1 = 0xffffffff;
    if (sVar2 == 2) {
      uVar1 = 0;
    }
    else if (sVar2 == 1) {
      uVar1 = 1;
    }
    *(uint32_t *)(param_2 + 0x28) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
