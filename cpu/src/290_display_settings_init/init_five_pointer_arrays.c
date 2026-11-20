/* @k10d init_five_pointer_arrays @ 0x1052fa1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Initializes five consecutive 12-pointer arrays in SDRAM with ROM data pointers and
 *   calls a helper for each.
 * summary:
 *   The function writes 60 consecutive 4-byte values into SDRAM starting at 0x8005ac04,
 *   forming five blocks of 12 pointers each. Each block contains references to small ROM
 *   data structures (0x105fad80-0x105fae0c) and two SDRAM addresses, followed by a call to
 *   prepend_to_singly_linked_list with a unique SDRAM argument. The pattern suggests
 *   initializing a table of five similar objects or configurations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_five_pointer_arrays(void)

{
  _DAT_8005ac04/*SDRAM*/ = (uintptr_t)(&DAT_105fad80/*ROM*/);
  _DAT_8005ac08/*SDRAM*/ = (uintptr_t)(&DAT_105fad8e/*ROM*/);
  _DAT_8005ac0c/*SDRAM*/ = (uintptr_t)(&DAT_105fad9c/*ROM*/);
  _DAT_8005ac10/*SDRAM*/ = (uintptr_t)(&DAT_105fadd4/*ROM*/);
  _DAT_8005ac14/*SDRAM*/ = (uintptr_t)(&DAT_105fade2/*ROM*/);
  _DAT_8005ac18/*SDRAM*/ = (uintptr_t)(&DAT_105fadf0/*ROM*/);
  _DAT_8005ac1c/*SDRAM*/ = (uintptr_t)(&DAT_105fadfe/*ROM*/);
  _DAT_8005ac20/*SDRAM*/ = (uintptr_t)(&DAT_105fae0c/*ROM*/);
  _DAT_8005ac24/*SDRAM*/ = 0x800137d8/*SDRAM*/;
  _DAT_8005ac28/*SDRAM*/ = 0x80013848/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x800138f4/*SDRAM*/));
  _DAT_8005ac2c/*SDRAM*/ = (uintptr_t)(&DAT_105fad80/*ROM*/);
  _DAT_8005ac30/*SDRAM*/ = (uintptr_t)(&DAT_105fad8e/*ROM*/);
  _DAT_8005ac34/*SDRAM*/ = (uintptr_t)(&DAT_105fadaa/*ROM*/);
  _DAT_8005ac38/*SDRAM*/ = (uintptr_t)(&DAT_105fadd4/*ROM*/);
  _DAT_8005ac3c/*SDRAM*/ = (uintptr_t)(&DAT_105fade2/*ROM*/);
  _DAT_8005ac40/*SDRAM*/ = (uintptr_t)(&DAT_105fadf0/*ROM*/);
  _DAT_8005ac44/*SDRAM*/ = (uintptr_t)(&DAT_105fadfe/*ROM*/);
  _DAT_8005ac48/*SDRAM*/ = (uintptr_t)(&DAT_105fae0c/*ROM*/);
  _DAT_8005ac4c/*SDRAM*/ = 0x800137f4/*SDRAM*/;
  _DAT_8005ac50/*SDRAM*/ = 0x80013848/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80013904/*SDRAM*/));
  _DAT_8005ac54/*SDRAM*/ = (uintptr_t)(&DAT_105fad80/*ROM*/);
  _DAT_8005ac58/*SDRAM*/ = (uintptr_t)(&DAT_105fad8e/*ROM*/);
  _DAT_8005ac5c/*SDRAM*/ = (uintptr_t)(&DAT_105fadb8/*ROM*/);
  _DAT_8005ac60/*SDRAM*/ = (uintptr_t)(&DAT_105fadd4/*ROM*/);
  _DAT_8005ac64/*SDRAM*/ = (uintptr_t)(&DAT_105fade2/*ROM*/);
  _DAT_8005ac68/*SDRAM*/ = (uintptr_t)(&DAT_105fadf0/*ROM*/);
  _DAT_8005ac6c/*SDRAM*/ = (uintptr_t)(&DAT_105fadfe/*ROM*/);
  _DAT_8005ac70/*SDRAM*/ = (uintptr_t)(&DAT_105fae0c/*ROM*/);
  _DAT_8005ac74/*SDRAM*/ = 0x80013810/*SDRAM*/;
  _DAT_8005ac78/*SDRAM*/ = 0x80013848/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80013914/*SDRAM*/));
  _DAT_8005ac7c/*SDRAM*/ = (uintptr_t)(&DAT_105fad80/*ROM*/);
  _DAT_8005ac80/*SDRAM*/ = (uintptr_t)(&DAT_105fad8e/*ROM*/);
  _DAT_8005ac84/*SDRAM*/ = (uintptr_t)(&DAT_105fadc6/*ROM*/);
  _DAT_8005ac88/*SDRAM*/ = (uintptr_t)(&DAT_105fadd4/*ROM*/);
  _DAT_8005ac8c/*SDRAM*/ = (uintptr_t)(&DAT_105fade2/*ROM*/);
  _DAT_8005ac90/*SDRAM*/ = (uintptr_t)(&DAT_105fadf0/*ROM*/);
  _DAT_8005ac94/*SDRAM*/ = (uintptr_t)(&DAT_105fadfe/*ROM*/);
  _DAT_8005ac98/*SDRAM*/ = (uintptr_t)(&DAT_105fae0c/*ROM*/);
  _DAT_8005ac9c/*SDRAM*/ = 0x8001382c/*SDRAM*/;
  _DAT_8005aca0/*SDRAM*/ = 0x80013848/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80013924/*SDRAM*/));
  _DAT_8005aca4/*SDRAM*/ = (uintptr_t)(&DAT_105fad87/*ROM*/);
  _DAT_8005aca8/*SDRAM*/ = (uintptr_t)(&DAT_105fad95/*ROM*/);
  _DAT_8005acac/*SDRAM*/ = (uintptr_t)(&DAT_105fad9c/*ROM*/);
  _DAT_8005acb0/*SDRAM*/ = (uintptr_t)(&DAT_105fadd4/*ROM*/);
  _DAT_8005acb4/*SDRAM*/ = (uintptr_t)(&DAT_105fade9/*ROM*/);
  _DAT_8005acb8/*SDRAM*/ = (uintptr_t)(&DAT_105fadf7/*ROM*/);
  _DAT_8005acbc/*SDRAM*/ = (uintptr_t)(&DAT_105fadfe/*ROM*/);
  _DAT_8005acc0/*SDRAM*/ = (uintptr_t)(&DAT_105fae0c/*ROM*/);
  _DAT_8005acc4/*SDRAM*/ = 0x800137d8/*SDRAM*/;
  _DAT_8005acc8/*SDRAM*/ = 0x80013848/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80013934/*SDRAM*/));
  return;
}
