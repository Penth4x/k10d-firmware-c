/* @k10d check_and_process_event_103947cc @ 0x103947cc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a global flag and if set, processes an event sequence and returns a status code.
 * summary:
 *   The function first checks if the global variable cRam800045b4 is zero. If it is, it
 *   returns 0. Otherwise, it calls get_value_from_object to get a value, passes it to
 *   add_offset_to_pointer_104df392, gets another value from return_r4_passthrough_104d800e,
 *   and passes it to compute_struct_offset_104d6852 with a parameter of 1. It then calls
 *   return_r4_passthrough_104d7940 and read_first_word_104d70e8. If
 *   read_first_word_104d70e8 returns 1, it calls store_byte_to_ram_800045b4 with param_1
 *   and 0, and returns 0. Otherwise, it returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_process_event_103947cc(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  if (cRam800045b4 == '\0') {
    uVar1 = 0;
  }
  else {
    iVar2 = get_value_from_object();
    add_offset_to_pointer_104df392(iVar2);
    uVar1 = return_r4_passthrough_104d800e();
    compute_struct_offset_104d6852(uVar1,1);
    return_r4_passthrough_104d7940();
    iVar2 = read_first_word_104d70e8((uint32_t *)(uint32_t)param_1);
    if (iVar2 == 1) {
      store_byte_to_ram_800045b4(param_1,0);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
