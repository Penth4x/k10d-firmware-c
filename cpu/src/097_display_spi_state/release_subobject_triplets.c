/* @k10d release_subobject_triplets @ 0x10412796
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Iterates over a fixed set of sub-object pointers in a struct and calls three helper
 *   functions on each, with conditional branches based on two flag bytes.
 * summary:
 *   The function takes a struct pointer and accesses member pointers at offsets 0x34
 *   through 0x60. For most members it calls clear_flag3_with_notify, then either
 *   set_flag_with_notify or clear_flag_with_notify, then set_flag2_with_notify. Two flag
 *   bytes at offsets 0xbf and 0xc0 control which members are processed and whether an
 *   alternative set of four functions (call_helper_with_zero_and_two_1043ed7c,
 *   call_helper_if_flag_set_1043ee88, call_helper_if_offset_0x14_set,
 *   call_helper_if_flag_set_1043ee5c) is called on the member at offset 0x44. The pattern
 *   suggests a cleanup or state-transition routine for a group of related sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_subobject_triplets(void *param_1)

{
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x34));
  set_flag_with_notify(*(void **)((int)param_1 + 0x34));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x34));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x38));
  set_flag_with_notify(*(void **)((int)param_1 + 0x38));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x38));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x3c));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x3c));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x3c));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x40));
  if (*(char *)((int)param_1 + 0xbf) != '\0') {
    clear_flag_with_notify(*(void **)((int)param_1 + 0x40));
  }
  set_flag2_with_notify(*(void **)((int)param_1 + 0x40));
  if (*(char *)((int)param_1 + 0xc0) == '\0') {
    clear_flag3_with_notify(*(void **)((int)param_1 + 0x44));
    clear_flag_with_notify(*(void **)((int)param_1 + 0x44));
    set_flag2_with_notify(*(void **)((int)param_1 + 0x44));
  }
  else {
    call_helper_with_zero_and_two_1043ed7c(*(uint32_t *)((int)param_1 + 100));
    call_helper_if_flag_set_1043ee88(*(uint32_t *)((int)param_1 + 100),1);
    call_helper_if_offset_0x14_set(*(uint32_t *)((int)param_1 + 100),1);
    call_helper_if_flag_set_1043ee5c(*(uint32_t *)((int)param_1 + 100),0);
  }
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x48));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x48));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x48));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x4c));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x4c));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x4c));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x54));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x54));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x54));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x50));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x50));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x50));
  if (*(char *)((int)param_1 + 0xbf) != '\0') {
    clear_flag3_with_notify(*(void **)((int)param_1 + 0x58));
    clear_flag_with_notify(*(void **)((int)param_1 + 0x58));
    set_flag2_with_notify(*(void **)((int)param_1 + 0x58));
  }
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x60));
  clear_flag_with_notify(*(void **)((int)param_1 + 0x60));
  set_flag2_with_notify(*(void **)((int)param_1 + 0x60));
  return;
}
