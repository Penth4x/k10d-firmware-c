/* @k10d forward_event_with_payload @ 0x104c2ed2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Forwards a 4-byte payload to a handler via initialize_object_subsystem_104c37c4 and
 *   returns 1.
 * summary:
 *   The function packs param_2 through param_5 into a local stack array and passes a
 *   pointer to it as the second argument to initialize_object_subsystem_104c37c4, along
 *   with param_1 and a constant 1. It unconditionally returns 1. The specific role of
 *   initialize_object_subsystem_104c37c4 is unknown, so the broader subsystem context
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t
forward_event_with_payload(int param_1,void *param_2,uint16_t param_3,uint16_t param_4,uint16_t param_5)

{
  uintptr_t sp;
  void *pvStack_14;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  
  uStack_c = param_5;
  pvStack_14 = param_2;
  uStack_10 = param_3;
  uStack_e = param_4;
  initialize_object_subsystem_104c37c4(param_1,&pvStack_14,1);
  return 1;
}
