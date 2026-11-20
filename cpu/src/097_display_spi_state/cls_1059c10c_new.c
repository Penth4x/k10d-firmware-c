/* @k10d cls_1059c10c_new @ 0x10412a46
 * name: verified (structural evidence: heap_alloc(0x15d4) when NULL; stores vtable 0x1059c10c; returns param_1)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059c10c (vtable 0x1059c10c, 0x15d4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x15d4) when NULL; stores vtable 0x1059c10c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1059c10c_new(uint32_t *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x15d4), param_1 != (uint32_t *)0x0)) {
    cls_1059e128_new(param_1);
    cls_1059e478_new(param_1 + 0x10);
    cls_1059e408_new(param_1 + 0x11);
    *param_1 = 0x1059c10c/*ROM*/;
    param_1[1] = 0x1059c1cc/*ROM*/;
    param_1[6] = 0x1059c1ec/*ROM*/;
    param_1[0xb] = 0x1059c21c/*ROM*/;
    param_1[0xc] = 0x1059c234/*ROM*/;
    param_1[0xd] = 0x1059c254/*ROM*/;
    param_1[0x10] = 0x1059c294/*ROM*/;
    param_1[0x11] = 0x1059c2ac/*ROM*/;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    cls_105c2050_new(param_1 + 0x18);
    param_1[0x1f] = 0;
    *(uint8_t *)(param_1 + 0x20) = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(uint8_t *)(param_1 + 0x24) = 0;
    *(uint8_t *)((int)param_1 + 0x91) = 0;
    *(uint8_t *)((int)param_1 + 0x92) = 0;
    *(uint8_t *)((int)param_1 + 0x93) = 0;
    *(uint8_t *)(param_1 + 0x25) = 0;
    param_1[0x26] = 0;
    init_0x142_byte_buffer(param_1 + 0x27);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x1de));
    init_0x142_byte_buffer(param_1 + 200);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x462));
    init_0x142_byte_buffer(param_1 + 0x169);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x6e6));
    init_0x142_byte_buffer(param_1 + 0x20a);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x96a));
    init_0x142_byte_buffer(param_1 + 0x2ab);
    init_0x142_byte_buffer((void *)((int)param_1 + 0xbee));
    init_0x142_byte_buffer(param_1 + 0x34c);
    init_0x142_byte_buffer((void *)((int)param_1 + 0xe72));
    init_0x142_byte_buffer(param_1 + 0x3ed);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x10f6));
    init_0x142_byte_buffer(param_1 + 0x48e);
    init_0x142_byte_buffer((void *)((int)param_1 + 0x137a));
    cls_105d54e0_new(param_1 + 0x52f);
    param_1[0x538] = 0;
    param_1[0x539] = 0;
    param_1[0x53a] = 0;
    param_1[0x53b] = 0;
    param_1[0x53c] = 0;
    *(uint8_t *)(param_1 + 0x53d) = 0;
    param_1[0x53e] = 0;
    *(uint8_t *)(param_1 + 0x53f) = 0;
    *(uint8_t *)((int)param_1 + 0x14fd) = 0;
    param_1[0x540] = 0;
    param_1[0x541] = 0;
    param_1[0x542] = 0;
    *(uint8_t *)(param_1 + 0x543) = 0;
    *(uint8_t *)((int)param_1 + 0x150d) = 0;
    *(uint8_t *)((int)param_1 + 0x150e) = 0;
    *(uint8_t *)((int)param_1 + 0x150f) = 0;
    *(uint8_t *)(param_1 + 0x544) = 0;
    param_1[0x545] = 0;
    param_1[0x546] = 0;
    *(uint8_t *)(param_1 + 0x547) = 0;
    *(uint8_t *)((int)param_1 + 0x151d) = 0;
    *(uint8_t *)((int)param_1 + 0x151e) = 0;
    *(uint8_t *)((int)param_1 + 0x151f) = 0;
    *(uint8_t *)(param_1 + 0x548) = 0;
    *(uint8_t *)((int)param_1 + 0x1521) = 0;
    *(uint8_t *)((int)param_1 + 0x1522) = 0;
    param_1[0x549] = 0;
    param_1[0x54a] = 0;
    param_1[0x54b] = 0;
    param_1[0x54c] = 0;
    *(uint8_t *)(param_1 + 0x54d) = 0;
    *(uint8_t *)((int)param_1 + 0x1535) = 0;
    cls_105a2af8_new(param_1 + 0x54e);
    cls_105a2af8_new(param_1 + 0x550);
    cls_105a2af8_new(param_1 + 0x552);
    cls_105a2be0_new(param_1 + 0x554);
    cls_105a2be0_new(param_1 + 0x556);
    param_1[0x558] = 0;
    param_1[0x559] = 0;
    param_1[0x55a] = 0;
    param_1[0x55b] = 0;
    *(uint8_t *)(param_1 + 0x55c) = 0;
    *(uint8_t *)((int)param_1 + 0x1571) = 0;
    *(uint16_t *)((int)param_1 + 0x1572) = 0;
    *(uint16_t *)(param_1 + 0x55d) = 0;
    *(uint8_t *)((int)param_1 + 0x1576) = 0;
    param_1[0x55e] = 1000;
    param_1[0x55f] = 0x2000;
    *(uint16_t *)(param_1 + 0x560) = 0x200;
    *(uint8_t *)((int)param_1 + 0x1582) = 0;
    param_1[0x561] = 0;
    get_lens_fw_update_status((int)param_1 + 0x1588, 9, 8, (code *)alloc_and_zero_small_struct_1041a71a);
    param_1[0x574] = 100;
    iVar3 = 2;
    iVar2 = 0;
    do {
      puVar1 = (uint32_t *)((int)param_1 + iVar2 + 0x1588);
      *puVar1 = 0;
      *(uint8_t *)(puVar1 + 1) = 0;
      *(uint8_t *)((int)puVar1 + 5) = 0;
      puVar1 = (uint32_t *)((int)param_1 + iVar2 + 0x1590);
      *puVar1 = 0;
      *(uint8_t *)(puVar1 + 1) = 0;
      *(uint8_t *)((int)puVar1 + 5) = 0;
      puVar1 = (uint32_t *)((int)param_1 + iVar2 + 0x1598);
      *puVar1 = 0;
      *(uint8_t *)(puVar1 + 1) = 0;
      *(uint8_t *)((int)puVar1 + 5) = 0;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x18;
    } while (-1 < iVar3);
  }
  return param_1;
}
