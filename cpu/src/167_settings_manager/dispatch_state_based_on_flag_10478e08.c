/* @k10d dispatch_state_based_on_flag_10478e08 @ 0x10478e08
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a byte flag at offset 0xea48 and dispatches to one of three helper functions
 *   based on its value and subsequent return codes.
 * summary:
 *   The function reads a byte at param_1 + 0xea48. If it is zero, it returns 1. Otherwise,
 *   it reads a 32-bit value at param_1 + 0x18 and calls build_exif_string_from_list. If
 *   that returns 0, it calls check_and_cleanup_on_success and returns 1. If
 *   build_exif_string_from_list returns non-zero, it calls
 *   dispatch_virtual_method_sequence_10478f3a; if that also returns non-zero, it calls
 *   write_data_to_stream_object and returns its result. The specific subsystem is not
 *   identifiable from the provided callees or brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_based_on_flag_10478e08(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0xea48) == '\0') {
    uVar2 = 1;
  }
  else {
    uVar3 = *(uint32_t *)(param_1 + 0x18);
    iVar1 = build_exif_string_from_list(param_1,(void *)uVar3);
    if (iVar1 == 0) {
      check_and_cleanup_on_success(param_1);
      uVar2 = 1;
    }
    else {
      iVar1 = dispatch_virtual_method_sequence_10478f3a(param_1,(void *)uVar3);
      if (iVar1 != 0) {
        uVar2 = write_data_to_stream_object(param_1);
      }
    }
  }
  return uVar2;
}
