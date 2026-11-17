/* @k10d call_helper_with_two_word_struct @ 0x1046d13e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 154_kernel_service_query (unit names are model-proposed)
 * purpose:
 *   Copies a 6-byte struct from param_2 onto the stack and calls
 *   dispatch_kernel_service_10010b10, returning true if it returns 0.
 * summary:
 *   The function reads the first ushort and the next 4 bytes from the pointer in param_2
 *   into local stack variables uStack_c and uStack_8. It then passes the address of
 *   uStack_c to the callee dispatch_kernel_service_10010b10. The return value of the callee
 *   is compared to 0, and the result is returned as a boolean. The role of param_1 is not
 *   used in the visible pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_with_two_word_struct(uint32_t param_1,ushort *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint uStack_c;
  uint32_t uStack_8;
  
  uStack_c = (uint)*param_2;
  uStack_8 = *(uint32_t *)(param_2 + 2);
  iVar1 = dispatch_kernel_service_10010b10(&uStack_c);
  return iVar1 == 0;
}
