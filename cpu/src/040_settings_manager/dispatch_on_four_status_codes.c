/* @k10d dispatch_on_four_status_codes @ 0x103930ca
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a status getter and, if the result matches one of four specific codes, invokes a
 *   handler with the given parameter.
 * summary:
 *   The function calls read_field_at_offset_0xf4 to obtain an integer status or event code.
 *   It checks if the value is 0x5060003, 0x5060013, 0x5060022, or 0x5060031. If any of
 *   these match, it calls register_four_values_with_handler passing param_1. Otherwise, it
 *   returns without action. The specific meaning of the codes and the handler's role are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_four_status_codes(void *param_1)

{
  int iVar1;
  
  iVar1 = read_field_at_offset_0xf4((uint32_t)param_1);
  if ((((iVar1 == 0x5060003) || (iVar1 == 0x5060013)) || (iVar1 == 0x5060022)) ||
     (iVar1 == 0x5060031)) {
    register_four_values_with_handler((int)param_1);
  }
  return;
}
