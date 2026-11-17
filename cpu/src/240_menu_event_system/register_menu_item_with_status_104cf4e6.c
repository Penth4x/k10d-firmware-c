/* @k10d register_menu_item_with_status_104cf4e6 @ 0x104cf4e6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Constructs a two-byte command from a local state buffer and dispatches it to a
 *   companion object.
 * summary:
 *   The function initializes a local state structure via heap_alloc_one_byte_1045926e, then
 *   reads two 16-bit values (or a 32-bit value split into bytes) using
 *   return_global_word_104592ce and return_global_word_104592d8. It formats these values
 *   into a buffer using format_string_to_buffer_10545140 with a base address in ROM
 *   (0x105b97e4 or 0x105b9800). It then retrieves an object pointer from param_1+0x38 via
 *   menu_item_register, sends the formatted buffer to it using glyph_draw, and finally
 *   invokes a virtual method (slot 2) on that object with an argument of 1. The function
 *   cleans up the local state with heap_free_if_flagged.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_status_104cf4e6(int param_1,int param_2)

{
  ushort uVar4;
  ushort uVar5;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_80 [8];
  byte abStack_5c [83];
  uint8_t uStack_9;
  
  piVar7 = (int *)auStack_80;
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  if (param_2 == 0) {
    uVar4 = return_global_word_104592ce();
    uVar5 = return_global_word_104592ce();
    pcVar6 = (char *)0x105b9800/*ROM*/;
  }
  else {
    uVar4 = return_global_word_104592ce();
    uVar5 = return_global_word_104592ce();
    iVar1 = return_global_word_104592d8((int)&uStack_9);
    uVar2 = return_global_word_104592d8((int)&uStack_9);
    *piVar7 = iVar1 >> 8;
    piVar7[1] = uVar2 & 0xff;
    pcVar6 = (char *)0x105b97e4/*ROM*/;
  }
  format_string_to_buffer_10545140(abStack_5c,pcVar6,(void *)((int)(uint)uVar4 >> 8),(void *)(uVar5 & 0xff));
  pvVar3 = (void *)menu_item_register(*(int *)(param_1 + 0x38));
  glyph_draw(pvVar3,abStack_5c);
  (**(code **)(*(int *)((int)pvVar3 + 0xc) + 0xc))
            ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 0xc) + 8),1);
  heap_free_if_flagged(&uStack_9,2);
  return;
}
