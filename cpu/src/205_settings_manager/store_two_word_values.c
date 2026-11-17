/* @k10d store_two_word_values @ 0x1049b976
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values returned by read_u16_from_struct_array into consecutive words
 *   of a pointer field.
 * summary:
 *   Dereferences the pointer at offset 0x14 of param_1 and stores the result of
 *   read_u16_from_struct_array(param_2,0) into the first word and
 *   read_u16_from_struct_array(param_2,1) into the second word. The callee
 *   read_u16_from_struct_array is unnamed, so the specific data being stored is unknown.
 *   This is a virtual method slot 4 of cls_105b5834.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_word_values(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,0);
  *puVar3 = (uint)uVar1;
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = read_u16_from_struct_array(param_2,1);
  *(uint *)(iVar2 + 4) = (uint)uVar1;
  return;
}
