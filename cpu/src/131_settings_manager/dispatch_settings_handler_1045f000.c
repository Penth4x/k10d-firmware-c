/* @k10d dispatch_settings_handler_1045f000 @ 0x1045f000
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer stored in the struct to process a
 *   settings command.
 * summary:
 *   The function calls an unknown helper on a sub-struct at offset 0xa4, then performs a
 *   virtual call on the object pointer at offset 0x8c. The virtual call targets slot 8
 *   (offset 0x44) with a this-adjustment from offset 0x40 and passes param_2 as the
 *   argument. It finishes by calling another unknown helper on the sub-struct at offset
 *   0xa4. The caller maps a status letter to an index and runs this handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_settings_handler_1045f000(int param_1,uint32_t param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = **(int **)(param_1 + 0x8c);
  (**(code **)(iVar1 + 0x44))
            ((int)*(int **)(param_1 + 0x8c) + (int)*(short *)(iVar1 + 0x40),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
