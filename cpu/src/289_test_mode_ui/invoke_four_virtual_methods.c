/* @k10d invoke_four_virtual_methods @ 0x1052e5a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Invokes four virtual methods on two objects via vtable slots, passing offset-adjusted
 *   parameters.
 * summary:
 *   The function performs four virtual calls using the Cfront idiom. It calls slot 3
 *   (offset 0x1c) of the object in param_2 twice with parameters (param_1, 1, param_3) and
 *   (param_1+2, 1, param_3+2). It then calls slot 4 (offset 0x24) of the same object twice
 *   with parameters (param_1+0x14, 1, param_3+4) and (param_1+8, 1, param_3+8). It returns
 *   1 unconditionally. No specific camera subsystem is identifiable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_four_virtual_methods(int param_1,int *param_2,int param_3)

{
  (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,param_1,1,param_3);
  (((vtbl_entry*)(*param_2))[3].fn)
            ((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,param_1 + 2,1,param_3 + 2);
  (((vtbl_entry*)(*param_2))[4].fn)
            ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_1 + 0x14,1,param_3 + 4);
  (((vtbl_entry*)(*param_2))[4].fn)
            ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_1 + 8,1,param_3 + 8);
  return 1;
}
