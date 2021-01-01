/* Wolfenstein 3D Source Code
 * Copyright (C) 1993-1996 id Software, Inc.
 *
 * This file is part of Wolfenstein 3D.
 *
 * Wolfenstein 3D is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * Wolfenstein 3D is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * As an addendum, you can further use the Wolfenstein 3D Source Code under
 * the terms of the limited use software license agreement for Wolfenstein 3D.
 * See id-wolf3d.txt for these terms.
 */

// New file used for preparing and converting pointers to states

#include "wl_def.h"

#ifdef REFKEEN_VER_SODAC14
REFKEEN_NS_B

// List of all states
extern statetype s_player;
extern statetype s_attack;
extern statetype s_rocket;
extern statetype s_smoke1;
extern statetype s_smoke2;
extern statetype s_smoke3;
extern statetype s_smoke4;
extern statetype s_boom1;
extern statetype s_boom2;
extern statetype s_boom3;
extern statetype s_hrocket;
extern statetype s_hsmoke1;
extern statetype s_hsmoke2;
extern statetype s_hsmoke3;
extern statetype s_hsmoke4;
extern statetype s_hboom1;
extern statetype s_hboom2;
extern statetype s_hboom3;
extern statetype s_grdstand;
extern statetype s_grdpath1;
extern statetype s_grdpath1s;
extern statetype s_grdpath2;
extern statetype s_grdpath3;
extern statetype s_grdpath3s;
extern statetype s_grdpath4;
extern statetype s_grdpain;
extern statetype s_grdpain1;
extern statetype s_grdshoot1;
extern statetype s_grdshoot2;
extern statetype s_grdshoot3;
extern statetype s_grdchase1;
extern statetype s_grdchase1s;
extern statetype s_grdchase2;
extern statetype s_grdchase3;
extern statetype s_grdchase3s;
extern statetype s_grdchase4;
extern statetype s_grddie1;
extern statetype s_grddie2;
extern statetype s_grddie3;
extern statetype s_grddie4;
extern statetype s_dogpath1;
extern statetype s_dogpath1s;
extern statetype s_dogpath2;
extern statetype s_dogpath3;
extern statetype s_dogpath3s;
extern statetype s_dogpath4;
extern statetype s_dogjump1;
extern statetype s_dogjump2;
extern statetype s_dogjump3;
extern statetype s_dogjump4;
extern statetype s_dogjump5;
extern statetype s_dogchase1;
extern statetype s_dogchase1s;
extern statetype s_dogchase2;
extern statetype s_dogchase3;
extern statetype s_dogchase3s;
extern statetype s_dogchase4;
extern statetype s_dogdie1;
extern statetype s_dogdie2;
extern statetype s_dogdie3;
extern statetype s_dogdead;
extern statetype s_ofcstand;
extern statetype s_ofcpath1;
extern statetype s_ofcpath1s;
extern statetype s_ofcpath2;
extern statetype s_ofcpath3;
extern statetype s_ofcpath3s;
extern statetype s_ofcpath4;
extern statetype s_ofcpain;
extern statetype s_ofcpain1;
extern statetype s_ofcshoot1;
extern statetype s_ofcshoot2;
extern statetype s_ofcshoot3;
extern statetype s_ofcchase1;
extern statetype s_ofcchase1s;
extern statetype s_ofcchase2;
extern statetype s_ofcchase3;
extern statetype s_ofcchase3s;
extern statetype s_ofcchase4;
extern statetype s_ofcdie1;
extern statetype s_ofcdie2;
extern statetype s_ofcdie3;
extern statetype s_ofcdie4;
extern statetype s_ofcdie5;
extern statetype s_mutstand;
extern statetype s_mutpath1;
extern statetype s_mutpath1s;
extern statetype s_mutpath2;
extern statetype s_mutpath3;
extern statetype s_mutpath3s;
extern statetype s_mutpath4;
extern statetype s_mutpain;
extern statetype s_mutpain1;
extern statetype s_mutshoot1;
extern statetype s_mutshoot2;
extern statetype s_mutshoot3;
extern statetype s_mutshoot4;
extern statetype s_mutchase1;
extern statetype s_mutchase1s;
extern statetype s_mutchase2;
extern statetype s_mutchase3;
extern statetype s_mutchase3s;
extern statetype s_mutchase4;
extern statetype s_mutdie1;
extern statetype s_mutdie2;
extern statetype s_mutdie3;
extern statetype s_mutdie4;
extern statetype s_mutdie5;
extern statetype s_ssstand;
extern statetype s_sspath1;
extern statetype s_sspath1s;
extern statetype s_sspath2;
extern statetype s_sspath3;
extern statetype s_sspath3s;
extern statetype s_sspath4;
extern statetype s_sspain;
extern statetype s_sspain1;
extern statetype s_ssshoot1;
extern statetype s_ssshoot2;
extern statetype s_ssshoot3;
extern statetype s_ssshoot4;
extern statetype s_ssshoot5;
extern statetype s_ssshoot6;
extern statetype s_ssshoot7;
extern statetype s_ssshoot8;
extern statetype s_ssshoot9;
extern statetype s_sschase1;
extern statetype s_sschase1s;
extern statetype s_sschase2;
extern statetype s_sschase3;
extern statetype s_sschase3s;
extern statetype s_sschase4;
extern statetype s_ssdie1;
extern statetype s_ssdie2;
extern statetype s_ssdie3;
extern statetype s_ssdie4;
extern statetype s_transstand;
extern statetype s_transchase1;
extern statetype s_transchase1s;
extern statetype s_transchase2;
extern statetype s_transchase3;
extern statetype s_transchase3s;
extern statetype s_transchase4;
extern statetype s_transdie0;
extern statetype s_transdie01;
extern statetype s_transdie1;
extern statetype s_transdie2;
extern statetype s_transdie3;
extern statetype s_transdie4;
extern statetype s_transshoot1;
extern statetype s_transshoot2;
extern statetype s_transshoot3;
extern statetype s_transshoot4;
extern statetype s_transshoot5;
extern statetype s_transshoot6;
extern statetype s_transshoot7;
extern statetype s_transshoot8;
extern statetype s_uberstand;
extern statetype s_uberchase1;
extern statetype s_uberchase1s;
extern statetype s_uberchase2;
extern statetype s_uberchase3;
extern statetype s_uberchase3s;
extern statetype s_uberchase4;
extern statetype s_uberdie0;
extern statetype s_uberdie01;
extern statetype s_uberdie1;
extern statetype s_uberdie2;
extern statetype s_uberdie3;
extern statetype s_uberdie4;
extern statetype s_uberdie5;
extern statetype s_ubershoot1;
extern statetype s_ubershoot2;
extern statetype s_ubershoot3;
extern statetype s_ubershoot4;
extern statetype s_ubershoot5;
extern statetype s_ubershoot6;
extern statetype s_ubershoot7;
extern statetype s_willstand;
extern statetype s_willchase1;
extern statetype s_willchase1s;
extern statetype s_willchase2;
extern statetype s_willchase3;
extern statetype s_willchase3s;
extern statetype s_willchase4;
extern statetype s_willdeathcam;
extern statetype s_willdie1;
extern statetype s_willdie2;
extern statetype s_willdie3;
extern statetype s_willdie4;
extern statetype s_willdie5;
extern statetype s_willdie6;
extern statetype s_willshoot1;
extern statetype s_willshoot2;
extern statetype s_willshoot3;
extern statetype s_willshoot4;
extern statetype s_willshoot5;
extern statetype s_willshoot6;
extern statetype s_deathstand;
extern statetype s_deathchase1;
extern statetype s_deathchase1s;
extern statetype s_deathchase2;
extern statetype s_deathchase3;
extern statetype s_deathchase3s;
extern statetype s_deathchase4;
extern statetype s_deathdeathcam;
extern statetype s_deathdie1;
extern statetype s_deathdie2;
extern statetype s_deathdie3;
extern statetype s_deathdie4;
extern statetype s_deathdie5;
extern statetype s_deathdie6;
extern statetype s_deathdie7;
extern statetype s_deathdie8;
extern statetype s_deathdie9;
extern statetype s_deathshoot1;
extern statetype s_deathshoot2;
extern statetype s_deathshoot3;
extern statetype s_deathshoot4;
extern statetype s_deathshoot5;
extern statetype s_angelstand;
extern statetype s_angelchase1;
extern statetype s_angelchase1s;
extern statetype s_angelchase2;
extern statetype s_angelchase3;
extern statetype s_angelchase3s;
extern statetype s_angelchase4;
extern statetype s_angeldie1;
extern statetype s_angeldie11;
extern statetype s_angeldie2;
extern statetype s_angeldie3;
extern statetype s_angeldie4;
extern statetype s_angeldie5;
extern statetype s_angeldie6;
extern statetype s_angeldie7;
extern statetype s_angeldie8;
extern statetype s_angeldie9;
extern statetype s_angelshoot1;
extern statetype s_angelshoot2;
extern statetype s_angelshoot3;
extern statetype s_angeltired;
extern statetype s_angeltired2;
extern statetype s_angeltired3;
extern statetype s_angeltired4;
extern statetype s_angeltired5;
extern statetype s_angeltired6;
extern statetype s_angeltired7;
extern statetype s_spark1;
extern statetype s_spark2;
extern statetype s_spark3;
extern statetype s_spark4;
extern statetype s_spectrewait1;
extern statetype s_spectrewait2;
extern statetype s_spectrewait3;
extern statetype s_spectrewait4;
extern statetype s_spectrechase1;
extern statetype s_spectrechase2;
extern statetype s_spectrechase3;
extern statetype s_spectrechase4;
extern statetype s_spectredie1;
extern statetype s_spectredie2;
extern statetype s_spectredie3;
extern statetype s_spectredie4;
extern statetype s_spectrewake;

