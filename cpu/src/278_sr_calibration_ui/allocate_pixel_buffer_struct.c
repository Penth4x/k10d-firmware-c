/* @k10d allocate_pixel_buffer_struct @ 0x1052063a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x14-byte structure containing a pixel count, a stride, and
 *   a pointer to a zeroed array of pixel slots.
 * summary:
 *   The function allocates a 0x14-byte control block and initializes its fields based on
 *   the input parameters. It allocates a secondary buffer for pixel data (param_5) and a
 *   tertiary buffer for an array of pointers (param_1[0]), zeroing the latter. It calls
 *   cls_105d6d30_new to initialize the first element of the pointer array, passing the
 *   pixel data buffer and count. The total size of the pointer array is calculated as
 *   (param_2 * param_4) + (param_3 & 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t *
allocate_pixel_buffer_struct(uint32_t *param_1,short param_2,ushort param_3,int param_4,uint16_t *param_5)

{
  uint uVar1;
  ushort uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  int *piVar6;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)(param_3 & 1);
    *(char *)((int)param_1 + 5) = (char)param_2;
    *(ushort *)((int)param_1 + 6) = (param_3 & 1) + param_2;
    *(char *)(param_1 + 2) = (char)param_4;
    param_1[3] = 0;
    *(uint8_t *)(param_1 + 4) = 0;
    if (param_4 != 0) {
      uVar3 = heap_alloc_2((uint)*(byte *)(param_1 + 2) << 1);
      param_1[3] = uVar3;
      uVar1 = 0;
      if (*(char *)(param_1 + 2) != '\0') {
        do {
          *(uint16_t *)(param_1[3] + uVar1 * 2) = *param_5;
          uVar1 = uVar1 + 1 & 0xff;
          param_5 = param_5 + 1;
        } while (uVar1 < *(byte *)(param_1 + 2));
      }
      *(ushort *)((int)param_1 + 6) =
           param_2 * (ushort)*(byte *)(param_1 + 2) + (ushort)*(byte *)(param_1 + 1);
    }
    puVar4 = (uint32_t *)heap_alloc_2((uint)*(ushort *)((int)param_1 + 6) << 2);
    *param_1 = (uint32_t)puVar4;
    uVar2 = 0;
    if (*(short *)((int)param_1 + 6) != 0) {
      do {
        *puVar4 = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 < *(ushort *)((int)param_1 + 6));
    }
    if (*(byte *)(param_1 + 2) != 0) {
      piVar6 = (int *)*param_1;
      iVar5 = cls_105d6d30_new((void *)0x0,(uint16_t *)param_1[3],(uint)*(byte *)(param_1 + 2));
      *piVar6 = iVar5;
    }
  }
  return param_1;
}
