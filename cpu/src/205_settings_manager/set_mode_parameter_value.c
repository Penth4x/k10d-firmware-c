/* @k10d set_mode_parameter_value @ 0x104a131a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a mode index from a struct to a specific parameter value and passes it to a setter
 *   function.
 * summary:
 *   Reads an integer at offset 0x1c of the structure pointed to by param_3. Based on the
 *   value (0, 1, 2, or 3), it selects a corresponding constant (1, 6, 0x8005, or 0xffff).
 *   It then calls write_word_to_dynamic_array with param_2, 0, and the selected constant.
 *   The specific subsystem (e.g., exposure mode, flash mode) is not identifiable from the
 *   code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_mode_parameter_value(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  uint16_t uVar2;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  uVar2 = 1;
  if (iVar1 == 1) {
    uVar2 = 6;
  }
  else if (iVar1 == 3) {
    uVar2 = 0xffff;
  }
  else if (iVar1 == 2) {
    uVar2 = 0x8005;
  }
  else if (iVar1 == 0) {
    uVar2 = 1;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
