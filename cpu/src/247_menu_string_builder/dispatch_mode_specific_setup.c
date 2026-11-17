/* @k10d dispatch_mode_specific_setup @ 0x104dae5c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Selects and applies a mode-specific configuration block based on a parameter value.
 * summary:
 *   The function calls append_string_to_buffer twice with fixed addresses, then uses
 *   FUN_104d68f8 to get a mode index from param_3. It switches on this index to select one
 *   of several data blocks (DAT_105ba8c0 through DAT_105ba938). For cases 2 and 7, it
 *   additionally calls call_helper_with_offset_104d68da and build_and_apply_param_string.
 *   Finally, it calls append_string_to_buffer with the selected block and two fixed blocks
 *   (DAT_105ba940, DAT_105ba950). The specific camera subsystem is not identifiable from
 *   the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_specific_setup(uint32_t param_1,int *param_2,int param_3)

{
  uint32_t uVar1;
  void *puVar2;
  uint32_t r7_in;
  
  append_string_to_buffer(param_2,(void *)0x105ba89c/*ROM*/);
  append_string_to_buffer(param_2,(void *)0x105ba8b0/*ROM*/);
  uVar1 = (*(code *)0x104d68f8/*ROM*/)(param_3);
  switch(uVar1) {
  case 0:
    puVar2 = &DAT_105ba8c0/*ROM*/;
    break;
  case 1:
    puVar2 = (void *)0x105ba8d0/*ROM*/;
    break;
  case 2:
    append_string_to_buffer(param_2,(void *)&DAT_105ba8e0/*ROM*/);
    uVar1 = call_helper_with_offset_104d68da(param_3);
    build_and_apply_param_string(param_2,(void *)uVar1,1,(void *)r7_in);
    puVar2 = (void *)0x105ba8f8/*ROM*/;
    break;
  case 3:
    puVar2 = (void *)0x105ba900/*ROM*/;
    break;
  case 4:
    puVar2 = (void *)0x105ba910/*ROM*/;
    break;
  default:
    goto LAB_104daf26;
  case 7:
    append_string_to_buffer(param_2,(void *)&DAT_105ba920/*ROM*/);
    uVar1 = call_helper_with_offset_104d68da(param_3);
    build_and_apply_param_string(param_2,(void *)uVar1,1,(void *)r7_in);
    puVar2 = (void *)0x105ba938/*ROM*/;
  }
  append_string_to_buffer(param_2,puVar2);
LAB_104daf26:
  append_string_to_buffer(param_2,(void *)&DAT_105ba940/*ROM*/);
  append_string_to_buffer(param_2,(void *)&DAT_105ba950/*ROM*/);
  return;
}
