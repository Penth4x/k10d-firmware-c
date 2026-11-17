/* @k10d set_field_and_call_helper_104e25fc @ 0x104e25fc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes constants to offsets in a sub-object and calls a helper with the object's
 *   fields.
 * summary:
 *   The function writes the value 0x10001 to offset 0x2b8 and 0 to offset 0x2be of the
 *   object pointed to by *(param_1 + 0x18). It then calls dispatch_param_by_index_104e4d00
 *   with *(param_1 + 8), param_2, and *(param_1 + 0x18). If the helper returns non-zero, it
 *   writes 0 to offset 0x2ec of the same sub-object. The function returns the helper's
 *   result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_field_and_call_helper_104e25fc(int param_1,uint32_t param_2)

{
  int iVar1;
  
  *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2b8) = 0x10001;
  *(uint16_t *)(*(int *)(param_1 + 0x18) + 0x2be) = 0;
  iVar1 = dispatch_param_by_index_104e4d00(*(uint32_t *)(param_1 + 8),param_2,*(uint32_t *)(param_1 + 0x18));
  if (iVar1 != 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2ec) = 0;
  }
  return iVar1;
}
