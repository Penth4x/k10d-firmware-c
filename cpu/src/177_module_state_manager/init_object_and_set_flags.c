/* @k10d init_object_and_set_flags @ 0x104854fc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object at pvRam800102c4 by calling a virtual method and a series of
 *   setter functions with specific parameters.
 * summary:
 *   The function retrieves a pointer from sr_driver_singleton and calls module_array_getter
 *   on a member at offset 4. It then performs a virtual call on the object at pvRam800102c4
 *   using a slot derived from offset 0x1c. Finally, it calls a sequence of functions
 *   (copy_bytes_into_struct_offset, init_struct_with_copy_and_flag,
 *   set_bit5_at_offset_0x2a, dispatch_on_flag_param, call_helper_with_flag_one_104436aa,
 *   clamp_and_write_byte_field) passing the object pointer and various integer constants
 *   (0x5d, 0, 1), followed by a call to check_kernel_call_success_10459fea with 100.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_and_set_flags(void)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar2 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar2 + 4),7);
  uVar3 = return_sram_address_10436cf4();
  (((vtbl_entry*)(*(int *)((int)pvRam800102c4 + 4)))[3].fn)
            ((int)pvRam800102c4 + (int)((vtbl_entry*)(*(int *)((int)pvRam800102c4 + 4)))[3].adj,0);
  pvVar1 = (void *)((uintptr_t)(pvRam800102c4));
  iVar2 = add_four_to_param(uVar3);
  copy_bytes_into_struct_offset(pvVar1,iVar2,0x5d);
  init_struct_with_copy_and_flag(pvRam800102c4);
  set_bit5_at_offset_0x2a((void *)(pvRam800102c4),(int)(0));
  dispatch_on_flag_param((void *)(pvRam800102c4),(int)(1));
  call_helper_with_flag_one_104436aa((void *)(pvRam800102c4));
  clamp_and_write_byte_field((void *)(pvRam800102c4),(int)(1));
  check_kernel_call_success_10459fea();
  return;
}
