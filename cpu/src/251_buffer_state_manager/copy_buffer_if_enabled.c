/* @k10d copy_buffer_if_enabled @ 0x104e132a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from a source buffer to param_2 if param_3 is 1, 2, or 4 and a
 *   flag is set.
 * summary:
 *   Checks if param_3 is 1, 2, or 4. If so, it checks a byte at offset 4 of the object
 *   pointed to by param_1. If that byte is 1, it calls copy_bytes_forward with a computed
 *   address. Otherwise, it performs a byte-wise copy of param_3 bytes from the buffer at
 *   *(param_1+8)+param_4 to param_2. Returns 1 on success, 0 if param_3 is not 1, 2, or 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_buffer_if_enabled(int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  
  if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 4)) {
    if (*(char *)(param_1 + 4) == '\x01') {
      copy_bytes_forward((uint8_t *)(*(int *)(param_1 + 8) + param_4),(uint8_t *)__frv_reg_unset(5),(uint)(__frv_reg_unset(6)));
      uVar2 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      while (param_3 != 0) {
        param_3 = param_3 + -1;
        *(uint8_t *)(param_3 + (int)param_2) = *(uint8_t *)(param_3 + iVar1 + param_4);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
