/* @k10d reset_sysparam_store_state @ 0x10534cfc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Resets internal counters and pointers in the system parameter store object and
 *   reinitializes linked list heads.
 * summary:
 *   The function clears fields at offsets 0x28, 0x2c, and 0x3c of the object passed in
 *   param_1. It calls call_helper_with_param_and_field5 on the pointer at offset 0x18, then
 *   updates the pointers at offsets 0x18 and 0x1c to point to their respective next
 *   elements (effectively advancing or resetting linked list heads). It also calls
 *   merge_masked_word_fields with arguments derived from the object at offset 0x18. Given
 *   the module context (system_parameter_store) and neighboring functions like
 *   initialize_sysparam_flag_if_empty, this appears to be a reset or re-initialization
 *   routine for the parameter store structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_sysparam_store_state(cls_106210ec *param_1)

{
  param_1->field_0x2c = 0;
  param_1->field_0x28 = 0;
  call_helper_with_param_and_field5((uint32_t *)(param_1->field_0x18));
  **(uint32_t **)param_1->field_0x18 = ((uint32_t *)param_1->field_0x18)[1];
  **(uint32_t **)param_1->field_0x1c = ((uint32_t *)param_1->field_0x1c)[1];
  merge_masked_word_fields((uint32_t *)param_1->field_0x18,0,((uint32_t *)param_1->field_0x18)[0xe]);
  param_1->field_0x3c = 0;
  return 1;
}
