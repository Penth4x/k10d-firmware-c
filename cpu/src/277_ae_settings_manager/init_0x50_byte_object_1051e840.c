/* @k10d init_0x50_byte_object_1051e840 @ 0x1051e840
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x50-byte object if needed and zero-initializes its fields with a few small
 *   constants.
 * summary:
 *   If param_1 is NULL, calls heap_alloc(0x50) to obtain a new object. Sets the first byte
 *   to 0, the next three bytes to 6, 2, and 3, and zero-fills the remainder including a
 *   3-iteration loop over 0x10-byte strides. The caller cls_10557a18_new uses this to
 *   initialize a 0x140-byte class object, but this function only handles the first 0x50
 *   bytes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_0x50_byte_object_1051e840(uint8_t *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (uint8_t *)0x0) ||
     (param_1 = (uint8_t *)heap_alloc((void *)0x50), param_1 != (uint8_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 6;
    param_1[2] = 2;
    param_1[3] = 3;
    param_1[4] = 0;
    param_1[5] = 0;
    iVar1 = 0;
    *(uint16_t *)(param_1 + 6) = 0;
    *(uint16_t *)(param_1 + 8) = 0;
    param_1[10] = 0;
    param_1[0x4c] = 0;
    iVar2 = 3;
    do {
      *(uint32_t *)(param_1 + iVar1 + 0xc) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x10) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x14) = 0;
      *(uint32_t *)(param_1 + iVar1 + 0x18) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar2);
  }
  return;
}
