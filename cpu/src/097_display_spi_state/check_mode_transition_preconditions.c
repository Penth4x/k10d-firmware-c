/* @k10d check_mode_transition_preconditions @ 0x104185fe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Validates a series of state flags and virtual object properties before invoking a
 *   transition handler.
 * summary:
 *   The function checks a byte flag at offset 0x1522 of the context object to determine
 *   which validation path to take. It calls test_mode_config_singleton and a function
 *   pointer at 0x1052482c, then checks setting 0xc9 via setting_get. It further validates
 *   state using check_object_property_15 and, if a pointer at offset 0x84 is set, performs
 *   two virtual calls on an object at offset 0x148 to verify a relationship between two
 *   integer properties (slots 2 and 3). If all checks pass, it calls
 *   apply_setting_pair_to_target with the result of test_mode_config_singleton and the
 *   second parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_mode_transition_preconditions(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x1522) == '\0') {
    test_mode_config_singleton();
    iVar1 = (*(code *)0x1052482c/*ROM*/)();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = setting_get(*(int *)(param_1 + 0x7c),0xc9);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = check_object_property_15(*(uint32_t *)(param_1 + 0x5c));
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1514) != 0) {
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x84) == 0) {
        return;
      }
      piVar4 = (int *)(*(int *)(param_1 + 0x84) + 0x148);
      iVar1 = (**(code **)(*piVar4 + 0x14))((int)*(short *)(*piVar4 + 0x10) + (int)piVar4,0x12);
      iVar2 = (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0x13);
      if (iVar1 != iVar2 + 1) {
        return;
      }
    }
  }
  else {
    test_mode_config_singleton();
    iVar1 = (*(code *)0x1052482c/*ROM*/)();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = setting_get(*(int *)(param_1 + 0x7c),0xc9);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = check_object_property_15(*(uint32_t *)(param_1 + 0x5c));
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
      return;
    }
    piVar4 = (int *)(*(int *)(param_1 + 0x84) + 0x148);
    iVar1 = (**(code **)(*piVar4 + 0x14))((int)*(short *)(*piVar4 + 0x10) + (int)piVar4,0x12);
    iVar2 = (**(code **)(*piVar4 + 0x14))((int)piVar4 + (int)*(short *)(*piVar4 + 0x10),0x13);
    if (iVar1 != iVar2 + 1) {
      return;
    }
  }
  uVar3 = test_mode_config_singleton();
  apply_setting_pair_to_target(uVar3,0,param_2);
  return;
}
