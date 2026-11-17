/* @k10d build_default_path_string @ 0x10479ea2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a string in param_2 by copying a source string and appending the literal
 *   suffix "/../".
 * summary:
 *   The function calls copy_null_terminated_string to copy a string from param_3+4 into a
 *   local buffer. It then initializes a local buffer with the characters '/', '/', '/', and
 *   null. It writes the literal sequence '.', '.', '/', and null into param_2+8. Finally,
 *   it calls copy_string_to_buffer to concatenate the local buffer into the destination
 *   string at param_2+8. The net effect is appending "/../" to the string located at
 *   param_2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_default_path_string(uint32_t param_1,void *param_2,void *param_3)

{
  uintptr_t sp;
  uint8_t auStack_58 [2];
  uint8_t uStack_56;
  uint8_t auStack_55 [4];
  uint8_t uStack_51;
  uint8_t uStack_48;
  uint8_t uStack_3b;
  
  copy_null_terminated_string(auStack_58,(void *)((int)param_3 + 4));
  uStack_48 = 0x2f;
  uStack_51 = 0x2f;
  uStack_56 = 0x2f;
  uStack_3b = 0;
  *(uint8_t *)((int)param_2 + 8) = 0x2e;
  *(uint8_t *)((int)param_2 + 9) = 0x2e;
  *(uint8_t *)((int)param_2 + 10) = 0x2f;
  *(uint8_t *)((int)param_2 + 0xb) = 0;
  copy_string_to_buffer((char *)((int)param_2 + 8),auStack_55);
  return;
}
