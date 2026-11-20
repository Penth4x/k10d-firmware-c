/* @k10d FUN_000dbc14 @ 0x000dbc14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dbc14(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  
  sVar2 = _DAT_0003c812;
  sVar1 = _DAT_0003c810;
  if (1 < _DAT_0003c884) {
    _DAT_0003c810 = (short)(((int)_DAT_0003c810 + (int)_DAT_0003c886) / 2);
    _DAT_0003c812 = (short)(((int)_DAT_0003c812 + (int)_DAT_0003c888) / 2);
    uVar3 = 1;
    if (1 < _DAT_0003c884) {
      do {
        update_two_axis_pid_loops();
        uVar3 = uVar3 + 1;
      } while (uVar3 < _DAT_0003c884);
    }
  }
  _DAT_0003c810 = sVar1;
  _DAT_0003c812 = sVar2;
  update_two_axis_pid_loops();
  _DAT_0003c886 = _DAT_0003c810;
  _DAT_0003c888 = _DAT_0003c812;
  return;
}
