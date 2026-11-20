/* @k10d query_status_and_return_code @ 0x104de604
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Queries a status value via allocate_buffer_via_helper if
 *   check_flag_and_call_helper_104de5b6 succeeds, storing it in param_2 and returning the
 *   status code.
 * summary:
 *   Initializes param_2 to 0 and creates a local instance of cls_105bb0b8. Calls
 *   check_flag_and_call_helper_104de5b6 with param_1; if the result is non-zero, calls
 *   allocate_buffer_via_helper and stores its return value in param_2. Finally, calls
 *   virtual slot 1 of the local object with argument 2 (likely a destructor or cleanup) and
 *   returns the result of check_flag_and_call_helper_104de5b6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int query_status_and_return_code(void *param_1,uint32_t *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  *param_2 = 0;
  cls_105bb0b8_new(&cStack_28);
  iVar1 = check_flag_and_call_helper_104de5b6(param_1);
  if (iVar1 != 0) {
    uVar2 = allocate_buffer_via_helper();
    *param_2 = uVar2;
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  return iVar1;
}
