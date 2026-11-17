/* @k10d clear_gpio_pin_bits @ 0x1043ec28
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears specific bit fields in several 16/8-bit register words of a device structure
 *   based on a shift index.
 * summary:
 *   The function reads a shift index from param_1+0x50 and a value from param_1+0x48. It
 *   then performs a series of read-modify-write operations on fields at offsets 0x18, 0x1c,
 *   0x30, and 0x44, clearing bits determined by the shift index. It calls
 *   call_helper_on_field_0x58_1043ef36 and call_helper_on_field_0x58_1043ef48 before and
 *   after each write, likely to handle bus access or synchronization. The specific hardware
 *   role of the structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_gpio_pin_bits(void *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint32_t uVar4;
  
  **(ushort **)((int)param_1 + 0x2c) = **(ushort **)((int)param_1 + 0x2c) & 0x100;
  uVar3 = *(uint *)((int)param_1 + 0x48);
  bVar1 = (byte)*(uint32_t *)((int)param_1 + 0x50);
  uVar2 = (ushort)(0xf << (bVar1 & 0xf));
  call_helper_on_field_0x58_1043ef36(param_1);
  **(ushort **)((int)param_1 + 0x18) =
       **(ushort **)((int)param_1 + 0x18) & (uVar2 ^ 0xffff) |
       (ushort)((uVar3 & 0xf) << (bVar1 & 0xf)) & uVar2;
  call_helper_on_field_0x58_1043ef48(param_1);
  uVar4 = *(uint32_t *)((int)param_1 + 0x48);
  call_helper_on_field_0x58_1043ef36(param_1);
  **(ushort **)((int)param_1 + 0x1c) =
       **(ushort **)((int)param_1 + 0x1c) & ((ushort)(0x1101 << ((byte)uVar4 & 0xf)) ^ 0xffff);
  call_helper_on_field_0x58_1043ef48(param_1);
  uVar4 = *(uint32_t *)((int)param_1 + 0x4c);
  call_helper_on_field_0x58_1043ef36(param_1);
  **(byte **)((int)param_1 + 0x30) =
       **(byte **)((int)param_1 + 0x30) & ((byte)(3 << ((byte)uVar4 & 0xf)) ^ 0xff);
  call_helper_on_field_0x58_1043ef48(param_1);
  uVar4 = *(uint32_t *)((int)param_1 + 0x48);
  call_helper_on_field_0x58_1043ef36(param_1);
  **(ushort **)((int)param_1 + 0x44) =
       **(ushort **)((int)param_1 + 0x44) & ((ushort)(0x100 << ((byte)uVar4 & 0xf)) ^ 0xffff);
  call_helper_on_field_0x58_1043ef48(param_1);
  return;
}