void RefKeen_FillObjStatesWithDOSPointers_NonWL1(void)
{
	s_player.compatdospointer = 0x17AC;
	s_attack.compatdospointer = 0x17BC;
	s_rocket.compatdospointer = 0x1AAA;
	s_smoke1.compatdospointer = 0x1ABA;
	s_smoke2.compatdospointer = 0x1ACA;
	s_smoke3.compatdospointer = 0x1ADA;
	s_smoke4.compatdospointer = 0x1AEA;
	s_boom1.compatdospointer = 0x1AFA;
	s_boom2.compatdospointer = 0x1B0A;
	s_boom3.compatdospointer = 0x1B1A;
	s_hrocket.compatdospointer = 0x1B2A;
	s_hsmoke1.compatdospointer = 0x1B3A;
	s_hsmoke2.compatdospointer = 0x1B4A;
	s_hsmoke3.compatdospointer = 0x1B5A;
	s_hsmoke4.compatdospointer = 0x1B6A;
	s_hboom1.compatdospointer = 0x1B7A;
	s_hboom2.compatdospointer = 0x1B8A;
	s_hboom3.compatdospointer = 0x1B9A;
	s_grdstand.compatdospointer = 0x1BAA;
	s_grdpath1.compatdospointer = 0x1BBA;
	s_grdpath1s.compatdospointer = 0x1BCA;
	s_grdpath2.compatdospointer = 0x1BDA;
	s_grdpath3.compatdospointer = 0x1BEA;
	s_grdpath3s.compatdospointer = 0x1BFA;
	s_grdpath4.compatdospointer = 0x1C0A;
	s_grdpain.compatdospointer = 0x1C1A;
	s_grdpain1.compatdospointer = 0x1C2A;
	s_grdshoot1.compatdospointer = 0x1C3A;
	s_grdshoot2.compatdospointer = 0x1C4A;
	s_grdshoot3.compatdospointer = 0x1C5A;
	s_grdchase1.compatdospointer = 0x1C6A;
	s_grdchase1s.compatdospointer = 0x1C7A;
	s_grdchase2.compatdospointer = 0x1C8A;
	s_grdchase3.compatdospointer = 0x1C9A;
	s_grdchase3s.compatdospointer = 0x1CAA;
	s_grdchase4.compatdospointer = 0x1CBA;
	s_grddie1.compatdospointer = 0x1CCA;
	s_grddie2.compatdospointer = 0x1CDA;
	s_grddie3.compatdospointer = 0x1CEA;
	s_grddie4.compatdospointer = 0x1CFA;
	s_dogpath1.compatdospointer = 0x1D0A;
	s_dogpath1s.compatdospointer = 0x1D1A;
	s_dogpath2.compatdospointer = 0x1D2A;
	s_dogpath3.compatdospointer = 0x1D3A;
	s_dogpath3s.compatdospointer = 0x1D4A;
	s_dogpath4.compatdospointer = 0x1D5A;
	s_dogjump1.compatdospointer = 0x1D6A;
	s_dogjump2.compatdospointer = 0x1D7A;
	s_dogjump3.compatdospointer = 0x1D8A;
	s_dogjump4.compatdospointer = 0x1D9A;
	s_dogjump5.compatdospointer = 0x1DAA;
	s_dogchase1.compatdospointer = 0x1DBA;
	s_dogchase1s.compatdospointer = 0x1DCA;
	s_dogchase2.compatdospointer = 0x1DDA;
	s_dogchase3.compatdospointer = 0x1DEA;
	s_dogchase3s.compatdospointer = 0x1DFA;
	s_dogchase4.compatdospointer = 0x1E0A;
	s_dogdie1.compatdospointer = 0x1E1A;
	s_dogdie2.compatdospointer = 0x1E2A;
	s_dogdie3.compatdospointer = 0x1E3A;
	s_dogdead.compatdospointer = 0x1E4A;
	s_ofcstand.compatdospointer = 0x1E5A;
	s_ofcpath1.compatdospointer = 0x1E6A;
	s_ofcpath1s.compatdospointer = 0x1E7A;
	s_ofcpath2.compatdospointer = 0x1E8A;
	s_ofcpath3.compatdospointer = 0x1E9A;
	s_ofcpath3s.compatdospointer = 0x1EAA;
	s_ofcpath4.compatdospointer = 0x1EBA;
	s_ofcpain.compatdospointer = 0x1ECA;
	s_ofcpain1.compatdospointer = 0x1EDA;
	s_ofcshoot1.compatdospointer = 0x1EEA;
	s_ofcshoot2.compatdospointer = 0x1EFA;
	s_ofcshoot3.compatdospointer = 0x1F0A;
	s_ofcchase1.compatdospointer = 0x1F1A;
	s_ofcchase1s.compatdospointer = 0x1F2A;
	s_ofcchase2.compatdospointer = 0x1F3A;
	s_ofcchase3.compatdospointer = 0x1F4A;
	s_ofcchase3s.compatdospointer = 0x1F5A;
	s_ofcchase4.compatdospointer = 0x1F6A;
	s_ofcdie1.compatdospointer = 0x1F7A;
	s_ofcdie2.compatdospointer = 0x1F8A;
	s_ofcdie3.compatdospointer = 0x1F9A;
	s_ofcdie4.compatdospointer = 0x1FAA;
	s_ofcdie5.compatdospointer = 0x1FBA;
	s_mutstand.compatdospointer = 0x1FCA;
	s_mutpath1.compatdospointer = 0x1FDA;
	s_mutpath1s.compatdospointer = 0x1FEA;
	s_mutpath2.compatdospointer = 0x1FFA;
	s_mutpath3.compatdospointer = 0x200A;
	s_mutpath3s.compatdospointer = 0x201A;
	s_mutpath4.compatdospointer = 0x202A;
	s_mutpain.compatdospointer = 0x203A;
	s_mutpain1.compatdospointer = 0x204A;
	s_mutshoot1.compatdospointer = 0x205A;
	s_mutshoot2.compatdospointer = 0x206A;
	s_mutshoot3.compatdospointer = 0x207A;
	s_mutshoot4.compatdospointer = 0x208A;
	s_mutchase1.compatdospointer = 0x209A;
	s_mutchase1s.compatdospointer = 0x20AA;
	s_mutchase2.compatdospointer = 0x20BA;
	s_mutchase3.compatdospointer = 0x20CA;
	s_mutchase3s.compatdospointer = 0x20DA;
	s_mutchase4.compatdospointer = 0x20EA;
	s_mutdie1.compatdospointer = 0x20FA;
	s_mutdie2.compatdospointer = 0x210A;
	s_mutdie3.compatdospointer = 0x211A;
	s_mutdie4.compatdospointer = 0x212A;
	s_mutdie5.compatdospointer = 0x213A;
	s_ssstand.compatdospointer = 0x214A;
	s_sspath1.compatdospointer = 0x215A;
	s_sspath1s.compatdospointer = 0x216A;
	s_sspath2.compatdospointer = 0x217A;
	s_sspath3.compatdospointer = 0x218A;
	s_sspath3s.compatdospointer = 0x219A;
	s_sspath4.compatdospointer = 0x21AA;
	s_sspain.compatdospointer = 0x21BA;
	s_sspain1.compatdospointer = 0x21CA;
	s_ssshoot1.compatdospointer = 0x21DA;
	s_ssshoot2.compatdospointer = 0x21EA;
	s_ssshoot3.compatdospointer = 0x21FA;
	s_ssshoot4.compatdospointer = 0x220A;
	s_ssshoot5.compatdospointer = 0x221A;
	s_ssshoot6.compatdospointer = 0x222A;
	s_ssshoot7.compatdospointer = 0x223A;
	s_ssshoot8.compatdospointer = 0x224A;
	s_ssshoot9.compatdospointer = 0x225A;
	s_sschase1.compatdospointer = 0x226A;
	s_sschase1s.compatdospointer = 0x227A;
	s_sschase2.compatdospointer = 0x228A;
	s_sschase3.compatdospointer = 0x229A;
	s_sschase3s.compatdospointer = 0x22AA;
	s_sschase4.compatdospointer = 0x22BA;
	s_ssdie1.compatdospointer = 0x22CA;
	s_ssdie2.compatdospointer = 0x22DA;
	s_ssdie3.compatdospointer = 0x22EA;
	s_ssdie4.compatdospointer = 0x22FA;
	s_transstand.compatdospointer = 0x231C;
	s_transchase1.compatdospointer = 0x232C;
	s_transchase1s.compatdospointer = 0x233C;
	s_transchase2.compatdospointer = 0x234C;
	s_transchase3.compatdospointer = 0x235C;
	s_transchase3s.compatdospointer = 0x236C;
	s_transchase4.compatdospointer = 0x237C;
	s_transdie0.compatdospointer = 0x238C;
	s_transdie01.compatdospointer = 0x239C;
	s_transdie1.compatdospointer = 0x23AC;
	s_transdie2.compatdospointer = 0x23BC;
	s_transdie3.compatdospointer = 0x23CC;
	s_transdie4.compatdospointer = 0x23DC;
	s_transshoot1.compatdospointer = 0x23EC;
	s_transshoot2.compatdospointer = 0x23FC;
	s_transshoot3.compatdospointer = 0x240C;
	s_transshoot4.compatdospointer = 0x241C;
	s_transshoot5.compatdospointer = 0x242C;
	s_transshoot6.compatdospointer = 0x243C;
	s_transshoot7.compatdospointer = 0x244C;
	s_transshoot8.compatdospointer = 0x245C;
	s_uberstand.compatdospointer = 0x246C;
	s_uberchase1.compatdospointer = 0x247C;
	s_uberchase1s.compatdospointer = 0x248C;
	s_uberchase2.compatdospointer = 0x249C;
	s_uberchase3.compatdospointer = 0x24AC;
	s_uberchase3s.compatdospointer = 0x24BC;
	s_uberchase4.compatdospointer = 0x24CC;
	s_uberdie0.compatdospointer = 0x24DC;
	s_uberdie01.compatdospointer = 0x24EC;
	s_uberdie1.compatdospointer = 0x24FC;
	s_uberdie2.compatdospointer = 0x250C;
	s_uberdie3.compatdospointer = 0x251C;
	s_uberdie4.compatdospointer = 0x252C;
	s_uberdie5.compatdospointer = 0x253C;
	s_ubershoot1.compatdospointer = 0x254C;
	s_ubershoot2.compatdospointer = 0x255C;
	s_ubershoot3.compatdospointer = 0x256C;
	s_ubershoot4.compatdospointer = 0x257C;
	s_ubershoot5.compatdospointer = 0x258C;
	s_ubershoot6.compatdospointer = 0x259C;
	s_ubershoot7.compatdospointer = 0x25AC;
	s_willstand.compatdospointer = 0x25BC;
	s_willchase1.compatdospointer = 0x25CC;
	s_willchase1s.compatdospointer = 0x25DC;
	s_willchase2.compatdospointer = 0x25EC;
	s_willchase3.compatdospointer = 0x25FC;
	s_willchase3s.compatdospointer = 0x260C;
	s_willchase4.compatdospointer = 0x261C;
	s_willdeathcam.compatdospointer = 0x262C;
	s_willdie1.compatdospointer = 0x263C;
	s_willdie2.compatdospointer = 0x264C;
	s_willdie3.compatdospointer = 0x265C;
	s_willdie4.compatdospointer = 0x266C;
	s_willdie5.compatdospointer = 0x267C;
	s_willdie6.compatdospointer = 0x268C;
	s_willshoot1.compatdospointer = 0x269C;
	s_willshoot2.compatdospointer = 0x26AC;
	s_willshoot3.compatdospointer = 0x26BC;
	s_willshoot4.compatdospointer = 0x26CC;
	s_willshoot5.compatdospointer = 0x26DC;
	s_willshoot6.compatdospointer = 0x26EC;
	s_deathstand.compatdospointer = 0x26FC;
	s_deathchase1.compatdospointer = 0x270C;
	s_deathchase1s.compatdospointer = 0x271C;
	s_deathchase2.compatdospointer = 0x272C;
	s_deathchase3.compatdospointer = 0x273C;
	s_deathchase3s.compatdospointer = 0x274C;
	s_deathchase4.compatdospointer = 0x275C;
	s_deathdeathcam.compatdospointer = 0x276C;
	s_deathdie1.compatdospointer = 0x277C;
	s_deathdie2.compatdospointer = 0x278C;
	s_deathdie3.compatdospointer = 0x279C;
	s_deathdie4.compatdospointer = 0x27AC;
	s_deathdie5.compatdospointer = 0x27BC;
	s_deathdie6.compatdospointer = 0x27CC;
	s_deathdie7.compatdospointer = 0x27DC;
	s_deathdie8.compatdospointer = 0x27EC;
	s_deathdie9.compatdospointer = 0x27FC;
	s_deathshoot1.compatdospointer = 0x280C;
	s_deathshoot2.compatdospointer = 0x281C;
	s_deathshoot3.compatdospointer = 0x282C;
	s_deathshoot4.compatdospointer = 0x283C;
	s_deathshoot5.compatdospointer = 0x284C;
	s_angelstand.compatdospointer = 0x285C;
	s_angelchase1.compatdospointer = 0x286C;
	s_angelchase1s.compatdospointer = 0x287C;
	s_angelchase2.compatdospointer = 0x288C;
	s_angelchase3.compatdospointer = 0x289C;
	s_angelchase3s.compatdospointer = 0x28AC;
	s_angelchase4.compatdospointer = 0x28BC;
	s_angeldie1.compatdospointer = 0x28CC;
	s_angeldie11.compatdospointer = 0x28DC;
	s_angeldie2.compatdospointer = 0x28EC;
	s_angeldie3.compatdospointer = 0x28FC;
	s_angeldie4.compatdospointer = 0x290C;
	s_angeldie5.compatdospointer = 0x291C;
	s_angeldie6.compatdospointer = 0x292C;
	s_angeldie7.compatdospointer = 0x293C;
	s_angeldie8.compatdospointer = 0x294C;
	s_angeldie9.compatdospointer = 0x295C;
	s_angelshoot1.compatdospointer = 0x296C;
	s_angelshoot2.compatdospointer = 0x297C;
	s_angelshoot3.compatdospointer = 0x298C;
	s_angeltired.compatdospointer = 0x299C;
	s_angeltired2.compatdospointer = 0x29AC;
	s_angeltired3.compatdospointer = 0x29BC;
	s_angeltired4.compatdospointer = 0x29CC;
	s_angeltired5.compatdospointer = 0x29DC;
	s_angeltired6.compatdospointer = 0x29EC;
	s_angeltired7.compatdospointer = 0x29FC;
	s_spark1.compatdospointer = 0x2A0C;
	s_spark2.compatdospointer = 0x2A1C;
	s_spark3.compatdospointer = 0x2A2C;
	s_spark4.compatdospointer = 0x2A3C;
	s_spectrewait1.compatdospointer = 0x2A4C;
	s_spectrewait2.compatdospointer = 0x2A5C;
	s_spectrewait3.compatdospointer = 0x2A6C;
	s_spectrewait4.compatdospointer = 0x2A7C;
	s_spectrechase1.compatdospointer = 0x2A8C;
	s_spectrechase2.compatdospointer = 0x2A9C;
	s_spectrechase3.compatdospointer = 0x2AAC;
	s_spectrechase4.compatdospointer = 0x2ABC;
	s_spectredie1.compatdospointer = 0x2ACC;
	s_spectredie2.compatdospointer = 0x2ADC;
	s_spectredie3.compatdospointer = 0x2AEC;
	s_spectredie4.compatdospointer = 0x2AFC;
	s_spectrewake.compatdospointer = 0x2B0C;
}

