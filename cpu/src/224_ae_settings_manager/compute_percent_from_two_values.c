/* @k10d compute_percent_from_two_values @ 0x104bc004
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes two percentages by dividing values from param_2 by a denominator and stores
 *   the results in param_1.
 * summary:
 *   Selects a source pointer within param_2 based on a field at offset 0x2c (values 1 or 3
 *   select offset 0x10, otherwise offset 8). It calls return_first_word_1045c514 and
 *   read_struct_field_at_offset_4 to retrieve two values, divides each by 100 times the
 *   value at param_2+0x32, and passes the results to alloc_two_word_pair_1045c3dc. The
 *   resulting 8-byte structure is then copied to the memory location pointed to by param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104bc01a) overlaps instruction at (ram,0x104bc018)
    */

void compute_percent_from_two_values(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint uVar3;
  uint32_t auStack_18 [3];
  
  if ((*(int *)(param_2 + 0x2c) == 1) || (*(int *)(param_2 + 0x2c) == 3)) {
    iVar1 = return_first_word_1045c514((uint32_t *)(param_2 + 0x10));
    uVar3 = (uint)(iVar1 * 100) / (uint)*(ushort *)(param_2 + 0x32);
    iVar1 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x10));
  }
  else {
    iVar1 = return_first_word_1045c514((uint32_t *)(param_2 + 8));
    uVar3 = (uint)(iVar1 * 100) / (uint)*(ushort *)(param_2 + 0x32);
    iVar1 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 8));
  }
  alloc_two_word_pair_1045c3dc(auStack_18 + 1,uVar3 & 0xfffffffe,
               (uint)(iVar1 * 100) / (uint)*(ushort *)(param_2 + 0x32) & 0xfffffffe);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar1) = *(uint32_t *)((int)auStack_18 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  free_heap_if_flagged_1045c402(auStack_18 + 1,2);
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
