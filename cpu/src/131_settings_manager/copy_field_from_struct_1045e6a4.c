/* @k10d copy_field_from_struct_1045e6a4 @ 0x1045e6a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 4-byte field from a source struct to a destination struct, bracketed by two
 *   helper calls on a sub-object.
 * summary:
 *   The function calls call_kernel_with_short_id on a pointer at offset 0xa4 of param_1,
 *   then reads an integer pointer from param_1+0x90. It passes param_2 and that pointer to
 *   empty_stub_1045dd00, and finally copies the byte at offset 4 from the source pointer to
 *   param_2+4. It concludes by calling check_kernel_call_success_10459d88 on the same sub-
 *   object pointer. The specific camera subsystem is not identifiable from the available
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_field_from_struct_1045e6a4(int param_1,int param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = *(int *)(param_1 + 0x90);
  empty_stub_1045dd00(param_2,iVar1);
  *(uint8_t *)(param_2 + 4) = *(uint8_t *)(iVar1 + 4);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
