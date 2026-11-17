/* @k10d process_lens_update_entry @ 0x1053f27a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int process_lens_update_entry(char *param_1)

{
  int iVar1;
  uintptr_t sp;
  char acStack_24 [12];
  char *pcStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  
  iVar1 = parse_and_validate_short_token(param_1,acStack_24,(int *)&pcStack_18);
  if ((iVar1 == 0) && (iVar1 = allocate_lens_update_slot(&iStack_10), iVar1 == 0)) {
    if (acStack_24[0] == '\0') {
      iStack_14 = *(int *)(iStack_10 + 8);
    }
    else {
      iVar1 = lookup_table_entry_by_match(acStack_24,&iStack_14);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if (*(short *)(*(int *)(iStack_14 + 100) + 0xe) == 0) {
      iVar1 = 0;
      if (*pcStack_18 == '\0') {
        if (acStack_24[0] != '\0') {
          *(int *)(iStack_10 + 8) = iStack_14;
        }
      }
      else {
        iVar1 = *(int *)((uint)*(ushort *)(iStack_14 + 10) * 8 + iStack_10 + 0xc);
        if (iVar1 == 0) {
          piStack_c = (int *)0x0;
        }
        else {
          iVar1 = (*(code *)0x105385ea/*ROM*/)(iStack_14,0x16,iVar1,&piStack_c);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = (*(code *)0x1053e792/*ROM*/)(iStack_14,iStack_10,pcStack_18);
        if ((iVar1 == 0) && (piStack_c != (int *)0x0)) {
          iVar1 = decrement_lens_update_step(0x16,piStack_c);
        }
      }
    }
    else {
      iVar1 = -6;
    }
  }
  return iVar1;
}
