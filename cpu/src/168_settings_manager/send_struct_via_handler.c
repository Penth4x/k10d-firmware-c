/* @k10d send_struct_via_handler @ 0x1047c748
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a local message struct from parameters and passes it to a handler function.
 * summary:
 *   The function initializes a local stack structure, setting the first field to 1 and
 *   copying two 16-bit values from param_2 and param_3 into the struct. It then calls
 *   link_object_into_list_10477ee6 with a pointer derived from param_1 (offset 0x50) and
 *   the address of this local struct. Finally, it calls free_heap_if_flag_set_1047e0e6 with
 *   the struct and the value 2, likely for cleanup or completion signaling. The return
 *   value of link_object_into_list_10477ee6 is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t send_struct_via_handler(int param_1,uint16_t *param_2,uint32_t param_3)

{
  uint32_t uVar1;
  uintptr_t sp;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint32_t uStack_14;
  int iStack_c;
  
  init_small_struct_fields(&uStack_20);
  iStack_c = param_1 + 0x20;
  uStack_20 = 1;
  uStack_1c = 0;
  uStack_18 = *param_2;
  uStack_16 = param_2[1];
  uStack_14 = param_3;
  uVar1 = link_object_into_list_10477ee6(*(int *)(param_1 + 0x50),(int)&uStack_20);
  free_heap_if_flag_set_1047e0e6(&uStack_20,2);
  return uVar1;
}
