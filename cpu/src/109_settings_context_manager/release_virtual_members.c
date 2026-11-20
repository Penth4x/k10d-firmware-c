/* @k10d release_virtual_members @ 0x1042de66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through 11 object pointers in the struct, calls their virtual slot 2 with
 *   argument 3, and nulls the pointers.
 * summary:
 *   This function acts as a cleanup routine for a structure containing 11 pointers (offsets
 *   0x4 to 0x2c). For each non-null pointer, it calls a function at a specific address
 *   (likely a lock or state-change helper) and then invokes virtual method slot 2 (offset
 *   0xc) on the pointed-to object with an argument of 3. Finally, it sets the pointer in
 *   the struct to null. It is called by the deleting destructor of cls_1059ebd0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_virtual_members(cls_1059ebd0 *param_1)

{
  int *piVar1;
  
  if (param_1->field_0x4 != 0) {
    (*(code *)0x1042e882/*ROM*/)();
    piVar1 = (int *)param_1->field_0x4;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x4 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x8 != 0) {
    (*(code *)0x1042a3c4/*ROM*/)();
    piVar1 = (int *)param_1->field_0x8;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x8 = (uintptr_t)((void *)0x0);
  if (param_1->field_0xc != 0) {
    (*(code *)0x104972a8/*ROM*/)();
    piVar1 = (int *)param_1->field_0xc;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0xc = (uintptr_t)((void *)0x0);
  if (param_1->field_0x10 != 0) {
    (*(code *)0x1042bc26/*ROM*/)();
    piVar1 = (int *)param_1->field_0x10;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x10 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x14 != 0) {
    (*(code *)0x1042a8ec/*ROM*/)();
    piVar1 = (int *)param_1->field_0x14;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x14 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x18 != 0) {
    (*(code *)0x1042b4dc/*ROM*/)();
    piVar1 = (int *)param_1->field_0x18;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x18 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x1c != 0) {
    (*(code *)0x10429c78/*ROM*/)();
    piVar1 = (int *)param_1->field_0x1c;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x1c = (uintptr_t)((void *)0x0);
  if (param_1->field_0x20 != 0) {
    (*(code *)0x1042e400/*ROM*/)();
    piVar1 = (int *)param_1->field_0x20;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x20 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x24 != 0) {
    (*(code *)0x1042e6ac/*ROM*/)();
    piVar1 = (int *)param_1->field_0x24;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x24 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x28 != 0) {
    (*(code *)0x1042e244/*ROM*/)();
    piVar1 = (int *)param_1->field_0x28;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x28 = (uintptr_t)((void *)0x0);
  if (param_1->field_0x2c != 0) {
    (*(code *)0x104df724/*ROM*/)();
    piVar1 = (int *)param_1->field_0x2c;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((void *)((int)*(short *)(*piVar1 + 8) + (int)piVar1),3);
    }
  }
  param_1->field_0x2c = (uintptr_t)((void *)0x0);
  return;
}
