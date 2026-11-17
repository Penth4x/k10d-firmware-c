/* @k10d copy_stream_bytes_into_struct @ 0x104f4904
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Copies a variable number of bytes from a stream object into a buffer at offset 0x30 of
 *   param_1.
 * summary:
 *   Checks that param_1+0x40 is non-zero and param_4 is less than 4, then calls
 *   compute_indexed_difference to get a count. If the count is greater than 9, it
 *   initializes a stream object via format_string_to_buffer_10545140 using a base address
 *   in ROM (0x105c3af4 or 0x105c3aec) and param_2. It then loops, calling
 *   count_string_bytes to read bytes from the stream and storing them into the buffer at
 *   param_1+0x30, incrementing a counter at that location for each byte read.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_stream_bytes_into_struct(int param_1,void *param_2,int param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  void *pvVar6;
  uint8_t *puVar7;
  uintptr_t sp;
  char acStack_58 [80];
  
  puVar7 = &stack0xfffffff8;
  if (((*(char *)(param_1 + 0x40) != '\0') && ((int)param_4 < 4)) &&
     (pvVar6 = param_4, uVar2 = compute_indexed_difference(param_1,(int)param_4), 9 < uVar2)) {
    if (param_3 == 0) {
      pcVar5 = (char *)0x105c3af4/*ROM*/;
    }
    else {
      pcVar5 = (char *)0x105c3aec/*ROM*/;
    }
    format_string_to_buffer_10545140(acStack_58,pcVar5,param_2,pvVar6);
    iVar3 = count_string_bytes(acStack_58);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar3 = (int)param_4 * 4;
      do {
        iVar1 = param_1 + 0x30;
        **(uint8_t **)(iVar1 + iVar3) = puVar7[-0x50];
        puVar7 = puVar7 + 1;
        *(int *)(iVar3 + iVar1) = *(int *)(iVar3 + iVar1) + 1;
        uVar2 = uVar2 + 1;
        uVar4 = count_string_bytes(acStack_58);
      } while (uVar2 < uVar4);
    }
  }
  return;
}
