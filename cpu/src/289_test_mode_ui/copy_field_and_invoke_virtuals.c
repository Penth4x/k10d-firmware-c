/* @k10d copy_field_and_invoke_virtuals @ 0x1052e522
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Invokes four virtual methods on two sub-objects and copies a 4-byte field from offset
 *   0x14 to offset 4 of param_1.
 * summary:
 *   The function performs two virtual calls via the vtable slot at offset 0x1c of the
 *   object pointed to by param_2, passing param_1 and param_1+2 as arguments. It then
 *   performs two more virtual calls via the vtable slot at offset 0x24, passing
 *   param_1+0x14 and param_1+8. Finally, it copies the 4-byte value at param_1+0x14 to
 *   param_1+4 and returns 1. No specific camera subsystem is identifiable from the
 *   mechanical operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_field_and_invoke_virtuals(int param_1,int *param_2,int param_3)

{
  (((vtbl_entry*)(*param_2))[3].fn)((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,param_1,1,param_3);
  (((vtbl_entry*)(*param_2))[3].fn)
            ((int)((vtbl_entry*)(*param_2))[3].adj + (int)param_2,param_1 + 2,1,param_3 + 2);
  (((vtbl_entry*)(*param_2))[4].fn)
            ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_1 + 0x14,1,param_3 + 4);
  (((vtbl_entry*)(*param_2))[4].fn)
            ((int)((vtbl_entry*)(*param_2))[4].adj + (int)param_2,param_1 + 8,1,param_3 + 8);
  *(uint32_t *)(param_1 + 4) = *(uint32_t *)(param_1 + 0x14);
  return 1;
}
