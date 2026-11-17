/* @k10d dispatch_status_to_handler_10396fb8 @ 0x10396fb8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a status value, validates it is 0, 1, or 2, and passes it to a handler
 *   function.
 * summary:
 *   The function calls get_or_init_sram_object_103973c4 and
 *   call_function_at_offset_8_10397540 to obtain a status code. If the code is 0, 1, or 2,
 *   it calls get_value_from_object and add_offset_to_pointer_104df392, then calls
 *   return_r4_passthrough_104d800e to get a parameter. Finally, it calls
 *   store_value_at_offset_0x2b14 with the parameter and the status code. If the status code
 *   is not 0, 1, or 2, the function returns without calling the final handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_status_to_handler_10396fb8(void)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  iVar1 = get_or_init_sram_object_103973c4();
  iVar1 = call_function_at_offset_8_10397540(iVar1);
  if (iVar1 == 0) {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    uVar2 = return_r4_passthrough_104d800e();
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    uVar2 = return_r4_passthrough_104d800e();
    uVar3 = 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    uVar2 = return_r4_passthrough_104d800e();
    uVar3 = 2;
  }
  store_value_at_offset_0x2b14(uVar2,uVar3);
  return;
}
