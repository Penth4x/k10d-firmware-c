/* @k10d initialize_object_with_vtable_1045b8d6 @ 0x1045b8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a 16-byte object structure, allocating and constructing a sub-object if
 *   necessary.
 * summary:
 *   The function takes a pointer to a 4-word structure and initializes it. If the second
 *   word (a pointer) is null, it allocates 4 bytes from the heap and calls a constructor
 *   (cls_105a5bf8_new). It then performs a virtual call on the sub-object (slot 2) to
 *   retrieve a pointer, which is stored in the first word of the structure. The structure
 *   appears to be a wrapper or handle for the allocated object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_vtable_1045b8d6(int *param_1)

{
  int *piVar1;
  cls_105a5bf8 *pcVar2;
  int iVar3;
  
  *param_1 = 0;
  *(uint8_t *)(param_1 + 3) = 0;
  param_1[2] = 0;
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    pcVar2 = (cls_105a5bf8 *)heap_alloc((void *)4);
    if (pcVar2 == (cls_105a5bf8 *)0x0) {
      pcVar2 = (cls_105a5bf8 *)0x0;
    }
    else {
      cls_105a5bf8_new(pcVar2);
    }
    param_1[1] = (int)pcVar2;
    if (pcVar2 != (cls_105a5bf8 *)0x0) {
      *(uint8_t *)(param_1 + 3) = 1;
      iVar3 = *(int *)param_1[1];
      iVar3 = (((vtbl_entry*)(iVar3))[2].fn)(param_1[1] + (int)((vtbl_entry*)(iVar3))[2].adj);
      *param_1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = iVar3;
        *(int *)*param_1 = *param_1;
      }
    }
  }
  else {
    iVar3 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    *param_1 = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar3;
      *(int *)*param_1 = *param_1;
    }
  }
  return;
}
