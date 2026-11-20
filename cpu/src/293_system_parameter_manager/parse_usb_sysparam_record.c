/* @k10d parse_usb_sysparam_record @ 0x10535f3a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 16-byte system parameter block into param_1 and, if param_3 is 0x1f, validates
 *   and parses a 'USBC' header from param_2.
 * summary:
 *   The function unconditionally copies 16 bytes from a stack buffer into the memory
 *   pointed to by param_1. If param_3 equals 0x1f, it reads a 4-byte magic value and a
 *   length byte from the object pointed to by *param_2. If the magic is 0x43425355 ('USBC')
 *   and the length is less than 0x11, it calls copy_bytes_aligned to process the data,
 *   reads two more 4-byte values, stores one in param_2[4], and calls
 *   write_sysparam_record. The module context suggests this is part of the system parameter
 *   store logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void parse_usb_sysparam_record(void *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t local_24 [6];
  int iVar5;
  
  if (param_3 == 0x1f) {
    pvVar3 = (void *)*param_2;
    uVar1 = read_little_endian_word_104acb5e(pvVar3,4);
    uVar2 = (uint)*(byte *)((int)pvVar3 + 0xe);
    param_2[3] = uVar2;
    if ((uVar1 == 0x43425355) && (uVar2 < 0x11)) {
      copy_bytes_aligned((uint8_t *)(param_2[2]),(uint8_t *)((int)pvVar3 + 0xf),(uint)(uVar2),(uint)(0));
      uVar1 = read_little_endian_word_104acb5e((void *)((int)pvVar3 + 4),4);
      uVar2 = read_little_endian_word_104acb5e((void *)((int)pvVar3 + 8),4);
      param_2[4] = uVar2;
      write_sysparam_record(param_2,uVar1);
    }
  }
  iVar5 = 0x18;
  do {
    iVar4 = iVar5 + -4;
    *(uint32_t *)(iVar4 + (int)param_1) = *(uint32_t *)(&stack0xffffffd8 + iVar5);
    iVar5 = iVar4;
  } while (iVar4 != 0);
  return;
}
