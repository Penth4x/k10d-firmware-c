/* @k10d dispatch_eight_subroutines @ 0x104ddaf4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Calls a sequence of eight helper functions with the same three arguments, bracketed by
 *   two calls to a state-setting helper.
 * summary:
 *   The function takes three parameters and passes them unchanged to eight consecutive
 *   callees (empty_stub_104dd9c8 through empty_stub_104ddaf2). It begins and ends by
 *   calling append_string_to_buffer with the second parameter and a specific constant
 *   (0x105bafd8 and 0x105bafe8 respectively), likely setting or clearing a state flag or
 *   mode. The caller is a virtual method (slot 51) of a class, suggesting this is a
 *   composite operation or event handler within an object-oriented subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_eight_subroutines(uint32_t param_1,int *param_2,uint32_t param_3)

{
  append_string_to_buffer((int *)(param_2),(char *)(0x105bafd8/*ROM*/));
  empty_stub_104dd9c8((uint32_t)(param_1),(uint32_t)(param_2),(uint32_t)(param_3));
  call_two_helpers_and_dispatch(param_1,param_2,param_3);
  empty_stub_104dda18((uint32_t)(param_1),(uint32_t)(param_2),(uint32_t)(param_3));
  handle_status_check_failure(param_1,param_2,param_3);
  handle_status_two_failure_104dda92(param_1,param_2,param_3);
  empty_stub_function_104ddaee((uint32_t)(param_1),(uint32_t)(param_2),(uint32_t)(param_3));
  empty_stub_104ddaf0((uint32_t)(param_1),(uint32_t)(param_2),(uint32_t)(param_3));
  empty_stub_104ddaf2((uint32_t)(param_1),(uint32_t)(param_2),(uint32_t)(param_3));
  append_string_to_buffer((int *)(param_2),(char *)(0x105bafe8/*ROM*/));
  return;
}
