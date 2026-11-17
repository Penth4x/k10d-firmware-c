/* @k10d initialize_struct_offsets @ 0x104a1a2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Populates a structure with computed offsets based on a base pointer stored at offset 4.
 * summary:
 *   The function takes a pointer to a structure (param_1), reads an integer value from the
 *   object pointed to by the first field of param_1 (at offset 4), and stores this value
 *   into fields 2 and 3 of param_1. It then calculates several other fields (4 through 10)
 *   by adding fixed hexadecimal offsets (0x30, 0x1c, 0x7c, 0xfc, 0x4bc, 0x164, 0x4a8) to
 *   the value stored in field 2. It returns 1. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_struct_offsets(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 4);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = param_1[2] + 0x30;
  param_1[5] = param_1[2] + 0x1c;
  param_1[6] = param_1[2] + 0x7c;
  param_1[7] = param_1[2] + 0xfc;
  param_1[8] = param_1[2] + 0x4bc;
  param_1[9] = param_1[2] + 0x164;
  param_1[10] = param_1[2] + 0x4a8;
  return 1;
}
