/* @k10d init_image_buffer_pools @ 0x10485626
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes two large memory pools for image data, setting up pointers
 *   and calling initialization routines.
 * summary:
 *   The function retrieves a system object and queries it for four parameters (0xa3, 0xa2,
 *   0xa9, 0x30). It then allocates two 0x96000-byte blocks from the system heap. It
 *   initializes these blocks with a specific pattern of zeros and 0x80 bytes in 5-byte
 *   chunks. It stores the pointers and offsets in global variables (0x800102a0-0x800102e0)
 *   and calls four unknown initialization functions (clear_four_status_flags,
 *   reset_object_fields_to_defaults, call_subroutine_with_zero,
 *   set_display_layer_b_frame_10485858, call_with_global_arg). The large allocation size
 *   and pattern suggest preparation for image processing buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_image_buffer_pools(void)

{
  int iVar1;
  void *pvVar2;
  uint8_t *puVar3;
  
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  _DAT_800102bc/*SDRAM*/ = read_table_entry_field(pvVar2,0xa3);
  uRam800102c0 = read_table_entry_field(pvVar2,0xa2);
  uRam800102c4 = read_table_entry_field(pvVar2,0xa9);
  uRam800102c8 = read_table_entry_field(pvVar2,0x30);
  pvVar2 = (void *)get_system_heap();
  puRam800102e0 = (uint8_t *)mempool_get_block(pvVar2,(void *)0x96000,0);
  pvVar2 = (void *)get_system_heap();
  puVar3 = (uint8_t *)mempool_get_block(pvVar2,(void *)0x96000,0);
  iVar1 = 0xefff;
  puRam800102dc = puVar3;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0x3bff;
  do {
    *puVar3 = 0x80;
    puVar3[1] = 0x80;
    puVar3[2] = 0x80;
    puVar3[3] = 0x80;
    puVar3[4] = 0x80;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0x3bff;
  do {
    *puVar3 = 0x80;
    puVar3[1] = 0x80;
    puVar3[2] = 0x80;
    puVar3[3] = 0x80;
    puVar3[4] = 0x80;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0x77ff;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0xefff;
  puRam800102b8 = puRam800102e0;
  puVar3 = puRam800102e0;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0x3bff;
  do {
    *puVar3 = 0x80;
    puVar3[1] = 0x80;
    puVar3[2] = 0x80;
    puVar3[3] = 0x80;
    puVar3[4] = 0x80;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  iVar1 = 0x3bff;
  do {
    *puVar3 = 0x80;
    puVar3[1] = 0x80;
    puVar3[2] = 0x80;
    puVar3[3] = 0x80;
    puVar3[4] = 0x80;
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 5;
  } while (-1 < iVar1);
  uRam800102cc = 0x280;
  uRam800102ce = 0x1e0;
  puRam800102b4 = puRam800102dc;
  _DAT_800102a0/*SDRAM*/ = (uintptr_t)(puRam800102dc);
  puRam800102a4 = puRam800102dc + 0x4b000;
  _DAT_800102a8/*SDRAM*/ = (uintptr_t)(puRam800102dc + 0x5dc00);
  _DAT_800102ac/*SDRAM*/ = (uintptr_t)(puRam800102dc + 0x70800);
  puRam800102b0 = puRam800102b8;
  clear_four_status_flags(uRam800102c0);
  reset_object_fields_to_defaults(_DAT_800102bc/*SDRAM*/);
  call_subroutine_with_zero(uRam800102c0);
  set_display_layer_b_frame_10485858();
  call_with_global_arg();
  return;
}
