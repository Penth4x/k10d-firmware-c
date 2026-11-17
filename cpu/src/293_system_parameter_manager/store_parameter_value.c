/* @k10d store_parameter_value @ 0x10535cce
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter value by delegating to invoke_dynamic_handler_and_decrement_counters
 *   with the object's member at offset 8.
 * summary:
 *   This function is a thin wrapper that extracts an integer from param_1 at offset 8 and
 *   passes it along with param_2 to invoke_dynamic_handler_and_decrement_counters,
 *   returning the result. It is virtual method slot 2 of class cls_1062190c, which resides
 *   in the system_parameter_store module. The module handles system parameters related to
 *   Bayer, general, CPU, and AE settings, suggesting this function stores one such
 *   parameter value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int store_parameter_value(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = invoke_dynamic_handler_and_decrement_counters(*(int *)(param_1 + 8),param_2);
  return iVar1;
}
