/* @k10d dispatch_apex_mode_events @ 0x105001fe
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * purpose:
 *   Handles APEX mode change and parameter update events by updating state flags and
 *   calling subsystem helpers.
 * summary:
 *   The function branches on specific event IDs (param_2) and flags (param_3) to manage
 *   camera state. It updates bytes at offsets 0x40-0x42 of the object, calls
 *   toggle_pointer_field_flags and invoke_virtual_slot_two_104272e4 with various codes
 *   (0xe00001-0xe00004), and invokes functions at 0x1045xxxx which likely handle lens or
 *   exposure subsystem communication. The logic appears to coordinate mode transitions and
 *   parameter synchronization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_apex_mode_events(int param_1,int param_2,uint param_3)

{
  uint32_t uVar1;
  uint16_t uVar3;
  int iVar2;
  
  if ((param_2 == -0x7ffffff2) && ((param_3 & 0x4000) != 0)) {
    if (*(int *)(param_1 + 0x3c) == 2) {
      *(uint8_t *)(param_1 + 0x40) = 0;
      *(uint8_t *)(param_1 + 0x41) = 0;
      *(uint8_t *)(param_1 + 0x42) = 0;
      toggle_pointer_field_flags(param_1);
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00004,0x10);
    }
    if (*(int *)(param_1 + 0x3c) == 1) {
      check_heap_alloc_success((int *)(param_1 + 0xc),5);
    }
  }
  if ((param_2 == -0x7ffffff1) && ((param_3 & 0x80) != 0)) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
      uVar1 = call_virtual_slot_2_with_offset(param_1);
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00001,uVar1);
      set_bit_14_in_ram40030400(*(int *)(param_1 + 0x14) + 0x10,0);
      (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
      (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
      *(uint8_t *)(param_1 + 0x40) = 0;
      *(uint8_t *)(param_1 + 0x41) = 0;
      *(uint8_t *)(param_1 + 0x42) = 0;
    }
    else {
      *(uint8_t *)(param_1 + 0x40) = 1;
    }
  }
  if (param_2 == -0x7ffffff0) {
    if ((param_3 & 4) != 0) {
      *(uint8_t *)(param_1 + 0x40) = 0;
      *(uint8_t *)(param_1 + 0x41) = 0;
      *(uint8_t *)(param_1 + 0x42) = 0;
      toggle_pointer_field_flags(param_1);
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00004,0x10);
      check_kernel_object_id_valid((void *)(param_1 + 0xc));
    }
    if ((param_3 & 8) != 0) {
      uVar3 = (*(code *)0x1045361a/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
      *(uint16_t *)(param_1 + 0x36) = uVar3;
      uVar3 = (*(code *)0x10453644/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
      *(uint16_t *)(param_1 + 0x34) = uVar3;
      iVar2 = (*(code *)0x1045334e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else if (iVar2 == 1) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
        if (iVar2 != 2) {
          uVar1 = 3;
        }
      }
      *(uint32_t *)(param_1 + 0x38) = uVar1;
      toggle_pointer_field_flags(param_1);
      uVar1 = call_virtual_slot_2_with_offset(param_1);
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00002,uVar1);
    }
    if ((param_3 & 0x20) != 0) {
      *(uint8_t *)(param_1 + 0x40) = 0;
      *(uint8_t *)(param_1 + 0x41) = 0;
      *(uint8_t *)(param_1 + 0x42) = 0;
      toggle_pointer_field_flags(param_1);
      check_kernel_object_id_valid((void *)(param_1 + 0xc));
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00004,0xd);
    }
    if ((param_3 & 0x40) != 0) {
      *(uint8_t *)(param_1 + 0x41) = 1;
    }
    if ((param_3 & 0x80) != 0) {
      *(uint8_t *)(param_1 + 0x42) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x40) != '\0') &&
     ((*(char *)(param_1 + 0x41) != '\0' || (*(char *)(param_1 + 0x42) != '\0')))) {
    (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
    set_ram_flag_40030001(*(int *)(param_1 + 0x14) + 0x11,0);
    (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
    (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
    *(uint8_t *)(param_1 + 0x40) = 0;
    *(uint8_t *)(param_1 + 0x41) = 0;
    *(uint8_t *)(param_1 + 0x42) = 0;
    uVar1 = clamp_index_to_fifteen(param_1);
    invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x1c),0xe00003,uVar1);
    check_kernel_object_id_valid((void *)(param_1 + 0xc));
  }
  return 0;
}
