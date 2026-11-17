/* @k10d copy_two_word_pair_to_buffer @ 0x104bbbc4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit values from a struct, swaps them based on a mode field, and writes the
 *   pair to a destination buffer.
 * summary:
 *   The function initializes a local 12-byte structure via alloc_two_word_pair_1045c3dc. It
 *   checks the value at offset 0x2c (param_2[0xb]) of the input struct. If the value is 0
 *   or 2, it calls return_first_word_1045c514 and read_struct_field_at_offset_4 in that
 *   order; if 1 or 3, it calls them in reverse order. The results are stored into the local
 *   structure via store_value_to_pointer_1045c510 and write_field_at_offset_four_1045c518.
 *   Finally, it copies the first 8 bytes of this local structure to the memory address
 *   specified by param_5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_word_pair_to_buffer(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  puVar3 = auStack_14 + 1;
  alloc_two_word_pair_1045c3dc(puVar3,0,0);
  iVar1 = param_2[0xb];
  if ((iVar1 == 0) || (iVar1 == 2)) {
    uVar2 = return_first_word_1045c514(param_2);
    store_value_to_pointer_1045c510(puVar3,uVar2);
    uVar2 = read_struct_field_at_offset_4(param_2);
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_104bbc48;
    uVar2 = read_struct_field_at_offset_4(param_2);
    store_value_to_pointer_1045c510(puVar3,uVar2);
    uVar2 = return_first_word_1045c514(param_2);
  }
  write_field_at_offset_four_1045c518(puVar3,uVar2);
LAB_104bbc48:
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar1) = *(uint32_t *)((int)auStack_14 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  free_heap_if_flagged_1045c402(puVar3,2);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(iVar4 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  return;
}
