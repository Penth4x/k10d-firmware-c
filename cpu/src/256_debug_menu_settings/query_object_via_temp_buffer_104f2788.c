/* @k10d query_object_via_temp_buffer_104f2788 @ 0x104f2788
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes a pointer from param_1 to a helper, calls virtual
 *   slot 2 with arg 1, and returns the low byte of the result.
 * summary:
 *   Allocates a stack object via cls_105a6cfc_new, calls copy_0x45_byte_block with
 *   *(param_1+8) and the new object, then invokes virtual method slot 2
 *   (extract_field_from_struct_1045fc62) on that object with argument 1. The object is
 *   destroyed via cls_105a6cfc_delete, and the low 8 bits of the virtual call's return
 *   value are returned to the caller. The role of the underlying data or subsystem is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint query_object_via_temp_buffer_104f2788(int param_1)

{
  uint uVar1;
  uintptr_t sp;
  uint32_t auStack_54 [19];
  
  cls_105a6cfc_new(auStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 8),auStack_54);
  uVar1 = extract_field_from_struct_1045fc62(auStack_54,1);
  cls_105a6cfc_delete(auStack_54,2);
  return uVar1 & 0xff;
}
