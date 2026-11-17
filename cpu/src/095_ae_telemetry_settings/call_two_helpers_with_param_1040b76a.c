/* @k10d call_two_helpers_with_param_1040b76a @ 0x1040b76a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 095_ae_telemetry_settings (unit names are model-proposed)
 * purpose:
 *   Invokes an unnamed helper with no arguments, then a second helper passing param_1, a
 *   fixed SDRAM address, and 1.
 * summary:
 *   The function makes two sequential calls: first to call_helper_on_struct_field_1036c46c
 *   with no arguments, then to call_helper_on_struct_field_1036c41a with param_1, the
 *   constant 0x80018060 (an SDRAM address), and the integer 1. No local state is modified
 *   and no return value is produced. The roles of the callees are unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_param_1040b76a(void *param_1)

{
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
