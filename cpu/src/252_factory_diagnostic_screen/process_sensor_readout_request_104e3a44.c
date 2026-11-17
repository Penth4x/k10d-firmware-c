/* @k10d process_sensor_readout_request_104e3a44 @ 0x104e3a44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Handles a sensor readout command by invoking a virtual method and populating a result
 *   structure with status and data pointers.
 * summary:
 *   The function first copies a flag and a 32-bit value from the input parameter (param_3)
 *   to the output structure (param_4). It then checks a state pointer (param_1) against a
 *   global RAM address. If the state is not the specific global, it calls
 *   call_helper_with_offset_104e3d26 and select_mode_flag_by_param to prepare a context. It
 *   invokes a virtual method (slot 5) on an object pointed to by param_1[2] with the input
 *   data. If successful, it allocates temporary objects, calls
 *   get_or_init_sram_object_1052b524 and initialize_twai_semaphore, and then extracts
 *   multiple fields (pointers and shorts) from the result object using
 *   compute_struct_array_offset and read_struct_field_by_index_1049a7dc to fill the output
 *   structure at offsets 0x2c8 through 0x2dc. It also conditionally copies six 16-bit
 *   values from a buffer using read_first_word_1045c66c and related functions. Finally, it
 *   cleans up the temporary objects and calls another virtual method (slot 6) on the
 *   original object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e3ad4) overlaps instruction at (ram,0x104e3ad2)
    */

uint32_t process_sensor_readout_request_104e3a44(int *param_1,uint32_t param_2,int param_3,int param_4)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  uint16_t uVar4;
  byte bVar5;
  uintptr_t sp;
  uint32_t *puStack_2e4;
  uint32_t uStack_2e0;
  int iStack_2d8;
  int iStack_2d4;
  int iStack_140;
  uint8_t auStack_13c [16];
  uint32_t uStack_12c;
  uint32_t uStack_128;
  int iStack_11c;
  uint32_t uStack_118;
  uint32_t uStack_c;
  
  *(ushort *)(param_4 + 0x2be) = (ushort)((*(byte *)(param_3 + 0xd) & 1) != 0);
  *(uint32_t *)(param_4 + 0x2c0) = *(uint32_t *)(param_3 + 0x10);
  *(uint16_t *)(param_4 + 0x2e4) = 0;
  if (*param_1 == iRam80010b74) {
    *(uint16_t *)(param_4 + 700) = 0x3006;
  }
  else {
    iVar1 = call_helper_with_offset_104e3d26(param_1,param_3);
    param_1[7] = iVar1;
    uVar2 = select_mode_flag_by_param(param_1,iVar1);
    if (iVar1 == 0) {
      *(short *)(param_4 + 700) = (short)uVar2;
      uStack_c = 0;
      iVar1 = *(int *)param_1[2];
      iVar1 = (**(code **)(iVar1 + 0x2c))
                        (param_1[2] + (int)*(short *)(iVar1 + 0x28),param_2,1,&uStack_c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        cls_105b572c_new(&puStack_2e4);
        uStack_2e0 = 0xffffffff;
        iStack_2d8 = param_1[8];
        iStack_2d4 = param_1[9];
        cls_105aae34_new((uint32_t *)__frv_reg_unset(4));
        uStack_128 = 0;
        uStack_12c = uStack_c;
        if (param_1[2] == 0) {
          iStack_11c = 0;
        }
        else {
          iStack_11c = param_1[2] + 4;
        }
        uStack_118 = *(uint32_t *)(param_3 + 0x10);
        puStack_2e4 = &uStack_12c;
        uVar2 = get_or_init_sram_object_1052b524();
        iVar1 = *(int *)param_1[10];
        (**(code **)(iVar1 + 0x3c))(param_1[10] + (int)*(short *)(iVar1 + 0x38),uVar2,&puStack_2e4);
        iVar1 = initialize_twai_semaphore(uVar2);
        if (iVar1 == 0) {
          uVar2 = read_struct_field_by_index_1049a7dc(&puStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2c8) = uVar2;
          uVar2 = select_mode_flag_by_param(param_1,0);
          *(short *)(param_4 + 0x2c4) = (short)uVar2;
          puVar3 = (uint32_t *)compute_struct_array_offset((int)&puStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2cc) = *puVar3;
          iVar1 = compute_struct_array_offset((int)&puStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2d0) = *(uint32_t *)(iVar1 + 4);
          puVar3 = (uint32_t *)compute_struct_array_offset((int)&puStack_2e4,2);
          *(uint32_t *)(param_4 + 0x2d4) = *puVar3;
          iVar1 = compute_struct_array_offset((int)&puStack_2e4,2);
          *(uint32_t *)(param_4 + 0x2d8) = *(uint32_t *)(iVar1 + 4);
          iVar1 = compute_struct_array_offset((int)&puStack_2e4,2);
          *(uint *)(param_4 + 0x2dc) = (uint)*(ushort *)(iVar1 + 0x24);
          if ((iStack_140 != 0) && (auStack_13c != (uint8_t *)0x0)) {
            uVar4 = read_first_word_1045c66c(auStack_13c);
            *(uint16_t *)(param_4 + 0x2aa) = uVar4;
            bVar5 = read_byte_at_offset_two(auStack_13c);
            *(ushort *)(param_4 + 0x2ac) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_three(auStack_13c);
            *(ushort *)(param_4 + 0x2ae) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_5(auStack_13c);
            *(ushort *)(param_4 + 0x2b0) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_six(auStack_13c);
            *(ushort *)(param_4 + 0x2b2) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_seven(auStack_13c);
            *(ushort *)(param_4 + 0x2b4) = (ushort)bVar5;
          }
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        cls_105aae34_delete(&uStack_12c,2);
        cls_105b572c_delete(&puStack_2e4,2);
      }
      iVar1 = *(int *)param_1[2];
      (**(code **)(iVar1 + 0x34))(param_1[2] + (int)*(short *)(iVar1 + 0x30),uStack_c);
      return uVar2;
    }
    *(short *)(param_4 + 700) = (short)uVar2;
  }
  return 1;
}
