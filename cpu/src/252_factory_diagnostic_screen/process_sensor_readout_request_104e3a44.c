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
  uint8_t *puVar6;
  uintptr_t sp;
  cls_105b572c cStack_2e4;
  cls_105aae34 cStack_12c;
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
      iVar1 = (((vtbl_entry*)(iVar1))[5].fn)
                        (param_1[2] + (int)((vtbl_entry*)(iVar1))[5].adj,param_2,1,&uStack_c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        cls_105b572c_new(&cStack_2e4);
        cStack_2e4.field_0x4 = 0xffffffff;
        cStack_2e4.field_0xc = param_1[8];
        cStack_2e4.field_0x10 = param_1[9];
        cls_105aae34_new(&cStack_12c);
        cStack_12c.field_0x4 = 0;
        cStack_12c.field_0x0 = uStack_c;
        if (param_1[2] == 0) {
          cStack_12c.field_0x10 = 0;
        }
        else {
          cStack_12c.field_0x10 = param_1[2] + 4;
        }
        cStack_12c.field_0x14 = *(uint32_t *)(param_3 + 0x10);
        cStack_2e4.field_0x0 = (uint32_t)(&cStack_12c);
        uVar2 = get_or_init_sram_object_1052b524();
        iVar1 = *(int *)param_1[10];
        (((vtbl_entry*)(iVar1))[7].fn)(param_1[10] + (int)((vtbl_entry*)(iVar1))[7].adj,uVar2,&cStack_2e4);
        iVar1 = initialize_twai_semaphore(uVar2);
        if (iVar1 == 0) {
          uVar2 = read_struct_field_by_index_1049a7dc(&cStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2c8) = uVar2;
          uVar2 = select_mode_flag_by_param(param_1,0);
          *(short *)(param_4 + 0x2c4) = (short)uVar2;
          puVar3 = (uint32_t *)compute_struct_array_offset((int)&cStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2cc) = *puVar3;
          iVar1 = compute_struct_array_offset((int)&cStack_2e4,0);
          *(uint32_t *)(param_4 + 0x2d0) = *(uint32_t *)(iVar1 + 4);
          puVar3 = (uint32_t *)compute_struct_array_offset((int)&cStack_2e4,2);
          *(uint32_t *)(param_4 + 0x2d4) = *puVar3;
          iVar1 = compute_struct_array_offset((int)&cStack_2e4,2);
          *(uint32_t *)(param_4 + 0x2d8) = *(uint32_t *)(iVar1 + 4);
          iVar1 = compute_struct_array_offset((int)&cStack_2e4,2);
          *(uint *)(param_4 + 0x2dc) = (uint)*(ushort *)(iVar1 + 0x24);
          if ((((uint32_t)(*(uint64_t *)&cStack_2e4 >> 3360)) != 0) &&
             (puVar6 = &cStack_2e4.field_0x1a8, puVar6 != (uint8_t *)0x0)) {
            uVar4 = read_first_word_1045c66c((void*)(puVar6));
            *(uint16_t *)(param_4 + 0x2aa) = uVar4;
            bVar5 = read_byte_at_offset_two(puVar6);
            *(ushort *)(param_4 + 0x2ac) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_three(puVar6);
            *(ushort *)(param_4 + 0x2ae) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_5(puVar6);
            *(ushort *)(param_4 + 0x2b0) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_six(puVar6);
            *(ushort *)(param_4 + 0x2b2) = (ushort)bVar5;
            bVar5 = read_byte_at_offset_seven(puVar6);
            *(ushort *)(param_4 + 0x2b4) = (ushort)bVar5;
          }
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        cls_105aae34_delete(&cStack_12c,2);
        cls_105b572c_delete(&cStack_2e4,2);
      }
      iVar1 = *(int *)param_1[2];
      (((vtbl_entry*)(iVar1))[6].fn)(param_1[2] + (int)((vtbl_entry*)(iVar1))[6].adj,uStack_c);
      return uVar2;
    }
    *(short *)(param_4 + 700) = (short)uVar2;
  }
  return 1;
}
