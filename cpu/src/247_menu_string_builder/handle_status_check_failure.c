/* @k10d handle_status_check_failure @ 0x104dda1a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Checks a status code and, if it is not 2, performs cleanup and logs error messages.
 * summary:
 *   The function calls an unknown function at 0x104d6dbc with param_3 to retrieve a status
 *   code. If the code is not 2, it calls add_offset_to_pointer_104d6882 (likely a cleanup
 *   or release function) and another unknown function. It then checks another status via
 *   0x104d5a14; if that is not 1, it calls append_string_to_buffer three times with param_2
 *   and various string pointers (0x105bafac, a dynamic value, 0x105bafb4), suggesting
 *   logging or error reporting. The specific subsystem is not identifiable from the
 *   available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_status_check_failure(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = (*(code *)0x104d6dbc/*ROM*/)(param_3);
  if (iVar1 != 2) {
    add_offset_to_pointer_104d6882(param_3);
    (*(code *)0x104d8aec/*ROM*/)();
    iVar1 = (*(code *)0x104d5a14/*ROM*/)();
    if (iVar1 != 1) {
      append_string_to_buffer(param_2,(void *)0x105bafac/*ROM*/);
      add_offset_to_pointer_104d6882(param_3);
      uVar2 = (*(code *)0x104d8b18/*ROM*/)();
      append_string_to_buffer(param_2,(void *)uVar2);
      append_string_to_buffer(param_2,(void *)0x105bafb4/*ROM*/);
    }
  }
  return;
}
