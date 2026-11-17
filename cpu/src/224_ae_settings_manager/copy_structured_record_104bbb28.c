/* @k10d copy_structured_record_104bbb28 @ 0x104bbb28
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Builds an 8-byte record from fields in param_2 via helper calls and copies it to
 *   param_1.
 * summary:
 *   Initializes a local 8-byte buffer with alloc_two_word_pair_1045c3dc, then conditionally
 *   populates it using store_value_to_pointer_1045c510 and
 *   write_field_at_offset_four_1045c518 based on a 2-bit mode field at param_2+0x2c. The
 *   mode selects which 16-bit fields (offsets 0x28, 0x2a, or 0x2a/0x28) are read. After
 *   calling free_heap_if_flagged_1045c402, the 8-byte result is copied to param_1. The
 *   specific camera subsystem role is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_record_104bbb28(void *param_1,void *param_2)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  puVar2 = auStack_18 + 1;
  alloc_two_word_pair_1045c3dc(puVar2,0,0);
  iVar1 = *(int *)((int)param_2 + 0x2c);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    store_value_to_pointer_1045c510(puVar2,(uint)*(ushort *)((int)param_2 + 0x28));
    iVar1 = 0x2a;
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 3)) goto LAB_104bbb8c;
    store_value_to_pointer_1045c510(puVar2,(uint)*(ushort *)((int)param_2 + 0x2a));
    iVar1 = 0x28;
  }
  write_field_at_offset_four_1045c518(puVar2,(uint)*(ushort *)(iVar1 + (int)param_2));
LAB_104bbb8c:
  iVar1 = 8;
  do {
    iVar3 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar1) = *(uint32_t *)((int)auStack_18 + iVar1);
    iVar1 = iVar3;
  } while (iVar3 != 0);
  free_heap_if_flagged_1045c402(puVar2,2);
  iVar1 = 8;
  do {
    iVar3 = iVar1 + -4;
    *(uint32_t *)(iVar3 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar1);
    iVar1 = iVar3;
  } while (iVar3 != 0);
  return;
}
