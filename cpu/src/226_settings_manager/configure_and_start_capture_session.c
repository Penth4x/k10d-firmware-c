/* @k10d configure_and_start_capture_session @ 0x104c0234
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a capture context object with parameters from a descriptor and triggers the
 *   start sequence via helper calls.
 * summary:
 *   The function checks a flag at offset 0xc in param_3; if clear, it calls
 *   init_buffer_with_size_0x10000 to obtain a handle. It then populates fields in the
 *   object at param_1 (offsets 0x30, 0x230-0x23c, 0x3c, 0x234) using values from param_3
 *   and param_4. It calls invoke_object_method_and_check_flag_104bf71e and
 *   invoke_object_method_and_check_flag_104bf9c0 to initiate the process, with a branch for
 *   param_2 == 0 vs non-zero that calls set_pointer_and_clear_flag or
 *   invoke_virtual_method_on_object_104bfa34 respectively. Finally, it calls
 *   init_object_with_two_helpers_104c0426 and returns a status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_and_start_capture_session(int param_1,int param_2,uint32_t *param_3,int param_4,uint32_t param_5)

{
  int iVar1;
  char cVar3;
  int iVar2;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  uint32_t uVar7;
  
  if (*(char *)(param_3 + 0xc) == '\0') {
    iVar1 = init_buffer_with_size_0x10000(param_1);
    if (iVar1 == 0) {
      *(uint8_t *)(param_1 + 0x30) = 1;
    }
    else {
      *(uint8_t *)(param_1 + 0x30) = 0;
      cVar3 = read_byte_at_offset_104c2842(param_3,param_4);
      if (cVar3 == '\0') {
        invoke_virtual_slot_two_104bf5b6(__frv_reg_unset(4));
      }
      else {
        store_value_at_two_offsets(param_1,*param_3);
        iVar1 = param_1 + 0x230;
        *(uint32_t *)(param_1 + 0x23c) = *(uint32_t *)(param_1 + 0x34);
        write_two_words_to_struct_104c1ff4(param_1,*(uint16_t *)(param_3 + 1),*(uint16_t *)((int)param_3 + 6));
        if ((uint16_t *)(param_1 + 0x238) != (uint16_t *)(param_1 + 0x44)) {
          *(uint16_t *)(param_1 + 0x238) = *(uint16_t *)(param_1 + 0x44);
          *(uint16_t *)(param_1 + 0x23a) = *(uint16_t *)(param_1 + 0x46);
        }
        uVar7 = param_3[2];
        *(uint32_t *)(param_1 + 0x3c) = uVar7;
        *(uint32_t *)(param_1 + 0x234) = uVar7;
        iVar2 = invoke_object_method_and_check_flag_104bf71e(param_1,iVar1);
        if (iVar2 != 0) {
          *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
          piVar5 = (int *)(param_1 + 0x74);
          *piVar5 = iVar1;
          *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
          *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
          *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
          *(uint32_t *)(param_1 + 0x224) = 0;
          bVar4 = invoke_object_method_and_check_flag_104bf9c0(param_1,piVar5);
          uVar6 = 0;
          if (bVar4) {
            *(int *)(param_1 + 0x40) = param_4;
            *(uint32_t *)(param_1 + 0x22c) = param_5;
            if (param_2 == 0) {
              *piVar5 = iVar1;
              *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
              *(uint32_t *)(param_1 + 0x7c) = *(uint32_t *)(param_1 + 0x22c);
              *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
              *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
              *(uint32_t *)(param_1 + 0x224) = 0;
              bVar4 = invoke_object_method_and_check_flag_104bf9c0(param_1,piVar5);
              uVar6 = (uint)bVar4;
            }
            else {
              set_pointer_and_clear_flag((int *)(param_1 + 4),(void *)param_2);
              *piVar5 = iVar1;
              *(uint32_t *)(param_1 + 0x78) = *(uint32_t *)(param_1 + 0x40);
              *(uint32_t *)(param_1 + 0x7c) = *(uint32_t *)(param_1 + 0x22c);
              *(uint32_t *)(param_1 + 0x80) = *(uint32_t *)(param_1 + 0x8c4);
              *(uint32_t *)(param_1 + 0x84) = *(uint32_t *)(param_1 + 0x8c8);
              *(uint32_t *)(param_1 + 0x224) = 0;
              iVar1 = invoke_virtual_method_on_object_104bfa34(param_1,param_1,(int)piVar5);
              uVar6 = 0;
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
          init_object_with_two_helpers_104c0426(param_1);
          return uVar6;
        }
        invoke_virtual_slot_two_104bf5b6(__frv_reg_unset(4));
      }
    }
  }
  else {
    *(uint8_t *)(param_1 + 0x30) = 1;
  }
  return 0;
}
