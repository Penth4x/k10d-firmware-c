/* @k10d call_helper_with_fixed_last_arg @ 0x104bea30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * purpose:
 *   Forwards its incoming arguments to init_object_with_params_and_dispatch, appending a
 *   constant 0x01 as the final parameter.
 * summary:
 *   This is a thin wrapper that takes the values in r4-r7 and the first stack byte and
 *   passes them to init_object_with_params_and_dispatch, adding a hardcoded 0x01 as the
 *   sixth argument. It returns the callee's result unchanged. The role of
 *   init_object_with_params_and_dispatch is unknown, so the subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_last_arg(void)

{
  int r4_in;
  uint32_t uVar1;
  int r5_in;
  uint16_t r6_in;
  uint8_t r7_in;
  uint8_t in_stack_00000003;
  
  uVar1 = init_object_with_params_and_dispatch(r4_in,r5_in,r6_in,r7_in,in_stack_00000003,'\x01');
  return uVar1;
}
