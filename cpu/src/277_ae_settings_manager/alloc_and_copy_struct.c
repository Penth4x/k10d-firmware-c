/* @k10d alloc_and_copy_struct @ 0x1051eda4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xb34-byte object and copies fields from a source struct, including three
 *   large sub-blocks.
 * summary:
 *   If param_1 is NULL, allocates 0xb34 bytes via heap_alloc; otherwise uses param_1.
 *   Copies the first few bytes from param_2, calls initialize_lens_update_object and
 *   get_lens_fw_update_status, then loops once to copy three byte pairs and three
 *   0x594-byte blocks (via copy_large_struct) from param_2 to the destination at offsets
 *   0xc, 0x1e8, and 0x3c4. Returns the destination pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t * alloc_and_copy_struct(uint16_t *param_1,uint16_t *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iStack_10;
  uint16_t *puStack_c;
  
  puStack_c = param_1;
  if ((param_1 == (uint16_t *)0x0) &&
     (puStack_c = (uint16_t *)heap_alloc((void *)0xb34), puStack_c == (uint16_t *)0x0)) {
    return (uint16_t *)0x0;
  }
  *puStack_c = *param_2;
  iVar2 = 0;
  puStack_c[1] = param_2[1];
  iVar3 = 0;
  *(uint8_t *)(puStack_c + 2) = *(uint8_t *)(param_2 + 2);
  pvVar1 = (void *)((int)puStack_c + 5);
  initialize_lens_update_object(pvVar1,6);
  get_lens_fw_update_status();
  iStack_10 = 1;
  do {
    *(uint8_t *)(iVar2 + (int)pvVar1) = *(uint8_t *)((int)param_2 + iVar2 + 5);
    copy_large_struct((uint32_t *)((int)puStack_c + iVar3 + 0xc),
                 (uint32_t *)((int)param_2 + iVar3 + 0xc));
    *(uint8_t *)(iVar2 + 1 + (int)pvVar1) = *(uint8_t *)((int)param_2 + iVar2 + 6);
    copy_large_struct((uint32_t *)((int)puStack_c + iVar3 + 0x1e8),
                 (uint32_t *)((int)param_2 + iVar3 + 0x1e8));
    *(uint8_t *)(iVar2 + 2 + (int)pvVar1) = *(uint8_t *)((int)param_2 + iVar2 + 7);
    copy_large_struct((uint32_t *)((int)puStack_c + iVar3 + 0x3c4),
                 (uint32_t *)((int)param_2 + iVar3 + 0x3c4));
    iVar2 = iVar2 + 3;
    iVar3 = iVar3 + 0x594;
    iStack_10 = iStack_10 + -1;
  } while (-1 < iStack_10);
  return puStack_c;
}
