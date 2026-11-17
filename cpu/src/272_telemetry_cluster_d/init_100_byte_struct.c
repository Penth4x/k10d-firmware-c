/* @k10d init_100_byte_struct @ 0x10512bd6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Allocates a 100-byte heap block if needed and zeroes it, setting a few fixed fields
 *   (index 4=2, several 16-bit fields=0x100).
 * summary:
 *   Takes a pointer; if NULL, calls heap_alloc(100). On success it clears the first 64
 *   bytes and sets param_1[4]=2, plus 16-bit values 0x100 at offsets 0x4c,0x4e,0x52,0x56
 *   and byte 0 at 0x41/0x61. Called from the constructor of cls_1059e4d0 to initialize a
 *   sub-object. No camera-specific MMIO or subsystem behavior is visible in the code
 *   itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_100_byte_struct(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 2;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(uint8_t *)(param_1 + 0x10) = 0;
    *(uint8_t *)((int)param_1 + 0x41) = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(uint16_t *)(param_1 + 0x13) = 0x100;
    *(uint16_t *)((int)param_1 + 0x4e) = 0x100;
    *(uint16_t *)(param_1 + 0x14) = 0x100;
    *(uint16_t *)((int)param_1 + 0x52) = 0x100;
    *(uint16_t *)(param_1 + 0x15) = 0x100;
    *(uint16_t *)((int)param_1 + 0x56) = 0x100;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(uint8_t *)(param_1 + 0x18) = 0;
    *(uint8_t *)((int)param_1 + 0x61) = 0;
  }
  return;
}
