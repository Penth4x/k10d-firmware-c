/* @k10d dispatch_on_mode_index_10498c7e @ 0x10498c7e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 202_ae_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Selects and calls one of two helper functions based on a 0/1 mode index, returning 1
 *   for other values.
 * summary:
 *   The function branches on param_3: if 0 it calls dispatch_three_param_handlers, if 1 it
 *   calls dispatch_message_by_type_10498d02, otherwise it returns the constant 1. The
 *   return value of the selected helper is passed back to the caller. It is invoked as
 *   virtual method slot 3 of class cls_105b55fc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_mode_index_10498c7e(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  if (param_3 == 0) {
    uVar1 = dispatch_three_param_handlers(__frv_reg_unset(4),(short *)__frv_reg_unset(5));
  }
  else if (param_3 == 1) {
    uVar1 = dispatch_message_by_type_10498d02(__frv_reg_unset(4),(short *)__frv_reg_unset(5));
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
