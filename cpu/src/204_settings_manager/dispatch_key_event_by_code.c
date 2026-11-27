/* @k10d dispatch_key_event_by_code @ 0x1049b81e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 204_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1049b82e) overlaps instruction at (ram,0x1049b82c)
    */

uint32_t dispatch_key_event_by_code(uint32_t param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  uint32_t uVar2;
  
  if (param_3 == 4) {
    uVar1 = *param_2;
    if (uVar1 == 0x20) {
      store_mapped_index_in_struct((uint32_t)param_1, (uint32_t)param_2);
      uVar2 = 1;
    }
    else if (uVar1 < 0x21) {
      if (uVar1 == 0xc) {
        store_status_flags_to_object((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 < 0xd) {
        if (uVar1 == 2) {
          store_two_word_values((uint32_t)param_1, (uint32_t)param_2);
          uVar2 = 1;
        }
        else if (uVar1 == 3) {
          store_result_at_offset_0x18((uint32_t)param_1,(void *)(uint32_t)param_2);
          uVar2 = 1;
        }
        else if (uVar1 == 4) {
          store_adjusted_value((uint32_t)param_1,(void *)(uint32_t)param_2);
          uVar2 = 1;
        }
        else if (uVar1 == 8) {
          store_mapped_index_value_1049bb38((uint32_t)param_1, (uint32_t)param_2);
          uVar2 = 1;
        }
        else {
          uVar2 = 1;
        }
      }
      else if (uVar1 == 0x18) {
        map_exposure_mode_codes((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 < 0x19) {
        if (uVar1 == 0xd) {
          map_mode_code_to_index_1049bdba((uint32_t)param_1, (uint32_t)param_2);
          uVar2 = 1;
        }
        else if (uVar1 == 0xe) {
          store_query_result_at_offset_0x70((uint32_t)param_1, (uint32_t)param_2);
          uVar2 = 1;
        }
        else {
          uVar2 = 1;
        }
      }
      else if (uVar1 == 0x19) {
        store_mapped_index_value_1049bb84((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x1f) {
        store_mapped_index_value_1049ba08((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x3e) {
      update_pointer_offsets_from_source((uint32_t)param_1, (uint32_t)param_2);
      uVar2 = 1;
    }
    else if (uVar1 < 0x3f) {
      if (uVar1 == 0x21) {
        store_mapped_index_value_1049ba6e((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x33) {
        call_three_unnamed_helpers_1049bbe8((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x34) {
        dispatch_four_substeps((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x37) {
        store_mapped_status_code_1049bf36((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x4f) {
      store_query_result_as_enum((uint32_t)param_1, (uint32_t)param_2);
      uVar2 = 1;
    }
    else if (uVar1 < 0x50) {
      if (uVar1 == 0x3f) {
        store_three_byte_flags((uint32_t)param_1, (uint32_t)param_2);
        uVar2 = 1;
      }
      else if (uVar1 == 0x4d) {
        store_result_at_offset_0x98((uint32_t)param_1,(void *)(uint32_t)param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 1;
      }
    }
    else if (uVar1 == 0x50) {
      write_inverted_value_to_struct_field((uint32_t)param_1, (uint32_t)param_2);
      uVar2 = 1;
    }
    else if (uVar1 == 0x222) {
      store_two_byte_values_from_source((uint32_t)param_1, (uint32_t)param_2);
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
