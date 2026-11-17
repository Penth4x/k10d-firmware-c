/* @k10d call_helper_with_scaled_offsets @ 0x1048ff24
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * purpose:
 *   Calls parse_encoded_byte_stream, passing param_3 and param_4 multiplied by 0x18 and
 *   0x30 respectively.
 * summary:
 *   This function is a thin wrapper that forwards its arguments to
 *   parse_encoded_byte_stream. It scales the third argument by 0x18 (24) and the fourth
 *   argument by 0x30 (48) before passing them, while passing the remaining arguments
 *   unchanged. It appends the constant 1 as the eleventh argument and zeros for the twelfth
 *   and thirteenth arguments. The specific role of the callee is unknown, so the mechanical
 *   behavior of scaling and forwarding is the only observable operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_scaled_offsets(uint32_t param_1,void *param_2,short param_3,short param_4,uint32_t param_5,
                 uint16_t param_6,uint16_t param_7,uint16_t param_8,uint16_t param_9,
                 uint8_t param_10)

{
  parse_encoded_byte_stream(param_1,param_2,param_3 * 0x18,param_4 * 0x30,param_5,param_6,param_7,param_8,param_9
               ,param_10,1,0,0);
  return;
}
