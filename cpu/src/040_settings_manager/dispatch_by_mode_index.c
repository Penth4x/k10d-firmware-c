/* @k10d dispatch_by_mode_index @ 0x10394bb0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches to one of 17 handler functions based on an integer index passed in param_1.
 * summary:
 *   The function uses a switch statement on param_1 to select and call one of 17 distinct
 *   sub-functions. Cases 0 and 1 share the same handler
 *   (get_or_init_singleton_object_1039416c), while all other cases map to unique callees.
 *   The return value of the selected callee is returned directly to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_mode_index(uint32_t param_1)

{
  uint32_t uVar1;
  
  switch(param_1) {
  case 0:
  case 1:
    uVar1 = get_or_init_singleton_object_1039416c();
    break;
  default:
    uVar1 = get_or_create_singleton_object_10396af8();
    break;
  case 3:
    uVar1 = get_or_init_sram_object_103973c4();
    break;
  case 4:
    uVar1 = get_or_init_global_object_103964f8();
    break;
  case 5:
    uVar1 = get_or_init_singleton_1039201c();
    break;
  case 6:
    uVar1 = init_singleton_object_1039291c();
    break;
  case 7:
    uVar1 = get_or_create_singleton_object_10395bd6();
    break;
  case 8:
    uVar1 = get_or_init_singleton_10392e96();
    break;
  case 9:
    uVar1 = get_or_init_global_object_10395354();
    break;
  case 10:
    uVar1 = get_or_init_singleton_object_10396dd4();
    break;
  case 0xb:
    uVar1 = get_or_create_singleton_object_103957d8(1);
    break;
  case 0xc:
    uVar1 = get_or_init_singleton_object_103938e2();
    break;
  case 0xd:
    uVar1 = get_or_create_singleton_object_10393fbc();
    break;
  case 0xe:
    uVar1 = get_or_create_singleton_object_10391da4();
    break;
  case 0xf:
    uVar1 = get_or_init_global_object_1039265a();
    break;
  case 0x10:
    uVar1 = get_or_init_singleton_object_10393b16();
  }
  return uVar1;
}
