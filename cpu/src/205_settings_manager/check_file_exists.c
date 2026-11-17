/* @k10d check_file_exists @ 0x104a187e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks if a file or resource exists by opening it and verifying the result.
 * summary:
 *   The function initializes a local handle, attempts to open a resource using a pointer to
 *   a constant string at 0x105b60c8, and cleans up the handle. It returns true if the open
 *   operation succeeded (returned 0). The specific resource is unknown without resolving
 *   the constant string.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_file_exists(void)

{
  void *pvVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t uStack_9;
  
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pvVar1 = (void *)return_pentax_corp_string_ptr((int)&uStack_9);
  iVar2 = compare_null_terminated_strings(pvVar1,(void *)0x105b60c8/*ROM*/);
  heap_free_if_flagged(&uStack_9,2);
  return iVar2 == 0;
}
