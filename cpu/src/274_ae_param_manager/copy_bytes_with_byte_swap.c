/* @k10d copy_bytes_with_byte_swap @ 0x1051b3c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 bytes from a computed offset in param_1 to param_2, byte-swapping 16-bit
 *   words if a flag is set.
 * summary:
 *   Calculates a source offset using fields at param_1+0x1c, param_4, and param_1+0x24,
 *   then calls allocate_buffer_segment to validate or prepare the region. If successful, it
 *   copies param_3 bytes from the calculated source address to param_2. If the byte at
 *   param_1+0x20 is zero, it performs a byte-swap (endianness conversion) on 16-bit words
 *   during the copy; otherwise, it performs a standard byte-wise copy. Returns 1 on
 *   success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_bytes_with_byte_swap(cls_105d677c *param_1,uint16_t *param_2,int param_3,int param_4)

{
  uint16_t *puVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar3 = param_1->field_0x1c + param_4 + param_1->field_0x24;
  iVar2 = allocate_buffer_segment((int)(param_1),(uint)(iVar3),(uint)(param_3 << 1));
  if (iVar2 != 0) {
    puVar1 = (uint16_t *)(param_1->field_0x4 + (iVar3 - param_1->field_0xc));
    if (param_1->field_0x20 == '\0') {
      if (param_3 != 0) {
        iVar2 = param_3 + -3;
        if (2 < iVar2) {
          do {
            *param_2 = CONCAT11(*(uint8_t *)((int)puVar1 + 1),*(uint8_t *)puVar1);
            param_2[1] = CONCAT11(*(uint8_t *)((int)puVar1 + 3),*(uint8_t *)(puVar1 + 1));
            param_2[2] = CONCAT11(*(uint8_t *)((int)puVar1 + 5),*(uint8_t *)(puVar1 + 2));
            param_2 = param_2 + 3;
            iVar2 = iVar2 + -3;
            puVar1 = puVar1 + 3;
          } while (-1 < iVar2);
        }
        for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
          *param_2 = CONCAT11(*(uint8_t *)((int)puVar1 + 1),*(uint8_t *)puVar1);
          param_2 = param_2 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
    else if (param_3 != 0) {
      iVar2 = param_3 + -3;
      if (2 < iVar2) {
        do {
          *param_2 = *puVar1;
          param_2[1] = puVar1[1];
          param_2[2] = puVar1[2];
          param_2 = param_2 + 3;
          iVar2 = iVar2 + -3;
          puVar1 = puVar1 + 3;
        } while (-1 < iVar2);
      }
      for (iVar2 = iVar2 + 2; -1 < iVar2; iVar2 = iVar2 + -1) {
        *param_2 = *puVar1;
        param_2 = param_2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    uStack_c = 1;
  }
  return uStack_c;
}
