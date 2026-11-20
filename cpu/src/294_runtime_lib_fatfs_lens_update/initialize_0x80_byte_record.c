/* @k10d initialize_0x80_byte_record @ 0x10537b7c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Validates and initializes a 0x80-byte record structure from a global buffer, setting
 *   fields and calling a completion routine.
 * summary:
 *   Checks a global pointer (_DAT_80014980) for a valid record. If the first byte is 0x01,
 *   it calls compare_null_terminated_strings to process the data. Otherwise, it initializes
 *   the record structure by calling copy_null_terminated_string, copying 8 bytes via
 *   memcpy_bytes, and setting a parameter at offset 0x60. Finally, it calls
 *   run_sequential_update_steps to complete the initialization. Returns error codes
 *   0xfffffd9d, 0xfffffd9e, or 0xfffffda7 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t initialize_0x80_byte_record(void *param_1,void *param_2,uint32_t param_3,int *param_4)

{
  uint32_t uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 2;
  if (_DAT_80014980/*SDRAM*/ == 0) {
    uVar1 = 0xfffffda7;
  }
  else {
    uVar4 = 0;
    iVar5 = 0;
    do {
      pcVar3 = (char *)((char*)_DAT_80014980/*SDRAM*/ + iVar5);
      *param_4 = (int)pcVar3;
      if (*pcVar3 == '\x01') {
        iVar2 = compare_null_terminated_strings(param_1,pcVar3 + 1);
        if (iVar2 == 0) {
          return 0xfffffd9d;
        }
      }
      else if (uVar4 < uVar6) {
        uVar6 = uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x80;
    } while (uVar4 < 2);
    if (uVar6 == 2) {
      uVar1 = 0xfffffd9e;
    }
    else {
      *param_4 = (uintptr_t)((char*)_DAT_80014980/*SDRAM*/ + uVar6 * 0x80);
      copy_null_terminated_string((void *)(*param_4 + 1),param_1);
      *(short *)(*param_4 + 10) = (short)uVar6;
      memcpy_bytes((void *)(*param_4 + 0x58),param_2,8);
      *(uint32_t *)(*param_4 + 0x60) = param_3;
      uVar1 = run_sequential_update_steps((char *)(*param_4));
    }
  }
  return uVar1;
}
