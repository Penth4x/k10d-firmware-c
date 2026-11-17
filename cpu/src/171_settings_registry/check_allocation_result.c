/* @k10d check_allocation_result @ 0x1047fcca
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls an allocator with size 0x1ff, stores the pointer in param_1+4, and returns 1 if
 *   the result is NULL or -0x11.
 * summary:
 *   Invokes the function at 0x1053f8de with param_2 and a size of 0x1ff (511 bytes). The
 *   return value is stored at offset 4 of the structure pointed to by param_1. The function
 *   returns 1 if the allocation result is 0 (NULL) or -0x11 (likely an error code),
 *   otherwise 0. This pattern suggests a check for successful allocation or a specific
 *   error state, though the exact semantics of -0x11 are not defined in the brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_allocation_result(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x1053f8de/*ROM*/)(param_2,0x1ff);
  *(int *)(param_1 + 4) = iVar1;
  if ((iVar1 == 0) || (iVar1 == -0x11)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
