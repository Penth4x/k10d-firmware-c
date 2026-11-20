/* @k10d write_data_via_virtual_interface @ 0x1053df1a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes data using a virtual method on an object and handles success or specific error
 *   codes.
 * summary:
 *   The function invokes a virtual method at offset 0x58 of the object in param_1, passing
 *   a data pointer, length, and calculated offset. If the call returns 0, it calls
 *   memcpy_bytes with the provided parameters. If it returns -1000, it sets a flag bit in a
 *   status word at param_1+100. Other return values are passed through as error codes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t write_data_via_virtual_interface(int param_1,uint32_t param_2,void *param_3,void *param_4,int param_5)

{
  ushort *puVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x70);
  iVar2 = (((vtbl_entry*)(param_1))[11].fn)(*(uint32_t *)(param_1 + 0x60),param_2,1,iVar4 + 4);
  if (iVar2 == 0) {
    memcpy_bytes(param_3,(void *)(iVar4 + 4 + param_5),(int)param_4);
    uVar3 = 0;
  }
  else if (iVar2 == -1000) {
    puVar1 = (ushort *)(*(int *)(param_1 + 100) + 0xe);
    *puVar1 = *puVar1 | 1;
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffb;
  }
  return uVar3;
}
