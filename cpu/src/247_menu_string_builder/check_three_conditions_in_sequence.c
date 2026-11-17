/* @k10d check_three_conditions_in_sequence @ 0x104da17c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Evaluates a chain of three indirect function calls on a derived value, returning 1 only
 *   if all succeed.
 * summary:
 *   The function first calls adjust_pointer_by_offset with param_2 and 1 to obtain a handle
 *   or value. It then performs a sequence of indirect calls through function pointers at
 *   0x104d7cfa, 0x104d7d2c, 0x104d7d90, and 0x104d7dfc. The logic returns 0 if the first
 *   indirect call returns 0, or if the second or third indirect calls return 0. If those
 *   pass, it calls the fourth indirect function; if that returns 0, the result is 0,
 *   otherwise 1. This pattern suggests a validation or state-checking routine using a
 *   vtable or function pointer table.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_three_conditions_in_sequence(uint32_t param_1,uint32_t param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = adjust_pointer_by_offset(param_2,1);
  iVar2 = (*(code *)0x104d7cfa/*ROM*/)();
  if (((iVar2 == 0) || (iVar2 = (*(code *)0x104d7d2c/*ROM*/)(uVar1), iVar2 == 0)) ||
     (iVar2 = (*(code *)0x104d7d90/*ROM*/)(uVar1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = (*(code *)0x104d7dfc/*ROM*/)(uVar1);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}
