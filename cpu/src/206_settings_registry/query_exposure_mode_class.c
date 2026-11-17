/* @k10d query_exposure_mode_class @ 0x104a2554
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two status flags from an object and maps them to a 1-3 class code passed to a
 *   setter.
 * summary:
 *   The function calls settings_getter twice with the pointer at param_1+0x24 and offsets
 *   0x50 and 0x55 (or 0x58). It interprets the second return value as a mode index (0-2
 *   maps to 1, 4-6 maps to 2) and passes this derived value to write_word_to_dynamic_array
 *   along with param_2. The specific camera subsystem (e.g., APEX mode) is not explicitly
 *   confirmed by the callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_exposure_mode_class(int param_1,int param_2)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint16_t uVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x24),0x50);
  uVar4 = 0;
  if (cVar1 == '\0') {
    iVar3 = 0x58;
  }
  else {
    iVar3 = 0x55;
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
