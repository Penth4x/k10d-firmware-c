/* @k10d initialize_object_with_pointers @ 0x1052c5f0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0xac byte object and populates it with a mix of pointers and 16-bit
 *   constants.
 * summary:
 *   The function accepts an optional pointer; if null, it allocates 0xac bytes via
 *   heap_alloc. It then writes a series of pointers to DAT_105fa* globals and specific
 *   16-bit values (e.g., 0x2083, 0x1f64) into the allocated structure. The specific role of
 *   the structure is unclear as the DAT globals are not identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_object_with_pointers(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) || (param_1 = (uint32_t *)heap_alloc((void *)0xac), param_1 != (uint32_t *)0x0)) {
    *param_1 = (uint32_t)(&DAT_105fa3d2/*ROM*/);
    param_1[1] = (uint32_t)(&DAT_105fa3e4/*ROM*/);
    param_1[2] = (uint32_t)(&DAT_105fa312/*ROM*/);
    param_1[3] = (uint32_t)(&DAT_105fa372/*ROM*/);
    *(uint16_t *)(param_1 + 4) = 0x2083;
    *(uint16_t *)((int)param_1 + 0x12) = 0x1f64;
    *(uint16_t *)(param_1 + 5) = 0x1f7d;
    *(uint16_t *)((int)param_1 + 0x16) = 0x209c;
    *(uint16_t *)(param_1 + 6) = 0x2148;
    *(uint16_t *)((int)param_1 + 0x1a) = 0x20f6;
    *(uint16_t *)(param_1 + 7) = 0x1f33;
    *(uint16_t *)((int)param_1 + 0x1e) = 0x1f0a;
    param_1[8] = (uint32_t)(&DAT_105fa0ae/*ROM*/);
    param_1[9] = (uint32_t)(&DAT_105fa0d0/*ROM*/);
    param_1[10] = (uint32_t)(&DAT_105fa0f2/*ROM*/);
    param_1[0xb] = (uint32_t)(&DAT_105fa114/*ROM*/);
    param_1[0xc] = (uint32_t)(&DAT_105fa29c/*ROM*/);
    param_1[0xd] = (uint32_t)(&DAT_105fa2ac/*ROM*/);
    param_1[0xe] = (uint32_t)(&DAT_105fa2bc/*ROM*/);
    param_1[0xf] = (uint32_t)(&DAT_105fa2c4/*ROM*/);
    param_1[0x10] = (uint32_t)(&DAT_105fa2cc/*ROM*/);
    param_1[0x11] = (uint32_t)(&DAT_105fa2d4/*ROM*/);
    param_1[0x12] = (uint32_t)(&DAT_105fa2dc/*ROM*/);
    param_1[0x13] = (uint32_t)(&DAT_105fa2e4/*ROM*/);
    param_1[0x14] = (uint32_t)(&DAT_105fa2ec/*ROM*/);
    param_1[0x15] = (uint32_t)(&DAT_105fa2f4/*ROM*/);
    param_1[0x16] = (uint32_t)(&DAT_105fa2fc/*ROM*/);
    param_1[0x17] = (uint32_t)(&DAT_105fa304/*ROM*/);
    param_1[0x18] = (uint32_t)(&DAT_105fa3f6/*ROM*/);
    param_1[0x19] = (uint32_t)(&DAT_105fa402/*ROM*/);
    param_1[0x1a] = (uint32_t)(&DAT_105fa410/*ROM*/);
    param_1[0x1b] = (uint32_t)(&DAT_105fa458/*ROM*/);
    param_1[0x1c] = (uint32_t)(&DAT_105fa4a0/*ROM*/);
    param_1[0x1d] = (uint32_t)(&DAT_105fa4a8/*ROM*/);
    param_1[0x1e] = (uint32_t)(&DAT_105fa4c0/*ROM*/);
    param_1[0x1f] = (uint32_t)(&DAT_105fa4d8/*ROM*/);
    param_1[0x20] = 0x80013670/*SDRAM*/;
    param_1[0x21] = (uint32_t)(&DAT_105fa508/*ROM*/);
    param_1[0x22] = (uint32_t)(&DAT_105fa50c/*ROM*/);
    param_1[0x23] = (uint32_t)(&DAT_105fa510/*ROM*/);
    param_1[0x24] = (uint32_t)(&DAT_105fa514/*ROM*/);
    param_1[0x25] = (uint32_t)(&DAT_105fa518/*ROM*/);
    param_1[0x26] = (uint32_t)(&DAT_105fa51c/*ROM*/);
    param_1[0x27] = (uint32_t)(&DAT_105fa520/*ROM*/);
    param_1[0x28] = (uint32_t)(&DAT_105fa542/*ROM*/);
    param_1[0x29] = (uint32_t)(&DAT_105fa564/*ROM*/);
    param_1[0x2a] = (uint32_t)(&DAT_105fa606/*ROM*/);
  }
  return;
}
