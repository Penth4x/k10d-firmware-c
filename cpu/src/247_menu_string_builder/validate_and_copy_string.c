/* @k10d validate_and_copy_string @ 0x104de2d2
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks that a string length matches a stored size and copies the string into a buffer,
 *   returning success.
 * summary:
 *   The function validates that param_2 is non-NULL, that the object's first field (buffer
 *   pointer) and second field (length) are non-zero, and that count_string_bytes(param_2)
 *   equals the stored length. If all checks pass, it calls compare_buffer_bytes to copy
 *   param_2 into the buffer and returns 1, otherwise returns 0. The callees are unnamed, so
 *   the exact copy semantics are inferred from the length-check pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_copy_string(uint32_t *param_1,char *param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = (void *)*param_1;
  if ((((pvVar4 == (void *)0x0) || (iVar3 = param_1[1], iVar3 == 0)) || (param_2 == (char *)0x0)) ||
     (iVar2 = count_string_bytes(param_2), iVar2 != iVar3)) {
    uVar1 = 0;
  }
  else {
    iVar3 = compare_buffer_bytes(param_2,pvVar4,iVar3);
    uVar1 = 1;
    if (iVar3 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
