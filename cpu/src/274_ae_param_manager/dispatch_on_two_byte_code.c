/* @k10d dispatch_on_two_byte_code @ 0x1051b1f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Switches on a 16-bit code in param_3 and calls one of eight handlers with param_1+0x18.
 * summary:
 *   Reads the first two bytes of param_3 and branches on values 0x100-0x103, 0x106, 0x111,
 *   0x117, and 0x11c. Each case invokes a distinct callee, passing param_1 offset by 0x18
 *   (and param_2/param_3 for the 0x111 case). The return value of the selected callee is
 *   returned as the function result; no case is taken for unrecognized codes, so param_1 is
 *   returned unchanged.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint dispatch_on_two_byte_code(uint param_1,int param_2,uint16_t *param_3)

{
  bool bVar1;
  
  switch(*param_3) {
  case 0x100:
    param_1 = dispatch_by_type_field_1051ddee(param_1 + 0x18,(uint *)__frv_reg_unset(5),(void *)__frv_reg_unset(6));
    break;
  case 0x101:
    param_1 = read_value_by_type_1051de34(param_1 + 0x18,__frv_reg_unset(5),(void *)__frv_reg_unset(6));
    break;
  case 0x102:
    param_1 = check_uniform_array_values(param_1 + 0x18, __frv_reg_unset(5), __frv_reg_unset(6));
    break;
  case 0x103:
    param_1 = query_status_code_and_map(param_1 + 0x18, __frv_reg_unset(5), __frv_reg_unset(6));
    break;
  case 0x106:
    param_1 = check_status_and_set_result(param_1 + 0x18, __frv_reg_unset(5), __frv_reg_unset(6));
    break;
  case 0x111:
    bVar1 = compute_offset_by_type(param_1 + 0x18,param_2,param_3,0);
    param_1 = (uint)bVar1;
    break;
  case 0x117:
    param_1 = accumulate_array_values_by_type(param_1 + 0x18,__frv_reg_unset(5),(void *)__frv_reg_unset(6));
    break;
  case 0x11c:
    param_1 = check_status_and_set_flag(param_1 + 0x18, __frv_reg_unset(5), __frv_reg_unset(6));
  default:
  }
  return param_1;
}
