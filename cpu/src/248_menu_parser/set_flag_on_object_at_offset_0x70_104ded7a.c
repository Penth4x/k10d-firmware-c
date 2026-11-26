/* @k10d set_flag_on_object_at_offset_0x70_104ded7a @ 0x104ded7a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Calls set_flg_obj on the pointer stored at offset 0x70 of the object passed in param_1.
 * summary:
 *   The function dereferences param_1 + 0x70 to obtain a pointer and passes it to the
 *   callee set_flg_obj. It then returns the constant 1. No other side effects or camera-
 *   specific subsystems are evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t set_flag_on_object_at_offset_0x70_104ded7a(int param_1)

{
  set_flg_obj(*(uint32_t **)(param_1 + 0x70), param_2);
  return 1;
}
