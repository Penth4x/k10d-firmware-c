/* @k10d dispatch_pending_flag_handlers @ 0x000d6d2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks two 8-bit flag words and calls a handler for each set bit, clearing the bit
 *   before the call.
 * summary:
 *   The function tests bits 0-7 of DAT_0003c333 and DAT_0003c332 sequentially. For each set
 *   bit, it clears that bit in the global flag word and invokes a corresponding handler
 *   function (some bits trigger two calls). No arguments are passed to the handlers. The
 *   role of the individual handlers and the meaning of the flags are not determinable from
 *   the provided pseudocode and unverified callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_pending_flag_handlers(void)

{
  if ((DAT_0003c333 & 1) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xfe;
    FUN_000d6126();
  }
  if ((DAT_0003c333 & 4) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xfb;
    branch_on_flag_and_call_two_routines();
    FUN_000d613a();
  }
  if ((DAT_0003c333 & 8) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xf7;
    dispatch_state_to_handler();
    FUN_000d6144();
  }
  if ((DAT_0003c333 & 0x10) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xef;
    dispatch_on_state_byte_000d7570();
    FUN_000d614e();
  }
  if ((DAT_0003c333 & 0x20) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xdf;
    dispatch_on_byte_flag_000d7604();
    FUN_000d6158();
  }
  if ((DAT_0003c333 & 0x40) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0xbf;
    set_bits_4_and_5_of_global_000d7654();
    FUN_000d6162();
  }
  if ((DAT_0003c333 & 0x80) != 0) {
    DAT_0003c333 = DAT_0003c333 & 0x7f;
    FUN_000d765c();
    FUN_000d616c();
  }
  if ((DAT_0003c332 & 1) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xfe;
    empty_stub_000d7674();
    FUN_000d6176();
  }
  if ((DAT_0003c332 & 2) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xfd;
    call_d5afc_with_0x89();
  }
  if ((DAT_0003c332 & 4) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xfb;
    dispatch_on_state_variable();
    call_d5afc_with_0x8a();
  }
  if ((DAT_0003c332 & 8) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xf7;
    dispatch_on_state_index_000d771a();
    call_d5afc_with_0x8b();
  }
  if ((DAT_0003c332 & 0x10) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xef;
    dispatch_on_byte_flag_000d7774();
    call_d5afc_with_0x8c();
  }
  if ((DAT_0003c332 & 0x20) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xdf;
    dispatch_on_byte_flag_000d77c2();
    FUN_000d61a8();
  }
  if ((DAT_0003c332 & 0x40) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0xbf;
    unpack_and_write_byte_pairs();
    FUN_000d61b2();
  }
  if ((DAT_0003c332 & 0x80) != 0) {
    DAT_0003c332 = DAT_0003c332 & 0x7f;
    call_d5afc_with_0x8f();
  }
  return;
}