void* RefKeen_GetObjStatePtrFromDOSPointer_NonWL1(uint_fast32_t dosptr)
{
	switch (dosptr)
	{
	case 0x17AC: return &s_player;
	case 0x17BC: return &s_attack;
	case 0x1AAA: return &s_rocket;
	case 0x1ABA: return &s_smoke1;
	case 0x1ACA: return &s_smoke2;
	case 0x1ADA: return &s_smoke3;
	case 0x1AEA: return &s_smoke4;
	case 0x1AFA: return &s_boom1;
	case 0x1B0A: return &s_boom2;
	case 0x1B1A: return &s_boom3;
	case 0x1B2A: return &s_hrocket;
	case 0x1B3A: return &s_hsmoke1;
	case 0x1B4A: return &s_hsmoke2;
	case 0x1B5A: return &s_hsmoke3;
	case 0x1B6A: return &s_hsmoke4;
	case 0x1B7A: return &s_hboom1;
	case 0x1B8A: return &s_hboom2;
	case 0x1B9A: return &s_hboom3;
	case 0x1BAA: return &s_grdstand;
	case 0x1BBA: return &s_grdpath1;
	case 0x1BCA: return &s_grdpath1s;
	case 0x1BDA: return &s_grdpath2;
	case 0x1BEA: return &s_grdpath3;
	case 0x1BFA: return &s_grdpath3s;
	case 0x1C0A: return &s_grdpath4;
	case 0x1C1A: return &s_grdpain;
	case 0x1C2A: return &s_grdpain1;
	case 0x1C3A: return &s_grdshoot1;
	case 0x1C4A: return &s_grdshoot2;
	case 0x1C5A: return &s_grdshoot3;
	case 0x1C6A: return &s_grdchase1;
	case 0x1C7A: return &s_grdchase1s;
	case 0x1C8A: return &s_grdchase2;
	case 0x1C9A: return &s_grdchase3;
	case 0x1CAA: return &s_grdchase3s;
	case 0x1CBA: return &s_grdchase4;
	case 0x1CCA: return &s_grddie1;
	case 0x1CDA: return &s_grddie2;
	case 0x1CEA: return &s_grddie3;
	case 0x1CFA: return &s_grddie4;
	case 0x1D0A: return &s_dogpath1;
	case 0x1D1A: return &s_dogpath1s;
	case 0x1D2A: return &s_dogpath2;
	case 0x1D3A: return &s_dogpath3;
	case 0x1D4A: return &s_dogpath3s;
	case 0x1D5A: return &s_dogpath4;
	case 0x1D6A: return &s_dogjump1;
	case 0x1D7A: return &s_dogjump2;
	case 0x1D8A: return &s_dogjump3;
	case 0x1D9A: return &s_dogjump4;
	case 0x1DAA: return &s_dogjump5;
	case 0x1DBA: return &s_dogchase1;
	case 0x1DCA: return &s_dogchase1s;
	case 0x1DDA: return &s_dogchase2;
	case 0x1DEA: return &s_dogchase3;
	case 0x1DFA: return &s_dogchase3s;
	case 0x1E0A: return &s_dogchase4;
	case 0x1E1A: return &s_dogdie1;
	case 0x1E2A: return &s_dogdie2;
	case 0x1E3A: return &s_dogdie3;
	case 0x1E4A: return &s_dogdead;
	case 0x1E5A: return &s_ofcstand;
	case 0x1E6A: return &s_ofcpath1;
	case 0x1E7A: return &s_ofcpath1s;
	case 0x1E8A: return &s_ofcpath2;
	case 0x1E9A: return &s_ofcpath3;
	case 0x1EAA: return &s_ofcpath3s;
	case 0x1EBA: return &s_ofcpath4;
	case 0x1ECA: return &s_ofcpain;
	case 0x1EDA: return &s_ofcpain1;
	case 0x1EEA: return &s_ofcshoot1;
	case 0x1EFA: return &s_ofcshoot2;
	case 0x1F0A: return &s_ofcshoot3;
	case 0x1F1A: return &s_ofcchase1;
	case 0x1F2A: return &s_ofcchase1s;
	case 0x1F3A: return &s_ofcchase2;
	case 0x1F4A: return &s_ofcchase3;
	case 0x1F5A: return &s_ofcchase3s;
	case 0x1F6A: return &s_ofcchase4;
	case 0x1F7A: return &s_ofcdie1;
	case 0x1F8A: return &s_ofcdie2;
	case 0x1F9A: return &s_ofcdie3;
	case 0x1FAA: return &s_ofcdie4;
	case 0x1FBA: return &s_ofcdie5;
	case 0x1FCA: return &s_mutstand;
	case 0x1FDA: return &s_mutpath1;
	case 0x1FEA: return &s_mutpath1s;
	case 0x1FFA: return &s_mutpath2;
	case 0x200A: return &s_mutpath3;
	case 0x201A: return &s_mutpath3s;
	case 0x202A: return &s_mutpath4;
	case 0x203A: return &s_mutpain;
	case 0x204A: return &s_mutpain1;
	case 0x205A: return &s_mutshoot1;
	case 0x206A: return &s_mutshoot2;
	case 0x207A: return &s_mutshoot3;
	case 0x208A: return &s_mutshoot4;
	case 0x209A: return &s_mutchase1;
	case 0x20AA: return &s_mutchase1s;
	case 0x20BA: return &s_mutchase2;
	case 0x20CA: return &s_mutchase3;
	case 0x20DA: return &s_mutchase3s;
	case 0x20EA: return &s_mutchase4;
	case 0x20FA: return &s_mutdie1;
	case 0x210A: return &s_mutdie2;
	case 0x211A: return &s_mutdie3;
	case 0x212A: return &s_mutdie4;
	case 0x213A: return &s_mutdie5;
	case 0x214A: return &s_ssstand;
	case 0x215A: return &s_sspath1;
	case 0x216A: return &s_sspath1s;
	case 0x217A: return &s_sspath2;
	case 0x218A: return &s_sspath3;
	case 0x219A: return &s_sspath3s;
	case 0x21AA: return &s_sspath4;
	case 0x21BA: return &s_sspain;
	case 0x21CA: return &s_sspain1;
	case 0x21DA: return &s_ssshoot1;
	case 0x21EA: return &s_ssshoot2;
	case 0x21FA: return &s_ssshoot3;
	case 0x220A: return &s_ssshoot4;
	case 0x221A: return &s_ssshoot5;
	case 0x222A: return &s_ssshoot6;
	case 0x223A: return &s_ssshoot7;
	case 0x224A: return &s_ssshoot8;
	case 0x225A: return &s_ssshoot9;
	case 0x226A: return &s_sschase1;
	case 0x227A: return &s_sschase1s;
	case 0x228A: return &s_sschase2;
	case 0x229A: return &s_sschase3;
	case 0x22AA: return &s_sschase3s;
	case 0x22BA: return &s_sschase4;
	case 0x22CA: return &s_ssdie1;
	case 0x22DA: return &s_ssdie2;
	case 0x22EA: return &s_ssdie3;
	case 0x22FA: return &s_ssdie4;
	case 0x231C: return &s_transstand;
	case 0x232C: return &s_transchase1;
	case 0x233C: return &s_transchase1s;
	case 0x234C: return &s_transchase2;
	case 0x235C: return &s_transchase3;
	case 0x236C: return &s_transchase3s;
	case 0x237C: return &s_transchase4;
	case 0x238C: return &s_transdie0;
	case 0x239C: return &s_transdie01;
	case 0x23AC: return &s_transdie1;
	case 0x23BC: return &s_transdie2;
	case 0x23CC: return &s_transdie3;
	case 0x23DC: return &s_transdie4;
	case 0x23EC: return &s_transshoot1;
	case 0x23FC: return &s_transshoot2;
	case 0x240C: return &s_transshoot3;
	case 0x241C: return &s_transshoot4;
	case 0x242C: return &s_transshoot5;
	case 0x243C: return &s_transshoot6;
	case 0x244C: return &s_transshoot7;
	case 0x245C: return &s_transshoot8;
	case 0x246C: return &s_uberstand;
	case 0x247C: return &s_uberchase1;
	case 0x248C: return &s_uberchase1s;
	case 0x249C: return &s_uberchase2;
	case 0x24AC: return &s_uberchase3;
	case 0x24BC: return &s_uberchase3s;
	case 0x24CC: return &s_uberchase4;
	case 0x24DC: return &s_uberdie0;
	case 0x24EC: return &s_uberdie01;
	case 0x24FC: return &s_uberdie1;
	case 0x250C: return &s_uberdie2;
	case 0x251C: return &s_uberdie3;
	case 0x252C: return &s_uberdie4;
	case 0x253C: return &s_uberdie5;
	case 0x254C: return &s_ubershoot1;
	case 0x255C: return &s_ubershoot2;
	case 0x256C: return &s_ubershoot3;
	case 0x257C: return &s_ubershoot4;
	case 0x258C: return &s_ubershoot5;
	case 0x259C: return &s_ubershoot6;
	case 0x25AC: return &s_ubershoot7;
	case 0x25BC: return &s_willstand;
	case 0x25CC: return &s_willchase1;
	case 0x25DC: return &s_willchase1s;
	case 0x25EC: return &s_willchase2;
	case 0x25FC: return &s_willchase3;
	case 0x260C: return &s_willchase3s;
	case 0x261C: return &s_willchase4;
	case 0x262C: return &s_willdeathcam;
	case 0x263C: return &s_willdie1;
	case 0x264C: return &s_willdie2;
	case 0x265C: return &s_willdie3;
	case 0x266C: return &s_willdie4;
	case 0x267C: return &s_willdie5;
	case 0x268C: return &s_willdie6;
	case 0x269C: return &s_willshoot1;
	case 0x26AC: return &s_willshoot2;
	case 0x26BC: return &s_willshoot3;
	case 0x26CC: return &s_willshoot4;
	case 0x26DC: return &s_willshoot5;
	case 0x26EC: return &s_willshoot6;
	case 0x26FC: return &s_deathstand;
	case 0x270C: return &s_deathchase1;
	case 0x271C: return &s_deathchase1s;
	case 0x272C: return &s_deathchase2;
	case 0x273C: return &s_deathchase3;
	case 0x274C: return &s_deathchase3s;
	case 0x275C: return &s_deathchase4;
	case 0x276C: return &s_deathdeathcam;
	case 0x277C: return &s_deathdie1;
	case 0x278C: return &s_deathdie2;
	case 0x279C: return &s_deathdie3;
	case 0x27AC: return &s_deathdie4;
	case 0x27BC: return &s_deathdie5;
	case 0x27CC: return &s_deathdie6;
	case 0x27DC: return &s_deathdie7;
	case 0x27EC: return &s_deathdie8;
	case 0x27FC: return &s_deathdie9;
	case 0x280C: return &s_deathshoot1;
	case 0x281C: return &s_deathshoot2;
	case 0x282C: return &s_deathshoot3;
	case 0x283C: return &s_deathshoot4;
	case 0x284C: return &s_deathshoot5;
	case 0x285C: return &s_angelstand;
	case 0x286C: return &s_angelchase1;
	case 0x287C: return &s_angelchase1s;
	case 0x288C: return &s_angelchase2;
	case 0x289C: return &s_angelchase3;
	case 0x28AC: return &s_angelchase3s;
	case 0x28BC: return &s_angelchase4;
	case 0x28CC: return &s_angeldie1;
	case 0x28DC: return &s_angeldie11;
	case 0x28EC: return &s_angeldie2;
	case 0x28FC: return &s_angeldie3;
	case 0x290C: return &s_angeldie4;
	case 0x291C: return &s_angeldie5;
	case 0x292C: return &s_angeldie6;
	case 0x293C: return &s_angeldie7;
	case 0x294C: return &s_angeldie8;
	case 0x295C: return &s_angeldie9;
	case 0x296C: return &s_angelshoot1;
	case 0x297C: return &s_angelshoot2;
	case 0x298C: return &s_angelshoot3;
	case 0x299C: return &s_angeltired;
	case 0x29AC: return &s_angeltired2;
	case 0x29BC: return &s_angeltired3;
	case 0x29CC: return &s_angeltired4;
	case 0x29DC: return &s_angeltired5;
	case 0x29EC: return &s_angeltired6;
	case 0x29FC: return &s_angeltired7;
	case 0x2A0C: return &s_spark1;
	case 0x2A1C: return &s_spark2;
	case 0x2A2C: return &s_spark3;
	case 0x2A3C: return &s_spark4;
	case 0x2A4C: return &s_spectrewait1;
	case 0x2A5C: return &s_spectrewait2;
	case 0x2A6C: return &s_spectrewait3;
	case 0x2A7C: return &s_spectrewait4;
	case 0x2A8C: return &s_spectrechase1;
	case 0x2A9C: return &s_spectrechase2;
	case 0x2AAC: return &s_spectrechase3;
	case 0x2ABC: return &s_spectrechase4;
	case 0x2ACC: return &s_spectredie1;
	case 0x2ADC: return &s_spectredie2;
	case 0x2AEC: return &s_spectredie3;
	case 0x2AFC: return &s_spectredie4;
	case 0x2B0C: return &s_spectrewake;
	}
	return NULL;
}

REFKEEN_NS_E
#endif