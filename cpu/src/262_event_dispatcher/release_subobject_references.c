/* @k10d release_subobject_references @ 0x104fc52a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Releases or resets a set of sub-objects referenced by fields in a 0x80-byte class
 *   instance.
 * summary:
 *   The function calls get_or_create_sram_object_104ecffc to obtain a pointer, then invokes
 *   virtual slot 5 on that object. It then calls kernel_diag_taskstack on 14 different
 *   pointers derived from fields in param_1 (offsets 0x4, 0x6c, 0xc, 0x3c, 0x20, 0x4c,
 *   0x18, 0x64, 0x34, 0x44, 0x50, 0x54, 0x68, 0x7c), adding small offsets (mostly 8, one
 *   0x10, one 4) to each. The repeated pattern suggests releasing or resetting multiple
 *   sub-objects or resources held by the class instance. The specific role of
 *   kernel_diag_taskstack is unknown, but the uniform call pattern indicates a cleanup or
 *   release operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_subobject_references(cls_105d436c *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_sram_object_104ecffc();
  (((vtbl_entry*)(*piVar1))[5].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[5].adj);
  kernel_diag_taskstack((int *)(param_1->field_0x4 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x6c + 0x10));
  kernel_diag_taskstack((int *)(param_1->field_0xc + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x3c + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x20 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x4c + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x18 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x64 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x34 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x44 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x50 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x54 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x68 + 8));
  kernel_diag_taskstack((int *)(param_1->field_0x7c + 4));
  return;
}
