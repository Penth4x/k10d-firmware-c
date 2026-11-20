/* @k10d FUN_000e68ca @ 0x000e68ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: This function may have set the stack pointer */

uint32_t FUN_000e68ca(void)

{
  int iVar1;
  
  iVar1 = evaluate_state_gate_flags();
  if (iVar1 != 0) {
    iVar1 = check_two_flag_conditions_000e6ab2();
    if (iVar1 != 1) {
      clear_dat_0003c01e();
      clear_flag_bits_in_globals_000e5f86();
      DAT_000000f6 = DAT_000000f6 & 0x7f;
      call_five_unnamed_functions();
      if (((DAT_0003c440 != '\x11') || ((DAT_0003c4de & 1) != 0)) || ((DAT_0003c4df & 8) != 0)) {
        DAT_0003c1eb = DAT_0003c1eb | 2;
        process_state_flags_and_dispatch_000cb0c6();
        dispatch_mode_transition_000dfc72(1,0);
      }
      FUN_000ea316();
      call_single_helper();
      DAT_000000f6 = DAT_000000f6 | 0x80;
      DAT_0003c023 = DAT_0003c023 | 2;
      DAT_0003c022 = DAT_0003c022 & 0x5f;
      DAT_0003c410 = DAT_0003c410 | 4;
      DAT_0003c038 = DAT_0003c038 & 0xdd;
      do {
        clear_dat_0003c01e();
        run_camera_state_loop_000e4eaa();
        do {
          FUN_000e52be();
          clear_dat_0003c01e();
          wait_for_state_flag_clear();
          iVar1 = FUN_000e4d52();
        } while (iVar1 != 1);
      } while( true );
    }
    if ((((DAT_0003c05d & 0x20) == 0) &&
        ((((DAT_0003c447 != '\x01' && ((DAT_0003c44a != '\x01' || (DAT_0003c455 <= DAT_0003c041))))
          && (((DAT_0003c4d0 & 0x20) == 0 || (DAT_0003c455 <= DAT_0003c041)))) ||
         ((DAT_00000001 & 2) != 0)))) && ((DAT_0003c392 != '\x02' || ((DAT_0003c391 & 8) != 0)))) {
      DAT_0003c038 = DAT_0003c038 | 0x20;
      evaluate_state_transition();
      DAT_0003c038 = DAT_0003c038 & 0xdf;
    }
  }
  return 0;
}
