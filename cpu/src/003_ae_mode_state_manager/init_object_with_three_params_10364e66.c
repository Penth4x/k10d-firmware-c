/* @k10d init_object_with_three_params_10364e66 @ 0x10364e66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling a virtual method and a helper with derived offsets.
 * summary:
 *   The function calls a virtual method (slot 2) on an object at 0x80015d04. It then calls
 *   retry_virtual_call_until_not_three_10364f3c with the input parameter, an offset of
 *   0x23c, two negative constants, and the value 3. It returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_params_10364e66(void *param_1)

{
  uintptr_t sp;
  uint32_t *puVar1;
  uint8_t local_10 [4];
  
  puVar1 = (uint32_t *)local_10;
  reset_object_fields_and_call_base((cls_105b9458 *)0x80015d04/*SDRAM*/);
  *puVar1 = 3;
  retry_virtual_call_until_not_three_10364f3c(param_1,(int)param_1 + 0x23c,-0x7ffea510,-0x7ffea2fc,*puVar1);
  return 1;
}
