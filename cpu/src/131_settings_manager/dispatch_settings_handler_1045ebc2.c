/* @k10d dispatch_settings_handler_1045ebc2 @ 0x1045ebc2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer stored in the struct to process a
 *   settings command.
 * summary:
 *   The function calls an unknown helper on a sub-structure at offset 0xa4, then performs a
 *   virtual call on the object at offset 0x48. The virtual call targets slot 8 (offset
 *   0x44) with a this-adjustment from offset 0x40 and passes param_2 as the argument. It
 *   concludes by calling another unknown helper on the 0xa4 sub-structure. The caller is a
 *   settings command dispatcher, suggesting this function handles a specific settings
 *   update or query.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_settings_handler_1045ebc2(int param_1,uint32_t param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = **(int **)(param_1 + 0x48);
  (((vtbl_entry*)(iVar1))[8].fn)
            ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar1))[8].adj,param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
