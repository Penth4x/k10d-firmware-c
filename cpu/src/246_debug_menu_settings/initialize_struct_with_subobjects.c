/* @k10d initialize_struct_with_subobjects @ 0x104d8a56
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Initializes a large struct by calling initializers on its sub-objects and setting
 *   several fields to constants.
 * summary:
 *   The function takes a pointer to a struct and performs a multi-step initialization. It
 *   calls six different helper functions, passing pointers to various offsets within the
 *   struct (0x0, 0xa4, 0xd0, 0x86c, 0x888, 0x8a4). It also directly sets specific fields to
 *   constant values: a byte at 0xbc to 0, a dword at 0xcc to 1, a dword at 0x8bc to 1, and
 *   a byte at 0x8c0 to 0. The callees are not named, so the specific subsystem is unknown,
 *   but the pattern is clearly a composite object initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_struct_with_subobjects(void *param_1)

{
  reset_struct_and_call_helper(param_1);
  init_struct_and_call_helper_104d58be((void *)((int)param_1 + 0xa4));
  *(uint8_t *)((int)param_1 + 0xbc) = 0;
  *(uint32_t *)((int)param_1 + 0xcc) = 1;
  init_struct_and_zero_subobjects((void *)((int)param_1 + 0xd0));
  init_struct_and_call_helper_104d5ad8((void *)((int)param_1 + 0x86c));
  init_struct_and_call_helper_104d52b0((void *)((int)param_1 + 0x888));
  init_struct_and_call_helper_104d5d3e((void *)((int)param_1 + 0x8a4));
  *(uint32_t *)((int)param_1 + 0x8bc) = 1;
  *(uint8_t *)((int)param_1 + 0x8c0) = 0;
  return;
}
