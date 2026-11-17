/* @k10d call_helper_if_flag_set_10533cde @ 0x10533cde
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Calls construct_object_with_vtable with the given parameters only if
 *   validate_event_code returns non-zero.
 * summary:
 *   The function first calls validate_event_code and checks its return value. If non-zero,
 *   it stores param_5 on the stack and invokes construct_object_with_vtable (a
 *   constructor/destructor body for cls_105b6a30) with 0x0, param_2, param_3, param_4, and
 *   param_5. It is virtual slot 3 of cls_1061e420. No camera-specific behavior is evident
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_10533cde(uint32_t param_1,uint16_t param_2,uint16_t param_3,uint32_t param_4,
                 uint32_t param_5)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puVar2;
  uint8_t auStack_18 [4];
  
  puVar2 = (uint32_t *)auStack_18;
  iVar1 = validate_event_code(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 != 0) {
    *puVar2 = param_5;
    construct_object_with_vtable((uint16_t *)0x0,param_2,param_3,param_4,*puVar2);
  }
  return;
}
