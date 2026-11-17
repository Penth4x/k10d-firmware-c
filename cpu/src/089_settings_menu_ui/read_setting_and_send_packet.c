/* @k10d read_setting_and_send_packet @ 0x103f6a3c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Reads a conditional setting value and transmits it along with 8 bytes of object data
 *   via helper functions.
 * summary:
 *   The function retrieves a setting (0x96) from the object's context. Based on whether
 *   that setting is 1, it selects a secondary setting (0xa6 or 0xa5) and a tertiary setting
 *   (0xa8 or 0xa7). It then calls call_two_helpers_with_byte with these values and a flag
 *   indicating if the tertiary setting is non-zero. Finally, it copies 8 bytes from offset
 *   0x2a of the input object to the stack and passes them to
 *   forward_param_to_helper_1046c8e8 and free_heap_if_flag_set_1045c56c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_setting_and_send_packet(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_10 [8];
  
  iVar1 = setting_get(*(int *)(param_1 + 8),0x96);
  if (iVar1 == 1) {
    uVar2 = setting_get(*(int *)(param_1 + 8),0xa6);
    iVar1 = 0xa8;
  }
  else {
    uVar2 = setting_get(*(int *)(param_1 + 8),0xa5);
    iVar1 = 0xa7;
  }
  iVar1 = setting_get(*(int *)(param_1 + 8),iVar1);
  if (iVar1 != 0) {
    iVar3 = get_or_create_singleton_object_1046d20c();
  }
  else {
    iVar3 = get_or_create_singleton_object_1046d20c();
  }
  call_two_helpers_with_byte(*(uint32_t *)(iVar3 + 4),(uint16_t *)(param_1 + 0x2a),uVar2,iVar1 != 0);
  iVar1 = get_or_create_singleton_object_1046d20c();
  iVar3 = *(int *)(iVar1 + 4);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -1;
    (&stack0xffffffef)[iVar1] = *(uint8_t *)(iVar4 + param_1 + 0x2a);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  forward_param_to_helper_1046c8e8(iVar3,auStack_10);
  free_heap_if_flag_set_1045c56c(auStack_10,2);
  return;
}
