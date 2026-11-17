/* @k10d query_state_and_flag_range @ 0x1036c53e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a state value via a helper, optionally stores it, and returns 1 if the value is
 *   in the range 2-6.
 * summary:
 *   Calls read_field_from_param_offset with param_1 to obtain a state value. If param_2 is
 *   non-null, the value is written to *param_2. The function returns 1 if the value is
 *   between 2 and 6 inclusive, otherwise 0. The specific meaning of the state value and the
 *   helper's role are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_state_and_flag_range(void *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = read_field_from_param_offset(param_1);
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = uVar1;
  }
  switch(uVar1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    uVar2 = 1;
  }
  return uVar2;
}
