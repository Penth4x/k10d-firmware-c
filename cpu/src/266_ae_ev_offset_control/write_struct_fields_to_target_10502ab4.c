/* @k10d write_struct_fields_to_target_10502ab4 @ 0x10502ab4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_struct_fields_to_target_10502ab4(uint32_t param_1,int param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = param_2 + 0xc;
  (*(code *)0x10454ada/*ROM*/)
            (param_2,0x3d3d,
             *param_3 | param_3[1] | param_3[2] | param_3[3] | param_3[4] | param_3[5]);
  (*(code *)0x1045582e/*ROM*/)(iVar1,param_3[0x11]);
  (*(code *)0x1045598c/*ROM*/)(iVar1,param_3[6]);
  (*(code *)0x1045583c/*ROM*/)(iVar1,param_3[0x12]);
  (*(code *)0x1045599a/*ROM*/)(iVar1,param_3[7]);
  (*(code *)0x1045584a/*ROM*/)(iVar1,param_3[0x13]);
  (*(code *)0x104559a8/*ROM*/)(iVar1,param_3[8]);
  (*(code *)0x10455858/*ROM*/)(iVar1,param_3[0x14]);
  (*(code *)0x104559b6/*ROM*/)(iVar1,param_3[9]);
  (*(code *)0x10455866/*ROM*/)(iVar1,param_3[0x15]);
  (*(code *)0x104559c4/*ROM*/)(iVar1,param_3[10]);
  (*(code *)0x10455874/*ROM*/)(iVar1,param_3[0x16]);
  (*(code *)0x104559d2/*ROM*/)(iVar1,param_3[0xb]);
  (*(code *)0x10455884/*ROM*/)(iVar1,param_3[0x17]);
  (*(code *)0x104559e2/*ROM*/)(iVar1,param_3[0xc]);
  (*(code *)0x10455894/*ROM*/)(iVar1,param_3[0x18]);
  (*(code *)0x104559f2/*ROM*/)(iVar1,param_3[0xd]);
  (*(code *)0x104558a4/*ROM*/)(iVar1,param_3[0x19]);
  (*(code *)0x10455a02/*ROM*/)(iVar1,param_3[0xe]);
  (*(code *)0x104558b4/*ROM*/)(iVar1,param_3[0x1a]);
  (*(code *)0x10455a12/*ROM*/)(iVar1,param_3[0xf]);
  (*(code *)0x104558c4/*ROM*/)(iVar1,param_3[0x1b]);
  (*(code *)0x10455a22/*ROM*/)(iVar1,param_3[0x10]);
  (*(code *)0x10455aea/*ROM*/)(iVar1,param_3[0x1d]);
  (*(code *)0x10455b04/*ROM*/)(iVar1,param_3[0x1c]);
  (*(code *)0x10455b1e/*ROM*/)(iVar1,param_3[0x1f]);
  (*(code *)0x10455b3c/*ROM*/)(iVar1,param_3[0x1e]);
  (*(code *)0x10455b5a/*ROM*/)(iVar1,param_3[0x21]);
  (*(code *)0x10455b80/*ROM*/)(iVar1,param_3[0x20]);
  (*(code *)0x10455ba6/*ROM*/)(iVar1,param_3[0x22]);
  (*(code *)0x10455bde/*ROM*/)(iVar1,param_3[0x24]);
  (*(code *)0x10455bc0/*ROM*/)(iVar1,param_3[0x23]);
  (*(code *)0x10455bf4/*ROM*/)(iVar1,param_3[0x25]);
  (*(code *)0x10455cde/*ROM*/)(iVar1,param_3[0x26]);
  (*(code *)0x10455d0e/*ROM*/)(iVar1,param_3[0x28]);
  (*(code *)0x10455d2a/*ROM*/)(iVar1,param_3[0x28]);
  (*(code *)0x10455cf4/*ROM*/)(iVar1,param_3[0x27]);
  (*(code *)0x10455d4a/*ROM*/)(iVar1,param_3[0x29]);
  (*(code *)0x10455d6a/*ROM*/)(iVar1,param_3[0x29]);
  (*(code *)0x10455e92/*ROM*/)(iVar1,param_3[0x2a]);
  (*(code *)0x10455ec6/*ROM*/)(iVar1,param_3[0x2c]);
  (*(code *)0x10455eac/*ROM*/)(iVar1,param_3[0x2b]);
  (*(code *)0x10455ee0/*ROM*/)(iVar1,param_3[0x2d]);
  (*(code *)0x10455c0e/*ROM*/)(iVar1,param_3[0x2e]);
  (*(code *)0x10455c46/*ROM*/)(iVar1,param_3[0x2f]);
  (*(code *)0x10455c76/*ROM*/)(iVar1,param_3[0x30]);
  (*(code *)0x10455cae/*ROM*/)(iVar1,param_3[0x31]);
  (*(code *)0x10455c28/*ROM*/)(iVar1,param_3[0x32]);
  (*(code *)0x10455c5c/*ROM*/)(iVar1,param_3[0x33]);
  (*(code *)0x10455c90/*ROM*/)(iVar1,param_3[0x34]);
  (*(code *)0x10455cc4/*ROM*/)(iVar1,param_3[0x35]);
  (*(code *)0x10455d8e/*ROM*/)(iVar1,param_3[0x36]);
  (*(code *)0x10455d9a/*ROM*/)(iVar1,param_3[0x37]);
  (*(code *)0x10455da6/*ROM*/)(iVar1,param_3[0x38]);
  (*(code *)0x10455db2/*ROM*/)(iVar1,param_3[0x39]);
  (*(code *)0x10455dbe/*ROM*/)(iVar1,param_3[0x3a]);
  (*(code *)0x10455dca/*ROM*/)(iVar1,param_3[0x3b]);
  (*(code *)0x10455dd6/*ROM*/)(iVar1,param_3[0x3c]);
  (*(code *)0x10455de2/*ROM*/)(iVar1,param_3[0x3d]);
  (*(code *)0x10455dee/*ROM*/)(iVar1,param_3[0x3e]);
  (*(code *)0x10455dfa/*ROM*/)(iVar1,param_3[0x3f]);
  return;
}
