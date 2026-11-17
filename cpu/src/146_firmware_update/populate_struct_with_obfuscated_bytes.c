/* @k10d populate_struct_with_obfuscated_bytes @ 0x10467b06
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Fills a structure with values from global state and writes XOR-obfuscated bytes from
 *   static tables.
 * summary:
 *   The function copies fields from global state (via get_or_create_camera_object,
 *   get_sensor_singleton) and calls read_table_entry_field with arguments 0x7f and 0x8a to
 *   retrieve values into the structure. It calls format_string_to_buffer_10545140 to
 *   process data into a local buffer, then writes 12 bytes from three static tables (XORed
 *   with 0xb4) into the structure at offsets 0x264-0x28c. The specific role of the
 *   structure or the data is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_struct_with_obfuscated_bytes(void *param_1,uint32_t param_2,uint32_t param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t uStack_c;
  uint8_t uStack_b;
  uint8_t uStack_a;
  
  iVar1 = get_or_create_camera_object();
  *(uint32_t *)((int)param_1 + 0x248) = *(uint32_t *)(iVar1 + 0xc);
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  uVar3 = read_table_entry_field(pvVar2,0x7f);
  *(uint32_t *)((int)param_1 + 0x238) = uVar3;
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  uVar3 = read_table_entry_field(pvVar2,0x8a);
  *(uint32_t *)((int)param_1 + 0x23c) = uVar3;
  iVar1 = get_sensor_singleton();
  *(uint32_t *)((int)param_1 + 0x24c) = *(uint32_t *)(iVar1 + 4);
  *(uint32_t *)((int)param_1 + 0x25c) = 0;
  pvVar2 = (void *)get_kernel_object_id((int)param_1 + 0x204);
  format_string_to_buffer_10545140(&uStack_c,(void *)&DAT_105a8068/*ROM*/,pvVar2,param_4);
  iVar4 = 3;
  iVar1 = 0;
  do {
    *(byte *)((int)param_1 + iVar1 + 0x264) = (&DAT_105a7fd8/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x274) = (&DAT_105a7fe8/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x284) = (&DAT_105a7ff8/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x265) = (&DAT_105a7fd9/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x275) = (&DAT_105a7fe9/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x285) = (&DAT_105a7ff9/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x266) = (&DAT_105a7fda/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x276) = (&DAT_105a7fea/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x286) = (&DAT_105a7ffa/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x267) = (&DAT_105a7fdb/*ROM*/)[iVar1] ^ 0xb4;
    *(byte *)((int)param_1 + iVar1 + 0x277) = (&DAT_105a7feb/*ROM*/)[iVar1] ^ 0xb4;
    iVar4 = iVar4 + -1;
    *(byte *)((int)param_1 + iVar1 + 0x287) = (&DAT_105a7ffb/*ROM*/)[iVar1] ^ 0xb4;
    iVar1 = iVar1 + 4;
  } while (-1 < iVar4);
  *(uint8_t *)((int)param_1 + 0x26a) = uStack_c;
  *(uint8_t *)((int)param_1 + 0x27a) = uStack_c;
  *(uint8_t *)((int)param_1 + 0x28a) = uStack_c;
  *(uint8_t *)((int)param_1 + 0x26b) = uStack_b;
  *(uint8_t *)((int)param_1 + 0x27b) = uStack_b;
  *(uint8_t *)((int)param_1 + 0x28b) = uStack_b;
  *(uint8_t *)((int)param_1 + 0x26c) = uStack_a;
  *(uint8_t *)((int)param_1 + 0x27c) = uStack_a;
  *(uint8_t *)((int)param_1 + 0x28c) = uStack_a;
  return;
}
