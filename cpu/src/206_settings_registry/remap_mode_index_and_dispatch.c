/* @k10d remap_mode_index_and_dispatch @ 0x104a515e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads two fields from an object, remaps a 0-6 index to a different order, and passes
 *   the result to a dispatch function.
 * summary:
 *   The function calls settings_getter twice on a pointer at param_1+0x44 with arguments
 *   0x50 and either 0x58 or 0x55. The result of the second call is used in a switch
 *   statement to remap values 0-6 to a different order (0->5, 1->0, 2->3, 3->1, 4->4, 5->2,
 *   6->6). The mapped value is then passed to write_word_to_dynamic_array along with
 *   param_2 and 0. The specific camera subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void remap_mode_index_and_dispatch(int param_1,int param_2)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint16_t uVar4;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x50);
  uVar4 = 1;
  if (cVar1 == '\0') {
    iVar3 = 0x58;
  }
  else {
    iVar3 = 0x55;
  }
  uVar2 = settings_getter(*(int *)(param_1 + 0x44),iVar3);
  switch(uVar2) {
  case 0:
    uVar4 = 5;
    break;
  case 1:
    uVar4 = 0;
    break;
  case 2:
    uVar4 = 3;
    break;
  case 3:
    uVar4 = 1;
    break;
  case 4:
    uVar4 = 4;
    break;
  case 5:
    uVar4 = 2;
    break;
  case 6:
    uVar4 = 6;
  }
  write_word_to_dynamic_array(param_2,0,uVar4);
  return;
}
