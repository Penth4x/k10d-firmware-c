/* @k10d init_object_with_callback_1051aa12 @ 0x1051aa12
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting fields and conditionally creating a sub-object via a
 *   helper.
 * summary:
 *   The function writes 0xfffffffe to offset 0x54 and param_2 to offset 4 of the object
 *   pointed to by param_1. It calls an unknown function at 0x1049a528; if the result is
 *   non-zero, it allocates a new object via cls_105b9724_new and passes it to
 *   initialize_object_from_source_1051ac4e. If initialize_object_from_source_1051ac4e
 *   returns 0 and the new object is non-null, it invokes a virtual method (slot 1) on the
 *   sub-object with argument 3. Returns the sub-object pointer or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int init_object_with_callback_1051aa12(int param_1,uint32_t param_2)

{
  int iVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x54) = 0xfffffffe;
  *(uint32_t *)(param_1 + 4) = param_2;
  iVar2 = 0;
  iVar1 = (*(code *)0x1049a528/*ROM*/)();
  if (iVar1 != 0) {
    iVar2 = cls_105b9724_new((uint32_t *)0x0);
    iVar1 = initialize_object_from_source_1051ac4e(param_1,iVar2);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 4) + 0xc))(*(short *)(*(int *)(iVar2 + 4) + 8) + iVar2,3);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}
