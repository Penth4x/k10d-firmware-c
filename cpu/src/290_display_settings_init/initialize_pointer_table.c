/* @k10d initialize_pointer_table @ 0x105305c4
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Populates a block of SDRAM globals with pointers to ROM data and SDRAM addresses.
 * summary:
 *   The function writes a series of pointers to DAT_10602xxx (ROM) and 0x80014xxx (SDRAM)
 *   into consecutive globals starting at 0x8005b040. It repeats this pattern for a second
 *   block starting at 0x8005b07c. It calls prepend_to_singly_linked_list twice with
 *   different SDRAM arguments (0x80014724 and 0x80014734). The specific role of the table
 *   or the callee is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_pointer_table(void)

{
  _DAT_8005b040/*SDRAM*/ = (uint32_t)(&DAT_10602fa0);
  _DAT_8005b044/*SDRAM*/ = (uint32_t)(&DAT_10602fae);
  _DAT_8005b048/*SDRAM*/ = (uint32_t)(&DAT_10602fb5);
  _DAT_8005b04c/*SDRAM*/ = (uint32_t)(&DAT_10602fbc);
  _DAT_8005b050/*SDRAM*/ = (uint32_t)(&DAT_10602fca);
  _DAT_8005b054/*SDRAM*/ = (uint32_t)(&DAT_10602fd8);
  _DAT_8005b058/*SDRAM*/ = (uint32_t)(&DAT_10602fe6);
  _DAT_8005b05c/*SDRAM*/ = (uint32_t)(&DAT_10602fed);
  _DAT_8005b060/*SDRAM*/ = (uint32_t)(&DAT_10602ff4);
  _DAT_8005b064/*SDRAM*/ = (uint32_t)(&DAT_10603002);
  _DAT_8005b068/*SDRAM*/ = (uint32_t)(&DAT_10603010);
  _DAT_8005b06c/*SDRAM*/ = (uint32_t)(&DAT_1060301e);
  _DAT_8005b070/*SDRAM*/ = 0x80014678/*SDRAM*/;
  _DAT_8005b074/*SDRAM*/ = 0x80014694/*SDRAM*/;
  _DAT_8005b078/*SDRAM*/ = 0x800146b0/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80014724/*SDRAM*/));
  _DAT_8005b07c/*SDRAM*/ = (uint32_t)(&DAT_10602fa0);
  _DAT_8005b080/*SDRAM*/ = (uint32_t)(&DAT_10602fae);
  _DAT_8005b084/*SDRAM*/ = (uint32_t)(&DAT_10602fb5);
  _DAT_8005b088/*SDRAM*/ = (uint32_t)(&DAT_10602fbc);
  _DAT_8005b08c/*SDRAM*/ = (uint32_t)(&DAT_10602fca);
  _DAT_8005b090/*SDRAM*/ = (uint32_t)(&DAT_10602fd8);
  _DAT_8005b094/*SDRAM*/ = (uint32_t)(&DAT_10602fe6);
  _DAT_8005b098/*SDRAM*/ = (uint32_t)(&DAT_10602fed);
  _DAT_8005b09c/*SDRAM*/ = (uint32_t)(&DAT_10602ff4);
  _DAT_8005b0a0/*SDRAM*/ = (uint32_t)(&DAT_10603002);
  _DAT_8005b0a4/*SDRAM*/ = (uint32_t)(&DAT_10603010);
  _DAT_8005b0a8/*SDRAM*/ = (uint32_t)(&DAT_1060301e);
  _DAT_8005b0ac/*SDRAM*/ = 0x80014678/*SDRAM*/;
  _DAT_8005b0b0/*SDRAM*/ = 0x80014694/*SDRAM*/;
  _DAT_8005b0b4/*SDRAM*/ = 0x800146b0/*SDRAM*/;
  prepend_to_singly_linked_list((uint32_t *)(0x80014734/*SDRAM*/));
  return;
}
