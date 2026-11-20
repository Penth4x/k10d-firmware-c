/* @k10d call_helper_and_store_result_1046a3ea @ 0x1046a3ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a helper with a member pointer and two args, storing the helper's output into a
 *   caller-provided slot on success.
 * summary:
 *   Constructs a temporary object via cls_105ab468_new, passes it along with param_2 and a
 *   member at param_1+0x248 to call_with_offset_lock_1048101c. If the helper returns non-
 *   zero, the value in uStack_18 is written to *param_3. The temporary object is then
 *   destroyed and the success flag is returned. The specific role of
 *   call_with_offset_lock_1048101c is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_and_store_result_1046a3ea(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  uintptr_t sp;
  cls_105ab468 cStack_28;
  
  cls_105ab468_new(&cStack_28);
  iVar1 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x248),param_2,&cStack_28);
  if (iVar1 != 0) {
    *param_3 = cStack_28.field_0x10;
  }
  cls_105ab468_delete(&cStack_28,2);
  return iVar1 != 0;
}
