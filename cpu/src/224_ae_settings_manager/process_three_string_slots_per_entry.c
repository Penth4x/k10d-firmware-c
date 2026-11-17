/* @k10d process_three_string_slots_per_entry @ 0x104bd3d6
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a table of entries and, for each, processes up to three non-null string
 *   pointers at fixed offsets.
 * summary:
 *   The function loops over an outer range (uStack_c from 0 to 0x2fc step 0x2fc) and an
 *   inner range (uStack_10 from 1 down to 0, step 0x8f4). For each combination, it checks
 *   three string pointers at offsets 0x0, 0x2fc, and 0x5f8 relative to param_1 + 0xebac. If
 *   a string is non-null, it calls copy_struct_fields_to_offset_104c22d4 on the string
 *   pointer, passes the result to invoke_virtual_method_on_object_104bf7ee along with
 *   param_1, and then nulls out the string pointer. The exact roles of
 *   copy_struct_fields_to_offset_104c22d4 and invoke_virtual_method_on_object_104bf7ee are
 *   unknown, but the pattern suggests processing and clearing string-based configuration or
 *   event entries.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_three_string_slots_per_entry(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  uStack_c = 0;
  do {
    uStack_10 = 1;
    iVar2 = uStack_c;
    do {
      iVar3 = param_1 + 0xebac;
      pcVar4 = (char *)(iVar3 + iVar2);
      if (*pcVar4 != '\0') {
        iVar1 = copy_struct_fields_to_offset_104c22d4(pcVar4);
        invoke_virtual_method_on_object_104bf7ee(param_1,iVar1);
        *pcVar4 = '\0';
      }
      pcVar4 = (char *)(iVar3 + iVar2 + 0x2fc);
      if (*pcVar4 != '\0') {
        iVar1 = copy_struct_fields_to_offset_104c22d4(pcVar4);
        invoke_virtual_method_on_object_104bf7ee(param_1,iVar1);
        *pcVar4 = '\0';
      }
      pcVar4 = (char *)(iVar3 + iVar2 + 0x5f8);
      if (*pcVar4 != '\0') {
        iVar3 = copy_struct_fields_to_offset_104c22d4(pcVar4);
        invoke_virtual_method_on_object_104bf7ee(param_1,iVar3);
        *pcVar4 = '\0';
      }
      uStack_10 = uStack_10 + -1;
      iVar2 = iVar2 + 0x8f4;
    } while (-1 < uStack_10);
    uStack_c = uStack_c + 0x2fc;
  } while (uStack_c < 0x2fc);
  return;
}
