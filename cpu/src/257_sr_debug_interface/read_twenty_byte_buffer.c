/* @k10d read_twenty_byte_buffer @ 0x104f2f22
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Reads a 20-byte buffer from an object and copies it to the output parameter.
 * summary:
 *   The function calls forward_three_args_to_helper_1045e82c with a length of 10 (likely 20
 *   bytes) to perform a read operation. If successful, it initializes a temporary object
 *   via cls_105a6d44_new, calls copy_fourteen_bytes_to_buffer, and then extracts 20
 *   individual bytes (indices 0-19) from the temporary object using a helper at 0x1045fe1e,
 *   storing them sequentially into param_2. It finally cleans up the temporary object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int read_twenty_byte_buffer(int param_1,uint8_t *param_2)

{
  int iVar1;
  uint8_t uVar2;
  uintptr_t sp;
  uint8_t auStack_20 [20];
  uint32_t uStack_c;
  
  uStack_c = 0;
  iVar1 = forward_three_args_to_helper_1045e82c(*(int *)(param_1 + 8),(void *)(param_1 + 4),10);
  if (iVar1 != 0) {
    eventflag_wai_flg((uint32_t *)(param_1 + 0x28),4,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x28),uStack_c);
    cls_105a6d44_new((void *)auStack_20);
    copy_fourteen_bytes_to_buffer(*(int *)(param_1 + 8),auStack_20);
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0);
    *param_2 = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,1);
    param_2[1] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,2);
    param_2[2] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,3);
    param_2[3] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,4);
    param_2[4] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,5);
    param_2[5] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,6);
    param_2[6] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,7);
    param_2[7] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,8);
    param_2[8] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,9);
    param_2[9] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,10);
    param_2[10] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0xb);
    param_2[0xb] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0xc);
    param_2[0xc] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0xd);
    param_2[0xd] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0xe);
    param_2[0xe] = uVar2;
    uVar2 = (*(code *)0x1045fe1e/*ROM*/)(auStack_20,0xf);
    param_2[0xf] = uVar2;
    cls_105a6d44_delete((void *)auStack_20,2);
  }
  return iVar1;
}
