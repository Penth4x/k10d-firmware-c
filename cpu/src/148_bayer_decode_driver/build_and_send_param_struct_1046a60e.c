/* @k10d build_and_send_param_struct_1046a60e @ 0x1046a60e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Constructs a 12-byte parameter block on the stack and passes it to a handler function.
 * summary:
 *   The function initializes a local 12-byte structure (auStack_44) by calling
 *   format_string_to_buffer_10545140 to populate the first 8 bytes from param_5 and
 *   param_4. It then sets the first 4 bytes to the value of _DAT_800042c8, the 6th byte to
 *   param_6, and the 10th byte to 0xff. Finally, it calls iterate_byte_list_and_call_helper
 *   with param_1, the constructed structure, and the remaining parameters (param_3,
 *   param_2). The specific subsystem is not identifiable from the provided code and
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void build_and_send_param_struct_1046a60e(void *param_1,uint32_t param_2,uint32_t param_3,void *param_4,char *param_5,
                 uint16_t param_6)

{
  uintptr_t sp;
  int *piVar1;
  uint8_t auStack_44 [12];
  byte abStack_28 [32];
  
  piVar1 = (int *)auStack_44;
  format_string_to_buffer_10545140(abStack_28,param_5,param_4,param_4);
  *piVar1 = _DAT_800042c8/*SDRAM*/;
  *(uint16_t *)((int)piVar1 + 6) = param_6;
  *(uint16_t *)((int)piVar1 + 10) = 0xff;
  iterate_byte_list_and_call_helper(param_1,abStack_28,((uint16_t)param_3),((uint16_t)param_2),*piVar1,
               *(uint16_t *)((int)piVar1 + 6),*(uint16_t *)((int)piVar1 + 10));
  return;
}
