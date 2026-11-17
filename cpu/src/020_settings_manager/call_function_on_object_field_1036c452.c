/* @k10d call_function_on_object_field_1036c452 @ 0x1036c452
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object pointer and invokes a function stored at offset 4 of that object.
 * summary:
 *   Calls get_or_create_singleton_object_10390eea to obtain a pointer. Dereferences the
 *   pointer at offset 4 to get a function pointer and executes it. The specific role of the
 *   object or the invoked function is not determinable from the provided pseudocode and
 *   unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_function_on_object_field_1036c452(void)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_10390eea();
  (*(code *)0x103908be/*ROM*/)(*(uint32_t *)(iVar1 + 4));
  return;
}
