/* @k10d alloc_and_construct_object @ 0x10495eda
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Allocates 0x68 bytes from the heap and constructs an object at that address.
 * summary:
 *   Calls heap_alloc to obtain a 0x68-byte block. If allocation succeeds, invokes
 *   cls_105b47b4_new to initialize the object in place. Returns the pointer to the
 *   allocated and constructed memory, or NULL if allocation failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * alloc_and_construct_object(uint32_t param_x0)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)heap_alloc((void *)0x68);
  if (puVar1 == (uint32_t *)0x0) {
    puVar1 = (uint32_t *)0x0;
  }
  else {
    cls_105b47b4_new(puVar1);
  }
  return puVar1;
}
