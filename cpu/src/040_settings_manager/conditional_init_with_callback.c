/* @k10d conditional_init_with_callback @ 0x10395a48
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a status flag and conditionally initializes state before invoking a callback
 *   with the input parameter.
 * summary:
 *   The function calls get_value_from_object and passes the result to
 *   add_offset_to_pointer_104df392, then executes return_r4_passthrough_104d800e and
 *   add_offset_to_pointer_104d6862. It checks the return value of a function at 0x104d7b5e;
 *   if non-zero, it repeats the initialization sequence and calls a function at 0x104d7b46
 *   with the result of add_offset_to_pointer_104d6862 and two zero-initialized stack
 *   variables. Finally, it calls call_subroutine_with_offset_args with param_1. The
 *   specific subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_init_with_callback(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = get_value_from_object();
  add_offset_to_pointer_104df392(iVar1);
  return_r4_passthrough_104d800e();
  add_offset_to_pointer_104d6862(__frv_reg_unset(4));
  iVar1 = (*(code *)0x104d7b5e/*ROM*/)();
  if (iVar1 != 0) {
    uStack_10 = 0;
    uStack_c = 0;
    iVar1 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar1);
    return_r4_passthrough_104d800e();
    uVar2 = add_offset_to_pointer_104d6862(__frv_reg_unset(4));
    (*(code *)0x104d7b46/*ROM*/)(uVar2,&uStack_10,&uStack_c);
    call_subroutine_with_offset_args((int)param_1);
  }
  return;
}
