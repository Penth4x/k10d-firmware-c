/* @k10d call_e30ec_with_e_and_dat_3c010 @ 0x000ed83c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls write_byte_to_ram_and_call_two_routines with argument 0xe and the global
 *   _DAT_0003c010.
 * summary:
 *   This function is a one-line wrapper that invokes
 *   write_byte_to_ram_and_call_two_routines, passing the constant 0xe and the address of
 *   _DAT_0003c010. It has no other logic, local state, or side effects beyond that single
 *   call. The role of write_byte_to_ram_and_call_two_routines and _DAT_0003c010 is not
 *   established from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_e30ec_with_e_and_dat_3c010(void)

{
  write_byte_to_ram_and_call_two_routines(0xe,_DAT_0003c010);
  return;
}
