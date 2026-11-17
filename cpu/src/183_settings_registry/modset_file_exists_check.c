/* @k10d modset_file_exists_check @ 0x1048734e
 * name: verified (structural evidence: decomp + d314 emulator proof: dumper item gated on MODSET.TXT presence via check_modset_parser_status; corrects the grind auto-name allocate_and_process_buffer)
 * unit: 183_settings_registry (unit names are model-proposed)
 * purpose:
 *   Returns nonzero iff MODSET.TXT exists in the card root: deobfuscates the filename
 *   (XOR-0x29 at 0x105b2fc8) into a 0xf-byte name and does an FS directory lookup. This
 *   presence test is what makes the secret ROM/EEPROM dumper menu item appear.
 * summary:
 *   VERIFIED: decomp + d314 emulator proof: dumper item gated on MODSET.TXT presence via
 *   check_modset_parser_status; corrects the grind auto-name allocate_and_process_buffer
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t modset_file_exists_check(uint32_t param_1)

{
  void *pvVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  pvVar1 = (void *)heap_alloc_2(0xf);
  (*(code *)0x10486a2c/*ROM*/)(param_1,0x105b2fc8/*ROM*/,pvVar1,0xf);
  iVar2 = get_or_create_camera_object();
  pvVar4 = *(void **)(iVar2 + 0xc);
  cls_105ab468_new(auStack_28);
  uVar3 = call_with_offset_lock_1048101c(pvVar4,pvVar1,auStack_28);
  heap_free_2((int)pvVar1);
  cls_105ab468_delete(auStack_28,2);
  return uVar3;
}
