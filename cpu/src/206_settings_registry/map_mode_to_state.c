/* @k10d map_mode_to_state @ 0x104a24fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Queries two mode flags from an object and maps them to a state index passed to a
 *   setter.
 * summary:
 *   The function reads an integer pointer from offset 0x24 of param_1 and passes it to
 *   settings_getter with arguments 0x50 and 0x5a/0x57. Based on the return value of the
 *   second call, it sets a local variable to 1 or 2 (defaulting to 0). Finally, it calls
 *   write_word_to_dynamic_array with param_2, 0, and this mapped state value. The specific
 *   meaning of the flags and the target state is not determinable from the provided
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_mode_to_state(int param_1,int param_2)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint16_t uVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x24),0x50);
  uVar4 = 0;
  if (cVar1 == '\0') {
    iVar3 = 0x5a;
  }
  else {
    iVar3 = 0x57;
  }
  uVar2 = settings_getter(*(int *)(param_1 + 0x24),iVar3);
  switch(uVar2) {
  case 0:
  case 1:
  case 2:
    uVar4 = 1;
    break;
  case 4:
  case 5:
  case 6:
    uVar4 = 2;
  }
  write_word_to_dynamic_array(param_2,0,uVar4);
  return;
}
