/* @k10d reset_five_module_objects @ 0x104865e6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a reset or initialization routine on five singleton module objects and one
 *   parameter-derived object.
 * summary:
 *   The function retrieves pointers to five specific module singletons (including the
 *   MODSET parser) and calls kernel_diag_taskstack on each at offset 0x4c. It also calls
 *   the same routine on an object pointer stored at param_1 + 4, but at offset 0x1c. This
 *   pattern suggests a bulk reset or state-clearing operation across several subsystem
 *   managers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_five_module_objects(int param_1)

{
  int iVar1;
  
  iVar1 = modset_parser_singleton();
  kernel_diag_taskstack((void *)(iVar1 + 0x4c));
  iVar1 = get_or_init_singleton_10489b4e();
  kernel_diag_taskstack((void *)(iVar1 + 0x4c));
  iVar1 = menu_ctor_TESTMODE();
  kernel_diag_taskstack((void *)(iVar1 + 0x4c));
  iVar1 = menu_ctor_classic_wrapper();
  kernel_diag_taskstack((void *)(iVar1 + 0x4c));
  iVar1 = get_or_create_singleton_object_1048a800();
  kernel_diag_taskstack((void *)(iVar1 + 0x4c));
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 0x1c));
  return;
}
