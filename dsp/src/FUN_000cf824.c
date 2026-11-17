/* @k10d FUN_000cf824 @ 0x000cf824
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t FUN_000cf824(void)

{
  uint16_t uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_30;
  uint uStack_24;
  int iStack_20;
  
  uVar1 = _DAT_0003cf2e;
  uVar5 = 0;
  if ((DAT_0003cf0e & 0xf) == 0) {
    if (_DAT_0003f482 == 0) {
      uVar6 = (uint)DAT_0003f23c;
    }
    else {
      uVar6 = (uint)_DAT_0003f482;
    }
  }
  else {
    uVar6 = (uint)*(byte *)(DAT_0003cf0c + 0x3f238);
    if (*(byte *)(DAT_0003cf0d + 0x3f238) < uVar6) {
      uVar6 = (uint)*(byte *)(DAT_0003cf0d + 0x3f238);
    }
  }
  uStack_24 = 0x3ff - _DAT_0003c010;
  if ((DAT_0003ce62 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)DAT_0003f4b4;
  }
  uVar6 = uVar6 >> 1;
  iStack_20 = DAT_0003f484 + uVar6 + uVar3;
  if ((DAT_0003cf0e & 0x20) == 0) {
    uVar3 = 0x90;
  }
  else {
    uVar3 = 0xb0;
  }
  DAT_0003cf0e = DAT_0003cf0e & 0xdf | 0x10;
  _DAT_0003cf2e = _DAT_0003cf2c << 7;
  update_timer_counter_and_flags(__frv_reg_unset(4));
  uStack_30 = 0xffffffff;
  do {
    uStack_24 = uStack_24 >> 1;
    dispatch_param_to_callees(0x3ff - (uStack_24 + iStack_20));
    sVar2 = _DAT_0003cfc8;
    if ((DAT_00000005 & 0x80) == 0) {
      return 0;
    }
    if ((DAT_0003cf0e & 0x20) != 0) {
      return 0;
    }
    if (3 < uVar5) {
      return 0;
    }
    if ((DAT_0003ce06 & 8) == 0) {
      if ((DAT_0003cf0e & 0x80) != 0) {
        return 0;
      }
      if (((DAT_0003cf0e & 0x40) != 0) && (uVar5 != 0)) {
        return 0;
      }
      if (((DAT_0003ce06 & 4) != 0) && ((DAT_0003f286 & 0xf) <= uVar5)) {
        return 0;
      }
      if ((((2 < uVar5) && ((DAT_0003ce01 & 0x20) != 0)) && (DAT_0003f2ac != 0)) &&
         (((_DAT_0003cfc8 == 0 && ((DAT_0003ce04 & 8) == 0)) && ((DAT_0003ce06 & 0x10) == 0)))) {
        _DAT_0003cfc8 = (ushort)DAT_0003f2ac;
        _DAT_0003cf2a = _DAT_0003cf2a + (ushort)DAT_0003f2ac;
        DAT_0003cf0e = DAT_0003cf0e & 0xcf;
        _DAT_0003cf2e = uVar1;
        compute_adjusted_value_000d0770(uVar1);
        return 1;
      }
      if ((DAT_0003f285 & 0xf) <= uVar5) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    uStack_30 = uStack_30 + 1;
    if (_DAT_0003cfc8 == 0) {
      _DAT_0003cfc8 = 0;
      uVar4 = uStack_30;
      if (DAT_0003cfc7 == '\0') {
        uVar4 = uVar5;
      }
      update_timer_counter_and_flags(uVar4 | uVar3);
    }
    _DAT_0003cfa0 = _DAT_0003cfa0 & _DAT_0003cf00;
    uVar6 = uVar6 >> 1;
    iStack_20 = DAT_0003f484 + uVar6 + iStack_20;
    _DAT_0003cfc8 = sVar2;
  } while( true );
}
