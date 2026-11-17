/* @k10d initialize_sysparam_flag_if_empty @ 0x10534f6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Parses SYSPARAM.TXT and sets the initialized flag if the flag byte is zero.
 * summary:
 *   Checks if the first byte of the parameter struct is null. If so, it calls two unknown
 *   setup functions, then calls debug_mode_wrapper. If that returns non-zero, it calls
 *   parse_sysparam_store_sections to load the factory engineering configuration and sets
 *   the flag byte to 1. This acts as a lazy initialization guard for the system parameter
 *   store.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_sysparam_flag_if_empty(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    get_or_create_singleton_object_104fb12e();
    iVar1 = debug_mode_wrapper();
    if (iVar1 != 0) {
      parse_sysparam_store_sections((int)param_1);
      *param_1 = '\x01';
    }
  }
  return;
}
