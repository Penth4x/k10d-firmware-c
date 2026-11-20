/* @k10d init_object_with_three_params_10365f02 @ 0x10365f02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method and a helper with derived parameters.
 * summary:
 *   The function calls a virtual method (slot 2) on an object at 0x80015d04. It then calls
 *   retry_virtual_call_five_times_10365fd6 with the input parameter, an offset pointer
 *   (param_1 + 0x84), a fixed address, a constant, and the value 3. It returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_params_10365f02(int param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_10 [4];
  
  puVar1 = (uint32_t *)auStack_10;
  reset_object_fields_and_call_base((cls_105b9458 *)0x80015d04/*SDRAM*/);
  *puVar1 = 3;
  retry_virtual_call_five_times_10365fd6(param_1,param_1 + 0x84,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar1);
  return 1;
}
