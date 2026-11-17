/* @k10d extract_lens_fw_header_fields @ 0x1053ab04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Copies specific header fields from a lens firmware entry into a destination structure.
 * summary:
 *   Calculates the address of a specific entry in an array of 0x20-byte structures based on
 *   param_1 and param_2. It extracts several fields (bytes 0x18-0x1f and 0xb) from this
 *   entry and writes them into a destination structure at param_3 + 0x200. It then calls
 *   two helper functions, likely for validation or further processing of the extracted
 *   data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void extract_lens_fw_header_fields(int param_1,int param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_1 + (param_2 + -1) * 0x20);
  *(ushort *)((int)param_3 + 0x20e) =
       CONCAT11(*(uint8_t *)((int)pvVar1 + 0x19),*(uint8_t *)((int)pvVar1 + 0x18));
  *(ushort *)((int)param_3 + 0x210) =
       CONCAT11(*(uint8_t *)((int)pvVar1 + 0x17),*(uint8_t *)((int)pvVar1 + 0x16));
  *(uint *)((int)param_3 + 0x214) =
       CONCAT13(*(uint8_t *)((int)pvVar1 + 0x1f),
                CONCAT12(*(uint8_t *)((int)pvVar1 + 0x1e),
                         CONCAT11(*(uint8_t *)((int)pvVar1 + 0x1d),
                                  *(uint8_t *)((int)pvVar1 + 0x1c))));
  *(uint8_t *)((int)param_3 + 0x20d) = *(uint8_t *)((int)pvVar1 + 0xb);
  append_dot_to_buffer(pvVar1,(void *)((int)param_3 + 0x200));
  memcpy_bytes(param_3,(void *)((int)param_3 + 0x200),0xd);
  return;
}
