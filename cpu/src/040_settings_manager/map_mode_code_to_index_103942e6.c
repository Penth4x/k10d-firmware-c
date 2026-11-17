/* @k10d map_mode_code_to_index_103942e6 @ 0x103942e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a raw mode code from call_two_helpers_and_return_10394670 to a 0-4 index and
 *   updates the object state.
 * summary:
 *   Calls call_two_helpers_and_return_10394670 to get a status code. If the code is 2, 6,
 *   3, 5, or 4, it maps it to indices 0, 1, 2, 3, or 4 respectively. For other codes, it
 *   calls init_two_sram_objects, call_two_helpers_and_return_second, and
 *   call_two_initializers_1039459e, setting the index to 1 if
 *   call_two_helpers_and_return_second does not return 1. Finally, it writes the index to
 *   param_1+4 via reset_and_select_channel_1039a462 and calls set_and_apply_object_flag
 *   with the success flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool map_mode_code_to_index_103942e6(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  iVar1 = call_two_helpers_and_return_10394670();
  if (iVar1 == 2) {
    uVar2 = 0;
  }
  else if (iVar1 == 6) {
    uVar2 = 1;
  }
  else if (iVar1 == 3) {
    uVar2 = 2;
  }
  else if (iVar1 == 5) {
    uVar2 = 3;
  }
  else {
    if (iVar1 != 4) {
      init_two_sram_objects();
      iVar1 = call_two_helpers_and_return_second();
      bVar3 = iVar1 != 1;
      if (bVar3) {
        uVar2 = 1;
      }
      call_two_initializers_1039459e();
      goto LAB_10394348;
    }
    uVar2 = 4;
  }
  bVar3 = true;
LAB_10394348:
  reset_and_select_channel_1039a462((void *)(param_1 + 4),uVar2);
  (*(code *)0x103949e0/*ROM*/)(param_1,bVar3);
  set_and_apply_object_flag(param_1,bVar3);
  return bVar3;
}
