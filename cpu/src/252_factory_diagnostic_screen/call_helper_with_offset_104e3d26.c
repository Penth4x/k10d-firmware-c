/* @k10d call_helper_with_offset_104e3d26 @ 0x104e3d26
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper with a pointer from another helper and an offset of param_2
 *   plus 9.
 * summary:
 *   The function retrieves a pointer by calling get_or_create_sram_object_1047dd7a. It then
 *   passes that pointer and the value (param_2 + 9) cast to a pointer to
 *   search_linked_list_for_match. The return value of search_linked_list_for_match is
 *   returned directly. The specific roles of the callees are unknown, so the mechanical
 *   behavior is a simple wrapper around these two calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_offset_104e3d26(void *param_1,int param_2)

{
  void *pvVar1;
  uint32_t uVar2;
  
  pvVar1 = (void *)get_or_create_sram_object_1047dd7a();
  uVar2 = search_linked_list_for_match(pvVar1,(void *)(param_2 + 9));
  return uVar2;
}
