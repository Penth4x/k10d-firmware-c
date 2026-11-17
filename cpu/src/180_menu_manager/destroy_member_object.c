/* @k10d destroy_member_object @ 0x104865a0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Destroys the object pointer stored at offset 4 of the class instance by invoking its
 *   virtual methods.
 * summary:
 *   Retrieves the pointer at offset 4 of the input object. If non-null, it calls virtual
 *   slot 3 (offset 0x24) and then virtual slot 1 (offset 0xc) on that member object,
 *   passing the constant 3 to the second call. Finally, it nulls out the pointer at offset
 *   4. This is virtual slot 4 of class cls_105b2d48, likely part of its cleanup or
 *   destructor logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_member_object(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x24))((int)*(short *)(*piVar1 + 0x20) + (int)piVar1);
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return;
}
