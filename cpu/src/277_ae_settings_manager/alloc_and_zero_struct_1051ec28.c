/* @k10d alloc_and_zero_struct_1051ec28 @ 0x1051ec28
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xb34-byte heap block (or uses the provided pointer) and zero-initializes
 *   its first fields and a 6-entry array.
 * summary:
 *   If param_1 is NULL, it calls heap_alloc for 0xb34 bytes. It then sets the first two
 *   words and one byte to 0, calls initialize_lens_update_object on a pointer offset by 5
 *   bytes with argument 6, calls get_lens_fw_update_status, and finally zero-initializes a
 *   6-element array of 3-byte structs (or similar) starting at that offset. The function
 *   returns the pointer to the allocated or provided memory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * alloc_and_zero_struct_1051ec28(uint16_t *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0xb34), param_1 != (uint16_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(uint8_t *)(param_1 + 2) = 0;
    pvVar3 = (void *)((int)param_1 + 5);
    initialize_lens_update_object(pvVar3,6);
    get_lens_fw_update_status((int)param_1 + 0xc, 6, 0x1dc, (code *)cls_105b9400_new);
    iVar1 = 0;
    iVar2 = 1;
    do {
      *(uint8_t *)(iVar1 + (int)pvVar3) = 0;
      *(uint8_t *)(iVar1 + 1 + (int)pvVar3) = 0;
      *(uint8_t *)((int)pvVar3 + iVar1 + 2) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
  }
  return param_1;
}
