/* @k10d virtual_slot3_forward_to_base @ 0x104a9508
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 207_settings_registry (unit names are model-proposed)
 * purpose:
 *   Forwards all arguments to the base class constructor/destructor body and returns its
 *   result.
 * summary:
 *   This is virtual method slot 3 of class cls_105b6ac8. It takes five parameters and
 *   immediately calls construct_object_with_vtable, passing 0x0 as the first argument
 *   (likely a null 'this' or mode flag) and forwarding the remaining four parameters. It
 *   returns the 16-bit result from the callee. The callee is identified as the
 *   constructor/destructor body of the parent class cls_105b6a30, suggesting this virtual
 *   method delegates its operation to the base class implementation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t
virtual_slot3_forward_to_base(uint32_t param_1,uint16_t param_2,uint16_t param_3,uint32_t param_4,
            uint32_t param_5)

{
  uint16_t uVar1;
  
  uVar1 = construct_object_with_vtable((uint16_t *)0x0,param_2,param_3,param_4,param_5);
  return uVar1;
}
