/* @k10d send_two_settings_and_state @ 0x103e90ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Reads two settings and transmits them with 8 bytes of local state via helper functions.
 * summary:
 *   The function retrieves settings with IDs 0xa5 and 0xa7 using setting_get. It calls
 *   call_two_helpers_with_byte with these values and a pointer to data at offset 0x2c of
 *   the input object. It then copies 8 bytes from that offset onto the stack and passes
 *   them to forward_param_to_helper_1046c8e8, followed by a call to
 *   free_heap_if_flag_set_1045c56c with a length parameter of 2. The specific subsystem
 *   (e.g., companion chip, display, or sensor) is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_two_settings_and_state(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  uVar1 = setting_get(*(int *)(param_1 + 8),0xa5);
  iVar2 = setting_get(*(int *)(param_1 + 8),0xa7);
  if (iVar2 != 0) {
    iVar3 = get_or_create_singleton_object_1046d20c();
  }
  else {
    iVar3 = get_or_create_singleton_object_1046d20c();
  }
  call_two_helpers_with_byte(*(uint32_t *)(iVar3 + 4),(uint16_t *)(param_1 + 0x2c),uVar1,iVar2 != 0);
  iVar2 = get_or_create_singleton_object_1046d20c();
  iVar3 = *(int *)(iVar2 + 4);
  iVar2 = 8;
  do {
    iVar4 = iVar2 + -1;
    (&stack0xffffffef)[iVar2] = *(uint8_t *)(iVar4 + param_1 + 0x2c);
    iVar2 = iVar4;
  } while (iVar4 != 0);
  forward_param_to_helper_1046c8e8(iVar3,auStack_10);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
