/* @k10d call_helper_with_temp_object @ 0x1046a20c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, calls a helper with it and a pointer from param_1, and
 *   stores the result if successful.
 * summary:
 *   The function allocates a temporary object on the stack using cls_105ab468_new. It then
 *   calls call_with_offset_lock_1048101c, passing a pointer derived from param_1 (offset
 *   0x248), param_2, and the temporary object. If the helper returns non-zero, the value at
 *   uStack_18 is written to *param_3. Finally, the temporary object is destroyed and the
 *   success status is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool call_helper_with_temp_object(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_28 [16];
  uint32_t uStack_18;
  
  cls_105ab468_new(auStack_28);
  iVar1 = call_with_offset_lock_1048101c(*(void **)(param_1 + 0x248),param_2,auStack_28);
  if (iVar1 != 0) {
    *param_3 = uStack_18;
  }
  cls_105ab468_delete(auStack_28,2);
  return iVar1 != 0;
}
