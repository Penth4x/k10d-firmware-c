/* @k10d init_font_context_struct @ 0x103fe7ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes a 0x5c-byte font context structure, configuring glyph buffers
 *   and language-specific font data.
 * summary:
 *   The function allocates a 0x5c-byte structure (or uses a provided pointer) and
 *   initializes its fields to zero. It retrieves the settings object and refreshes the
 *   working copy, then reads setting 0xa9 (likely language or font mode). It calls
 *   text_font_setup_extended to configure glyph buffers for non-Latin scripts and
 *   compute_four_offsets_and_call_helper to initialize additional font parameters. The
 *   structure contains pointers to font data and state flags for text rendering.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * init_font_context_struct(uint32_t *param_1)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint32_t *puVar6;
  uint8_t auStack_10 [8];
  
  puVar5 = auStack_10;
  puVar6 = (uint32_t *)auStack_10;
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x5c), puVar6 = (uint32_t *)puVar5,
     param_1 != (uint32_t *)0x0)) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(uint8_t *)((int)param_1 + 0x59) = 1;
    *(uint8_t *)((int)param_1 + 0x5a) = 0;
    *(uint8_t *)(param_1 + 4) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(uint16_t *)((int)param_1 + 0x1a) = 0xff;
    *(uint16_t *)(param_1 + 3) = 0;
    *(uint16_t *)((int)param_1 + 0xe) = 0;
    *(uint16_t *)(param_1 + 1) = 0;
    *(uint16_t *)((int)param_1 + 6) = 0;
    *(uint16_t *)((int)param_1 + 0x16) = 0;
    *(uint16_t *)((int)param_1 + 0x12) = 0;
    *(uint16_t *)(param_1 + 5) = 0;
    *(uint16_t *)(param_1 + 6) = 3;
    *(uint8_t *)((int)param_1 + 0x2e) = 0;
    param_1[10] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 0;
    *(uint16_t *)(param_1 + 0xb) = 0;
    iVar2 = get_or_create_singleton_object_10485138();
    pvVar3 = *(void **)(iVar2 + 0x10);
    param_1[0x14] = (uintptr_t)(pvVar3);
    settings_refresh_working_copy(pvVar3);
    uVar4 = setting_get(param_1[0x14],0xa9);
    *(char *)(param_1 + 0x16) = (char)uVar4;
    iVar2 = get_or_init_sram_object_1040b854();
    param_1[0x15] = iVar2;
    bVar1 = *(byte *)(param_1 + 0x16);
    *puVar6 = (uintptr_t)(param_1 + 0xe);
    puVar6[1] = (uintptr_t)(param_1 + 0xf);
    text_font_setup_extended(iVar2,(uint)bVar1,param_1 + 0xc,param_1 + 0xd,(int *)*puVar6,(int *)puVar6[1]);
    iVar2 = param_1[0x15];
    *puVar6 = (uintptr_t)(param_1 + 0x13);
    compute_four_offsets_and_call_helper(iVar2,param_1 + 0x10,param_1 + 0x11,param_1 + 0x12,(int *)*puVar6);
  }
  return param_1;
}
