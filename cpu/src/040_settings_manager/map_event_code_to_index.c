/* @k10d map_event_code_to_index @ 0x103954f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a 0x50b000x event code to a 0-10 index and passes it to a handler.
 * summary:
 *   Calls get_or_init_singleton_10392e96 to get a context handle, then calls
 *   read_offset_0x78_field(param_1) to obtain an event code. A switch statement maps codes
 *   0x50b0003 through 0x50b0019 to indices 0 through 10. If a valid code is found, it calls
 *   call_helper_with_offset_eight_10392fd8 with the context and index. Finally, it calls
 *   process_two_param_updates with the context regardless of the event code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void map_event_code_to_index(uint32_t param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = get_or_init_singleton_10392e96();
  uVar2 = read_offset_0x78_field(param_1);
  switch(uVar2) {
  case 0x50b0003:
    uVar2 = 0;
    break;
  default:
    goto LAB_10395558;
  case 0x50b0005:
    uVar2 = 1;
    break;
  case 0x50b0007:
    uVar2 = 2;
    break;
  case 0x50b0009:
    uVar2 = 3;
    break;
  case 0x50b000b:
    uVar2 = 4;
    break;
  case 0x50b000d:
    uVar2 = 5;
    break;
  case 0x50b000f:
    uVar2 = 6;
    break;
  case 0x50b0011:
    uVar2 = 7;
    break;
  case 0x50b0013:
    uVar2 = 8;
    break;
  case 0x50b0015:
    uVar2 = 9;
    break;
  case 0x50b0017:
    uVar2 = 10;
    break;
  case 0x50b0019:
    uVar2 = 0xb;
  }
  call_helper_with_offset_eight_10392fd8(iVar1,uVar2);
LAB_10395558:
  process_two_param_updates(iVar1);
  return;
}
