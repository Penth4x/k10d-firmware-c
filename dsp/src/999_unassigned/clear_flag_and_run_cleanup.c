/* @k10d clear_flag_and_run_cleanup @ 0x000e6836
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 7 of DAT_0003c330 and conditionally invokes a sequence of cleanup routines.
 * summary:
 *   The function checks if bit 7 of DAT_0003c330 is set. If so, it clears that bit and bit
 *   1 of DAT_0003c07f. It then branches based on bit 2 of DAT_0003c030. In the primary
 *   path, it calls call_subroutine_with_arg_9, set_flag_and_call_helper_000db7a8,
 *   call_d5642_with_100, FUN_000ddea0, run_four_timed_actuation_loops, and FUN_000d611c,
 *   while modifying bits in DAT_0003c05d, DAT_00000008, and DAT_0000000a. It returns 1 if
 *   the primary path was taken, otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t clear_flag_and_run_cleanup(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((DAT_0003c330 & 0x80) != 0) {
    DAT_0003c330 = DAT_0003c330 & 0x7f;
    DAT_0003c07f = DAT_0003c07f & 0xfd;
    if ((DAT_0003c030 & 4) == 0) {
      if ((DAT_0003c00f & 0x40) == 0) {
        call_subroutine_with_arg_9();
      }
      if (((DAT_0003c036 & 1) == 0) && (iVar1 = set_flag_and_call_helper_000db7a8(), iVar1 != 0)) {
        call_d5642_with_100();
      }
      if ((DAT_0003c05d & 0x40) == 0) {
        DAT_0003c05d = DAT_0003c05d | 0x40;
        DAT_00000008 = DAT_00000008 & 0xfe;
        DAT_0000000a = DAT_0000000a | 0x10;
        FUN_000ddea0();
      }
      run_four_timed_actuation_loops();
      DAT_0003c2ca = 0;
      FUN_000d611c();
      uVar2 = 1;
    }
    else {
      DAT_0003c2ca = 0;
      FUN_000d611c();
    }
  }
  return uVar2;
}
