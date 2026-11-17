/* @k10d map_flag_to_two_state @ 0x104a5bf0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads a byte from an object, maps it to 0 or 1, and passes the result to a setter.
 * summary:
 *   The function calls settings_getter with a field at offset 0x44 of the object in param_1
 *   and the constant 0x50. It normalizes the returned character to 0 if it is not 1, then
 *   calls write_word_to_dynamic_array with param_2, 0, and the normalized value. The
 *   specific subsystem is not identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_flag_to_two_state(int param_1,int param_2)

{
  char cVar1;
  uint16_t uVar2;
  
  cVar1 = settings_getter(*(int *)(param_1 + 0x44),0x50);
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 1;
  }
  write_word_to_dynamic_array(param_2,0,uVar2);
  return;
}
