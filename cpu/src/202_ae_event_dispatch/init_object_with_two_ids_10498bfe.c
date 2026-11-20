/* @k10d init_object_with_two_ids_10498bfe @ 0x10498bfe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Initializes object fields by storing an offset and two values from a helper call.
 * summary:
 *   Checks if the first field of the object is non-zero. If so, it sets the third field to
 *   the first field plus 0xf4. It then calls compute_struct_array_offset twice with the
 *   first field and indices 2 and 0, storing the results in the fourth and fifth fields
 *   respectively. Returns true if the first field was non-zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool init_object_with_two_ids_10498bfe(cls_105b55fc *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1->field_0x0;
  if (iVar1 != 0) {
    param_1->field_0x8 = iVar1 + 0xf4;
    iVar2 = compute_struct_array_offset(iVar1,2);
    param_1->field_0xc = iVar2;
    iVar2 = compute_struct_array_offset(param_1->field_0x0,0);
    param_1->field_0x10 = iVar2;
  }
  return iVar1 != 0;
}
