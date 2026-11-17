/* @k10d scan_key_table_and_report @ 0x10434858
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 121_menu_item_state (unit names are model-proposed)
 * purpose:
 *   Iterates through two virtual method tables to find a matching key ID, or constructs a
 *   default event object if none is found.
 * summary:
 *   The function takes a pointer to a virtual object (param_2) and scans two arrays of
 *   32-bit IDs (DAT_1059f2cc and DAT_1059f328) by calling virtual slots 2 and 5
 *   respectively. If a call returns non-zero, it returns 1. If no match is found in either
 *   table (or param_2 is null), it instantiates a temporary object of class cls_105a6eac,
 *   passes it to copy_four_bytes_from_struct_field_1045e59a along with a value from
 *   param_1, and calls virtual slot 3 of the temporary object with argument 3. The prior
 *   note suggesting this is a key-scan is consistent with the pattern of iterating ID
 *   tables.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int scan_key_table_and_report(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  iVar3 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(*param_2 + 0x14))
                        ((int)*(short *)(*param_2 + 0x10) + (int)param_2,
                         *(uint32_t *)(&DAT_1059f2cc/*ROM*/ + iVar2));
      if (iVar1 != 0) {
        iVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < 0x5c);
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar2 = 0;
    do {
      iVar3 = (**(code **)(*param_2 + 0x34))
                        ((int)*(short *)(*param_2 + 0x30) + (int)param_2,
                         *(uint32_t *)(&DAT_1059f328/*ROM*/ + iVar2));
      if (iVar3 != 0) {
        iVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 4;
      iVar3 = 0;
    } while (iVar2 < 0x8c);
  }
  if (iVar3 == 0) {
    cls_105a6eac_new((void *)auStack_10);
    copy_four_bytes_from_struct_field_1045e59a(*(int *)(param_1 + 0x30),auStack_10);
    iVar3 = test_field_bit_or_nonzero(auStack_10,3);
    cls_105a6eac_delete((void *)auStack_10,2);
  }
  return iVar3;
}
