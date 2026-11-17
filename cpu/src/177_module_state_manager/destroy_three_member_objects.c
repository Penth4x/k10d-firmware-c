/* @k10d destroy_three_member_objects @ 0x104853c2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over three pairs of object pointers in the struct, calls virtual slots 4 and 1
 *   on each non-null object, then nulls the pointers.
 * summary:
 *   This function is virtual slot 4 of class cls_105ab92c. It loops three times over 8-byte
 *   strides in the object, treating each pair of pointers as C++ objects. For each non-null
 *   pointer, it invokes virtual slot 4 (offset 0x24) and then virtual slot 1 (offset 0xc)
 *   with argument 3, before setting the pointer to null. It finally clears the field at
 *   offset 0x24. The behavior is consistent with a cleanup or destructor-like routine for
 *   member objects, but the specific camera subsystem role is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_three_member_objects(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 3;
  iVar2 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + iVar2 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
      piVar1 = *(int **)((int)param_1 + iVar2 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
    }
    *(uint32_t *)((int)param_1 + iVar2 + 4) = 0;
    piVar1 = *(int **)((int)param_1 + iVar2 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
      piVar1 = *(int **)((int)param_1 + iVar2 + 8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
    }
    *(uint32_t *)((int)param_1 + iVar2 + 8) = 0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 8;
  } while (-1 < iVar3);
  *(uint32_t *)((int)param_1 + 0x24) = 0;
  return;
}
