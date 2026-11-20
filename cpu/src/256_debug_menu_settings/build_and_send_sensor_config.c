/* @k10d build_and_send_sensor_config @ 0x104f1f5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Constructs a 20-byte configuration packet from two object instances and passes it to a
 *   transmission function.
 * summary:
 *   The function instantiates two objects (cls_105a6abc and cls_105a6cfc) and populates a
 *   local 20-byte buffer with specific fields extracted from them via virtual method calls
 *   (slots 2, 3, 4 of the first and slots 1, 2, 3 of the second). It then calls
 *   dispatch_rtos_call_with_conditional_args with this buffer and a parameter, likely to
 *   send the configuration to a peripheral or companion chip. The objects are destroyed
 *   before returning the result of the transmission call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_send_sensor_config(int param_1,uint param_2)

{
  uint32_t uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint32_t uVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_a4 [20];
  cls_105a6abc acStack_68 [5];
  cls_105a6cfc acStack_54 [19];
  
  puVar9 = auStack_a4;
  cls_105a6abc_new(acStack_68);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_68);
  uVar1 = get_setting_0xb2(param_1);
  uVar2 = extract_bitfield_from_byte_array(acStack_68,0x10);
  iVar3 = extract_bitfield_from_byte_array(acStack_68,0x12);
  iVar4 = extract_bitfield_from_byte_array(acStack_68,0x13);
  cls_105a6cfc_new(acStack_54);
  copy_0x45_byte_block(*(int *)(param_1 + 8),acStack_54);
  iVar5 = extract_field_from_struct_1045fc62(acStack_54,0x29);
  iVar6 = extract_field_from_struct_1045fc62(acStack_54,1);
  iVar7 = extract_field_from_struct_1045fc62(acStack_54,8);
  uVar8 = get_or_init_heap_block();
  puVar9[3] = (char)iVar3;
  puVar9[7] = (char)iVar5;
  puVar9[0xb] = (char)iVar6;
  *(short *)(puVar9 + 0xe) = (short)iVar7;
  puVar9[0x13] = (char)iVar4;
  uVar1 = dispatch_rtos_call_with_conditional_args(uVar8,param_2,uVar1,uVar2 & 0xff,puVar9[3],puVar9[7],puVar9[0xb],
                       *(uint16_t *)(puVar9 + 0xe),puVar9[0x13]);
  cls_105a6cfc_delete(acStack_54,2);
  cls_105a6abc_delete(acStack_68,2);
  return uVar1;
}
