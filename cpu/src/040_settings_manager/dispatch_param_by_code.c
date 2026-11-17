/* @k10d dispatch_param_by_code @ 0x10398cf6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 32-bit code to a fixed offset and forwards the value at that offset to a callee.
 * summary:
 *   Checks param_2 against four constants (0x5060012, 0x506001e, 0x506002d, 0x506003a) and
 *   selects an offset (0xd4, 0xd8, 0xdc, 0xe0). It then reads the int at param_1 + offset
 *   and calls invoke_virtual_slot_two_1039ca9a with param_1, that value, and param_3.
 *   Returns early if param_2 does not match any known code. The role of the codes and the
 *   callee is not determinable from the given information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_param_by_code(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  
  if (param_2 == 0x5060012) {
    iVar1 = 0xd4;
  }
  else if (param_2 == 0x506001e) {
    iVar1 = 0xd8;
  }
  else if (param_2 == 0x506002d) {
    iVar1 = 0xdc;
  }
  else {
    if (param_2 != 0x506003a) {
      return;
    }
    iVar1 = 0xe0;
  }
  invoke_virtual_slot_two_1039ca9a(param_1,*(int *)(iVar1 + (int)param_1),param_3);
  return;
}
