/* @k10d process_buffered_items @ 0x104e5d02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates through a list of items defined by a count and base pointer, processing each
 *   via a helper function.
 * summary:
 *   The function initializes a local buffer and calls recursively_traverse_directory_tree
 *   to determine the number of items to process. It then loops through the items, calling
 *   scan_directory_for_files for each one. It updates two output counters (param_2 and
 *   param_3) with the number of processed items and a secondary count (iStack_c). The
 *   specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_buffered_items(void *param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uintptr_t sp;
  int *piVar8;
  uint8_t auStack_134 [4];
  char acStack_114 [256];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  piVar8 = (int *)auStack_134;
  fill_byte_array(acStack_114,0,0x100);
  pvVar1 = (void *)(*(code *)0x1047796e/*ROM*/)(*(uint32_t *)((int)param_1 + 0x7c));
  copy_string_to_buffer(acStack_114,pvVar1);
  iStack_14 = 0;
  iStack_10 = 0;
  uVar4 = *(uint32_t *)((int)param_1 + 0x30);
  *piVar8 = (int)&iStack_10;
  iVar2 = recursively_traverse_directory_tree((int)param_1,acStack_114,uVar4,&iStack_14,(int *)*piVar8);
  uVar5 = *(int *)((int)param_1 + 0x30) + 1;
  uVar7 = iStack_14 + uVar5;
  iStack_c = 0;
  if ((iVar2 != 0) && (uVar5 < uVar7)) {
    iVar6 = (*(int *)((int)param_1 + 0x30) + -99) * 4;
    do {
      iVar3 = (*(code *)0x104e3858/*ROM*/)(*(uint32_t *)(*(int *)((int)param_1 + 0x40) + iVar6));
      if ((iVar3 != 0) && (iVar2 = scan_directory_for_files(param_1,uVar5,&iStack_c), iVar2 == 0)) break;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < uVar7);
  }
  *param_2 = *param_2 + (iStack_14 - iStack_10);
  *param_3 = *param_3 + iStack_c;
  return iVar2;
}
