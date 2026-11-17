/* @k10d init_object_with_three_params_10370ca6 @ 0x10370ca6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method and a helper with a fixed constant.
 * summary:
 *   The function calls a virtual method (slot 2) on an object at 0x80015d04. It then calls
 *   retry_virtual_call_five_times_10370d7a with the input parameter, an offset pointer
 *   (param_1 + 0x78), a fixed address, a negative constant, and the value 3. It returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_params_10370ca6(int param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t auStack_10 [4];
  
  puVar1 = (uint32_t *)auStack_10;
  reset_object_fields_and_call_base((void *)0x80015d04/*SDRAM*/);
  *puVar1 = 3;
  retry_virtual_call_five_times_10370d7a(param_1,param_1 + 0x78,0x80015af0/*SDRAM*/,-0x7ffea2fc,*puVar1);
  return 1;
}
