/* @k10d extract_two_byte_fields @ 0x104e167c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two 8-bit fields from param_1 and stores them in param_2 via helper calls.
 * summary:
 *   The function computes the first byte as (param_1 / 10) & 0xff and the second as
 *   (param_1 % 10) & 0xff. It calls format_string_to_buffer_10545140 twice with these
 *   values and fixed addresses (0x105bdbc0 and 0x105bdbc4) to retrieve results, storing
 *   them in param_2[0] and param_2[1]. The exact role of format_string_to_buffer_10545140
 *   is unknown, but the mechanical operation is decomposing an integer into two decimal
 *   digits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_two_byte_fields(int param_1,uint8_t *param_2,uint32_t param_3,void *param_4)

{
  void *pvVar1;
  uintptr_t sp;
  uint8_t uStack_9;
  
  pvVar1 = (void *)(param_1 / 10 & 0xff);
  format_string_to_buffer_10545140(&uStack_9,(char *)0x105bdbc0/*ROM*/,pvVar1,param_4);
  *param_2 = uStack_9;
  format_string_to_buffer_10545140(&uStack_9,(char *)0x105bdbc4/*ROM*/,(void *)(param_1 + (int)pvVar1 * -10 & 0xff),param_4);
  param_2[1] = uStack_9;
  return;
}
