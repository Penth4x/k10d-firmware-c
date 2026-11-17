/* @k10d call_two_helpers_with_param_10429b46 @ 0x10429b46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Calls settings_getter with a fixed address and param_2, then passes the result to
 *   field_setter.
 * summary:
 *   The function takes two parameters. It calls settings_getter with the constant
 *   0x1000bfcc and param_2, capturing the return value. It then calls field_setter with the
 *   constant -0x7ffe2124 (0x8001de3c), param_2, and the result from the first call. The
 *   callees are not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_10429b46(uint32_t param_1,int param_2)

{
  uint8_t uVar1;
  
  uVar1 = settings_getter(0x1000bfcc/*ROM*/,param_2);
  field_setter(-0x7ffe2124,param_2,uVar1);
  return;
}
