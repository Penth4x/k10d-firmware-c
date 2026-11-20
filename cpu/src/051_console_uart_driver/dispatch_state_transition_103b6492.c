/* @k10d dispatch_state_transition_103b6492 @ 0x103b6492
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Maps current internal state to a next state ID based on input event code and object
 *   field at offset 0x28.
 * summary:
 *   The function acts as a state machine dispatcher. It checks the input parameter
 *   (param_2) against specific event codes (0x2030000, 0x2030001, 0x2030003). For each, it
 *   reads a value from the object at offset 0x28 via helper functions
 *   (get_setting_by_mode_flag_104f07f4, get_setting_by_mode_flag_104f08ac,
 *   get_setting_by_mode_flag_104f0946) and uses a switch/if-else chain to determine a
 *   return value (next state ID). It also calls side-effect functions
 *   (invoke_virtual_slot_two_103b70ce, set_object_and_three_substates,
 *   invoke_virtual_slot_two_with_flags) in specific branches. The return value is 0 if no
 *   transition is defined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_transition_103b6492(cls_10566724 *param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0;
  if (param_2 == 0x2030000) {
    uVar1 = get_setting_by_mode_flag_104f07f4(param_1->field_0x28);
    switch(uVar1) {
    case 0:
      uVar3 = 0x203000a;
      break;
    case 1:
      uVar3 = 0x203000b;
      break;
    case 2:
      uVar3 = 0x203000c;
      break;
    case 3:
      uVar3 = 0x203000d;
      break;
    case 4:
    case 5:
    case 6:
      invoke_virtual_slot_two_103b70ce(param_1,1);
      uVar3 = 0x2030001;
      break;
    case 7:
      uVar3 = 0x2030010;
      break;
    case 8:
      uVar3 = 0x2030011;
      break;
    case 9:
    case 10:
    case 0xb:
      uVar3 = 0x2030012;
      break;
    case 0xc:
    case 0xd:
    case 0xe:
      set_object_and_three_substates(param_1,1);
      uVar3 = 0x2030003;
    }
    get_setting_by_mode_flag_104f08ac(param_1->field_0x28);
    invoke_virtual_slot_two_with_flags((int)param_1);
  }
  else if (param_2 == 0x2030001) {
    iVar2 = get_setting_by_mode_flag_104f08ac(param_1->field_0x28);
    if (iVar2 == 4) {
      uVar3 = 0x2030017;
    }
    else if (iVar2 == 5) {
      uVar3 = 0x2030018;
    }
    else if (iVar2 == 6) {
      uVar3 = 0x2030019;
    }
    else {
      uVar3 = 0;
    }
  }
  else if (param_2 == 0x2030003) {
    iVar2 = get_setting_by_mode_flag_104f0946(param_1->field_0x28);
    if (iVar2 == 0xc) {
      uVar3 = 0x203001d;
    }
    else if (iVar2 == 0xd) {
      uVar3 = 0x203001e;
    }
    else if (iVar2 == 0xe) {
      uVar3 = 0x203001f;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
