/* @k10d copy_two_word_pair @ 0x104bb5ea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads two 32-bit values from a source offset, transforms them via helper calls, and
 *   writes the 8-byte result to a destination pointer.
 * summary:
 *   The function calls return_first_word_1045c514 and read_struct_field_at_offset_4 on the
 *   address (param_2 + 0x18) to obtain two values. It passes these to
 *   alloc_two_word_pair_1045c3dc, which appears to store or process them into a local
 *   buffer. After a second call to free_heap_if_flagged_1045c402, the 8 bytes from the
 *   local buffer are copied to the memory location pointed to by param_1. The specific
 *   camera subsystem or data type is not identifiable from the provided pseudocode and
 *   unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_word_pair(void *param_1,void *param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  uVar1 = return_first_word_1045c514((uint32_t *)((int)param_2 + 0x18));
  uVar2 = read_struct_field_at_offset_4((uint32_t *)((int)param_2 + 0x18));
  alloc_two_word_pair_1045c3dc(auStack_18 + 1,uVar1,uVar2);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar4) = *(uint32_t *)((int)auStack_18 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  free_heap_if_flagged_1045c402(auStack_18 + 1,2);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(iVar3 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  return;
}
