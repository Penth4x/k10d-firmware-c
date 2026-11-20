/* @k10d alloc_and_init_object_1049c2dc @ 0x1049c2dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Heap-allocates a 1-byte object if param_1 is NULL, then calls alloc_and_zero_byte to
 *   initialize it, returning the pointer.
 * summary:
 *   Follows the standard Cfront constructor idiom: if the this pointer (param_1) is null,
 *   it allocates memory via heap_alloc and then invokes alloc_and_zero_byte to perform
 *   initialization. The function returns the object pointer in r4. It is called by three
 *   verified class constructors (cls_105b5628_new, cls_105b5694_new, cls_105d6684_new),
 *   suggesting it is a shared base-class constructor or a common initialization routine for
 *   these related classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_object_1049c2dc(void *param_1)

{
  if ((param_1 != 0) || (param_1 = (void *)heap_alloc((void *)1), param_1 != 0)) {
    alloc_and_zero_byte(param_1);
  }
  return (int)param_1;
}
