/* @k10d forward_second_field_call @ 0x10481340
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 175_sd_file_settings (unit names are model-proposed)
 * purpose:
 *   Extracts the pointer at offset 8 of param_1 and forwards it with in_r5 to
 *   compute_offset_from_base, returning its result.
 * summary:
 *   A thin wrapper that dereferences the second word (offset 8) of the object pointed to by
 *   param_1 and passes it, along with the in_r5 register value, as arguments to
 *   compute_offset_from_base. The return value of compute_offset_from_base is passed
 *   through unchanged. It is invoked as virtual method slot 2 by several class instances,
 *   suggesting it implements a common interface operation that delegates to a shared
 *   helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int forward_second_field_call(void *param_1)

{
  int iVar1;
  int r5_in;
  
  iVar1 = compute_offset_from_base(*(void **)((int)param_1 + 8),r5_in);
  return iVar1;
}
