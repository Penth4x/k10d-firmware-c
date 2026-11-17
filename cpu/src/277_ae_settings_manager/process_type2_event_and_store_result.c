/* @k10d process_type2_event_and_store_result @ 0x1051dcb2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a type field in a struct, calls a handler if type is 2, and stores a status code
 *   in an output buffer.
 * summary:
 *   The function reads a 16-bit field at offset 2 of the struct pointed to by param_3. If
 *   the value is 2, it calls an unknown function at 0x104a8c94 with param_3, then calls
 *   check_string_fits_buffer with param_1, the result of the first call, and a 32-bit field
 *   at offset 4 of param_3. It stores a status value (1 or 2) at offset 0xa0 of the buffer
 *   pointed to by param_2. Returns 1 if the type was 2, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_type2_event_and_store_result(uint32_t param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(short *)(param_3 + 2) == 2) {
    uVar1 = (*(code *)0x104a8c94/*ROM*/)(param_3);
    iVar2 = check_string_fits_buffer(param_1,(void *)uVar1,*(uint32_t *)(param_3 + 4));
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 2;
    }
    *(uint32_t *)(param_2 + 0xa0) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}
