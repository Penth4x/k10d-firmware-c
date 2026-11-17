/* @k10d dispatch_event_by_type_10434c16 @ 0x10434c16
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 122_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t dispatch_event_by_type_10434c16(uint32_t param_1,void *param_2,uint param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = _DAT_105bb638/*ROM*/ & param_3;
  if (uVar3 == _DAT_105bb59c/*ROM*/) {
    if ((param_3 == _DAT_105bb5a0/*ROM*/) || (uVar3 == _DAT_105bb5b4/*ROM*/)) {
      iVar2 = 1;
    }
    else if (uVar3 == _DAT_105bb5a4/*ROM*/) {
      iVar2 = 2;
    }
    else if ((param_3 == _DAT_105bb5a8/*ROM*/) || (uVar3 == _DAT_105bb5b8/*ROM*/)) {
      iVar2 = 3;
    }
    else if ((param_3 == _DAT_105bb5ac/*ROM*/) || (uVar3 == _DAT_105bb5bc/*ROM*/)) {
      iVar2 = 4;
    }
    else {
      iVar2 = 5;
      if (param_3 != _DAT_105bb5b0/*ROM*/) {
        iVar2 = 1;
      }
    }
    uVar1 = init_and_set_value_10434d94(param_1,param_2,iVar2);
  }
  else if (uVar3 == _DAT_105bb5d0/*ROM*/) {
    write_field_at_offset_four_1043554e((int)param_2,param_3);
    uVar1 = init_and_set_value_10434ee8(param_1,param_2,0);
  }
  else if (uVar3 == _DAT_105bb5f0/*ROM*/) {
    write_field_at_offset_four_1043554e((int)param_2,param_3);
    uVar1 = send_message_with_optional_payload(param_1,param_2,0);
  }
  else if (uVar3 == _DAT_105bb60c/*ROM*/) {
    write_param_to_buffer(param_1,param_2,1);
    if (uVar3 == _DAT_105bb618/*ROM*/) {
      write_field_at_offset_four_1043554e((int)param_2 + 0x14,param_3);
      uVar1 = initialize_object_field_with_value(param_1,param_2,0);
    }
    else {
      write_field_at_offset_four_1043554e((int)param_2 + 0x14,param_3);
      uVar1 = dispatch_mode_change_request_10435152(param_1,param_2,0);
    }
  }
  else if (uVar3 == _DAT_105bb624/*ROM*/) {
    if (param_3 == _DAT_105bb62c/*ROM*/) {
      *(uint8_t *)((int)param_2 + 0x2c) = 1;
      *(uint32_t *)((int)param_2 + 0x30) = 4;
    }
    else if (param_3 == _DAT_105bb630/*ROM*/) {
      *(uint8_t *)((int)param_2 + 0x2c) = 1;
      *(uint32_t *)((int)param_2 + 0x30) = 1;
    }
    write_field_at_offset_four_1043554e((int)param_2,param_3);
    uVar1 = write_param_to_buffer(param_1,param_2,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
