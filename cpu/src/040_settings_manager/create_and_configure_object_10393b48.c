/* @k10d create_and_configure_object_10393b48 @ 0x10393b48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a new object, initializes its fields via a series of setter calls, and
 *   returns the pointer.
 * summary:
 *   The function calls get_or_init_singleton_object_10393b16 to obtain a pointer (likely an
 *   allocation or constructor). It then calls call_helper_with_offset_eight_10393de4 and
 *   check_and_process_event_103947cc/check_and_retry_condition to determine a boolean flag
 *   (uVar3). Finally, it configures the object by calling
 *   set_byte_and_call_helper_10393e04, set_byte_and_call_helper_10393e18,
 *   store_byte_at_offset_0x72, and store_pointer_pair_at_offset with the flag and the input
 *   parameters (param_2, param_3). The object pointer is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * create_and_configure_object_10393b48(uint32_t param_1,uint32_t param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  uint8_t uVar3;
  
  pvVar1 = (void *)get_or_init_singleton_object_10393b16();
  call_helper_with_offset_eight_10393de4((int)pvVar1);
  iVar2 = check_and_process_event_103947cc(pvVar1);
  if (iVar2 != 0) {
    iVar2 = check_and_retry_condition((uint32_t)(pvVar1));
    uVar3 = 1;
    if (iVar2 == 0) goto LAB_10393b7a;
  }
  uVar3 = 0;
LAB_10393b7a:
  set_byte_and_call_helper_10393e04((int)pvVar1,uVar3);
  set_byte_and_call_helper_10393e18((int)pvVar1,(uint8_t)param_2);
  store_byte_at_offset_0x72((int)pvVar1,0);
  store_pointer_pair_at_offset((int)pvVar1,(int)param_3);
  return pvVar1;
}
