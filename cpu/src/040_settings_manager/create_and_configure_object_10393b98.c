/* @k10d create_and_configure_object_10393b98 @ 0x10393b98
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an object via get_or_init_singleton_object_10393b16 and initializes its
 *   fields with the provided parameters.
 * summary:
 *   Calls get_or_init_singleton_object_10393b16 to obtain a handle, then passes it to a
 *   series of setter functions (call_helper_with_offset_eight_10393de4 through
 *   store_value_at_offset_0x80) to configure its state. The parameters param_2 and param_3
 *   are stored into the object, and the handle is returned. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_and_configure_object_10393b98(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = get_or_init_singleton_object_10393b16();
  call_helper_with_offset_eight_10393de4(iVar1);
  set_byte_and_call_helper_10393e04(iVar1,0);
  set_byte_and_call_helper_10393e18(iVar1,0);
  store_byte_at_offset_0x72(iVar1,1);
  store_pointer_pair_at_offset(iVar1,(int)param_2);
  store_value_at_offset_0x80(iVar1,param_3);
  return iVar1;
}
