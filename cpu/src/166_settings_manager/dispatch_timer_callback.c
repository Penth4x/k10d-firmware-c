/* @k10d dispatch_timer_callback @ 0x1047304c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 166_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves a global object, configures a timer-like sub-object at offset 0x4c, and
 *   invokes a stored function pointer with a flag.
 * summary:
 *   The function calls initialize_singleton_object_1045d6a0 to get a base pointer, extracts
 *   a function pointer from offset 0x28 and a sub-object pointer from offset 0x14. It
 *   initializes a field at param_1+0x4c, calls helpers write_byte_to_virtual_object and
 *   send_data_via_cpucom with the sub-object, sets a flag via twai_flg_obj, calls
 *   check_kernel_call_success_10459fea with 200, and finally executes the stored function
 *   pointer with param_2. The caller is a virtual method, suggesting this is part of an
 *   object-oriented timer or event dispatch mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_timer_callback(int param_1,uint8_t param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  
  iVar1 = initialize_singleton_object_1045d6a0();
  uVar3 = *(uint32_t *)(iVar1 + 0x28);
  piVar2 = *(int **)(iVar1 + 0x14);
  eventflag_clr_flg((uint32_t *)(param_1 + 0x4c),4);
  write_byte_to_virtual_object(piVar2,0,1);
  send_data_via_cpucom(piVar2,(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x4c),4,(void *)0x0,_DAT_105a2af0/*ROM*/);
  check_kernel_call_success_10459fea(0xc8);
  (*(code *)0x10463094/*ROM*/)(uVar3,param_2);
  return 0;
}
