// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_129(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  void *v5; // rsp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // [rsp-BF98h] [rbp-BFA8h]
  __int64 v44; // [rsp-BF98h] [rbp-BFA8h]
  __int64 v45; // [rsp-BF90h] [rbp-BFA0h]
  __int64 v46; // [rsp-BF90h] [rbp-BFA0h]
  __int64 v47; // [rsp-BF90h] [rbp-BFA0h]
  __int64 v48; // [rsp-BF88h] [rbp-BF98h]
  unsigned __int64 v49; // [rsp-BF78h] [rbp-BF88h]
  int v50; // [rsp-BF70h] [rbp-BF80h]
  unsigned int v51; // [rsp-BF6Ch] [rbp-BF7Ch] BYREF
  int v52; // [rsp-BF68h] [rbp-BF78h]
  __int64 v53; // [rsp-BF60h] [rbp-BF70h]
  __int64 v54; // [rsp-BF58h] [rbp-BF68h]
  unsigned __int8 v55; // [rsp-BF50h] [rbp-BF60h] BYREF
  signed int i37; // [rsp-BF4Ch] [rbp-BF5Ch]
  bool v57; // [rsp-BF48h] [rbp-BF58h]
  char v58; // [rsp-BF47h] [rbp-BF57h]
  unsigned int v59; // [rsp-BF44h] [rbp-BF54h] BYREF
  unsigned int v60; // [rsp-BF40h] [rbp-BF50h] BYREF
  char v61; // [rsp-BF3Ch] [rbp-BF4Ch]
  char v62; // [rsp-BF3Bh] [rbp-BF4Bh] BYREF
  __int64 v63; // [rsp-BF38h] [rbp-BF48h]
  bool v64; // [rsp-BF30h] [rbp-BF40h]
  bool v65; // [rsp-BF2Fh] [rbp-BF3Fh]
  bool v66; // [rsp-BF2Eh] [rbp-BF3Eh]
  bool v67; // [rsp-BF2Dh] [rbp-BF3Dh]
  bool v68; // [rsp-BF2Ch] [rbp-BF3Ch]
  bool v69; // [rsp-BF2Bh] [rbp-BF3Bh]
  int v70; // [rsp-BF28h] [rbp-BF38h]
  int (__fastcall *v71)(__int64, __int64, _BYTE *, __int64, _QWORD); // [rsp-BF20h] [rbp-BF30h]
  unsigned int kk; // [rsp-BF18h] [rbp-BF28h]
  unsigned int i95; // [rsp-BF14h] [rbp-BF24h]
  bool v74; // [rsp-BF10h] [rbp-BF20h]
  bool v75; // [rsp-BF0Fh] [rbp-BF1Fh]
  unsigned __int8 v76; // [rsp-BF0Eh] [rbp-BF1Eh] BYREF
  void (__fastcall *v77)(__int64); // [rsp-BF08h] [rbp-BF18h]
  char *v78; // [rsp-BF00h] [rbp-BF10h]
  __int64 v79; // [rsp-BEF8h] [rbp-BF08h]
  int v80; // [rsp-BEF0h] [rbp-BF00h]
  int i26; // [rsp-BEECh] [rbp-BEFCh]
  bool v82; // [rsp-BEE8h] [rbp-BEF8h]
  char v83; // [rsp-BEE7h] [rbp-BEF7h]
  char v84; // [rsp-BEE6h] [rbp-BEF6h]
  char v85; // [rsp-BEE5h] [rbp-BEF5h]
  _QWORD v86[6]; // [rsp-BEE0h] [rbp-BEF0h] BYREF
  int i13; // [rsp-BEB0h] [rbp-BEC0h]
  signed int i39; // [rsp-BEACh] [rbp-BEBCh]
  signed int v89; // [rsp-BEA8h] [rbp-BEB8h]
  unsigned int *v90; // [rsp-BEA0h] [rbp-BEB0h]
  int i47; // [rsp-BE98h] [rbp-BEA8h]
  unsigned int i120; // [rsp-BE94h] [rbp-BEA4h]
  __int64 v93; // [rsp-BE90h] [rbp-BEA0h]
  unsigned int *v94; // [rsp-BE88h] [rbp-BE98h]
  bool v95; // [rsp-BE80h] [rbp-BE90h]
  char v96; // [rsp-BE7Fh] [rbp-BE8Fh]
  bool v97; // [rsp-BE7Eh] [rbp-BE8Eh]
  char v98; // [rsp-BE7Dh] [rbp-BE8Dh]
  bool v99; // [rsp-BE7Ch] [rbp-BE8Ch]
  int i14; // [rsp-BE78h] [rbp-BE88h]
  unsigned __int8 v101; // [rsp-BE74h] [rbp-BE84h]
  char v102; // [rsp-BE73h] [rbp-BE83h]
  char v103; // [rsp-BE72h] [rbp-BE82h]
  unsigned __int8 *mm; // [rsp-BE70h] [rbp-BE80h]
  __int64 (__fastcall *v105)(__int64, _QWORD, _QWORD); // [rsp-BE68h] [rbp-BE78h]
  int v106; // [rsp-BE60h] [rbp-BE70h]
  int v107; // [rsp-BE5Ch] [rbp-BE6Ch]
  int i21; // [rsp-BE58h] [rbp-BE68h]
  _BYTE *v109; // [rsp-BE50h] [rbp-BE60h]
  unsigned int *v110; // [rsp-BE48h] [rbp-BE58h]
  unsigned int i119; // [rsp-BE40h] [rbp-BE50h]
  unsigned int i15; // [rsp-BE3Ch] [rbp-BE4Ch]
  unsigned int v113; // [rsp-BE38h] [rbp-BE48h] BYREF
  __int64 v114; // [rsp-BE30h] [rbp-BE40h]
  int j; // [rsp-BE28h] [rbp-BE38h]
  __int64 v116; // [rsp-BE20h] [rbp-BE30h]
  unsigned __int8 *v117; // [rsp-BE18h] [rbp-BE28h]
  int i54; // [rsp-BE10h] [rbp-BE20h]
  int i55; // [rsp-BE0Ch] [rbp-BE1Ch]
  int i59; // [rsp-BE08h] [rbp-BE18h]
  int i70; // [rsp-BE04h] [rbp-BE14h]
  int i109; // [rsp-BE00h] [rbp-BE10h]
  int i113; // [rsp-BDFCh] [rbp-BE0Ch]
  unsigned int v124; // [rsp-BDF8h] [rbp-BE08h]
  int i2; // [rsp-BDF4h] [rbp-BE04h]
  int v126; // [rsp-BDF0h] [rbp-BE00h]
  char v127[16]; // [rsp-BDE8h] [rbp-BDF8h] BYREF
  unsigned __int64 i10; // [rsp-BDD8h] [rbp-BDE8h]
  int v129; // [rsp-BDD0h] [rbp-BDE0h]
  signed int i33; // [rsp-BDCCh] [rbp-BDDCh]
  int v131; // [rsp-BDC8h] [rbp-BDD8h]
  int v132; // [rsp-BDC4h] [rbp-BDD4h]
  int i79; // [rsp-BDC0h] [rbp-BDD0h]
  unsigned int i78; // [rsp-BDBCh] [rbp-BDCCh]
  char v135; // [rsp-BDB8h] [rbp-BDC8h]
  bool v136; // [rsp-BDB7h] [rbp-BDC7h]
  char v137; // [rsp-BDB6h] [rbp-BDC6h]
  char v138; // [rsp-BDB5h] [rbp-BDC5h] BYREF
  int v139; // [rsp-BDB4h] [rbp-BDC4h]
  unsigned int *v140; // [rsp-BDB0h] [rbp-BDC0h]
  __int64 v141; // [rsp-BDA8h] [rbp-BDB8h]
  _QWORD v142[2]; // [rsp-BDA0h] [rbp-BDB0h] BYREF
  int i107; // [rsp-BD90h] [rbp-BDA0h]
  int i104; // [rsp-BD8Ch] [rbp-BD9Ch]
  int i106; // [rsp-BD88h] [rbp-BD98h]
  int i110; // [rsp-BD84h] [rbp-BD94h]
  unsigned int i65; // [rsp-BD80h] [rbp-BD90h]
  unsigned int i45; // [rsp-BD7Ch] [rbp-BD8Ch]
  unsigned int v149; // [rsp-BD78h] [rbp-BD88h]
  int i8; // [rsp-BD74h] [rbp-BD84h]
  int i6; // [rsp-BD70h] [rbp-BD80h]
  int i3; // [rsp-BD6Ch] [rbp-BD7Ch]
  unsigned int i35; // [rsp-BD68h] [rbp-BD78h]
  int v154; // [rsp-BD64h] [rbp-BD74h]
  int i112; // [rsp-BD60h] [rbp-BD70h]
  int i103; // [rsp-BD5Ch] [rbp-BD6Ch]
  unsigned int (*v157)(void); // [rsp-BD58h] [rbp-BD68h]
  unsigned int v158; // [rsp-BD50h] [rbp-BD60h]
  int v159; // [rsp-BD48h] [rbp-BD58h] BYREF
  int v160; // [rsp-BD44h] [rbp-BD54h]
  __int64 v161; // [rsp-BD28h] [rbp-BD38h]
  __int64 (__fastcall *v162)(__int64, unsigned int *, __int64, unsigned int *); // [rsp-BD20h] [rbp-BD30h]
  unsigned __int64 v163; // [rsp-BD18h] [rbp-BD28h]
  _QWORD *v164; // [rsp-BD10h] [rbp-BD20h]
  __int64 v165; // [rsp-BD08h] [rbp-BD18h] BYREF
  char v166[16]; // [rsp-BD00h] [rbp-BD10h] BYREF
  int i41; // [rsp-BCF0h] [rbp-BD00h]
  int i42; // [rsp-BCECh] [rbp-BCFCh]
  int i44; // [rsp-BCE8h] [rbp-BCF8h]
  int i46; // [rsp-BCE4h] [rbp-BCF4h]
  int v171; // [rsp-BCE0h] [rbp-BCF0h]
  int i48; // [rsp-BCDCh] [rbp-BCECh]
  int i49; // [rsp-BCD8h] [rbp-BCE8h]
  int i50; // [rsp-BCD4h] [rbp-BCE4h]
  int i51; // [rsp-BCD0h] [rbp-BCE0h]
  int i52; // [rsp-BCCCh] [rbp-BCDCh]
  int i56; // [rsp-BCC8h] [rbp-BCD8h]
  int i58; // [rsp-BCC4h] [rbp-BCD4h]
  int i60; // [rsp-BCC0h] [rbp-BCD0h]
  int i64; // [rsp-BCBCh] [rbp-BCCCh]
  int i66; // [rsp-BCB8h] [rbp-BCC8h]
  int i63; // [rsp-BCB4h] [rbp-BCC4h]
  unsigned int v183; // [rsp-BCB0h] [rbp-BCC0h] BYREF
  int i68; // [rsp-BCACh] [rbp-BCBCh]
  int i69; // [rsp-BCA8h] [rbp-BCB8h]
  int i71; // [rsp-BCA4h] [rbp-BCB4h]
  int v187; // [rsp-BCA0h] [rbp-BCB0h]
  int i72; // [rsp-BC9Ch] [rbp-BCACh]
  unsigned int v189; // [rsp-BC98h] [rbp-BCA8h]
  unsigned int i74; // [rsp-BC94h] [rbp-BCA4h]
  int i75; // [rsp-BC90h] [rbp-BCA0h]
  int i76; // [rsp-BC8Ch] [rbp-BC9Ch]
  int i77; // [rsp-BC88h] [rbp-BC98h]
  unsigned int i80; // [rsp-BC84h] [rbp-BC94h]
  unsigned int i81; // [rsp-BC80h] [rbp-BC90h]
  unsigned int v196; // [rsp-BC7Ch] [rbp-BC8Ch] BYREF
  unsigned int i82; // [rsp-BC78h] [rbp-BC88h]
  int i83; // [rsp-BC74h] [rbp-BC84h]
  int i84; // [rsp-BC70h] [rbp-BC80h]
  int i85; // [rsp-BC6Ch] [rbp-BC7Ch]
  int i86; // [rsp-BC68h] [rbp-BC78h]
  int i87; // [rsp-BC64h] [rbp-BC74h]
  int i88; // [rsp-BC60h] [rbp-BC70h]
  int i89; // [rsp-BC5Ch] [rbp-BC6Ch]
  int i90; // [rsp-BC58h] [rbp-BC68h]
  int i92; // [rsp-BC54h] [rbp-BC64h]
  int i91; // [rsp-BC50h] [rbp-BC60h]
  int i93; // [rsp-BC4Ch] [rbp-BC5Ch]
  int i94; // [rsp-BC48h] [rbp-BC58h]
  signed int i96; // [rsp-BC44h] [rbp-BC54h]
  int i97; // [rsp-BC40h] [rbp-BC50h]
  int i98; // [rsp-BC3Ch] [rbp-BC4Ch]
  int i99; // [rsp-BC38h] [rbp-BC48h]
  int i100; // [rsp-BC34h] [rbp-BC44h]
  int i101; // [rsp-BC30h] [rbp-BC40h]
  int i102; // [rsp-BC2Ch] [rbp-BC3Ch]
  int i31; // [rsp-BC28h] [rbp-BC38h]
  int i108; // [rsp-BC24h] [rbp-BC34h]
  int i111; // [rsp-BC20h] [rbp-BC30h]
  int i115; // [rsp-BC1Ch] [rbp-BC2Ch]
  int i116; // [rsp-BC18h] [rbp-BC28h]
  int i117; // [rsp-BC14h] [rbp-BC24h]
  unsigned int v223; // [rsp-BC10h] [rbp-BC20h] BYREF
  unsigned int v224; // [rsp-BC0Ch] [rbp-BC1Ch] BYREF
  int i122; // [rsp-BC08h] [rbp-BC18h]
  int i118; // [rsp-BC04h] [rbp-BC14h]
  int i123; // [rsp-BC00h] [rbp-BC10h]
  int v228; // [rsp-BBFCh] [rbp-BC0Ch]
  int i124; // [rsp-BBF8h] [rbp-BC08h]
  int i125; // [rsp-BBF4h] [rbp-BC04h]
  int i126; // [rsp-BBF0h] [rbp-BC00h]
  int i127; // [rsp-BBECh] [rbp-BBFCh]
  int v233; // [rsp-BBE8h] [rbp-BBF8h]
  int i128; // [rsp-BBE4h] [rbp-BBF4h]
  signed int i34; // [rsp-BBE0h] [rbp-BBF0h]
  unsigned int v236; // [rsp-BBDCh] [rbp-BBECh] BYREF
  int i30; // [rsp-BBD8h] [rbp-BBE8h]
  int i29; // [rsp-BBD4h] [rbp-BBE4h]
  int i28; // [rsp-BBD0h] [rbp-BBE0h]
  int i27; // [rsp-BBCCh] [rbp-BBDCh]
  int i22; // [rsp-BBC8h] [rbp-BBD8h]
  int i19; // [rsp-BBC4h] [rbp-BBD4h]
  int i18; // [rsp-BBC0h] [rbp-BBD0h]
  int i17; // [rsp-BBBCh] [rbp-BBCCh]
  int i32; // [rsp-BBB8h] [rbp-BBC8h]
  int i16; // [rsp-BBB4h] [rbp-BBC4h]
  int i11; // [rsp-BBB0h] [rbp-BBC0h]
  int i9; // [rsp-BBACh] [rbp-BBBCh]
  int i7; // [rsp-BBA8h] [rbp-BBB8h]
  int i5; // [rsp-BBA4h] [rbp-BBB4h]
  int nn; // [rsp-BBA0h] [rbp-BBB0h]
  unsigned int v252; // [rsp-BB9Ch] [rbp-BBACh] BYREF
  unsigned int v253; // [rsp-BB98h] [rbp-BBA8h] BYREF
  int jj; // [rsp-BB94h] [rbp-BBA4h]
  unsigned int v255; // [rsp-BB90h] [rbp-BBA0h] BYREF
  int k; // [rsp-BB8Ch] [rbp-BB9Ch]
  int i; // [rsp-BB88h] [rbp-BB98h]
  char v258; // [rsp-BB84h] [rbp-BB94h]
  char v259; // [rsp-BB83h] [rbp-BB93h]
  char v260; // [rsp-BB80h] [rbp-BB90h]
  char v261; // [rsp-BB7Fh] [rbp-BB8Fh]
  char v262; // [rsp-BB7Ch] [rbp-BB8Ch]
  char v263; // [rsp-BB7Bh] [rbp-BB8Bh]
  char v264; // [rsp-BB78h] [rbp-BB88h]
  char v265; // [rsp-BB77h] [rbp-BB87h]
  signed int i38; // [rsp-BB74h] [rbp-BB84h]
  __int64 (__fastcall *v267)(__int64, _QWORD, __int64 *, _QWORD, __int64, int, _QWORD, _QWORD); // [rsp-BB70h] [rbp-BB80h]
  __int64 *v268; // [rsp-BB68h] [rbp-BB78h]
  unsigned __int8 *i1; // [rsp-BB60h] [rbp-BB70h]
  signed int i36; // [rsp-BB58h] [rbp-BB68h]
  int i105; // [rsp-BB54h] [rbp-BB64h]
  unsigned __int64 v272; // [rsp-BB50h] [rbp-BB60h]
  unsigned int (*v273)(void); // [rsp-BB48h] [rbp-BB58h]
  unsigned int (__fastcall *v274)(__int64, __int64 *, __int64 *, __int64 *, __int64 *); // [rsp-BB40h] [rbp-BB50h]
  unsigned int *v275; // [rsp-BB38h] [rbp-BB48h]
  __int64 v276; // [rsp-BB30h] [rbp-BB40h]
  char v277; // [rsp-BB28h] [rbp-BB38h]
  _BYTE v278[7]; // [rsp-BB27h] [rbp-BB37h]
  __int64 (__fastcall *v279)(__int64, __int64); // [rsp-BB20h] [rbp-BB30h]
  int v280; // [rsp-BB18h] [rbp-BB28h]
  unsigned int v281; // [rsp-BB14h] [rbp-BB24h]
  int v282; // [rsp-BB10h] [rbp-BB20h]
  int i114; // [rsp-BB0Ch] [rbp-BB1Ch]
  unsigned int v284; // [rsp-BB08h] [rbp-BB18h] BYREF
  unsigned int *v285; // [rsp-BB00h] [rbp-BB10h]
  __int64 v286; // [rsp-BAF8h] [rbp-BB08h]
  __int64 v287; // [rsp-BAF0h] [rbp-BB00h] BYREF
  __int64 v288; // [rsp-BAE8h] [rbp-BAF8h]
  void (__fastcall *v289)(unsigned int *); // [rsp-BAE0h] [rbp-BAF0h]
  unsigned int i67; // [rsp-BAD8h] [rbp-BAE8h]
  char v291[16]; // [rsp-BAD0h] [rbp-BAE0h] BYREF
  char v292[8]; // [rsp-BAC0h] [rbp-BAD0h] BYREF
  char v293[8]; // [rsp-BAB8h] [rbp-BAC8h] BYREF
  char v294[16]; // [rsp-BAB0h] [rbp-BAC0h] BYREF
  char v295[56]; // [rsp-BAA0h] [rbp-BAB0h] BYREF
  _BYTE v296[8]; // [rsp-BA68h] [rbp-BA78h]
  char v297[8]; // [rsp-BA60h] [rbp-BA70h] BYREF
  char v298[8]; // [rsp-BA58h] [rbp-BA68h] BYREF
  char v299[8]; // [rsp-BA50h] [rbp-BA60h] BYREF
  char v300[8]; // [rsp-BA48h] [rbp-BA58h] BYREF
  char v301[8]; // [rsp-BA40h] [rbp-BA50h] BYREF
  char v302[8]; // [rsp-BA38h] [rbp-BA48h] BYREF
  char v303[8]; // [rsp-BA30h] [rbp-BA40h] BYREF
  char v304[8]; // [rsp-BA28h] [rbp-BA38h] BYREF
  char v305[8]; // [rsp-BA20h] [rbp-BA30h] BYREF
  __int64 v306; // [rsp-BA18h] [rbp-BA28h]
  __int64 v307; // [rsp-BA10h] [rbp-BA20h]
  unsigned __int64 i43; // [rsp-BA08h] [rbp-BA18h]
  __int64 v309; // [rsp-BA00h] [rbp-BA10h] BYREF
  __int64 i12; // [rsp-B9F8h] [rbp-BA08h]
  char v311[16]; // [rsp-B9F0h] [rbp-BA00h] BYREF
  _BYTE v312[16]; // [rsp-B9E0h] [rbp-B9F0h]
  char v313[16]; // [rsp-B9D0h] [rbp-B9E0h] BYREF
  char v314[16]; // [rsp-B9C0h] [rbp-B9D0h] BYREF
  _BYTE v315[16]; // [rsp-B9B0h] [rbp-B9C0h]
  char v316[16]; // [rsp-B9A0h] [rbp-B9B0h] BYREF
  char v317[16]; // [rsp-B990h] [rbp-B9A0h] BYREF
  char v318[16]; // [rsp-B980h] [rbp-B990h] BYREF
  char v319[16]; // [rsp-B970h] [rbp-B980h] BYREF
  char v320[16]; // [rsp-B960h] [rbp-B970h] BYREF
  char v321[16]; // [rsp-B950h] [rbp-B960h] BYREF
  _BYTE v322[16]; // [rsp-B940h] [rbp-B950h]
  char v323[16]; // [rsp-B930h] [rbp-B940h] BYREF
  char v324[16]; // [rsp-B920h] [rbp-B930h] BYREF
  char v325[16]; // [rsp-B910h] [rbp-B920h] BYREF
  char v326[16]; // [rsp-B900h] [rbp-B910h] BYREF
  char v327[16]; // [rsp-B8F0h] [rbp-B900h] BYREF
  char v328[16]; // [rsp-B8E0h] [rbp-B8F0h] BYREF
  char v329[16]; // [rsp-B8D0h] [rbp-B8E0h] BYREF
  char v330[16]; // [rsp-B8C0h] [rbp-B8D0h] BYREF
  char v331[16]; // [rsp-B8B0h] [rbp-B8C0h] BYREF
  char v332[16]; // [rsp-B8A0h] [rbp-B8B0h] BYREF
  char v333[16]; // [rsp-B890h] [rbp-B8A0h] BYREF
  char v334[16]; // [rsp-B880h] [rbp-B890h] BYREF
  char v335[16]; // [rsp-B870h] [rbp-B880h] BYREF
  char v336[16]; // [rsp-B860h] [rbp-B870h] BYREF
  char v337[16]; // [rsp-B850h] [rbp-B860h] BYREF
  char v338[16]; // [rsp-B840h] [rbp-B850h] BYREF
  char v339[16]; // [rsp-B830h] [rbp-B840h] BYREF
  _BYTE v340[16]; // [rsp-B820h] [rbp-B830h]
  char v341[16]; // [rsp-B810h] [rbp-B820h] BYREF
  char v342[16]; // [rsp-B800h] [rbp-B810h] BYREF
  char v343[16]; // [rsp-B7F0h] [rbp-B800h] BYREF
  char v344[16]; // [rsp-B7E0h] [rbp-B7F0h] BYREF
  char v345[16]; // [rsp-B7D0h] [rbp-B7E0h] BYREF
  char v346[16]; // [rsp-B7C0h] [rbp-B7D0h] BYREF
  char v347[16]; // [rsp-B7B0h] [rbp-B7C0h] BYREF
  char v348[16]; // [rsp-B7A0h] [rbp-B7B0h] BYREF
  char v349[16]; // [rsp-B790h] [rbp-B7A0h] BYREF
  char v350[16]; // [rsp-B780h] [rbp-B790h] BYREF
  char v351[16]; // [rsp-B770h] [rbp-B780h] BYREF
  char v352[16]; // [rsp-B760h] [rbp-B770h] BYREF
  char v353[16]; // [rsp-B750h] [rbp-B760h] BYREF
  char v354[16]; // [rsp-B740h] [rbp-B750h] BYREF
  char v355[16]; // [rsp-B730h] [rbp-B740h] BYREF
  char v356[16]; // [rsp-B720h] [rbp-B730h] BYREF
  char v357[16]; // [rsp-B710h] [rbp-B720h] BYREF
  char v358[16]; // [rsp-B700h] [rbp-B710h] BYREF
  char v359[16]; // [rsp-B6F0h] [rbp-B700h] BYREF
  char v360[16]; // [rsp-B6E0h] [rbp-B6F0h] BYREF
  char v361[16]; // [rsp-B6D0h] [rbp-B6E0h] BYREF
  char v362[16]; // [rsp-B6C0h] [rbp-B6D0h] BYREF
  char v363[16]; // [rsp-B6B0h] [rbp-B6C0h] BYREF
  char v364[16]; // [rsp-B6A0h] [rbp-B6B0h] BYREF
  char v365[16]; // [rsp-B690h] [rbp-B6A0h] BYREF
  char v366[16]; // [rsp-B680h] [rbp-B690h] BYREF
  char v367[16]; // [rsp-B670h] [rbp-B680h] BYREF
  char v368[16]; // [rsp-B660h] [rbp-B670h] BYREF
  char v369[16]; // [rsp-B650h] [rbp-B660h] BYREF
  char v370[16]; // [rsp-B640h] [rbp-B650h] BYREF
  _BYTE v371[16]; // [rsp-B630h] [rbp-B640h]
  char v372[16]; // [rsp-B620h] [rbp-B630h] BYREF
  char v373[16]; // [rsp-B610h] [rbp-B620h] BYREF
  char v374[16]; // [rsp-B600h] [rbp-B610h] BYREF
  char v375[16]; // [rsp-B5F0h] [rbp-B600h] BYREF
  char v376[16]; // [rsp-B5E0h] [rbp-B5F0h] BYREF
  char v377[16]; // [rsp-B5D0h] [rbp-B5E0h] BYREF
  char v378[24]; // [rsp-B5C0h] [rbp-B5D0h] BYREF
  char v379[24]; // [rsp-B5A8h] [rbp-B5B8h] BYREF
  char v380[24]; // [rsp-B590h] [rbp-B5A0h] BYREF
  char v381[24]; // [rsp-B578h] [rbp-B588h] BYREF
  char v382[24]; // [rsp-B560h] [rbp-B570h] BYREF
  char v383[24]; // [rsp-B548h] [rbp-B558h] BYREF
  char v384[24]; // [rsp-B530h] [rbp-B540h] BYREF
  char v385[24]; // [rsp-B518h] [rbp-B528h] BYREF
  char v386[24]; // [rsp-B500h] [rbp-B510h] BYREF
  char v387[24]; // [rsp-B4E8h] [rbp-B4F8h] BYREF
  char v388[24]; // [rsp-B4D0h] [rbp-B4E0h] BYREF
  char v389[24]; // [rsp-B4B8h] [rbp-B4C8h] BYREF
  _BYTE v390[24]; // [rsp-B4A0h] [rbp-B4B0h]
  char v391[24]; // [rsp-B488h] [rbp-B498h] BYREF
  char v392[24]; // [rsp-B470h] [rbp-B480h] BYREF
  char v393[24]; // [rsp-B458h] [rbp-B468h] BYREF
  char v394[24]; // [rsp-B440h] [rbp-B450h] BYREF
  char v395[24]; // [rsp-B428h] [rbp-B438h] BYREF
  char v396[24]; // [rsp-B410h] [rbp-B420h] BYREF
  char v397[24]; // [rsp-B3F8h] [rbp-B408h] BYREF
  char v398[24]; // [rsp-B3E0h] [rbp-B3F0h] BYREF
  char v399[24]; // [rsp-B3C8h] [rbp-B3D8h] BYREF
  char v400[24]; // [rsp-B3B0h] [rbp-B3C0h] BYREF
  char v401[24]; // [rsp-B398h] [rbp-B3A8h] BYREF
  char v402[24]; // [rsp-B380h] [rbp-B390h] BYREF
  char v403[24]; // [rsp-B368h] [rbp-B378h] BYREF
  char v404[24]; // [rsp-B350h] [rbp-B360h] BYREF
  char v405[24]; // [rsp-B338h] [rbp-B348h] BYREF
  char v406[24]; // [rsp-B320h] [rbp-B330h] BYREF
  char v407[24]; // [rsp-B308h] [rbp-B318h] BYREF
  char v408[24]; // [rsp-B2F0h] [rbp-B300h] BYREF
  char v409[24]; // [rsp-B2D8h] [rbp-B2E8h] BYREF
  char v410[24]; // [rsp-B2C0h] [rbp-B2D0h] BYREF
  char v411[24]; // [rsp-B2A8h] [rbp-B2B8h] BYREF
  char v412[32]; // [rsp-B290h] [rbp-B2A0h] BYREF
  char v413[32]; // [rsp-B270h] [rbp-B280h] BYREF
  char v414[32]; // [rsp-B250h] [rbp-B260h] BYREF
  char v415[32]; // [rsp-B230h] [rbp-B240h] BYREF
  char v416[32]; // [rsp-B210h] [rbp-B220h] BYREF
  char v417[32]; // [rsp-B1F0h] [rbp-B200h] BYREF
  char v418[32]; // [rsp-B1D0h] [rbp-B1E0h] BYREF
  char v419[32]; // [rsp-B1B0h] [rbp-B1C0h] BYREF
  char v420[32]; // [rsp-B190h] [rbp-B1A0h] BYREF
  char v421[32]; // [rsp-B170h] [rbp-B180h] BYREF
  char v422[32]; // [rsp-B150h] [rbp-B160h] BYREF
  char v423[32]; // [rsp-B130h] [rbp-B140h] BYREF
  char v424[32]; // [rsp-B110h] [rbp-B120h] BYREF
  char v425[64]; // [rsp-B0F0h] [rbp-B100h] BYREF
  __int64 v426; // [rsp-B0B0h] [rbp-B0C0h]
  int v427; // [rsp-B0A8h] [rbp-B0B8h]
  unsigned __int64 i23; // [rsp-B0A0h] [rbp-B0B0h]
  char *i24; // [rsp-B098h] [rbp-B0A8h]
  __int64 v430; // [rsp-B090h] [rbp-B0A0h]
  __int64 (__fastcall *v431)(__int64, __int64); // [rsp-B088h] [rbp-B098h]
  unsigned int v432; // [rsp-B080h] [rbp-B090h]
  unsigned int v433; // [rsp-B07Ch] [rbp-B08Ch]
  int v434; // [rsp-B078h] [rbp-B088h]
  int v435; // [rsp-B074h] [rbp-B084h]
  int v436; // [rsp-B070h] [rbp-B080h]
  unsigned int v437; // [rsp-B06Ch] [rbp-B07Ch] BYREF
  int v438; // [rsp-B068h] [rbp-B078h]
  unsigned int v439; // [rsp-B064h] [rbp-B074h]
  __int64 **v440; // [rsp-B060h] [rbp-B070h]
  unsigned int *v441; // [rsp-B058h] [rbp-B068h]
  __int64 v442; // [rsp-B050h] [rbp-B060h]
  unsigned int v443; // [rsp-B048h] [rbp-B058h]
  int v444; // [rsp-B044h] [rbp-B054h]
  int v445; // [rsp-B040h] [rbp-B050h]
  unsigned int v446; // [rsp-B03Ch] [rbp-B04Ch]
  _BYTE v447[5]; // [rsp-B038h] [rbp-B048h] BYREF
  char v448; // [rsp-B033h] [rbp-B043h]
  __int16 v449; // [rsp-B032h] [rbp-B042h]
  char v450; // [rsp-B030h] [rbp-B040h]
  char v451; // [rsp-B02Fh] [rbp-B03Fh]
  __int16 v452; // [rsp-B02Eh] [rbp-B03Eh]
  __int64 v453; // [rsp-B028h] [rbp-B038h]
  __int64 v454; // [rsp-B020h] [rbp-B030h]
  __int64 v455; // [rsp-B018h] [rbp-B028h]
  __int64 v456; // [rsp-B010h] [rbp-B020h]
  __int64 v457; // [rsp-B008h] [rbp-B018h]
  char v458; // [rsp-B000h] [rbp-B010h]
  char v459; // [rsp-AFFFh] [rbp-B00Fh]
  __int16 v460; // [rsp-AFFEh] [rbp-B00Eh]
  int v461; // [rsp-AFFCh] [rbp-B00Ch]
  int (__fastcall *v462)(__int64, _BYTE **, __int64 *, __int64, unsigned int *); // [rsp-AFF8h] [rbp-B008h]
  __int64 (__fastcall *v463)(unsigned int *, _QWORD); // [rsp-AFF0h] [rbp-B000h]
  __int64 v464; // [rsp-AFE8h] [rbp-AFF8h]
  unsigned int *i121; // [rsp-AFE0h] [rbp-AFF0h]
  __int64 v466; // [rsp-AFD8h] [rbp-AFE8h]
  __int64 (__fastcall *v467)(char *, __int64, __int64, _QWORD, int, int, _QWORD); // [rsp-AFD0h] [rbp-AFE0h]
  __int64 (__fastcall *v468)(char *); // [rsp-AFC8h] [rbp-AFD8h] BYREF
  unsigned __int8 *v469; // [rsp-AFC0h] [rbp-AFD0h]
  __int64 n; // [rsp-AFB8h] [rbp-AFC8h]
  __int64 m; // [rsp-AFB0h] [rbp-AFC0h]
  __int64 v472; // [rsp-AFA8h] [rbp-AFB8h]
  __int64 v473; // [rsp-AFA0h] [rbp-AFB0h]
  __int64 v474; // [rsp-AF98h] [rbp-AFA8h]
  __int64 v475; // [rsp-AF90h] [rbp-AFA0h]
  BOOL v476; // [rsp-AF88h] [rbp-AF98h]
  int v477; // [rsp-AF84h] [rbp-AF94h]
  BOOL v478; // [rsp-AF80h] [rbp-AF90h]
  unsigned int v479; // [rsp-AF7Ch] [rbp-AF8Ch]
  BOOL v480; // [rsp-AF78h] [rbp-AF88h]
  BOOL v481; // [rsp-AF74h] [rbp-AF84h]
  int v482; // [rsp-AF70h] [rbp-AF80h]
  BOOL v483; // [rsp-AF6Ch] [rbp-AF7Ch]
  int v484; // [rsp-AF68h] [rbp-AF78h]
  BOOL v485; // [rsp-AF64h] [rbp-AF74h]
  BOOL v486; // [rsp-AF60h] [rbp-AF70h]
  BOOL v487; // [rsp-AF5Ch] [rbp-AF6Ch]
  int v488; // [rsp-AF58h] [rbp-AF68h]
  int v489; // [rsp-AF54h] [rbp-AF64h]
  int v490; // [rsp-AF50h] [rbp-AF60h]
  BOOL v491; // [rsp-AF4Ch] [rbp-AF5Ch]
  int v492; // [rsp-AF48h] [rbp-AF58h]
  int v493; // [rsp-AF44h] [rbp-AF54h]
  int v494; // [rsp-AF40h] [rbp-AF50h]
  int v495; // [rsp-AF3Ch] [rbp-AF4Ch]
  __int64 ii; // [rsp-AF38h] [rbp-AF48h]
  int v497; // [rsp-AF30h] [rbp-AF40h]
  unsigned int v498; // [rsp-AF2Ch] [rbp-AF3Ch]
  int v499; // [rsp-AF28h] [rbp-AF38h]
  BOOL v500; // [rsp-AF24h] [rbp-AF34h]
  BOOL v501; // [rsp-AF20h] [rbp-AF30h]
  int v502; // [rsp-AF1Ch] [rbp-AF2Ch]
  int v503; // [rsp-AF18h] [rbp-AF28h]
  int v504; // [rsp-AF14h] [rbp-AF24h]
  BOOL v505; // [rsp-AF10h] [rbp-AF20h]
  unsigned int v506; // [rsp-AF0Ch] [rbp-AF1Ch] BYREF
  unsigned int v507; // [rsp-AF08h] [rbp-AF18h]
  int v508; // [rsp-AF04h] [rbp-AF14h]
  int v509; // [rsp-AF00h] [rbp-AF10h]
  BOOL v510; // [rsp-AEFCh] [rbp-AF0Ch]
  int v511; // [rsp-AEF8h] [rbp-AF08h]
  BOOL v512; // [rsp-AEF4h] [rbp-AF04h]
  int v513; // [rsp-AEF0h] [rbp-AF00h]
  int v514; // [rsp-AEECh] [rbp-AEFCh]
  __int64 v515; // [rsp-AEE8h] [rbp-AEF8h]
  unsigned __int8 *i4; // [rsp-AEE0h] [rbp-AEF0h]
  unsigned __int64 i25; // [rsp-AED8h] [rbp-AEE8h]
  __int64 v518; // [rsp-AED0h] [rbp-AEE0h] BYREF
  __int64 v519; // [rsp-AEC8h] [rbp-AED8h]
  __int64 i62; // [rsp-AEC0h] [rbp-AED0h]
  __int64 v521; // [rsp-AEB8h] [rbp-AEC8h]
  __int64 v522; // [rsp-AEB0h] [rbp-AEC0h] BYREF
  __int64 v523; // [rsp-AEA8h] [rbp-AEB8h] BYREF
  __int64 v524; // [rsp-AEA0h] [rbp-AEB0h]
  void (__fastcall *v525)(__int64); // [rsp-AE98h] [rbp-AEA8h]
  __int64 v526; // [rsp-AE90h] [rbp-AEA0h]
  int v527; // [rsp-AE88h] [rbp-AE98h]
  unsigned int v528; // [rsp-AE84h] [rbp-AE94h] BYREF
  BOOL v529; // [rsp-AE80h] [rbp-AE90h]
  BOOL v530; // [rsp-AE7Ch] [rbp-AE8Ch]
  unsigned int v531; // [rsp-AE78h] [rbp-AE88h]
  int v532; // [rsp-AE74h] [rbp-AE84h]
  _DWORD v533[3]; // [rsp-AE70h] [rbp-AE80h] BYREF
  BOOL v534; // [rsp-AE64h] [rbp-AE74h]
  unsigned int v535; // [rsp-AE60h] [rbp-AE70h]
  int v536; // [rsp-AE5Ch] [rbp-AE6Ch]
  int v537; // [rsp-AE58h] [rbp-AE68h]
  int v538; // [rsp-AE54h] [rbp-AE64h]
  unsigned int v539; // [rsp-AE50h] [rbp-AE60h]
  int v540; // [rsp-AE4Ch] [rbp-AE5Ch]
  int v541; // [rsp-AE48h] [rbp-AE58h]
  int v542; // [rsp-AE44h] [rbp-AE54h]
  int v543; // [rsp-AE40h] [rbp-AE50h]
  int v544; // [rsp-AE3Ch] [rbp-AE4Ch]
  int v545; // [rsp-AE38h] [rbp-AE48h]
  int v546; // [rsp-AE34h] [rbp-AE44h]
  int v547; // [rsp-AE30h] [rbp-AE40h]
  int v548; // [rsp-AE2Ch] [rbp-AE3Ch]
  unsigned __int64 v549; // [rsp-AE28h] [rbp-AE38h] BYREF
  unsigned __int64 v550; // [rsp-AE10h] [rbp-AE20h]
  int v551; // [rsp-AE08h] [rbp-AE18h]
  int v552; // [rsp-AE04h] [rbp-AE14h]
  int v553; // [rsp-AE00h] [rbp-AE10h]
  char v554; // [rsp-ADF8h] [rbp-AE08h]
  char v555; // [rsp-ADF7h] [rbp-AE07h]
  int v556; // [rsp-ADF6h] [rbp-AE06h]
  char v557; // [rsp-ADF0h] [rbp-AE00h]
  char v558; // [rsp-ADEFh] [rbp-ADFFh]
  unsigned int v559; // [rsp-ADEEh] [rbp-ADFEh]
  char v560; // [rsp-ADE8h] [rbp-ADF8h]
  char v561; // [rsp-ADE7h] [rbp-ADF7h]
  int v562; // [rsp-ADE6h] [rbp-ADF6h]
  char v563; // [rsp-ADE0h] [rbp-ADF0h]
  char v564; // [rsp-ADDFh] [rbp-ADEFh]
  int v565; // [rsp-ADDEh] [rbp-ADEEh]
  char v566; // [rsp-ADD8h] [rbp-ADE8h]
  char v567; // [rsp-ADD7h] [rbp-ADE7h]
  int v568; // [rsp-ADD6h] [rbp-ADE6h]
  char v569; // [rsp-ADD0h] [rbp-ADE0h]
  char v570; // [rsp-ADCFh] [rbp-ADDFh]
  int v571; // [rsp-ADCEh] [rbp-ADDEh]
  char v572; // [rsp-ADC8h] [rbp-ADD8h]
  char v573; // [rsp-ADC7h] [rbp-ADD7h]
  int v574; // [rsp-ADC6h] [rbp-ADD6h]
  char v575; // [rsp-ADC0h] [rbp-ADD0h]
  char v576; // [rsp-ADBFh] [rbp-ADCFh]
  int v577; // [rsp-ADBEh] [rbp-ADCEh]
  __int64 (__fastcall *v578)(__int64, int *, __int64); // [rsp-ADB8h] [rbp-ADC8h]
  __int64 v579; // [rsp-ADB0h] [rbp-ADC0h]
  __int64 v580; // [rsp-ADA8h] [rbp-ADB8h]
  char v581; // [rsp-AD98h] [rbp-ADA8h]
  char v582; // [rsp-AD97h] [rbp-ADA7h]
  __int16 v583; // [rsp-AD96h] [rbp-ADA6h]
  int v584; // [rsp-AD94h] [rbp-ADA4h]
  char v585; // [rsp-AD90h] [rbp-ADA0h]
  char v586; // [rsp-AD8Fh] [rbp-AD9Fh]
  __int16 v587; // [rsp-AD8Eh] [rbp-AD9Eh]
  int v588; // [rsp-AD8Ch] [rbp-AD9Ch]
  __int64 i20; // [rsp-AD88h] [rbp-AD98h]
  __int64 v590; // [rsp-AD80h] [rbp-AD90h] BYREF
  __int64 v591; // [rsp-AD78h] [rbp-AD88h] BYREF
  __int64 v592; // [rsp-AD70h] [rbp-AD80h] BYREF
  __int64 i53; // [rsp-AD68h] [rbp-AD78h]
  __int64 v594; // [rsp-AD60h] [rbp-AD70h]
  unsigned __int64 v595; // [rsp-AD58h] [rbp-AD68h]
  __int64 v596; // [rsp-AD50h] [rbp-AD60h]
  __int64 v597; // [rsp-AD48h] [rbp-AD58h]
  __int64 v598; // [rsp-AD40h] [rbp-AD50h]
  char v599; // [rsp-AD38h] [rbp-AD48h]
  char v600; // [rsp-AD37h] [rbp-AD47h]
  __int16 v601; // [rsp-AD36h] [rbp-AD46h]
  int v602; // [rsp-AD34h] [rbp-AD44h]
  unsigned int (__fastcall *v603)(__int64, _QWORD, _BYTE *, unsigned int *); // [rsp-AD30h] [rbp-AD40h]
  __int64 (*v604)(void); // [rsp-AD28h] [rbp-AD38h]
  unsigned int (__fastcall *v605)(_BYTE *, _QWORD, _DWORD *); // [rsp-AD20h] [rbp-AD30h]
  char v606; // [rsp-AD18h] [rbp-AD28h]
  char v607; // [rsp-AD17h] [rbp-AD27h]
  __int16 v608; // [rsp-AD16h] [rbp-AD26h]
  int v609; // [rsp-AD14h] [rbp-AD24h]
  char v610; // [rsp-AD10h] [rbp-AD20h]
  char v611; // [rsp-AD0Fh] [rbp-AD1Fh]
  __int16 v612; // [rsp-AD0Eh] [rbp-AD1Eh]
  int v613; // [rsp-AD0Ch] [rbp-AD1Ch]
  char v614; // [rsp-AD08h] [rbp-AD18h]
  char v615; // [rsp-AD07h] [rbp-AD17h]
  __int16 v616; // [rsp-AD06h] [rbp-AD16h]
  int v617; // [rsp-AD04h] [rbp-AD14h]
  char v618; // [rsp-AD00h] [rbp-AD10h]
  char v619; // [rsp-ACFFh] [rbp-AD0Fh]
  __int16 v620; // [rsp-ACFEh] [rbp-AD0Eh]
  int v621; // [rsp-ACFCh] [rbp-AD0Ch]
  char v622; // [rsp-ACF8h] [rbp-AD08h]
  char v623; // [rsp-ACF7h] [rbp-AD07h]
  __int16 v624; // [rsp-ACF6h] [rbp-AD06h]
  int v625; // [rsp-ACF4h] [rbp-AD04h]
  char v626; // [rsp-ACF0h] [rbp-AD00h]
  char v627; // [rsp-ACEFh] [rbp-ACFFh]
  __int16 v628; // [rsp-ACEEh] [rbp-ACFEh]
  int v629; // [rsp-ACECh] [rbp-ACFCh]
  char v630; // [rsp-ACE8h] [rbp-ACF8h]
  char v631; // [rsp-ACE7h] [rbp-ACF7h]
  __int16 v632; // [rsp-ACE6h] [rbp-ACF6h]
  int v633; // [rsp-ACE4h] [rbp-ACF4h]
  char v634; // [rsp-ACE0h] [rbp-ACF0h]
  char v635; // [rsp-ACDFh] [rbp-ACEFh]
  __int16 v636; // [rsp-ACDEh] [rbp-ACEEh]
  int v637; // [rsp-ACDCh] [rbp-ACECh]
  unsigned int *v638; // [rsp-ACD8h] [rbp-ACE8h]
  char v639; // [rsp-ACD0h] [rbp-ACE0h]
  char v640; // [rsp-ACCFh] [rbp-ACDFh]
  __int16 v641; // [rsp-ACCEh] [rbp-ACDEh]
  int v642; // [rsp-ACCCh] [rbp-ACDCh]
  char v643; // [rsp-ACC8h] [rbp-ACD8h]
  char v644; // [rsp-ACC7h] [rbp-ACD7h]
  __int16 v645; // [rsp-ACC6h] [rbp-ACD6h]
  int v646; // [rsp-ACC4h] [rbp-ACD4h]
  char v647; // [rsp-ACC0h] [rbp-ACD0h]
  char v648; // [rsp-ACBFh] [rbp-ACCFh]
  __int16 v649; // [rsp-ACBEh] [rbp-ACCEh]
  int v650; // [rsp-ACBCh] [rbp-ACCCh]
  unsigned __int64 v651; // [rsp-ACB8h] [rbp-ACC8h]
  __int64 v652; // [rsp-ACB0h] [rbp-ACC0h]
  char v653; // [rsp-ACA8h] [rbp-ACB8h]
  char v654; // [rsp-ACA7h] [rbp-ACB7h]
  __int16 v655; // [rsp-ACA6h] [rbp-ACB6h]
  int v656; // [rsp-ACA4h] [rbp-ACB4h]
  char v657; // [rsp-ACA0h] [rbp-ACB0h]
  char v658; // [rsp-AC9Fh] [rbp-ACAFh]
  __int16 v659; // [rsp-AC9Eh] [rbp-ACAEh]
  int v660; // [rsp-AC9Ch] [rbp-ACACh]
  __int64 v661; // [rsp-AC98h] [rbp-ACA8h]
  __int64 v662; // [rsp-AC90h] [rbp-ACA0h] BYREF
  __int64 v663; // [rsp-AC88h] [rbp-AC98h]
  unsigned __int64 v664; // [rsp-AC78h] [rbp-AC88h]
  int v665; // [rsp-AC70h] [rbp-AC80h]
  int v666; // [rsp-AC6Ch] [rbp-AC7Ch]
  int v667; // [rsp-AC68h] [rbp-AC78h]
  _WORD v668[2]; // [rsp-AC58h] [rbp-AC68h] BYREF
  int v669; // [rsp-AC54h] [rbp-AC64h]
  _QWORD v670[4]; // [rsp-AC50h] [rbp-AC60h] BYREF
  __int16 v671; // [rsp-AC30h] [rbp-AC40h]
  int v672; // [rsp-AC2Ch] [rbp-AC3Ch]
  _BYTE v673[32]; // [rsp-AC28h] [rbp-AC38h] BYREF
  __int16 v674; // [rsp-AC08h] [rbp-AC18h]
  int v675; // [rsp-AC04h] [rbp-AC14h]
  char v676; // [rsp-AC00h] [rbp-AC10h]
  char v677; // [rsp-ABFFh] [rbp-AC0Fh]
  char v678; // [rsp-ABFEh] [rbp-AC0Eh]
  char v679; // [rsp-ABFDh] [rbp-AC0Dh]
  char v680; // [rsp-ABFCh] [rbp-AC0Ch]
  char v681; // [rsp-ABFBh] [rbp-AC0Bh]
  char v682; // [rsp-ABFAh] [rbp-AC0Ah]
  char v683; // [rsp-ABF9h] [rbp-AC09h]
  char v684; // [rsp-ABF8h] [rbp-AC08h]
  char v685; // [rsp-ABF7h] [rbp-AC07h]
  char v686; // [rsp-ABF6h] [rbp-AC06h]
  char v687; // [rsp-ABF5h] [rbp-AC05h]
  char v688; // [rsp-ABF4h] [rbp-AC04h]
  char v689; // [rsp-ABF3h] [rbp-AC03h]
  char v690; // [rsp-ABF2h] [rbp-AC02h]
  char v691; // [rsp-ABF1h] [rbp-AC01h]
  char v692; // [rsp-ABF0h] [rbp-AC00h]
  char v693; // [rsp-ABEFh] [rbp-ABFFh]
  char v694; // [rsp-ABEEh] [rbp-ABFEh]
  char v695; // [rsp-ABEDh] [rbp-ABFDh]
  char v696; // [rsp-ABECh] [rbp-ABFCh]
  char v697; // [rsp-ABEBh] [rbp-ABFBh]
  _BYTE v698[10]; // [rsp-ABEAh] [rbp-ABFAh] BYREF
  __int16 v699; // [rsp-ABE0h] [rbp-ABF0h]
  int v700; // [rsp-ABDCh] [rbp-ABECh]
  char v701; // [rsp-ABD8h] [rbp-ABE8h]
  char v702; // [rsp-ABD7h] [rbp-ABE7h]
  char v703; // [rsp-ABD6h] [rbp-ABE6h]
  char v704; // [rsp-ABD5h] [rbp-ABE5h]
  char v705[8]; // [rsp-ABD4h] [rbp-ABE4h] BYREF
  char v706[12]; // [rsp-ABCCh] [rbp-ABDCh] BYREF
  char v707[8]; // [rsp-ABC0h] [rbp-ABD0h] BYREF
  __int16 v708; // [rsp-ABB8h] [rbp-ABC8h]
  int v709; // [rsp-ABB4h] [rbp-ABC4h]
  char v710[32]; // [rsp-ABB0h] [rbp-ABC0h] BYREF
  __int16 v711; // [rsp-AB90h] [rbp-ABA0h]
  int v712; // [rsp-AB8Ch] [rbp-AB9Ch]
  char v713; // [rsp-AB88h] [rbp-AB98h]
  char v714; // [rsp-AB87h] [rbp-AB97h]
  char v715; // [rsp-AB86h] [rbp-AB96h]
  char v716; // [rsp-AB85h] [rbp-AB95h]
  char v717; // [rsp-AB84h] [rbp-AB94h]
  char v718; // [rsp-AB83h] [rbp-AB93h]
  char v719; // [rsp-AB82h] [rbp-AB92h]
  char v720; // [rsp-AB81h] [rbp-AB91h]
  char v721; // [rsp-AB80h] [rbp-AB90h]
  char v722; // [rsp-AB7Fh] [rbp-AB8Fh]
  char v723; // [rsp-AB7Eh] [rbp-AB8Eh]
  char v724; // [rsp-AB7Dh] [rbp-AB8Dh]
  char v725; // [rsp-AB7Ch] [rbp-AB8Ch]
  char v726; // [rsp-AB7Bh] [rbp-AB8Bh]
  char v727; // [rsp-AB7Ah] [rbp-AB8Ah]
  char v728; // [rsp-AB79h] [rbp-AB89h]
  char v729; // [rsp-AB78h] [rbp-AB88h]
  char v730; // [rsp-AB77h] [rbp-AB87h]
  char v731; // [rsp-AB76h] [rbp-AB86h]
  char v732; // [rsp-AB75h] [rbp-AB85h]
  char v733; // [rsp-AB74h] [rbp-AB84h]
  char v734; // [rsp-AB73h] [rbp-AB83h]
  char v735; // [rsp-AB72h] [rbp-AB82h]
  char v736; // [rsp-AB71h] [rbp-AB81h]
  char v737; // [rsp-AB70h] [rbp-AB80h]
  char v738; // [rsp-AB6Fh] [rbp-AB7Fh]
  char v739; // [rsp-AB6Eh] [rbp-AB7Eh]
  char v740; // [rsp-AB6Dh] [rbp-AB7Dh]
  char v741; // [rsp-AB6Ch] [rbp-AB7Ch]
  char v742; // [rsp-AB6Bh] [rbp-AB7Bh]
  char v743; // [rsp-AB6Ah] [rbp-AB7Ah]
  char v744; // [rsp-AB69h] [rbp-AB79h]
  __int16 v745; // [rsp-AB68h] [rbp-AB78h]
  int v746; // [rsp-AB64h] [rbp-AB74h]
  char v747[32]; // [rsp-AB60h] [rbp-AB70h] BYREF
  __int16 v748; // [rsp-AB40h] [rbp-AB50h]
  int v749; // [rsp-AB3Ch] [rbp-AB4Ch]
  char v750[32]; // [rsp-AB38h] [rbp-AB48h] BYREF
  __int16 v751; // [rsp-AB18h] [rbp-AB28h]
  int v752; // [rsp-AB14h] [rbp-AB24h]
  char v753; // [rsp-AB10h] [rbp-AB20h]
  char v754; // [rsp-AB0Fh] [rbp-AB1Fh]
  char v755; // [rsp-AB0Eh] [rbp-AB1Eh]
  char v756; // [rsp-AB0Dh] [rbp-AB1Dh]
  char v757; // [rsp-AB0Ch] [rbp-AB1Ch]
  char v758; // [rsp-AB0Bh] [rbp-AB1Bh]
  char v759; // [rsp-AB0Ah] [rbp-AB1Ah]
  char v760; // [rsp-AB09h] [rbp-AB19h]
  char v761; // [rsp-AB08h] [rbp-AB18h]
  char v762; // [rsp-AB07h] [rbp-AB17h]
  char v763; // [rsp-AB06h] [rbp-AB16h]
  char v764; // [rsp-AB05h] [rbp-AB15h]
  char v765; // [rsp-AB04h] [rbp-AB14h]
  char v766; // [rsp-AB03h] [rbp-AB13h]
  char v767; // [rsp-AB02h] [rbp-AB12h]
  char v768; // [rsp-AB01h] [rbp-AB11h]
  char v769; // [rsp-AB00h] [rbp-AB10h]
  char v770; // [rsp-AAFFh] [rbp-AB0Fh]
  char v771; // [rsp-AAFEh] [rbp-AB0Eh]
  char v772; // [rsp-AAFDh] [rbp-AB0Dh]
  char v773; // [rsp-AAFCh] [rbp-AB0Ch]
  char v774; // [rsp-AAFBh] [rbp-AB0Bh]
  char v775; // [rsp-AAFAh] [rbp-AB0Ah]
  char v776; // [rsp-AAF9h] [rbp-AB09h]
  char v777; // [rsp-AAF8h] [rbp-AB08h]
  char v778; // [rsp-AAF7h] [rbp-AB07h]
  char v779; // [rsp-AAF6h] [rbp-AB06h]
  char v780; // [rsp-AAF5h] [rbp-AB05h]
  char v781; // [rsp-AAF4h] [rbp-AB04h]
  char v782; // [rsp-AAF3h] [rbp-AB03h]
  char v783; // [rsp-AAF2h] [rbp-AB02h]
  char v784; // [rsp-AAF1h] [rbp-AB01h]
  __int16 v785; // [rsp-AAF0h] [rbp-AB00h]
  int v786; // [rsp-AAECh] [rbp-AAFCh]
  char v787; // [rsp-AAE8h] [rbp-AAF8h]
  char v788; // [rsp-AAE7h] [rbp-AAF7h]
  char v789; // [rsp-AAE6h] [rbp-AAF6h]
  char v790; // [rsp-AAE5h] [rbp-AAF5h]
  char v791; // [rsp-AAE4h] [rbp-AAF4h]
  char v792; // [rsp-AAE3h] [rbp-AAF3h]
  char v793; // [rsp-AAE2h] [rbp-AAF2h]
  char v794; // [rsp-AAE1h] [rbp-AAF1h]
  char v795; // [rsp-AAE0h] [rbp-AAF0h]
  char v796; // [rsp-AADFh] [rbp-AAEFh]
  char v797; // [rsp-AADEh] [rbp-AAEEh]
  char v798; // [rsp-AADDh] [rbp-AAEDh]
  char v799; // [rsp-AADCh] [rbp-AAECh]
  char v800; // [rsp-AADBh] [rbp-AAEBh]
  char v801; // [rsp-AADAh] [rbp-AAEAh]
  char v802; // [rsp-AAD9h] [rbp-AAE9h]
  char v803; // [rsp-AAD8h] [rbp-AAE8h]
  char v804; // [rsp-AAD7h] [rbp-AAE7h]
  char v805; // [rsp-AAD6h] [rbp-AAE6h]
  char v806; // [rsp-AAD5h] [rbp-AAE5h]
  char v807; // [rsp-AAD4h] [rbp-AAE4h]
  char v808; // [rsp-AAD3h] [rbp-AAE3h]
  char v809; // [rsp-AAD2h] [rbp-AAE2h]
  char v810; // [rsp-AAD1h] [rbp-AAE1h]
  char v811; // [rsp-AAD0h] [rbp-AAE0h]
  char v812; // [rsp-AACFh] [rbp-AADFh]
  char v813; // [rsp-AACEh] [rbp-AADEh]
  char v814; // [rsp-AACDh] [rbp-AADDh]
  char v815; // [rsp-AACCh] [rbp-AADCh]
  char v816; // [rsp-AACBh] [rbp-AADBh]
  char v817; // [rsp-AACAh] [rbp-AADAh]
  char v818; // [rsp-AAC9h] [rbp-AAD9h]
  __int16 v819; // [rsp-AAC8h] [rbp-AAD8h]
  int v820; // [rsp-AAC4h] [rbp-AAD4h]
  char v821; // [rsp-AAC0h] [rbp-AAD0h]
  char v822; // [rsp-AABFh] [rbp-AACFh]
  char v823; // [rsp-AABEh] [rbp-AACEh]
  char v824; // [rsp-AABDh] [rbp-AACDh]
  char v825; // [rsp-AABCh] [rbp-AACCh]
  char v826; // [rsp-AABBh] [rbp-AACBh]
  char v827; // [rsp-AABAh] [rbp-AACAh]
  char v828; // [rsp-AAB9h] [rbp-AAC9h]
  char v829; // [rsp-AAB8h] [rbp-AAC8h]
  char v830; // [rsp-AAB7h] [rbp-AAC7h]
  char v831; // [rsp-AAB6h] [rbp-AAC6h]
  char v832; // [rsp-AAB5h] [rbp-AAC5h]
  char v833; // [rsp-AAB4h] [rbp-AAC4h]
  char v834; // [rsp-AAB3h] [rbp-AAC3h]
  char v835; // [rsp-AAB2h] [rbp-AAC2h]
  char v836; // [rsp-AAB1h] [rbp-AAC1h]
  _BYTE v837[16]; // [rsp-AAB0h] [rbp-AAC0h] BYREF
  __int16 v838; // [rsp-AAA0h] [rbp-AAB0h]
  int v839; // [rsp-AA9Ch] [rbp-AAACh]
  char v840; // [rsp-AA98h] [rbp-AAA8h]
  char v841; // [rsp-AA97h] [rbp-AAA7h]
  char v842; // [rsp-AA96h] [rbp-AAA6h]
  char v843; // [rsp-AA95h] [rbp-AAA5h]
  char v844; // [rsp-AA94h] [rbp-AAA4h]
  char v845; // [rsp-AA93h] [rbp-AAA3h]
  char v846; // [rsp-AA92h] [rbp-AAA2h]
  char v847; // [rsp-AA91h] [rbp-AAA1h]
  char v848; // [rsp-AA90h] [rbp-AAA0h]
  char v849; // [rsp-AA8Fh] [rbp-AA9Fh]
  char v850; // [rsp-AA8Eh] [rbp-AA9Eh]
  char v851; // [rsp-AA8Dh] [rbp-AA9Dh]
  char v852; // [rsp-AA8Ch] [rbp-AA9Ch]
  char v853; // [rsp-AA8Bh] [rbp-AA9Bh]
  char v854; // [rsp-AA8Ah] [rbp-AA9Ah]
  char v855; // [rsp-AA89h] [rbp-AA99h]
  char v856; // [rsp-AA88h] [rbp-AA98h]
  char v857; // [rsp-AA87h] [rbp-AA97h]
  char v858; // [rsp-AA86h] [rbp-AA96h]
  char v859; // [rsp-AA85h] [rbp-AA95h]
  _BYTE v860[12]; // [rsp-AA84h] [rbp-AA94h] BYREF
  __int16 v861; // [rsp-AA78h] [rbp-AA88h]
  int v862; // [rsp-AA74h] [rbp-AA84h]
  char v863[32]; // [rsp-AA70h] [rbp-AA80h] BYREF
  __int16 v864; // [rsp-AA50h] [rbp-AA60h]
  int v865; // [rsp-AA4Ch] [rbp-AA5Ch]
  char v866; // [rsp-AA48h] [rbp-AA58h]
  char v867; // [rsp-AA47h] [rbp-AA57h]
  char v868; // [rsp-AA46h] [rbp-AA56h]
  char v869; // [rsp-AA45h] [rbp-AA55h]
  char v870; // [rsp-AA44h] [rbp-AA54h]
  char v871; // [rsp-AA43h] [rbp-AA53h]
  char v872; // [rsp-AA42h] [rbp-AA52h]
  char v873; // [rsp-AA41h] [rbp-AA51h]
  char v874; // [rsp-AA40h] [rbp-AA50h]
  char v875; // [rsp-AA3Fh] [rbp-AA4Fh]
  char v876; // [rsp-AA3Eh] [rbp-AA4Eh]
  char v877; // [rsp-AA3Dh] [rbp-AA4Dh]
  char v878; // [rsp-AA3Ch] [rbp-AA4Ch]
  char v879; // [rsp-AA3Bh] [rbp-AA4Bh]
  _BYTE v880[18]; // [rsp-AA3Ah] [rbp-AA4Ah] BYREF
  __int16 v881; // [rsp-AA28h] [rbp-AA38h]
  int v882; // [rsp-AA24h] [rbp-AA34h]
  char v883; // [rsp-AA20h] [rbp-AA30h]
  char v884; // [rsp-AA1Fh] [rbp-AA2Fh]
  char v885; // [rsp-AA1Eh] [rbp-AA2Eh]
  char v886; // [rsp-AA1Dh] [rbp-AA2Dh]
  char v887; // [rsp-AA1Ch] [rbp-AA2Ch]
  char v888; // [rsp-AA1Bh] [rbp-AA2Bh]
  char v889; // [rsp-AA1Ah] [rbp-AA2Ah]
  char v890; // [rsp-AA19h] [rbp-AA29h]
  char v891; // [rsp-AA18h] [rbp-AA28h]
  char v892; // [rsp-AA17h] [rbp-AA27h]
  char v893; // [rsp-AA16h] [rbp-AA26h]
  char v894; // [rsp-AA15h] [rbp-AA25h]
  char v895; // [rsp-AA14h] [rbp-AA24h]
  char v896; // [rsp-AA13h] [rbp-AA23h]
  char v897; // [rsp-AA12h] [rbp-AA22h]
  char v898; // [rsp-AA11h] [rbp-AA21h]
  char v899; // [rsp-AA10h] [rbp-AA20h]
  char v900; // [rsp-AA0Fh] [rbp-AA1Fh]
  char v901; // [rsp-AA0Eh] [rbp-AA1Eh]
  char v902; // [rsp-AA0Dh] [rbp-AA1Dh]
  char v903; // [rsp-AA0Ch] [rbp-AA1Ch]
  char v904; // [rsp-AA0Bh] [rbp-AA1Bh]
  char v905; // [rsp-AA0Ah] [rbp-AA1Ah]
  char v906; // [rsp-AA09h] [rbp-AA19h]
  char v907; // [rsp-AA08h] [rbp-AA18h]
  char v908; // [rsp-AA07h] [rbp-AA17h]
  char v909; // [rsp-AA06h] [rbp-AA16h]
  char v910; // [rsp-AA05h] [rbp-AA15h]
  char v911; // [rsp-AA04h] [rbp-AA14h]
  char v912; // [rsp-AA03h] [rbp-AA13h]
  char v913; // [rsp-AA02h] [rbp-AA12h]
  char v914; // [rsp-AA01h] [rbp-AA11h]
  __int16 v915; // [rsp-AA00h] [rbp-AA10h]
  int v916; // [rsp-A9FCh] [rbp-AA0Ch]
  char v917; // [rsp-A9F8h] [rbp-AA08h]
  char v918; // [rsp-A9F7h] [rbp-AA07h]
  _BYTE v919[30]; // [rsp-A9F6h] [rbp-AA06h] BYREF
  __int16 v920; // [rsp-A9D8h] [rbp-A9E8h]
  int v921; // [rsp-A9D4h] [rbp-A9E4h]
  char v922; // [rsp-A9D0h] [rbp-A9E0h]
  char v923; // [rsp-A9CFh] [rbp-A9DFh]
  _BYTE v924[30]; // [rsp-A9CEh] [rbp-A9DEh] BYREF
  __int16 v925; // [rsp-A9B0h] [rbp-A9C0h]
  int v926; // [rsp-A9ACh] [rbp-A9BCh]
  char v927; // [rsp-A9A8h] [rbp-A9B8h]
  char v928; // [rsp-A9A7h] [rbp-A9B7h]
  _BYTE v929[30]; // [rsp-A9A6h] [rbp-A9B6h] BYREF
  __int16 v930; // [rsp-A988h] [rbp-A998h]
  int v931; // [rsp-A984h] [rbp-A994h]
  char v932[32]; // [rsp-A980h] [rbp-A990h] BYREF
  __int16 v933; // [rsp-A960h] [rbp-A970h]
  int v934; // [rsp-A95Ch] [rbp-A96Ch]
  char v935[32]; // [rsp-A958h] [rbp-A968h] BYREF
  __int16 v936; // [rsp-A938h] [rbp-A948h]
  int v937; // [rsp-A934h] [rbp-A944h]
  char v938[32]; // [rsp-A930h] [rbp-A940h] BYREF
  __int16 v939; // [rsp-A910h] [rbp-A920h]
  int v940; // [rsp-A90Ch] [rbp-A91Ch]
  char v941; // [rsp-A908h] [rbp-A918h]
  char v942; // [rsp-A907h] [rbp-A917h]
  char v943[30]; // [rsp-A906h] [rbp-A916h] BYREF
  __int16 v944; // [rsp-A8E8h] [rbp-A8F8h]
  int v945; // [rsp-A8E4h] [rbp-A8F4h]
  char v946; // [rsp-A8E0h] [rbp-A8F0h]
  char v947; // [rsp-A8DFh] [rbp-A8EFh]
  char v948; // [rsp-A8DEh] [rbp-A8EEh]
  char v949; // [rsp-A8DDh] [rbp-A8EDh]
  char v950; // [rsp-A8DCh] [rbp-A8ECh]
  char v951; // [rsp-A8DBh] [rbp-A8EBh]
  char v952; // [rsp-A8DAh] [rbp-A8EAh]
  char v953; // [rsp-A8D9h] [rbp-A8E9h]
  char v954; // [rsp-A8D8h] [rbp-A8E8h]
  char v955[23]; // [rsp-A8D7h] [rbp-A8E7h] BYREF
  __int16 v956; // [rsp-A8C0h] [rbp-A8D0h]
  int v957; // [rsp-A8BCh] [rbp-A8CCh]
  char v958; // [rsp-A8B8h] [rbp-A8C8h]
  char v959; // [rsp-A8B7h] [rbp-A8C7h]
  char v960; // [rsp-A8B6h] [rbp-A8C6h]
  char v961; // [rsp-A8B5h] [rbp-A8C5h]
  char v962; // [rsp-A8B4h] [rbp-A8C4h]
  char v963; // [rsp-A8B3h] [rbp-A8C3h]
  char v964; // [rsp-A8B2h] [rbp-A8C2h]
  char v965; // [rsp-A8B1h] [rbp-A8C1h]
  char v966; // [rsp-A8B0h] [rbp-A8C0h]
  char v967; // [rsp-A8AFh] [rbp-A8BFh]
  char v968; // [rsp-A8AEh] [rbp-A8BEh]
  char v969; // [rsp-A8ADh] [rbp-A8BDh]
  char v970; // [rsp-A8ACh] [rbp-A8BCh]
  char v971; // [rsp-A8ABh] [rbp-A8BBh]
  char v972; // [rsp-A8AAh] [rbp-A8BAh]
  char v973; // [rsp-A8A9h] [rbp-A8B9h]
  char v974; // [rsp-A8A8h] [rbp-A8B8h]
  char v975[15]; // [rsp-A8A7h] [rbp-A8B7h] BYREF
  __int16 v976; // [rsp-A898h] [rbp-A8A8h]
  int v977; // [rsp-A894h] [rbp-A8A4h]
  char v978; // [rsp-A890h] [rbp-A8A0h]
  char v979; // [rsp-A88Fh] [rbp-A89Fh]
  char v980; // [rsp-A88Eh] [rbp-A89Eh]
  _BYTE v981[29]; // [rsp-A88Dh] [rbp-A89Dh] BYREF
  __int16 v982; // [rsp-A870h] [rbp-A880h]
  int v983; // [rsp-A86Ch] [rbp-A87Ch]
  char v984[4]; // [rsp-A868h] [rbp-A878h] BYREF
  char v985[4]; // [rsp-A864h] [rbp-A874h] BYREF
  char v986[12]; // [rsp-A860h] [rbp-A870h] BYREF
  char v987[12]; // [rsp-A854h] [rbp-A864h] BYREF
  __int16 v988; // [rsp-A848h] [rbp-A858h]
  int v989; // [rsp-A844h] [rbp-A854h]
  char v990; // [rsp-A840h] [rbp-A850h]
  char v991; // [rsp-A83Fh] [rbp-A84Fh]
  char v992; // [rsp-A83Eh] [rbp-A84Eh]
  char v993; // [rsp-A83Dh] [rbp-A84Dh]
  char v994; // [rsp-A83Ch] [rbp-A84Ch]
  char v995; // [rsp-A83Bh] [rbp-A84Bh]
  char v996; // [rsp-A83Ah] [rbp-A84Ah]
  char v997; // [rsp-A839h] [rbp-A849h]
  char v998; // [rsp-A838h] [rbp-A848h]
  char v999; // [rsp-A837h] [rbp-A847h]
  char v1000; // [rsp-A836h] [rbp-A846h]
  char v1001; // [rsp-A835h] [rbp-A845h]
  char v1002; // [rsp-A834h] [rbp-A844h]
  char v1003; // [rsp-A833h] [rbp-A843h]
  char v1004; // [rsp-A832h] [rbp-A842h]
  char v1005; // [rsp-A831h] [rbp-A841h]
  char v1006; // [rsp-A830h] [rbp-A840h]
  char v1007; // [rsp-A82Fh] [rbp-A83Fh]
  char v1008; // [rsp-A82Eh] [rbp-A83Eh]
  char v1009; // [rsp-A82Dh] [rbp-A83Dh]
  char v1010; // [rsp-A82Ch] [rbp-A83Ch]
  char v1011; // [rsp-A82Bh] [rbp-A83Bh]
  char v1012; // [rsp-A82Ah] [rbp-A83Ah]
  char v1013; // [rsp-A829h] [rbp-A839h]
  char v1014; // [rsp-A828h] [rbp-A838h]
  char v1015; // [rsp-A827h] [rbp-A837h]
  char v1016; // [rsp-A826h] [rbp-A836h]
  char v1017; // [rsp-A825h] [rbp-A835h]
  char v1018; // [rsp-A824h] [rbp-A834h]
  char v1019; // [rsp-A823h] [rbp-A833h]
  char v1020; // [rsp-A822h] [rbp-A832h]
  char v1021; // [rsp-A821h] [rbp-A831h]
  __int16 v1022; // [rsp-A820h] [rbp-A830h]
  int v1023; // [rsp-A81Ch] [rbp-A82Ch]
  char v1024; // [rsp-A818h] [rbp-A828h]
  char v1025; // [rsp-A817h] [rbp-A827h]
  char v1026; // [rsp-A816h] [rbp-A826h]
  char v1027; // [rsp-A815h] [rbp-A825h]
  char v1028; // [rsp-A814h] [rbp-A824h]
  char v1029; // [rsp-A813h] [rbp-A823h]
  char v1030; // [rsp-A812h] [rbp-A822h]
  char v1031; // [rsp-A811h] [rbp-A821h]
  char v1032; // [rsp-A810h] [rbp-A820h]
  char v1033; // [rsp-A80Fh] [rbp-A81Fh]
  char v1034; // [rsp-A80Eh] [rbp-A81Eh]
  char v1035; // [rsp-A80Dh] [rbp-A81Dh]
  char v1036; // [rsp-A80Ch] [rbp-A81Ch]
  char v1037; // [rsp-A80Bh] [rbp-A81Bh]
  char v1038; // [rsp-A80Ah] [rbp-A81Ah]
  char v1039; // [rsp-A809h] [rbp-A819h]
  char v1040; // [rsp-A808h] [rbp-A818h]
  char v1041; // [rsp-A807h] [rbp-A817h]
  char v1042; // [rsp-A806h] [rbp-A816h]
  char v1043; // [rsp-A805h] [rbp-A815h]
  char v1044; // [rsp-A804h] [rbp-A814h]
  char v1045; // [rsp-A803h] [rbp-A813h]
  char v1046; // [rsp-A802h] [rbp-A812h]
  char v1047; // [rsp-A801h] [rbp-A811h]
  char v1048; // [rsp-A800h] [rbp-A810h]
  char v1049; // [rsp-A7FFh] [rbp-A80Fh]
  char v1050; // [rsp-A7FEh] [rbp-A80Eh]
  char v1051; // [rsp-A7FDh] [rbp-A80Dh]
  char v1052; // [rsp-A7FCh] [rbp-A80Ch]
  char v1053; // [rsp-A7FBh] [rbp-A80Bh]
  char v1054; // [rsp-A7FAh] [rbp-A80Ah]
  char v1055; // [rsp-A7F9h] [rbp-A809h]
  __int16 v1056; // [rsp-A7F8h] [rbp-A808h]
  int v1057; // [rsp-A7F4h] [rbp-A804h]
  char v1058; // [rsp-A7F0h] [rbp-A800h]
  char v1059; // [rsp-A7EFh] [rbp-A7FFh]
  char v1060; // [rsp-A7EEh] [rbp-A7FEh]
  char v1061; // [rsp-A7EDh] [rbp-A7FDh]
  char v1062; // [rsp-A7ECh] [rbp-A7FCh]
  char v1063; // [rsp-A7EBh] [rbp-A7FBh]
  char v1064; // [rsp-A7EAh] [rbp-A7FAh]
  char v1065; // [rsp-A7E9h] [rbp-A7F9h]
  char v1066; // [rsp-A7E8h] [rbp-A7F8h]
  char v1067; // [rsp-A7E7h] [rbp-A7F7h]
  char v1068; // [rsp-A7E6h] [rbp-A7F6h]
  char v1069; // [rsp-A7E5h] [rbp-A7F5h]
  char v1070; // [rsp-A7E4h] [rbp-A7F4h]
  char v1071; // [rsp-A7E3h] [rbp-A7F3h]
  char v1072; // [rsp-A7E2h] [rbp-A7F2h]
  char v1073; // [rsp-A7E1h] [rbp-A7F1h]
  char v1074; // [rsp-A7E0h] [rbp-A7F0h]
  _BYTE v1075[15]; // [rsp-A7DFh] [rbp-A7EFh] BYREF
  __int64 v1076; // [rsp-A7C8h] [rbp-A7D8h] BYREF
  unsigned __int16 v1077; // [rsp-A7C0h] [rbp-A7D0h]
  __int16 v1078; // [rsp-A7BEh] [rbp-A7CEh]
  __int64 *v1079; // [rsp-A7B8h] [rbp-A7C8h]
  _WORD v1080[8]; // [rsp-A7B0h] [rbp-A7C0h] BYREF
  _DWORD v1081[6]; // [rsp-A7A0h] [rbp-A7B0h] BYREF
  _WORD v1082[22]; // [rsp-A788h] [rbp-A798h] BYREF
  unsigned __int16 v1083; // [rsp-A75Ch] [rbp-A76Ch]
  __int16 v1084; // [rsp-A75Ah] [rbp-A76Ah]
  __int16 v1085; // [rsp-A758h] [rbp-A768h]
  __int16 v1086; // [rsp-A756h] [rbp-A766h]
  __int16 v1087; // [rsp-A754h] [rbp-A764h]
  __int16 v1088; // [rsp-A752h] [rbp-A762h]
  __int16 v1089; // [rsp-A750h] [rbp-A760h]
  __int16 v1090; // [rsp-A74Eh] [rbp-A75Eh]
  __int16 v1091; // [rsp-A74Ch] [rbp-A75Ch]
  __int16 v1092; // [rsp-A74Ah] [rbp-A75Ah]
  __int16 v1093; // [rsp-A748h] [rbp-A758h]
  __int16 v1094; // [rsp-A746h] [rbp-A756h]
  __int16 v1095; // [rsp-A744h] [rbp-A754h]
  __int16 v1096; // [rsp-A742h] [rbp-A752h]
  __int16 v1097; // [rsp-A740h] [rbp-A750h]
  __int16 v1098; // [rsp-A73Eh] [rbp-A74Eh]
  __int16 v1099; // [rsp-A73Ch] [rbp-A74Ch]
  __int16 v1100; // [rsp-A73Ah] [rbp-A74Ah]
  __int16 v1101; // [rsp-A738h] [rbp-A748h]
  __int16 v1102; // [rsp-A736h] [rbp-A746h]
  __int16 v1103; // [rsp-A734h] [rbp-A744h]
  __int16 v1104; // [rsp-A732h] [rbp-A742h]
  __int16 v1105; // [rsp-A730h] [rbp-A740h]
  __int16 v1106; // [rsp-A72Eh] [rbp-A73Eh]
  __int16 v1107; // [rsp-A72Ch] [rbp-A73Ch]
  __int16 v1108; // [rsp-A72Ah] [rbp-A73Ah]
  __int16 v1109; // [rsp-A728h] [rbp-A738h]
  __int16 v1110; // [rsp-A726h] [rbp-A736h]
  __int16 v1111; // [rsp-A724h] [rbp-A734h]
  __int16 v1112; // [rsp-A722h] [rbp-A732h]
  __int16 v1113; // [rsp-A720h] [rbp-A730h]
  __int16 v1114; // [rsp-A71Eh] [rbp-A72Eh]
  __int16 v1115; // [rsp-A71Ch] [rbp-A72Ch]
  __int16 v1116; // [rsp-A71Ah] [rbp-A72Ah]
  int v1117; // [rsp-A718h] [rbp-A728h] BYREF
  char v1118; // [rsp-A714h] [rbp-A724h]
  char v1119; // [rsp-A713h] [rbp-A723h]
  char v1120; // [rsp-A712h] [rbp-A722h]
  char v1121; // [rsp-A711h] [rbp-A721h]
  char v1122; // [rsp-A710h] [rbp-A720h]
  char v1123; // [rsp-A70Fh] [rbp-A71Fh]
  char v1124; // [rsp-A70Eh] [rbp-A71Eh]
  char v1125; // [rsp-A70Dh] [rbp-A71Dh]
  _BYTE v1126[16]; // [rsp-A70Ch] [rbp-A71Ch] BYREF
  int v1127; // [rsp-A6FCh] [rbp-A70Ch]
  char v1128; // [rsp-A6F8h] [rbp-A708h]
  char v1129; // [rsp-A6F7h] [rbp-A707h]
  char v1130; // [rsp-A6F6h] [rbp-A706h]
  char v1131; // [rsp-A6F5h] [rbp-A705h]
  _BYTE v1132[20]; // [rsp-A6F4h] [rbp-A704h] BYREF
  int v1133; // [rsp-A6E0h] [rbp-A6F0h]
  char v1134; // [rsp-A6DCh] [rbp-A6ECh]
  char v1135; // [rsp-A6DBh] [rbp-A6EBh]
  char v1136; // [rsp-A6DAh] [rbp-A6EAh]
  char v1137; // [rsp-A6D9h] [rbp-A6E9h]
  char v1138; // [rsp-A6D8h] [rbp-A6E8h]
  char v1139; // [rsp-A6D7h] [rbp-A6E7h]
  char v1140; // [rsp-A6D6h] [rbp-A6E6h]
  char v1141; // [rsp-A6D5h] [rbp-A6E5h]
  char v1142; // [rsp-A6D4h] [rbp-A6E4h]
  char v1143; // [rsp-A6D3h] [rbp-A6E3h]
  char v1144; // [rsp-A6D2h] [rbp-A6E2h]
  char v1145; // [rsp-A6D1h] [rbp-A6E1h]
  char v1146; // [rsp-A6D0h] [rbp-A6E0h]
  char v1147; // [rsp-A6CFh] [rbp-A6DFh]
  char v1148; // [rsp-A6CEh] [rbp-A6DEh]
  char v1149; // [rsp-A6CDh] [rbp-A6DDh]
  _BYTE v1150[8]; // [rsp-A6CCh] [rbp-A6DCh] BYREF
  int v1151; // [rsp-A6C4h] [rbp-A6D4h]
  char v1152; // [rsp-A6C0h] [rbp-A6D0h]
  char v1153; // [rsp-A6BFh] [rbp-A6CFh]
  char v1154; // [rsp-A6BEh] [rbp-A6CEh]
  char v1155; // [rsp-A6BDh] [rbp-A6CDh]
  char v1156; // [rsp-A6BCh] [rbp-A6CCh]
  char v1157; // [rsp-A6BBh] [rbp-A6CBh]
  char v1158; // [rsp-A6BAh] [rbp-A6CAh]
  char v1159; // [rsp-A6B9h] [rbp-A6C9h]
  char v1160; // [rsp-A6B8h] [rbp-A6C8h]
  char v1161; // [rsp-A6B7h] [rbp-A6C7h]
  char v1162; // [rsp-A6B6h] [rbp-A6C6h]
  char v1163; // [rsp-A6B5h] [rbp-A6C5h]
  char v1164; // [rsp-A6B4h] [rbp-A6C4h]
  char v1165; // [rsp-A6B3h] [rbp-A6C3h]
  char v1166; // [rsp-A6B2h] [rbp-A6C2h]
  char v1167; // [rsp-A6B1h] [rbp-A6C1h]
  char v1168; // [rsp-A6B0h] [rbp-A6C0h]
  char v1169; // [rsp-A6AFh] [rbp-A6BFh]
  char v1170; // [rsp-A6AEh] [rbp-A6BEh]
  char v1171; // [rsp-A6ADh] [rbp-A6BDh]
  char v1172; // [rsp-A6ACh] [rbp-A6BCh]
  char v1173; // [rsp-A6ABh] [rbp-A6BBh]
  char v1174; // [rsp-A6AAh] [rbp-A6BAh]
  char v1175; // [rsp-A6A9h] [rbp-A6B9h]
  int v1176; // [rsp-A6A8h] [rbp-A6B8h]
  char v1177; // [rsp-A6A4h] [rbp-A6B4h]
  char v1178; // [rsp-A6A3h] [rbp-A6B3h]
  char v1179; // [rsp-A6A2h] [rbp-A6B2h]
  char v1180; // [rsp-A6A1h] [rbp-A6B1h]
  char v1181; // [rsp-A6A0h] [rbp-A6B0h]
  char v1182; // [rsp-A69Fh] [rbp-A6AFh]
  char v1183; // [rsp-A69Eh] [rbp-A6AEh]
  char v1184; // [rsp-A69Dh] [rbp-A6ADh]
  char v1185; // [rsp-A69Ch] [rbp-A6ACh]
  char v1186; // [rsp-A69Bh] [rbp-A6ABh]
  _BYTE v1187[14]; // [rsp-A69Ah] [rbp-A6AAh] BYREF
  int v1188; // [rsp-A68Ch] [rbp-A69Ch]
  char v1189; // [rsp-A688h] [rbp-A698h]
  char v1190; // [rsp-A687h] [rbp-A697h]
  char v1191; // [rsp-A686h] [rbp-A696h]
  char v1192; // [rsp-A685h] [rbp-A695h]
  char v1193; // [rsp-A684h] [rbp-A694h]
  char v1194; // [rsp-A683h] [rbp-A693h]
  char v1195; // [rsp-A682h] [rbp-A692h]
  char v1196; // [rsp-A681h] [rbp-A691h]
  _BYTE v1197[16]; // [rsp-A680h] [rbp-A690h] BYREF
  __int64 v1198; // [rsp-A668h] [rbp-A678h]
  __int64 v1199; // [rsp-A660h] [rbp-A670h] BYREF
  __int64 v1200; // [rsp-A658h] [rbp-A668h]
  __int64 v1201; // [rsp-A650h] [rbp-A660h]
  _DWORD *v1202; // [rsp-A648h] [rbp-A658h]
  unsigned __int64 v1203; // [rsp-A640h] [rbp-A650h]
  __int64 v1204; // [rsp-A638h] [rbp-A648h]
  _DWORD *v1205; // [rsp-A630h] [rbp-A640h]
  __int64 v1206; // [rsp-A628h] [rbp-A638h]
  __int64 v1207; // [rsp-A620h] [rbp-A630h] BYREF
  __int64 v1208; // [rsp-A618h] [rbp-A628h]
  __int64 v1209; // [rsp-A610h] [rbp-A620h]
  __int64 v1210; // [rsp-A608h] [rbp-A618h]
  __int64 v1211; // [rsp-A600h] [rbp-A610h]
  __int64 v1212; // [rsp-A5F8h] [rbp-A608h]
  __int64 v1213; // [rsp-A5F0h] [rbp-A600h]
  unsigned __int64 i61; // [rsp-A5E8h] [rbp-A5F8h]
  __int64 (__fastcall *v1215)(__int64); // [rsp-A5E0h] [rbp-A5F0h]
  int v1216; // [rsp-A5D8h] [rbp-A5E8h] BYREF
  _DWORD v1217[4]; // [rsp-A5D0h] [rbp-A5E0h] BYREF
  __int64 v1218; // [rsp-A5C0h] [rbp-A5D0h]
  unsigned __int64 i57; // [rsp-A5B8h] [rbp-A5C8h]
  __int64 v1220; // [rsp-A5B0h] [rbp-A5C0h]
  __int64 v1221; // [rsp-A5A8h] [rbp-A5B8h] BYREF
  __int64 (__fastcall *v1222)(char *); // [rsp-A5A0h] [rbp-A5B0h]
  unsigned int v1223; // [rsp-A598h] [rbp-A5A8h]
  int v1224; // [rsp-A594h] [rbp-A5A4h]
  int v1225; // [rsp-A590h] [rbp-A5A0h] BYREF
  int v1226; // [rsp-A58Ch] [rbp-A59Ch] BYREF
  unsigned int v1227; // [rsp-A588h] [rbp-A598h]
  unsigned int v1229; // [rsp-A580h] [rbp-A590h]
  unsigned int v1230; // [rsp-A57Ch] [rbp-A58Ch]
  int v1231; // [rsp-A578h] [rbp-A588h] BYREF
  int v1232; // [rsp-A574h] [rbp-A584h]
  int v1233; // [rsp-A570h] [rbp-A580h] BYREF
  __int64 v1234; // [rsp-A568h] [rbp-A578h]
  _QWORD v1235[3]; // [rsp-A560h] [rbp-A570h] BYREF
  __int64 v1236; // [rsp-A548h] [rbp-A558h]
  int v1237; // [rsp-A540h] [rbp-A550h]
  int v1238; // [rsp-A53Ch] [rbp-A54Ch]
  int v1239; // [rsp-A538h] [rbp-A548h]
  char v1240; // [rsp-A530h] [rbp-A540h]
  char v1241; // [rsp-A52Fh] [rbp-A53Fh]
  unsigned __int8 v1242; // [rsp-A52Eh] [rbp-A53Eh]
  __int64 v1243; // [rsp-A52Dh] [rbp-A53Dh]
  int v1244; // [rsp-A525h] [rbp-A535h]
  int v1245; // [rsp-A521h] [rbp-A531h]
  _BYTE v1246[5]; // [rsp-A51Dh] [rbp-A52Dh] BYREF
  char v1247[16]; // [rsp-A508h] [rbp-A518h] BYREF
  _DWORD v1248[2]; // [rsp-A4F8h] [rbp-A508h] BYREF
  _DWORD v1249[2]; // [rsp-A4F0h] [rbp-A500h] BYREF
  char v1250[24]; // [rsp-A4E8h] [rbp-A4F8h] BYREF
  char v1251[24]; // [rsp-A4D0h] [rbp-A4E0h] BYREF
  unsigned int (__fastcall *v1252)(char *, _QWORD, _BYTE *); // [rsp-A4B8h] [rbp-A4C8h]
  void (__fastcall *v1253)(__int64 *, __int64 *, __int64 *); // [rsp-A4B0h] [rbp-A4C0h]
  unsigned __int64 v1254; // [rsp-A4A8h] [rbp-A4B8h]
  __int64 i73; // [rsp-A4A0h] [rbp-A4B0h]
  __int64 (__fastcall *v1256)(__int64, _QWORD, _QWORD); // [rsp-A498h] [rbp-A4A8h]
  unsigned int (__fastcall *v1257)(__int64, int *); // [rsp-A490h] [rbp-A4A0h]
  __int64 (*v1258)(void); // [rsp-A488h] [rbp-A498h]
  unsigned int (__fastcall *v1259)(unsigned int *, unsigned int *, _QWORD, __int64, int, _DWORD); // [rsp-A480h] [rbp-A490h]
  __int64 v1260; // [rsp-A478h] [rbp-A488h] BYREF
  __int64 v1261; // [rsp-A470h] [rbp-A480h]
  __int64 v1262; // [rsp-A468h] [rbp-A478h]
  __int64 v1263; // [rsp-A460h] [rbp-A470h]
  __int64 v1264; // [rsp-A458h] [rbp-A468h] BYREF
  __int64 v1265; // [rsp-A450h] [rbp-A460h] BYREF
  __int64 v1266; // [rsp-A448h] [rbp-A458h]
  __int64 v1267; // [rsp-A440h] [rbp-A450h]
  __int64 v1268; // [rsp-A438h] [rbp-A448h]
  __int64 v1269; // [rsp-A430h] [rbp-A440h]
  int (__fastcall *v1270)(__int64, _BYTE *, __int64 *, __int64, int); // [rsp-A428h] [rbp-A438h]
  unsigned int (__fastcall *v1271)(__int64, __int64, __int64 *); // [rsp-A420h] [rbp-A430h]
  unsigned int (__fastcall *v1272)(_QWORD, char *, __int64 *); // [rsp-A418h] [rbp-A428h]
  void (__fastcall *v1273)(__int64, _QWORD, int *, _QWORD, _QWORD, _QWORD, __int64); // [rsp-A410h] [rbp-A420h]
  __int64 v1274; // [rsp-A408h] [rbp-A418h] BYREF
  void (__fastcall *v1275)(__int64, _DWORD *); // [rsp-A400h] [rbp-A410h]
  __int64 v1276; // [rsp-A3F8h] [rbp-A408h]
  unsigned int (__fastcall *v1277)(__int64, int *); // [rsp-A3F0h] [rbp-A400h]
  __int64 v1278; // [rsp-A3E8h] [rbp-A3F8h]
  unsigned __int8 *v1279; // [rsp-A3E0h] [rbp-A3F0h]
  unsigned __int8 *v1280; // [rsp-A3D8h] [rbp-A3E8h]
  unsigned __int8 *v1281; // [rsp-A3D0h] [rbp-A3E0h]
  __int64 v1282; // [rsp-A3C8h] [rbp-A3D8h]
  __int64 v1283; // [rsp-A3C0h] [rbp-A3D0h] BYREF
  _BYTE *v1284; // [rsp-A3B8h] [rbp-A3C8h] BYREF
  __int64 v1285; // [rsp-A3B0h] [rbp-A3C0h] BYREF
  _QWORD v1286[3]; // [rsp-A3A8h] [rbp-A3B8h] BYREF
  __int64 v1287; // [rsp-A390h] [rbp-A3A0h]
  __int64 v1288; // [rsp-A388h] [rbp-A398h]
  __int64 v1289; // [rsp-A380h] [rbp-A390h]
  __int64 v1290; // [rsp-A378h] [rbp-A388h]
  unsigned int (__fastcall *v1291)(_BYTE *, _BYTE *, __int64); // [rsp-A370h] [rbp-A380h]
  void (__fastcall *v1292)(_BYTE *, unsigned __int64, __int64); // [rsp-A368h] [rbp-A378h]
  __int64 v1293; // [rsp-A360h] [rbp-A370h]
  __int64 v1294; // [rsp-A358h] [rbp-A368h]
  int (__fastcall *v1295)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-A350h] [rbp-A360h]
  int (__fastcall *v1296)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-A348h] [rbp-A358h]
  __int64 v1297; // [rsp-A340h] [rbp-A350h]
  unsigned int (__fastcall *v1298)(__int64, __int64 *, __int64 *, char *, char *); // [rsp-A338h] [rbp-A348h]
  unsigned __int64 i40; // [rsp-A330h] [rbp-A340h]
  int (__fastcall *v1300)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-A328h] [rbp-A338h]
  __int64 (__fastcall *v1301)(__int64, _QWORD); // [rsp-A320h] [rbp-A330h]
  __int64 v1302; // [rsp-A318h] [rbp-A328h]
  __int64 v1303; // [rsp-A310h] [rbp-A320h] BYREF
  int v1304; // [rsp-A308h] [rbp-A318h] BYREF
  char v1305; // [rsp-A304h] [rbp-A314h]
  char v1306; // [rsp-A303h] [rbp-A313h]
  char v1307; // [rsp-A302h] [rbp-A312h]
  char v1308; // [rsp-A301h] [rbp-A311h]
  _BYTE v1309[25]; // [rsp-A300h] [rbp-A310h] BYREF
  char v1310; // [rsp-A2E7h] [rbp-A2F7h]
  __int16 v1311; // [rsp-A2E6h] [rbp-A2F6h]
  unsigned __int64 v1312; // [rsp-A2E4h] [rbp-A2F4h]
  __int64 v1313; // [rsp-A2DCh] [rbp-A2ECh]
  int v1314; // [rsp-A2D4h] [rbp-A2E4h]
  int v1315; // [rsp-A2D0h] [rbp-A2E0h]
  char v1316[33]; // [rsp-A2C8h] [rbp-A2D8h] BYREF
  char v1317; // [rsp-A2A7h] [rbp-A2B7h]
  int v1318; // [rsp-A2A6h] [rbp-A2B6h] BYREF
  int v1319; // [rsp-A2A2h] [rbp-A2B2h]
  _DWORD v1320[93]; // [rsp-A29Eh] [rbp-A2AEh] BYREF
  char v1321; // [rsp-A128h] [rbp-A138h]
  char v1322; // [rsp-A127h] [rbp-A137h]
  unsigned __int64 v1323; // [rsp-A126h] [rbp-A136h]
  int v1324; // [rsp-A11Eh] [rbp-A12Eh]
  int v1325; // [rsp-A11Ah] [rbp-A12Ah]
  char v1326; // [rsp-A110h] [rbp-A120h]
  char v1327; // [rsp-A10Fh] [rbp-A11Fh]
  __int16 v1328; // [rsp-A10Eh] [rbp-A11Eh]
  __int64 v1329; // [rsp-A10Ch] [rbp-A11Ch]
  __int64 v1330; // [rsp-A104h] [rbp-A114h]
  int v1331; // [rsp-A0FCh] [rbp-A10Ch]
  int v1332; // [rsp-A0F8h] [rbp-A108h]
  char v1333; // [rsp-A0F0h] [rbp-A100h]
  char v1334; // [rsp-A0EFh] [rbp-A0FFh]
  __int16 v1335; // [rsp-A0EEh] [rbp-A0FEh]
  _QWORD *v1336; // [rsp-A0ECh] [rbp-A0FCh]
  __int64 v1337; // [rsp-A0E4h] [rbp-A0F4h]
  int v1338; // [rsp-A0DCh] [rbp-A0ECh]
  int v1339; // [rsp-A0D8h] [rbp-A0E8h]
  char v1340; // [rsp-A0D0h] [rbp-A0E0h]
  char v1341; // [rsp-A0CFh] [rbp-A0DFh]
  __int16 v1342; // [rsp-A0CEh] [rbp-A0DEh]
  __int64 v1343; // [rsp-A0CCh] [rbp-A0DCh]
  __int64 v1344; // [rsp-A0C4h] [rbp-A0D4h]
  __int64 v1345; // [rsp-A0BCh] [rbp-A0CCh]
  unsigned __int64 v1346; // [rsp-A0B4h] [rbp-A0C4h]
  int v1347; // [rsp-A0ACh] [rbp-A0BCh]
  __int64 v1348; // [rsp-A0A8h] [rbp-A0B8h]
  int v1349; // [rsp-A0A0h] [rbp-A0B0h]
  __int64 v1350; // [rsp-A09Ch] [rbp-A0ACh]
  char v1351; // [rsp-A090h] [rbp-A0A0h]
  _BYTE v1352[2]; // [rsp-A08Fh] [rbp-A09Fh]
  __int64 v1353; // [rsp-A08Dh] [rbp-A09Dh]
  __int64 v1354; // [rsp-A085h] [rbp-A095h]
  char v1355; // [rsp-A078h] [rbp-A088h]
  _BYTE v1356[2]; // [rsp-A077h] [rbp-A087h]
  __int64 v1357; // [rsp-A075h] [rbp-A085h]
  __int64 v1358; // [rsp-A06Dh] [rbp-A07Dh]
  char v1359; // [rsp-A060h] [rbp-A070h]
  _BYTE v1360[2]; // [rsp-A05Fh] [rbp-A06Fh]
  __int64 v1361; // [rsp-A05Dh] [rbp-A06Dh]
  __int64 v1362; // [rsp-A055h] [rbp-A065h]
  int v1363; // [rsp-A048h] [rbp-A058h] BYREF
  unsigned int v1364; // [rsp-A040h] [rbp-A050h]
  unsigned int v1365; // [rsp-A028h] [rbp-A038h]
  int v1366; // [rsp-A01Ch] [rbp-A02Ch]
  int v1367; // [rsp-A018h] [rbp-A028h]
  int v1368; // [rsp-A014h] [rbp-A024h]
  int v1369; // [rsp-A010h] [rbp-A020h]
  int v1370; // [rsp-A00Ch] [rbp-A01Ch]
  char v1371; // [rsp-9F18h] [rbp-9F28h]
  _BYTE v1372[2]; // [rsp-9F17h] [rbp-9F27h]
  __int64 v1373; // [rsp-9F15h] [rbp-9F25h]
  __int64 v1374; // [rsp-9F0Dh] [rbp-9F1Dh]
  __int64 v1375; // [rsp-9F05h] [rbp-9F15h]
  __int64 v1376; // [rsp-9EFDh] [rbp-9F0Dh]
  __int64 v1377; // [rsp-9EF5h] [rbp-9F05h]
  __int64 v1378; // [rsp-9EE8h] [rbp-9EF8h] BYREF
  unsigned __int16 v1379; // [rsp-9EE0h] [rbp-9EF0h]
  __int16 v1380; // [rsp-9EDEh] [rbp-9EEEh]
  __int64 *v1381; // [rsp-9ED8h] [rbp-9EE8h]
  char v1382; // [rsp-9ED0h] [rbp-9EE0h]
  char v1383; // [rsp-9ECFh] [rbp-9EDFh]
  __int16 v1384; // [rsp-9ECEh] [rbp-9EDEh]
  int v1385; // [rsp-9ECCh] [rbp-9EDCh]
  __int64 v1386; // [rsp-9EC8h] [rbp-9ED8h]
  __int64 v1387; // [rsp-9EC0h] [rbp-9ED0h]
  char v1388; // [rsp-9EB8h] [rbp-9EC8h]
  char v1389; // [rsp-9EB7h] [rbp-9EC7h]
  __int16 v1390; // [rsp-9EB6h] [rbp-9EC6h]
  int v1391; // [rsp-9EB4h] [rbp-9EC4h]
  unsigned __int8 v1392; // [rsp-9EB0h] [rbp-9EC0h] BYREF
  _QWORD v1393[3]; // [rsp-9EA0h] [rbp-9EB0h] BYREF
  __int64 v1394; // [rsp-9E88h] [rbp-9E98h]
  int v1395; // [rsp-9E80h] [rbp-9E90h]
  int v1396; // [rsp-9E7Ch] [rbp-9E8Ch]
  int v1397; // [rsp-9E78h] [rbp-9E88h]
  char v1398; // [rsp-9E70h] [rbp-9E80h]
  char v1399; // [rsp-9E6Fh] [rbp-9E7Fh]
  __int16 v1400; // [rsp-9E6Eh] [rbp-9E7Eh]
  int v1401; // [rsp-9E6Ch] [rbp-9E7Ch]
  unsigned __int8 v1402; // [rsp-9E68h] [rbp-9E78h] BYREF
  __int64 v1403; // [rsp-9E58h] [rbp-9E68h] BYREF
  unsigned __int16 v1404; // [rsp-9E50h] [rbp-9E60h]
  __int16 v1405; // [rsp-9E4Eh] [rbp-9E5Eh]
  __int64 *v1406; // [rsp-9E48h] [rbp-9E58h]
  __int64 v1407; // [rsp-9E40h] [rbp-9E50h] BYREF
  unsigned __int16 v1408; // [rsp-9E38h] [rbp-9E48h]
  __int16 v1409; // [rsp-9E36h] [rbp-9E46h]
  __int64 *v1410; // [rsp-9E30h] [rbp-9E40h]
  char v1411; // [rsp-9E28h] [rbp-9E38h]
  char v1412; // [rsp-9E27h] [rbp-9E37h]
  __int16 v1413; // [rsp-9E26h] [rbp-9E36h]
  __int64 v1414; // [rsp-9E24h] [rbp-9E34h]
  __int64 v1415; // [rsp-9E1Ch] [rbp-9E2Ch]
  unsigned int v1416; // [rsp-9E14h] [rbp-9E24h]
  unsigned int v1417; // [rsp-9E10h] [rbp-9E20h]
  char v1418; // [rsp-9E08h] [rbp-9E18h]
  char v1419; // [rsp-9E07h] [rbp-9E17h]
  __int16 v1420; // [rsp-9E06h] [rbp-9E16h]
  _QWORD v1421[2]; // [rsp-9E04h] [rbp-9E14h] BYREF
  int v1422; // [rsp-9DF4h] [rbp-9E04h]
  int v1423; // [rsp-9DF0h] [rbp-9E00h]
  char v1424; // [rsp-9DE8h] [rbp-9DF8h]
  char v1425; // [rsp-9DE7h] [rbp-9DF7h]
  __int16 v1426; // [rsp-9DE6h] [rbp-9DF6h]
  __int64 v1427; // [rsp-9DE4h] [rbp-9DF4h]
  __int64 v1428; // [rsp-9DDCh] [rbp-9DECh]
  int v1429; // [rsp-9DD4h] [rbp-9DE4h]
  int v1430; // [rsp-9DD0h] [rbp-9DE0h]
  char v1431; // [rsp-9DC8h] [rbp-9DD8h]
  char v1432; // [rsp-9DC7h] [rbp-9DD7h]
  __int16 v1433; // [rsp-9DC6h] [rbp-9DD6h]
  _QWORD v1434[2]; // [rsp-9DC4h] [rbp-9DD4h] BYREF
  int v1435; // [rsp-9DB4h] [rbp-9DC4h]
  int v1436; // [rsp-9DB0h] [rbp-9DC0h]
  char v1437; // [rsp-9DA8h] [rbp-9DB8h]
  char v1438; // [rsp-9DA7h] [rbp-9DB7h]
  __int16 v1439; // [rsp-9DA6h] [rbp-9DB6h]
  __int64 v1440; // [rsp-9DA4h] [rbp-9DB4h]
  __int64 v1441; // [rsp-9D9Ch] [rbp-9DACh]
  int v1442; // [rsp-9D94h] [rbp-9DA4h]
  int v1443; // [rsp-9D90h] [rbp-9DA0h]
  char v1444; // [rsp-9D88h] [rbp-9D98h]
  char v1445; // [rsp-9D87h] [rbp-9D97h]
  __int16 v1446; // [rsp-9D86h] [rbp-9D96h]
  __int64 v1447; // [rsp-9D84h] [rbp-9D94h]
  __int64 v1448; // [rsp-9D7Ch] [rbp-9D8Ch]
  int v1449; // [rsp-9D74h] [rbp-9D84h]
  int v1450; // [rsp-9D70h] [rbp-9D80h]
  char v1451; // [rsp-9D68h] [rbp-9D78h]
  char v1452; // [rsp-9D67h] [rbp-9D77h]
  __int16 v1453; // [rsp-9D66h] [rbp-9D76h]
  __int64 v1454; // [rsp-9D64h] [rbp-9D74h]
  __int64 v1455; // [rsp-9D5Ch] [rbp-9D6Ch]
  int v1456; // [rsp-9D54h] [rbp-9D64h]
  int v1457; // [rsp-9D50h] [rbp-9D60h]
  char v1458; // [rsp-9D48h] [rbp-9D58h]
  char v1459; // [rsp-9D47h] [rbp-9D57h]
  __int16 v1460; // [rsp-9D46h] [rbp-9D56h]
  __int64 v1461; // [rsp-9D44h] [rbp-9D54h]
  unsigned __int64 v1462; // [rsp-9D3Ch] [rbp-9D4Ch]
  int v1463; // [rsp-9D34h] [rbp-9D44h]
  int v1464; // [rsp-9D30h] [rbp-9D40h]
  char v1465; // [rsp-9D28h] [rbp-9D38h]
  char v1466; // [rsp-9D27h] [rbp-9D37h]
  __int16 v1467; // [rsp-9D26h] [rbp-9D36h]
  unsigned __int64 v1468; // [rsp-9D24h] [rbp-9D34h]
  unsigned __int64 v1469; // [rsp-9D1Ch] [rbp-9D2Ch]
  int v1470; // [rsp-9D14h] [rbp-9D24h]
  int v1471; // [rsp-9D10h] [rbp-9D20h]
  char v1472; // [rsp-9D08h] [rbp-9D18h]
  char v1473; // [rsp-9D07h] [rbp-9D17h]
  __int16 v1474; // [rsp-9D06h] [rbp-9D16h]
  __int64 v1475; // [rsp-9D04h] [rbp-9D14h]
  __int64 v1476; // [rsp-9CFCh] [rbp-9D0Ch]
  int v1477; // [rsp-9CF4h] [rbp-9D04h]
  int v1478; // [rsp-9CF0h] [rbp-9D00h]
  char v1479; // [rsp-9CE8h] [rbp-9CF8h]
  char v1480; // [rsp-9CE7h] [rbp-9CF7h]
  __int16 v1481; // [rsp-9CE6h] [rbp-9CF6h]
  __int64 v1482; // [rsp-9CE4h] [rbp-9CF4h]
  __int64 v1483; // [rsp-9CDCh] [rbp-9CECh]
  int v1484; // [rsp-9CD4h] [rbp-9CE4h]
  int v1485; // [rsp-9CD0h] [rbp-9CE0h]
  char v1486; // [rsp-9CC8h] [rbp-9CD8h]
  char v1487; // [rsp-9CC7h] [rbp-9CD7h]
  __int16 v1488; // [rsp-9CC6h] [rbp-9CD6h]
  __int64 v1489; // [rsp-9CC4h] [rbp-9CD4h]
  __int64 v1490; // [rsp-9CBCh] [rbp-9CCCh]
  int v1491; // [rsp-9CB4h] [rbp-9CC4h]
  int v1492; // [rsp-9CB0h] [rbp-9CC0h]
  char v1493; // [rsp-9CA8h] [rbp-9CB8h]
  char v1494; // [rsp-9CA7h] [rbp-9CB7h]
  __int16 v1495; // [rsp-9CA6h] [rbp-9CB6h]
  __int64 v1496; // [rsp-9CA4h] [rbp-9CB4h]
  __int64 v1497; // [rsp-9C9Ch] [rbp-9CACh]
  int v1498; // [rsp-9C94h] [rbp-9CA4h]
  int v1499; // [rsp-9C90h] [rbp-9CA0h]
  char v1500; // [rsp-9C88h] [rbp-9C98h]
  _BYTE v1501[2]; // [rsp-9C87h] [rbp-9C97h]
  __int64 v1502; // [rsp-9C85h] [rbp-9C95h]
  __int64 v1503; // [rsp-9C7Dh] [rbp-9C8Dh]
  __int64 v1504; // [rsp-9C75h] [rbp-9C85h]
  __int64 v1505; // [rsp-9C6Dh] [rbp-9C7Dh]
  __int64 v1506; // [rsp-9C65h] [rbp-9C75h]
  __int64 v1507; // [rsp-9C5Dh] [rbp-9C6Dh]
  __int64 v1508; // [rsp-9C55h] [rbp-9C65h]
  int v1509; // [rsp-9C4Dh] [rbp-9C5Dh]
  int v1510; // [rsp-9C49h] [rbp-9C59h]
  char v1511; // [rsp-9C38h] [rbp-9C48h]
  _BYTE v1512[2]; // [rsp-9C37h] [rbp-9C47h]
  __int64 *v1513; // [rsp-9C35h] [rbp-9C45h]
  __int64 v1514; // [rsp-9C2Dh] [rbp-9C3Dh]
  __int64 v1515; // [rsp-9C25h] [rbp-9C35h]
  __int64 v1516; // [rsp-9C1Dh] [rbp-9C2Dh]
  __int64 v1517; // [rsp-9C15h] [rbp-9C25h]
  __int64 v1518; // [rsp-9C0Dh] [rbp-9C1Dh]
  __int64 v1519; // [rsp-9C05h] [rbp-9C15h]
  int v1520; // [rsp-9BFDh] [rbp-9C0Dh]
  int v1521; // [rsp-9BF9h] [rbp-9C09h]
  char v1522; // [rsp-9BE8h] [rbp-9BF8h]
  _BYTE v1523[2]; // [rsp-9BE7h] [rbp-9BF7h]
  __int64 v1524; // [rsp-9BE5h] [rbp-9BF5h]
  __int64 v1525; // [rsp-9BDDh] [rbp-9BEDh]
  __int64 v1526; // [rsp-9BD5h] [rbp-9BE5h]
  __int64 v1527; // [rsp-9BCDh] [rbp-9BDDh]
  __int64 v1528; // [rsp-9BC5h] [rbp-9BD5h]
  __int64 v1529; // [rsp-9BBDh] [rbp-9BCDh]
  __int64 v1530; // [rsp-9BB5h] [rbp-9BC5h]
  int v1531; // [rsp-9BADh] [rbp-9BBDh]
  int v1532; // [rsp-9BA9h] [rbp-9BB9h]
  __int64 (__fastcall *v1533)(__int64); // [rsp-9B98h] [rbp-9BA8h]
  __int64 v1534; // [rsp-9B90h] [rbp-9BA0h] BYREF
  __int64 (__fastcall *v1535)(_QWORD, _QWORD, char *, _QWORD, __int64, __int64); // [rsp-9B88h] [rbp-9B98h]
  void (__fastcall *v1536)(__int64, _DWORD *); // [rsp-9B80h] [rbp-9B90h]
  void (__fastcall *v1537)(__int64, unsigned int *); // [rsp-9B78h] [rbp-9B88h]
  unsigned int (__fastcall *v1538)(__int64, _BYTE *, __int64); // [rsp-9B70h] [rbp-9B80h]
  __int64 (__fastcall *v1539)(__int64, _BYTE *, __int64); // [rsp-9B68h] [rbp-9B78h]
  void (__fastcall *v1540)(__int64); // [rsp-9B60h] [rbp-9B70h]
  unsigned int (__fastcall *v1541)(__int64, _DWORD *); // [rsp-9B58h] [rbp-9B68h]
  __int64 (__fastcall *v1542)(__int64, _BYTE *, __int64); // [rsp-9B50h] [rbp-9B60h]
  void (__fastcall *v1543)(__int64, _DWORD *); // [rsp-9B48h] [rbp-9B58h]
  __int64 v1544; // [rsp-9B40h] [rbp-9B50h]
  __int64 v1545; // [rsp-9B38h] [rbp-9B48h]
  __int64 v1546; // [rsp-9B30h] [rbp-9B40h]
  unsigned int (__fastcall *v1547)(__int64, _QWORD, __int64, __int64 *, __int64, _DWORD, __int64); // [rsp-9B28h] [rbp-9B38h]
  __int64 v1548; // [rsp-9B20h] [rbp-9B30h]
  __int64 (__fastcall *v1549)(__int64, __int64, unsigned __int16 *, __int64, _QWORD); // [rsp-9B18h] [rbp-9B28h]
  unsigned int (__fastcall *v1550)(__int64, _WORD *, _QWORD); // [rsp-9B10h] [rbp-9B20h]
  __int64 (__fastcall *v1551)(__int64); // [rsp-9B08h] [rbp-9B18h]
  __int64 v1552; // [rsp-9B00h] [rbp-9B10h] BYREF
  __int64 v1553; // [rsp-9AF8h] [rbp-9B08h] BYREF
  __int64 v1554; // [rsp-9AF0h] [rbp-9B00h] BYREF
  void (__fastcall *v1555)(__int64 *); // [rsp-9AE8h] [rbp-9AF8h]
  void (__fastcall *v1556)(__int64); // [rsp-9AE0h] [rbp-9AF0h]
  __int64 (__fastcall *v1557)(__int64, _BYTE *); // [rsp-9AD8h] [rbp-9AE8h]
  __int64 v1558; // [rsp-9AD0h] [rbp-9AE0h] BYREF
  __int64 v1559; // [rsp-9AC8h] [rbp-9AD8h]
  __int64 v1560; // [rsp-9AC0h] [rbp-9AD0h]
  __int64 (__fastcall *v1561)(__int64 *, __int64, int *, _BYTE *, __int64, int); // [rsp-9AB8h] [rbp-9AC8h]
  int (__fastcall *v1562)(__int64, _BYTE *, _QWORD *, __int64, int); // [rsp-9AB0h] [rbp-9AC0h]
  void (__fastcall *v1563)(__int64 *); // [rsp-9AA8h] [rbp-9AB8h]
  __int64 (*v1564)(void); // [rsp-9AA0h] [rbp-9AB0h]
  __int64 v1565; // [rsp-9A98h] [rbp-9AA8h] BYREF
  __int64 v1566; // [rsp-9A90h] [rbp-9AA0h]
  void (__fastcall *v1567)(__int64); // [rsp-9A88h] [rbp-9A98h]
  unsigned int (__fastcall *v1568)(__int64, int *); // [rsp-9A80h] [rbp-9A90h]
  _QWORD v1569[3]; // [rsp-9A78h] [rbp-9A88h] BYREF
  unsigned int (__fastcall *v1570)(__int64, int *); // [rsp-9A60h] [rbp-9A70h]
  __int64 v1571; // [rsp-9A58h] [rbp-9A68h] BYREF
  __int64 v1572; // [rsp-9A50h] [rbp-9A60h] BYREF
  unsigned __int64 v1573; // [rsp-9A48h] [rbp-9A58h] BYREF
  int (__fastcall *v1574)(__int64, __int64, unsigned __int64 *, __int64, _QWORD); // [rsp-9A40h] [rbp-9A50h]
  __int64 (__fastcall *v1575)(__int64, _QWORD, _QWORD); // [rsp-9A38h] [rbp-9A48h]
  _BYTE *v1576; // [rsp-9A30h] [rbp-9A40h]
  __int64 v1577; // [rsp-9A28h] [rbp-9A38h]
  __int64 v1578; // [rsp-9A20h] [rbp-9A30h]
  __int64 v1579; // [rsp-9A18h] [rbp-9A28h] BYREF
  _QWORD v1580[4]; // [rsp-9A10h] [rbp-9A20h] BYREF
  unsigned int (__fastcall *v1581)(_DWORD *, __int64, unsigned int *); // [rsp-99F0h] [rbp-9A00h]
  unsigned int (__fastcall *v1582)(__int64, int *); // [rsp-99E8h] [rbp-99F8h]
  __int64 v1583; // [rsp-99E0h] [rbp-99F0h] BYREF
  __int64 v1584; // [rsp-99D8h] [rbp-99E8h] BYREF
  __int64 (__fastcall *v1585)(__int64, __int64, __int64 *, __int64, _QWORD); // [rsp-99D0h] [rbp-99E0h]
  unsigned __int64 v1586; // [rsp-99C8h] [rbp-99D8h]
  __int64 v1587; // [rsp-99C0h] [rbp-99D0h] BYREF
  unsigned int (__fastcall *v1588)(__int64, _DWORD *); // [rsp-99B8h] [rbp-99C8h]
  __int64 (__fastcall *v1589)(__int64, _QWORD, _QWORD); // [rsp-99B0h] [rbp-99C0h]
  int v1590; // [rsp-99A8h] [rbp-99B8h]
  unsigned int (__fastcall *v1591)(__int64, _DWORD *); // [rsp-99A0h] [rbp-99B0h]
  _BYTE v1592[16]; // [rsp-9998h] [rbp-99A8h] BYREF
  _BYTE v1593[16]; // [rsp-9988h] [rbp-9998h] BYREF
  _WORD v1594[4]; // [rsp-9978h] [rbp-9988h] BYREF
  _WORD *v1595; // [rsp-9970h] [rbp-9980h]
  int v1596; // [rsp-9968h] [rbp-9978h] BYREF
  __int64 v1597; // [rsp-9964h] [rbp-9974h]
  int v1598; // [rsp-995Ch] [rbp-996Ch]
  __int64 v1599; // [rsp-9958h] [rbp-9968h] BYREF
  int v1600; // [rsp-9940h] [rbp-9950h]
  int v1601; // [rsp-9938h] [rbp-9948h]
  int v1602; // [rsp-9934h] [rbp-9944h]
  int v1603; // [rsp-9930h] [rbp-9940h]
  _DWORD v1604[12]; // [rsp-9928h] [rbp-9938h] BYREF
  char v1605; // [rsp-98F8h] [rbp-9908h]
  char v1606; // [rsp-98F7h] [rbp-9907h]
  __int64 v1607; // [rsp-98F6h] [rbp-9906h]
  int v1608; // [rsp-98EEh] [rbp-98FEh]
  int v1609; // [rsp-98EAh] [rbp-98FAh]
  _BYTE v1610[17]; // [rsp-98B8h] [rbp-98C8h] BYREF
  char v1611; // [rsp-98A7h] [rbp-98B7h]
  __int16 v1612; // [rsp-98A6h] [rbp-98B6h]
  int v1613; // [rsp-98A4h] [rbp-98B4h]
  __int16 v1614; // [rsp-98A0h] [rbp-98B0h] BYREF
  _DWORD v1615[8]; // [rsp-9880h] [rbp-9890h] BYREF
  int v1616; // [rsp-9860h] [rbp-9870h]
  int v1617; // [rsp-985Ch] [rbp-986Ch]
  int v1618; // [rsp-9858h] [rbp-9868h]
  __int64 v1619; // [rsp-9850h] [rbp-9860h] BYREF
  __int64 v1620; // [rsp-9838h] [rbp-9848h]
  int v1621; // [rsp-9830h] [rbp-9840h]
  int v1622; // [rsp-982Ch] [rbp-983Ch]
  int v1623; // [rsp-9828h] [rbp-9838h]
  _QWORD v1624[4]; // [rsp-9820h] [rbp-9830h] BYREF
  int v1625; // [rsp-9800h] [rbp-9810h]
  int v1626; // [rsp-97F8h] [rbp-9808h] BYREF
  __int64 v1627; // [rsp-97F0h] [rbp-9800h]
  _WORD *v1628; // [rsp-97E8h] [rbp-97F8h]
  int v1629; // [rsp-97E0h] [rbp-97F0h]
  __int64 v1630; // [rsp-97D8h] [rbp-97E8h]
  __int64 v1631; // [rsp-97D0h] [rbp-97E0h]
  _QWORD v1632[4]; // [rsp-97C8h] [rbp-97D8h] BYREF
  int v1633; // [rsp-97A8h] [rbp-97B8h]
  int v1634; // [rsp-97A4h] [rbp-97B4h]
  int v1635; // [rsp-97A0h] [rbp-97B0h]
  __int64 v1636; // [rsp-9798h] [rbp-97A8h] BYREF
  __int64 v1637; // [rsp-9790h] [rbp-97A0h] BYREF
  __int64 v1638; // [rsp-9788h] [rbp-9798h] BYREF
  __int64 v1639; // [rsp-9780h] [rbp-9790h] BYREF
  __int64 v1640; // [rsp-9778h] [rbp-9788h] BYREF
  __int64 v1641; // [rsp-9770h] [rbp-9780h] BYREF
  __int64 v1642; // [rsp-9768h] [rbp-9778h] BYREF
  _BYTE v1643[32]; // [rsp-9760h] [rbp-9770h] BYREF
  int v1644; // [rsp-9740h] [rbp-9750h]
  __int64 v1645; // [rsp-9738h] [rbp-9748h] BYREF
  __int64 v1646; // [rsp-9720h] [rbp-9730h]
  _BYTE v1647[17]; // [rsp-9718h] [rbp-9728h]
  char v1648; // [rsp-9707h] [rbp-9717h]
  _BYTE v1649[238]; // [rsp-9706h] [rbp-9716h] BYREF
  _BYTE v1650[260]; // [rsp-9618h] [rbp-9628h] BYREF
  _DWORD v1651[9]; // [rsp-9510h] [rbp-9520h] BYREF
  char v1652; // [rsp-94ECh] [rbp-94FCh]
  _QWORD v1653[6]; // [rsp-94E0h] [rbp-94F0h] BYREF
  _DWORD v1654[10]; // [rsp-94B0h] [rbp-94C0h] BYREF
  _DWORD v1655[10]; // [rsp-9488h] [rbp-9498h] BYREF
  _DWORD v1656[10]; // [rsp-9460h] [rbp-9470h] BYREF
  _DWORD v1657[10]; // [rsp-9438h] [rbp-9448h] BYREF
  _QWORD v1658[5]; // [rsp-9410h] [rbp-9420h] BYREF
  __int64 v1659; // [rsp-93E8h] [rbp-93F8h] BYREF
  char v1660; // [rsp-93B0h] [rbp-93C0h]
  __int64 v1661; // [rsp-93A8h] [rbp-93B8h] BYREF
  char v1662; // [rsp-9370h] [rbp-9380h]
  __int64 v1663; // [rsp-9368h] [rbp-9378h] BYREF
  char v1664; // [rsp-9330h] [rbp-9340h]
  _DWORD v1665[6]; // [rsp-9328h] [rbp-9338h] BYREF
  unsigned __int64 v1666; // [rsp-9310h] [rbp-9320h]
  unsigned int v1667; // [rsp-9308h] [rbp-9318h]
  int v1668; // [rsp-92F8h] [rbp-9308h]
  int v1669; // [rsp-92F4h] [rbp-9304h]
  int v1670; // [rsp-92F0h] [rbp-9300h]
  int v1671; // [rsp-92ECh] [rbp-92FCh]
  char v1672; // [rsp-90E8h] [rbp-90F8h]
  char v1673; // [rsp-90E7h] [rbp-90F7h]
  __int16 v1674; // [rsp-90E6h] [rbp-90F6h]
  unsigned int v1675; // [rsp-90E4h] [rbp-90F4h]
  __int16 v1676; // [rsp-90E0h] [rbp-90F0h]
  unsigned int v1677; // [rsp-90DEh] [rbp-90EEh]
  __int64 v1678; // [rsp-90DAh] [rbp-90EAh] BYREF
  _BYTE v1679[266]; // [rsp-90D2h] [rbp-90E2h] BYREF
  _BYTE v1680[128]; // [rsp-8FC8h] [rbp-8FD8h] BYREF
  _BYTE v1681[288]; // [rsp-8F48h] [rbp-8F58h] BYREF
  _WORD v1682[128]; // [rsp-8E28h] [rbp-8E38h] BYREF
  _BYTE v1683[256]; // [rsp-8D28h] [rbp-8D38h] BYREF
  _BYTE v1684[256]; // [rsp-8C28h] [rbp-8C38h] BYREF
  _DWORD v1685[128]; // [rsp-8B28h] [rbp-8B38h] BYREF
  _WORD v1686[256]; // [rsp-8928h] [rbp-8938h] BYREF
  _DWORD v1687[28]; // [rsp-8728h] [rbp-8738h] BYREF
  __int64 v1688; // [rsp-86B8h] [rbp-86C8h]
  __int64 v1689; // [rsp-8690h] [rbp-86A0h]
  _BYTE v1690[512]; // [rsp-8258h] [rbp-8268h] BYREF
  _DWORD v1691[1024]; // [rsp-8058h] [rbp-8068h] BYREF
  _BYTE v1692[4096]; // [rsp-7058h] [rbp-7068h] BYREF
  unsigned __int16 v1693; // [rsp-6058h] [rbp-6068h] BYREF
  __int64 v1694; // [rsp-6050h] [rbp-6060h]
  _BYTE v1695[60]; // [rsp-5C58h] [rbp-5C68h] BYREF
  int v1696; // [rsp-5C1Ch] [rbp-5C2Ch]
  __int64 v1697; // [rsp-5958h] [rbp-5968h] BYREF
  __int64 v1698; // [rsp-4C58h] [rbp-4C68h] BYREF
  _WORD v1699[2048]; // [rsp-4C48h] [rbp-4C58h] BYREF
  __int64 v1700; // [rsp-3C48h] [rbp-3C58h] BYREF
  __int64 v1701; // [rsp-3A48h] [rbp-3A58h] BYREF
  _DWORD v1702[400]; // [rsp-3848h] [rbp-3858h] BYREF
  _BYTE v1703[4096]; // [rsp-3208h] [rbp-3218h] BYREF
  _BYTE v1704[4096]; // [rsp-2208h] [rbp-2218h] BYREF
  __int64 v1705; // [rsp-1208h] [rbp-1218h] BYREF
  _BYTE v1706[4120]; // [rsp-1008h] [rbp-1018h] BYREF
  int v1707; // [rsp+18h] [rbp+8h]
  __int64 v1708; // [rsp+20h] [rbp+10h]
  __int64 (__fastcall *v1709)(char *); // [rsp+28h] [rbp+18h]
  unsigned __int8 *v1710; // [rsp+30h] [rbp+20h]

  v48 = a4;
  v45 = a3;
  v43 = a2;
  v5 = alloca(sub_15E36());
  strcpy(v291, "KERNEL32.dll");
  v79 = v1709(v291);
  v138 = 1;
  strcpy(v384, "BEClient_x64.dll");
  v1234 = v1709(v384);
  if ( v1234 && *(_DWORD *)(v1234 + *(int *)(v1234 + 60) + 8) >= 0x5D7AA2AFu )
    v78 = a5;
  else
    v78 = &v138;
  strcpy(v339, "GetTickCount");
  v1258 = (__int64 (*)(void))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v339);
  strcpy(v333, "CloseHandle");
  v77 = (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v333);
  strcpy(v383, "OpenProcessToken");
  v1271 = (unsigned int (__fastcall *)(__int64, __int64, __int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                      v79,
                                                                      v383);
  if ( v1271 && v1271(-1i64, 32i64, &v1274) )
  {
    strcpy(v294, "advapi32.dll");
    strcpy(v406, "LookupPrivilegeValueA");
    v6 = v1709(v294);
    v1272 = (unsigned int (__fastcall *)(_QWORD, char *, __int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                      v6,
                                                                      v406);
    if ( v1272 )
    {
      strcpy(v378, "SeDebugPrivilege");
      if ( v1272(0i64, v378, &v1534) )
      {
        v1596 = 1;
        v1597 = v1534;
        v1598 = 2;
        strcpy(v405, "AdjustTokenPrivileges");
        v7 = v1709(v294);
        v1273 = (void (__fastcall *)(__int64, _QWORD, int *, _QWORD, _QWORD, _QWORD, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                                v7,
                                                                                                v405);
        if ( v1273 )
          v1273(v1274, 0i64, &v1596, 0i64, 0i64, 0i64, v48);
      }
    }
    v77(v1274);
  }
  strcpy(v317, "ntdll.dll");
  v141 = v1709(v317);
  strcpy(v404, "NtQueryVirtualMemory");
  v117 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, char *))v1710)(v141, v404);
  strcpy(v409, "NtProtectVirtualMemory");
  v462 = (int (__fastcall *)(__int64, _BYTE **, __int64 *, __int64, unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                      v141,
                                                                                      v409);
  strcpy(v338, "IsBadReadPtr");
  v8 = v1709(v291);
  v426 = ((__int64 (__fastcall *)(__int64, char *))v1710)(v8, v338);
  v1206 = ~v426;
  strcpy(v401, "NtReadVirtualMemory");
  v71 = (int (__fastcall *)(__int64, __int64, _BYTE *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                          v141,
                                                                          v401);
  strcpy(v166, "msvcrt.dll");
  strcpy(v300, "memcpy");
  v9 = v1709(v166);
  v1292 = (void (__fastcall *)(_BYTE *, unsigned __int64, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                     v9,
                                                                     v300);
  strcpy(v299, "memcmp");
  v10 = v1709(v166);
  v1291 = (unsigned int (__fastcall *)(_BYTE *, _BYTE *, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                    v10,
                                                                    v299);
  strcpy(v400, "GetCurrentProcessId");
  v157 = (unsigned int (*)(void))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v400);
  strcpy(v334, "OpenProcess");
  v105 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v334);
  v13 = ((__int64 (__fastcall *)(__int64, __int64))v157)(v12, v11);
  v161 = v105(1048i64, 0i64, v13);
  strcpy(v293, "Sleep");
  v525 = (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v293);
  strcpy(v298, "malloc");
  v14 = v1709(v166);
  v1215 = (__int64 (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v14, v298);
  strcpy(v303, "realloc");
  v15 = v1709(v166);
  v463 = (__int64 (__fastcall *)(unsigned int *, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v15, v303);
  strcpy(v292, "free");
  v16 = v1709(v166);
  v289 = (void (__fastcall *)(unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(v16, v292);
  strcpy(v414, "NtQuerySystemInformation");
  v162 = (__int64 (__fastcall *)(__int64, unsigned int *, __int64, unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                     v141,
                                                                                     v414);
  strcpy(v127, "USER32.dll");
  strcpy(v337, "GetTopWindow");
  v17 = v1709(v127);
  v1279 = (unsigned __int8 *)((__int64 (__fastcall *)(__int64, char *))v1710)(v17, v337);
  strcpy(v314, "GetWindow");
  v18 = v1709(v127);
  v279 = (__int64 (__fastcall *)(__int64, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v18, v314);
  strcpy(v358, "FindWindowExA");
  v19 = v1709(v127);
  v1535 = (__int64 (__fastcall *)(_QWORD, _QWORD, char *, _QWORD, __int64, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                      v19,
                                                                                      v358);
  strcpy(v415, "GetWindowThreadProcessId");
  v20 = v1709(v127);
  v1537 = (void (__fastcall *)(__int64, unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(v20, v415);
  strcpy(v368, "GetWindowLongA");
  v21 = v1709(v127);
  v431 = (__int64 (__fastcall *)(__int64, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v21, v368);
  v77(v161);
  v24 = ((__int64 (__fastcall *)(__int64, __int64))v157)(v23, v22);
  v161 = v105(2035711i64, 0i64, v24);
  strcpy(v351, "GetLastError");
  v273 = (unsigned int (*)(void))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v351);
  strcpy(v367, "GetWindowTextA");
  v25 = v1709(v127);
  v578 = (__int64 (__fastcall *)(__int64, int *, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v25, v367);
  strcpy(v365, "GetClassNameA");
  v26 = v1709(v127);
  v1538 = (unsigned int (__fastcall *)(__int64, _BYTE *, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                    v26,
                                                                    v365);
  strcpy(v366, "GetWindowTextW");
  v27 = v1709(v127);
  v1539 = (__int64 (__fastcall *)(__int64, _BYTE *, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v27, v366);
  strcpy(v359, "GetClassNameW");
  v28 = v1709(v127);
  v1542 = (__int64 (__fastcall *)(__int64, _BYTE *, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v28, v359);
  strcpy(v364, "GetWindowRect");
  v29 = v1709(v127);
  v1543 = (void (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(v29, v364);
  strcpy(v422, "QueryFullProcessImageNameW");
  v30 = v1709(v291);
  v603 = (unsigned int (__fastcall *)(__int64, _QWORD, _BYTE *, unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                  v30,
                                                                                  v422);
  strcpy(v395, "WideCharToMultiByte");
  v267 = (__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD, __int64, int, _QWORD, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                                     v79,
                                                                                                     v395);
  strcpy(v403, "GetFileAttributesExA");
  v1252 = (unsigned int (__fastcall *)(char *, _QWORD, _BYTE *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                  v79,
                                                                  v403);
  strcpy(v402, "GetFileAttributesExW");
  v605 = (unsigned int (__fastcall *)(_BYTE *, _QWORD, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                   v79,
                                                                   v402);
  v53 = v1215(21504i64);
  *(_BYTE *)v53 = 0;
  *(_BYTE *)(v53 + 1) = 75;
  *(_DWORD *)(v53 + 2) = v1707;
  v63 = v1215(20480i64);
  *(_BYTE *)v63 = 0;
  *(_BYTE *)(v63 + 1) = 60;
  v52 = 4;
  strcpy(v363, "GetClientRect");
  v31 = v1709(v127);
  v1536 = (void (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(v31, v363);
  strcpy(v374, "ClientToScreen");
  v32 = v1709(v127);
  v1275 = (void (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(v32, v374);
  strcpy(v416, "GetWindowDisplayAffinity");
  v33 = v1709(v127);
  v1277 = (unsigned int (__fastcall *)(__int64, int *))((__int64 (__fastcall *)(__int64, char *))v1710)(v33, v416);
  strcpy(v362, "UnityWndClass");
  v1198 = v1535(0i64, 0i64, v362, 0i64, v43, v45);
  v1536(v1198, v1248);
  v1275(v1198, v1248);
  v1275(v1198, v1249);
  *(_BYTE *)(v53 + 7) = 0;
  *(_BYTE *)(v53 + 8) = 3;
  *(_WORD *)(v53 + 6) = 5;
  for ( i = 0; i < 5; ++i )
    *(_BYTE *)(v53 + i + 8) = *(_BYTE *)(v53 + i + 8);
  v49 = 13i64;
  *(_WORD *)(v53 + 6) += 6;
  v280 = 0;
  v137 = 0;
  v98 = 0;
  v116 = ((__int64 (__fastcall *)(_QWORD))v1279)(0i64);
  if ( v116 )
  {
    v472 = 0i64;
    while ( 1 )
    {
      *(_DWORD *)v1650 = 0;
      v126 = -1;
      v1537(v116, &v255);
      if ( v255 != v157() )
      {
        v126 = v578(v116, (int *)&v1650[2], 128i64);
        for ( j = 0; ; ++j )
        {
          if ( j >= v126 - 5 )
            goto LABEL_33;
          if ( *(_DWORD *)&v1650[j + 2] == 1685022787 && *(_WORD *)&v1650[j + 6] == 29479
            || *(_DWORD *)&v1650[j + 2] == 1635017043 && *(_WORD *)&v1650[j + 6] == 13678
            || *(_DWORD *)&v1650[j + 2] == 1852990827 && *(_DWORD *)&v1650[j + 6] == 1751346277 )
          {
            break;
          }
        }
        v1650[0] = 0;
        v1650[1] = 51;
        if ( v49 + v126 + 1 + 2 <= 0x5400 )
        {
          *(_WORD *)(v49 + v53) = v126 + 1;
          for ( k = 0; k < v126 + 1; ++k )
            *(_BYTE *)(v53 + k + v49 + 2) = v1650[k + 1];
          v49 += v126 + 3;
        }
      }
LABEL_33:
      if ( v1538(v116, v1650, 64i64) && *(_DWORD *)v1650 == 1802723668 && *(_DWORD *)&v1650[4] == 1634623821 )
        v98 = 1;
      v106 = v431(v116, 4294967280i64);
      if ( (v106 & 0x10000000) == 0 && (*(_DWORD *)v1650 != 1632654157 || *(_DWORD *)&v1650[4] != 1098149481) )
      {
        v1276 = v105(4096i64, 0i64, v255);
        if ( v1276 )
        {
          v77(v1276);
          goto LABEL_284;
        }
        if ( v273() != 87 )
          goto LABEL_284;
      }
      ++v280;
      v154 = v52;
      if ( v255 == v157() )
      {
        *(_BYTE *)(v63 + v52++) = 0;
      }
      else
      {
        v113 = v1539(v116, v1680, 64i64);
        v514 = v267(65001i64, 0i64, (__int64 *)v1680, v113, v63 + v52 + 1, 255, 0i64, 0i64);
        *(_BYTE *)(v63 + v52) = v514;
        v52 += (unsigned __int8)v514 + 1;
      }
      v113 = v1542(v116, v1680, 64i64);
      v513 = v267(65001i64, 0i64, (__int64 *)v1680, v113, v63 + v52 + 1, 255, 0i64, 0i64);
      *(_BYTE *)(v63 + v52) = v513;
      if ( (_BYTE)v513
        && *(_BYTE *)(v63 + v52) == 7
        && *(_DWORD *)(v63 + v52 + 1) == 1702129486
        && *(_WORD *)(v63 + v52 + 5) == 24944
        && *(_BYTE *)(v63 + v52 + 7) == 100 )
      {
        v137 = 1;
      }
      v52 += *(unsigned __int8 *)(v63 + v52) + 1;
      v661 = v105(4096i64, 0i64, v255);
      v113 = 128;
      v512 = v661
          && v603(v661, 0i64, v1683, &v113)
          && (v113 = v267(65001i64, 0i64, (__int64 *)v1683, v113, v63 + v52 + 1, 255, 0i64, 0i64)) != 0;
      v99 = v512;
      if ( v661 )
        v77(v661);
      v107 = v431(v116, 4294967276i64);
      v1543(v116, v1217);
      if ( v1277 )
      {
        if ( v1277(v116, &v1233)
          && v1233
          && v1217[0] <= v1248[0]
          && v1217[1] <= v1248[1]
          && v1217[2] >= v1249[0]
          && v1217[3] >= v1249[1] )
        {
          break;
        }
      }
      if ( *(_WORD *)(v63 + v154 + 1) == 20551 && *(_BYTE *)(v63 + v154 + 3) == 83
        || *(_DWORD *)(v63 + v154 + 1) == 1768383809
        || *(_DWORD *)(v63 + v154 + 1) == 1936681031 && *(_WORD *)(v63 + v154 + 5) == 30580 )
      {
        break;
      }
      v139 = 0;
      for ( m = v279(v116, 5i64); m; m = v279(m, 2i64) )
      {
        if ( (unsigned int)v578(m, &v159, 32i64)
          && ((v159 == 1868784978 || v159 == 1868785010) && (__int16)v160 == 27753
           || (v159 == 1378709326 || v159 == 1915580238) && v160 == 1768907621
           || (v159 == 1734963796 || v159 == 1734963828) && v160 == 1651664231
           || v159 == 1768972626
           && (v160 == 1919501924 || v160 == 1919510116 || v160 == 1766203492 || v160 == 1768300644)
           || v159 == 1801548388 && v160 == 1634299503) )
        {
          ++v139;
        }
        for ( n = v279(m, 5i64); n; n = v279(n, 2i64) )
        {
          if ( (unsigned int)v578(n, &v159, 32i64)
            && ((v159 == 1868784978 || v159 == 1868785010) && (__int16)v160 == 27753
             || (v159 == 1378709326 || v159 == 1915580238) && v160 == 1768907621
             || (v159 == 1734963796 || v159 == 1734963828) && v160 == 1651664231
             || v159 == 1768972626
             && (v160 == 1919501924 || v160 == 1919510116 || v160 == 1766203492 || v160 == 1768300644)
             || v159 == 1801548388 && v160 == 1634299503
             || v159 == 1851877443 && v160 == 623404387
             || v159 == 975775016) )
          {
            ++v139;
          }
          for ( ii = v279(n, 5i64); ii; ii = v279(ii, 2i64) )
          {
            if ( (unsigned int)v578(ii, &v159, 32i64)
              && ((v159 == 1868784978 || v159 == 1868785010) && (__int16)v160 == 27753
               || (v159 == 1378709326 || v159 == 1915580238) && v160 == 1768907621
               || (v159 == 1734963796 || v159 == 1734963828) && v160 == 1651664231
               || v159 == 1768972626
               && (v160 == 1919501924 || v160 == 1919510116 || v160 == 1766203492 || v160 == 1768300644)
               || v159 == 1801548388 && v160 == 1634299503) )
            {
              ++v139;
            }
          }
        }
      }
      if ( v139 )
      {
        v106 |= 0x40000000u;
        goto LABEL_270;
      }
      if ( v472 && (v107 & 0x80000) != 0 || (v106 & 0x10000000) == 0 )
      {
        v106 |= 0x40000000u;
        goto LABEL_270;
      }
      if ( (v107 & 0x80000) != 0 && (v107 & 8) != 0 )
        goto LABEL_270;
      v50 = v107 | v106;
      if ( (v107 | v106) == 349110528
        || v50 == 885981440
        || v50 == 351208208
        || v50 == 888079120
        || v50 == 351207696
        || v50 == 888078608
        || v50 == 386465824
        || v50 == 386465792
        || v50 == 369688608
        || v50 == -1811415008
        || v50 == -1811414912
        || v50 == -1677197184 )
      {
        goto LABEL_270;
      }
      if ( (v50 == 382664960 || v50 == 919535872)
        && (*(_DWORD *)&v1650[2] == 1852399949 && *(_DWORD *)&v1650[6] == 1684957527 || (v107 & 0x80000) != 0) )
      {
        goto LABEL_270;
      }
      if ( v50 == 399442176 && !v126
        || (v50 & 0xFFFFF) == 763808
        || (v50 & 0xFFFFF) == 525091
        || (v50 & 0xFFFFF) == 592421
        || (v50 & 0xFFFFF) == 592485
        || v50 == 369754240
        || v50 == 382337032
        || (v50 & 0xFFFFF) == 917889
        || (v50 & 0xFFFFF) == 917632
        || v50 == -703987584
        || v50 == -704118527
        || v50 == 369950752
        || v50 == -1811414880
        || v50 == 382664961
        || v50 == 919535873
        || v50 == 369950720
        || v50 == -1811415040
        || v50 == -1811939328 && !v126
        || v50 == 381812992
        || v50 == 382206208
        || v50 == 369623168
        || v50 == 369885184
        || v50 == 503906464
        || v50 == -1668808672
        || v50 == -1677197152
        || v50 == -1677197276
        || v50 == -1677197280
        || v50 == 352913568
        || v50 == 369229832
        || v50 == -1677197312
        || v50 == -737673056
        || v50 == -1811939312
        || v50 == -1275068400
        || v50 == -1803026400
        || v50 == 504168488
        || v50 == 336068768
        || v50 == 336068640
        || v50 == 336068736
        || v50 == -1668808160
        || v50 == -1777663840
        || v50 == 336136352
        || v50 == 369754112
        || v50 == -1777855312
        || v50 == -1660420096
        || v50 == 382337288
        || v50 == 919208200
        || v50 == 369623200
        || v50 == -1675689673
        || v50 == 369754144
        || v50 == -1675689545
        || v50 == -1811414496
        || (v107 & 0x80000) != 0
        && (*(_WORD *)(v63 + v52 + 1) == 19785 && *(_BYTE *)(v63 + v52 + 3) == 69
         || *(_DWORD *)(v63 + v52 + 1) == 1413698381
         || *(_DWORD *)&v1650[2] == 1953784130 && *(_DWORD *)&v1650[6] == 1702446444
         || *(_DWORD *)(v63 + v52 + 1) == 1802661719 && *(_WORD *)(v63 + v52 + 6) == 22386 && (v50 & 0xF) != 0
         || v1217[0] == -1 && v1217[1] == -1)
        || v50 == -1677131616
        || v50 == -1777860576
        || v50 == -1777860448
        || v50 == -1676148576
        || v50 == -1673002848
        || v50 == -704118752
        || v107 == 5767328
        || (v107 & 0x80024) == 524324
        || v50 == -1642594144
        || v50 == 470286496
        || (v50 & 0x9C090020) == -1677131744
        || v50 == -1803026432
        || v50 == -1660420064
        || v50 == -603324384
        || v50 == 470352032
        || v50 == -1776746336
        || v50 == -1773469536
        || v107 == 786592
        || v50 == -1642577760
        || v50 == 474480672
        || v50 == -1643380576
        || v50 == 382599425
        || v50 == 919470337
        || v50 == -1777793888
        || v50 == 351011088
        || v50 == -1676935008
        || v50 == -1803025760
        || v50 == -1677196768
        || v50 == -1677041568
        || v50 == 349110536
        || v50 == 885981448
        || v50 == 352845856
        || v50 == 348782849
        || v50 == 885653761
        || v50 == 369229824
        || v50 == -1811939192
        || (v50 & 0xD00800A0) == -804781920
        || v50 == -1778384896
        || v50 == -1777729376
        || v50 == -1666711520
        || v50 == -1777729408
        || v50 == -1811741696
        || v50 == -1778187264
        || v50 == -1677131700
        || v50 == -1798503987 )
      {
        goto LABEL_270;
      }
      v52 = v154;
LABEL_280:
      if ( !v472 && v255 == v157() && (v1278 = v279(v116, 5i64)) != 0 )
      {
        v472 = v116;
        v116 = v1278;
      }
      else
      {
LABEL_284:
        while ( 1 )
        {
          v116 = v279(v116, 2i64);
          if ( v116 )
          {
            if ( v52 <= 20092 )
              break;
          }
          if ( !v472 )
            goto LABEL_288;
          v116 = v472;
          v472 = 0i64;
        }
      }
    }
    v106 |= 0x40000000u;
LABEL_270:
    if ( v99 )
    {
      if ( v605(v1683, 0i64, v1654) )
        v511 = v1654[8];
      else
        v511 = 0;
      v494 = v511;
    }
    else
    {
      v494 = 0;
    }
    if ( v99 )
      v446 = v113;
    else
      v446 = 0;
    *(_BYTE *)(v63 + v52) = v446;
    v52 += (unsigned __int8)v446 + 1;
    *(_DWORD *)(v63 + v52) = v494;
    *(_DWORD *)(v63 + v52 + 4) = v106;
    *(_DWORD *)(v63 + v52 + 8) = v107;
    qmemcpy((void *)(v63 + v52 + 12), v1217, 0x10ui64);
    v52 += 28;
    goto LABEL_280;
  }
LABEL_288:
  *(_WORD *)(v63 + 2) = v52 - 4;
  v52 += 2;
  if ( !v280 )
  {
    v277 = 0;
    v278[0] = 68;
    v278[1] = 0;
    if ( v49 + 4 <= 0x5400 )
    {
      *(_WORD *)(v49 + v53) = 2;
      for ( jj = 0; (unsigned __int64)jj < 2; ++jj )
        *(_BYTE *)(v53 + jj + v49 + 2) = v278[jj];
      v49 += 4i64;
    }
  }
  strcpy(v376, "DuplicateHandle");
  v1547 = (unsigned int (__fastcall *)(__int64, _QWORD, __int64, __int64 *, __int64, _DWORD, __int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v376);
  strcpy(v387, "GetCurrentProcess");
  v604 = (__int64 (*)(void))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v387);
  strcpy(v361, "NtQueryObject");
  v1549 = (__int64 (__fastcall *)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                           v141,
                                                                                           v361);
  strcpy(v316, "_wcsnicmp");
  v34 = v1709(v166);
  v1550 = (unsigned int (__fastcall *)(__int64, _WORD *, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                   v34,
                                                                   v316);
  strcpy(v345, "GetProcessId");
  v1551 = (__int64 (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v345);
  v80 = -1;
  v70 = -1;
  v90 = 0i64;
  v253 = 32;
  do
  {
    v253 += 1024;
    v90 = (unsigned int *)v463(v90, v253);
    if ( !v90 )
      break;
    v70 = v162(16i64, v90, v253, &v253);
  }
  while ( v70 == -1073741820 );
  if ( v90 && v70 >= 0 )
  {
    v129 = -1;
    for ( kk = 0; *v78 && kk < *v90 && v52 <= 20191; ++kk )
    {
      if ( HIWORD(v90[6 * kk + 3]) == v161 )
      {
        v1544 = 24i64 * (int)kk;
        if ( v90[(unsigned __int64)v1544 / 4 + 2] == v157() && v80 && v80 == -1 )
          v80 = 999;
      }
      if ( v129 == -1 || LOBYTE(v90[6 * kk + 3]) == v129 )
      {
        v1545 = 24i64 * (int)kk;
        if ( v90[(unsigned __int64)v1545 / 4 + 2] != v157() )
        {
          v580 = v105(64i64, 0i64, v90[6 * kk + 2]);
          if ( v580 )
          {
            v35 = v604();
            LODWORD(v48) = 0;
            LODWORD(v44) = 1024;
            if ( v1547(v580, HIWORD(v90[6 * kk + 3]), v35, &v1199, v44, 0, v48) )
            {
              if ( v129 == -1 )
              {
                v1080[0] = 80;
                v1080[1] = 114;
                v1080[2] = 111;
                v1080[3] = 99;
                v1080[4] = 101;
                v1080[5] = 115;
                v1080[6] = 115;
                v1080[7] = 0;
                v70 = v1549(v1199, 2i64, &v1693, 1024i64, 0i64);
                if ( v70 < 0 || v1550(v1694, v1080, v1693 / 2) )
                {
                  if ( v70 < 0 && v80 )
                    v80 = v70;
                }
                else
                {
                  v129 = LOBYTE(v90[6 * kk + 3]);
                }
              }
              if ( v129 != -1 && (v1232 = v1551(v1199), v1232 == v157()) && (v90[6 * kk + 6] & 0x30) != 0 )
              {
                v579 = v105(4096i64, 0i64, v90[6 * kk + 2]);
                v1686[0] = 0;
                v252 = 256;
                if ( v579
                  && v603(v579, 0i64, v1686, &v252)
                  && (v252 = v267(65001i64, 0i64, (__int64 *)v1686, v252, v63 + v52 + 1, 255, 0i64, 0i64)) != 0 )
                {
                  *(_BYTE *)(v63 + v52) = v252;
                }
                else
                {
                  v1378 = v90[6 * kk + 2];
                  v1379 = 0;
                  v1380 = 512;
                  v1381 = &v1700;
                  if ( (int)v162(88i64, (unsigned int *)&v1378, 24i64, 0i64) < 0 )
                  {
                    *(_BYTE *)(v63 + v52) = 0;
                  }
                  else
                  {
                    _mm_lfence();
                    v1559 = v63 + v52 + 1;
                    *(_BYTE *)(v63 + v52) = v267(65001i64, 0i64, v1381, v1379 / 2, v1559, 255, 0i64, 0i64);
                  }
                }
                if ( v579 )
                  v77(v579);
                if ( *(_BYTE *)(v63 + v52) )
                {
                  if ( v605(v1686, 0i64, v1655) )
                    v493 = v1655[8];
                  else
                    v493 = 0;
                  v504 = v493;
                }
                else
                {
                  v504 = 0;
                }
                v52 += *(unsigned __int8 *)(v63 + v52) + 1;
                *(_DWORD *)(v63 + v52) = v504;
                v52 += 4;
                *(_DWORD *)(v63 + v52) = v90[6 * kk + 6];
                v52 += 4;
                v80 = 0;
              }
              else if ( v129 != -1 && HIWORD(v90[6 * kk + 3]) == v161 )
              {
                v1560 = 24i64 * (int)kk;
                if ( v90[(unsigned __int64)v1560 / 4 + 2] == v157() )
                {
                  if ( v80 )
                    v80 = v90[6 * kk + 6];
                }
              }
              v77(v1199);
              v77(v580);
            }
            else
            {
              v77(v580);
              if ( HIWORD(v90[6 * kk + 3]) == v161 )
              {
                v1548 = 24i64 * (int)kk;
                if ( v90[(unsigned __int64)v1548 / 4 + 2] == v157() )
                {
                  if ( v80 )
                    v80 = 2;
                }
              }
            }
          }
          else if ( HIWORD(v90[6 * kk + 3]) == v161 )
          {
            v1546 = 24i64 * (int)kk;
            if ( v90[(unsigned __int64)v1546 / 4 + 2] == v157() )
              v80 = v80 != 0;
          }
        }
      }
    }
    if ( v129 == -1 )
      v80 += 200;
  }
  else
  {
    v80 = v70 + 100;
  }
  if ( v80 )
  {
    *(_DWORD *)(v63 + v52) = v80;
    v52 += 4;
  }
  if ( *(_DWORD *)(v1708 + 5) == -858993460 && *(_DWORD *)(v1708 + 1377994) == -803035 )
    *(_QWORD *)(v1708 + 196656) = *(_QWORD *)(v1708 + 1377998);
  if ( v90 )
    v289(v90);
  if ( *v78 )
  {
    *(_WORD *)(v63 + *(unsigned __int16 *)(v63 + 2) + 4) = v52 - 4 - *(_WORD *)(v63 + 2) - 2;
    strcpy(v377, "GetProcessTimes");
    v274 = (unsigned int (__fastcall *)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                               v79,
                                                                                               v377);
    *(_DWORD *)(v63 + v52) = 0;
    *(_DWORD *)(v63 + v52 + 4) = 0;
    *(_DWORD *)(v63 + v52 + 8) = 0;
    v52 += 12;
    *(_DWORD *)(v63 + v52) = 0;
    v52 += 4;
    for ( mm = v117; ; mm = *(unsigned __int8 **)&mm[*(int *)(mm + 2) + 6] )
    {
      while ( *mm == 233 )
        mm += *(_DWORD *)(mm + 1) + 5;
      if ( *(_WORD *)mm != 9727 )
        break;
    }
    if ( *(unsigned __int8 *)v431 == 184 || *(unsigned __int16 *)v431 == 47176 || *(unsigned __int8 *)v431 == 195 )
    {
      mm = (unsigned __int8 *)v431;
    }
    else
    {
      for ( nn = 0; nn < 3; ++nn )
      {
        if ( nn )
        {
          if ( nn == 1 )
            v1280 = (unsigned __int8 *)v279;
          else
            v1280 = (unsigned __int8 *)v431;
          v1281 = v1280;
        }
        else
        {
          v1281 = v1279;
        }
        for ( i1 = v1281; ; mm = i1 )
        {
          while ( *i1 == 233 || *i1 == 232 )
          {
            i1 += *(_DWORD *)(i1 + 1) + 5;
            mm = i1;
          }
          if ( *(_WORD *)i1 != 9727 )
            break;
          i1 = *(unsigned __int8 **)&i1[*(int *)(i1 + 2) + 6];
        }
      }
    }
    strcpy(v382, "vcruntime140.dll");
    v1200 = v1709(v382);
    if ( v1200 )
    {
      if ( (strcpy(v297, "memcpy"),
            strcpy(v302, "memmove"),
            (v430 = ((__int64 (__fastcall *)(__int64, char *))v1710)(v1200, v297)) != 0)
        && *(_WORD *)v430 == 9727
        || (v430 = ((__int64 (__fastcall *)(__int64, char *))v1710)(v1200, v302)) != 0 && *(_WORD *)v430 == 9727 )
      {
        mm = *(unsigned __int8 **)(v430 + *(int *)(v430 + 2) + 6);
      }
    }
    strcpy(v393, "GetCurrentThreadId");
    v1201 = ((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v393);
    if ( *(_WORD *)v1201 == 9727 )
      mm = *(unsigned __int8 **)(v1201 + *(int *)(v1201 + 2) + 6);
    if ( *v1710 == 204 )
      mm = v1710;
    strcpy(v1247, "UnityPlayer.dll");
    v473 = v1709(v1247);
    if ( v473 )
    {
      v312[0] = 72;
      v312[1] = -123;
      v312[2] = -46;
      v312[3] = 116;
      v312[4] = 4;
      v312[5] = -117;
      v312[6] = -53;
      v312[7] = -1;
      v312[8] = -46;
      v515 = v473 + *(int *)(v473 + 60) + 24;
      v272 = *(unsigned int *)(v515 + 20) + v473;
      for ( i2 = 0; *v78 && i2 + 9i64 <= (unsigned __int64)*(unsigned int *)(v515 + 4); ++i2 )
      {
        for ( i3 = 0; (unsigned __int64)i3 < 9 && *(unsigned __int8 *)(v272 + i3 + i2) == (unsigned __int8)v312[i3]; ++i3 )
          ;
        if ( i3 == 9i64 && *(unsigned __int16 *)(v272 + i2 - 7) == 35656 && *(_BYTE *)(v272 + i2 - 5) == 21 )
        {
          v272 = *(_QWORD *)(i2 + v272 + *(int *)(v272 + i2 - 4));
          if ( v272
            && (v272 < (unsigned __int64)*(unsigned int *)(v515 + 20) + v473
             || v272 >= *(unsigned int *)(v515 + 4) + (unsigned __int64)*(unsigned int *)(v515 + 20) + v473) )
          {
            mm = (unsigned __int8 *)v272;
          }
          break;
        }
      }
    }
    strcpy(v1250, "graphics-hook64.dll");
    v474 = v1709(v1250);
    if ( v474 )
    {
      v1282 = *(int *)(v474 + 60) + v474 + *(unsigned __int16 *)(v474 + *(int *)(v474 + 60) + 20) + 24;
      for ( i4 = (unsigned __int8 *)(*(unsigned int *)(v1282 + 8) + *(unsigned int *)(v1282 + 12) + v474);
            ((unsigned __int16)i4 & 0xFFF) != 0;
            ++i4 )
      {
        if ( *i4 )
        {
          mm = i4;
          break;
        }
      }
    }
    strcpy(v418, "KiUserExceptionDispatcher");
    v1202 = (_DWORD *)((__int64 (__fastcall *)(__int64, char *))v1710)(v141, v418);
    if ( *v1202 == 93014268 )
    {
      v1203 = *(_QWORD *)((char *)v1202 + v1202[1] + 8);
      if ( v1203 )
      {
        if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))v117)(
               -1i64,
               v1203 & 0xFFFFFFFFFFFFF000ui64,
               0i64,
               v1651,
               48i64,
               &v1636) < 0
          || v1651[8] == 4096 && (v1652 & 4) != 0 )
        {
          mm = (unsigned __int8 *)v1203;
        }
      }
    }
    *(_QWORD *)(v63 + v52) = mm;
    if ( mm )
    {
      *(_QWORD *)(v63 + v52 + 8) = *(_QWORD *)mm;
      *(_QWORD *)(v63 + v52 + 16) = *((_QWORD *)mm + 1);
      *(_QWORD *)(v63 + v52 + 24) = *((_QWORD *)mm + 2);
    }
    else
    {
      *(_QWORD *)(v63 + v52 + 8) = 0i64;
      *(_QWORD *)(v63 + v52 + 16) = 0i64;
      *(_QWORD *)(v63 + v52 + 24) = 0i64;
    }
    v52 += 32;
    strcpy(v1251, "DiscordHook64.dll");
    v475 = v1709(v1251);
    if ( v475 )
    {
      *(_DWORD *)(v63 + v52) = *(_DWORD *)(v475 + *(int *)(v475 + 60) + 8);
      v315[0] = 72;
      v315[1] = -119;
      v315[2] = -39;
      v315[3] = -119;
      v315[4] = -6;
      v315[5] = 65;
      v315[6] = -119;
      v315[7] = -16;
      v315[8] = -1;
      v315[9] = 21;
      v1204 = v475 + *(int *)(v475 + 60) + 24;
      v109 = (_BYTE *)(*(unsigned int *)(v1204 + 20) + v475);
      for ( i5 = 0; *v78 && i5 + 10i64 <= (unsigned __int64)*(unsigned int *)(v1204 + 4); ++i5 )
      {
        for ( i6 = 0; (unsigned __int64)i6 < 0xA && v109[i6 + i5] == v315[i6]; ++i6 )
          ;
        if ( i6 == 10i64 )
        {
          v109 += i5 - 88;
          if ( *v109 == 116 || (v109 += 33, *v109 == 116) || (v109 += 8, *v109 == 116) || (v109 += 18, *v109 == 116) )
          {
            v1283 = 1i64;
            v1284 = v109;
            if ( v462(-1i64, &v1284, &v1283, 64i64, &v528) >= 0 )
            {
              *v109 = -21;
              v462(-1i64, &v1284, &v1283, v528, &v528);
            }
          }
          goto LABEL_466;
        }
      }
      v322[0] = 68;
      v322[1] = -117;
      v322[2] = -57;
      v322[3] = -117;
      v322[4] = -42;
      v322[5] = 72;
      v322[6] = -117;
      v322[7] = -53;
      v322[8] = -1;
      v322[9] = 21;
      for ( i7 = 0; *v78 && i7 + 10i64 <= (unsigned __int64)*(unsigned int *)(v1204 + 4); ++i7 )
      {
        for ( i8 = 0; (unsigned __int64)i8 < 0xA && v109[i8 + i7] == v322[i8]; ++i8 )
          ;
        if ( i8 == 10i64 )
        {
          v109 += i7 - 29;
          if ( *v109 == 116 )
          {
            v1285 = 1i64;
            v1286[0] = v109;
            if ( v462(-1i64, (_BYTE **)v1286, &v1285, 64i64, v533) >= 0 )
            {
              *v109 = -21;
              v462(-1i64, (_BYTE **)v1286, &v1285, v533[0], v533);
            }
          }
          break;
        }
      }
    }
    else
    {
      *(_DWORD *)(v63 + v52) = 0;
    }
LABEL_466:
    v52 += 4;
    v1082[0] = 92;
    v1082[1] = 68;
    v1082[2] = 101;
    v1082[3] = 118;
    v1082[4] = 105;
    v1082[5] = 99;
    v1082[6] = 101;
    v1082[7] = 92;
    v1082[8] = 72;
    v1082[9] = 97;
    v1082[10] = 114;
    v1082[11] = 100;
    v1082[12] = 100;
    v1082[13] = 105;
    v1082[14] = 115;
    v1082[15] = 107;
    v1082[16] = 86;
    v1082[17] = 111;
    v1082[18] = 108;
    v1082[19] = 117;
    v1082[20] = 109;
    v1082[21] = 101;
    v1083 = 49;
    v1084 = 92;
    v1085 = 69;
    v1086 = 70;
    v1087 = 73;
    v1088 = 92;
    v1089 = 77;
    v1090 = 105;
    v1091 = 99;
    v1092 = 114;
    v1093 = 111;
    v1094 = 115;
    v1095 = 111;
    v1096 = 102;
    v1097 = 116;
    v1098 = 92;
    v1099 = 66;
    v1100 = 111;
    v1101 = 111;
    v1102 = 116;
    v1103 = 92;
    v1104 = 98;
    v1105 = 111;
    v1106 = 111;
    v1107 = 116;
    v1108 = 109;
    v1109 = 103;
    v1110 = 102;
    v1111 = 119;
    v1112 = 46;
    v1113 = 101;
    v1114 = 102;
    v1115 = 105;
    v1116 = 0;
    v1594[0] = 110;
    v1594[1] = 112;
    v1595 = v1082;
    v1626 = 48;
    v1627 = 0i64;
    v1629 = 64;
    v1628 = v1594;
    v1630 = 0i64;
    v1631 = 0i64;
    strcpy(v323, "NtOpenFile");
    v1561 = (__int64 (__fastcall *)(__int64 *, __int64, int *, _BYTE *, __int64, int))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                        v141,
                                                                                        v323);
    while ( v1083 <= 0x39u )
    {
      LODWORD(v44) = 7;
      v70 = v1561(&v165, 1048704i64, &v1626, v1592, v44, 32);
      if ( v70 >= 0 )
      {
        strcpy(v408, "NtQueryInformationFile");
        v1562 = (int (__fastcall *)(__int64, _BYTE *, _QWORD *, __int64, int))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                v141,
                                                                                v408);
        if ( v1562(v165, v1592, v1624, 40i64, 4) >= 0 )
        {
          strcpy(v411, "GetSystemTimeAsFileTime");
          v1563 = (void (__fastcall *)(__int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v411);
          v1563(&v1565);
          strcpy(v369, "GetTickCount64");
          v1564 = (__int64 (*)(void))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v369);
          v1566 = v1564();
          *(_DWORD *)(v63 + v52) = (v1565 / 10000 - v1566) / 0x3E8ui64;
          *(_DWORD *)(v63 + v52 + 4) = v1624[0] / 10000000i64;
          *(_DWORD *)(v63 + v52 + 8) = v1624[1] / 10000000i64;
          *(_DWORD *)(v63 + v52 + 12) = v1624[2] / 10000000i64;
          *(_DWORD *)(v63 + v52 + 16) = v1624[3] / 10000000i64;
          *(_DWORD *)(v63 + v52 + 20) = v1625;
          v52 += 24;
          break;
        }
        strcpy(v301, "NtClose");
        v1567 = (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v141, v301);
        v1567(v165);
      }
      ++v1083;
    }
    if ( v49 + v52 - 1 + 2 <= 0x5400 )
    {
      *(_WORD *)(v49 + v53) = v52 - 1;
      for ( i9 = 0; i9 < v52 - 1; ++i9 )
        *(_BYTE *)(v53 + i9 + v49 + 2) = *(_BYTE *)(v63 + i9 + 1);
      v49 += v52 + 1;
    }
  }
  v289((unsigned int *)v63);
  v77(v161);
  result = (unsigned __int8)*v78;
  if ( *v78 )
  {
    v668[0] = 1304;
    v669 = 18;
    qmemcpy(v670, "ojects\\PUBGChinese", 18);
    memset((char *)&v670[2] + 2, 0, 0xEui64);
    v671 = 1303;
    v672 = 29;
    qmemcpy(v673, "BattleGroundsPrivate_CheatESP", 29);
    memset(&v673[29], 0, 3ui64);
    v674 = 1303;
    v675 = 22;
    v676 = 91;
    v677 = 0;
    v678 = 37;
    v679 = 0;
    v680 = 46;
    v681 = 0;
    v682 = 48;
    v683 = 0;
    v684 = 102;
    v685 = 0;
    v686 = 109;
    v687 = 0;
    v688 = 93;
    v689 = 0;
    v690 = 32;
    v691 = 0;
    v692 = 37;
    v693 = 0;
    v694 = 115;
    v695 = 0;
    v696 = 0;
    v697 = 0;
    memset(v698, 0, sizeof(v698));
    v699 = 1342;
    v700 = 32;
    v701 = 0;
    v702 = 0;
    v703 = 0;
    v704 = 0;
    strcpy(v705, "Neck");
    v705[5] = 0;
    v705[6] = 0;
    v705[7] = 0;
    strcpy(v706, "Chest");
    v706[6] = 0;
    v706[7] = 0;
    v706[8] = 0;
    v706[9] = 0;
    v706[10] = 0;
    v706[11] = 0;
    strcpy(v707, "Mouse 1");
    v708 = 1343;
    v709 = 15;
    strcpy(v710, "PlayerESPColor");
    memset(&v710[15], 0, 0x11ui64);
    v711 = 1344;
    v712 = 32;
    v713 = 32;
    v714 = 0;
    v715 = 65;
    v716 = 0;
    v717 = 105;
    v718 = 0;
    v719 = 109;
    v720 = 0;
    v721 = 98;
    v722 = 0;
    v723 = 111;
    v724 = 0;
    v725 = 116;
    v726 = 0;
    v727 = 58;
    v728 = 0;
    v729 = 32;
    v730 = 0;
    v731 = 37;
    v732 = 0;
    v733 = 100;
    v734 = 0;
    v735 = 0;
    v736 = 0;
    v737 = 45;
    v738 = 0;
    v739 = 62;
    v740 = 0;
    v741 = 32;
    v742 = 0;
    v743 = 65;
    v744 = 0;
    v745 = 1334;
    v746 = 12;
    strcpy(v747, "HackMachine");
    memset(&v747[12], 0, 0x14ui64);
    v748 = 1354;
    v749 = 16;
    strcpy(v750, "VisualHacks.net");
    memset(&v750[16], 0, 0x10ui64);
    v751 = 1360;
    v752 = 32;
    v753 = 62;
    v754 = 35;
    v755 = 47;
    v756 = 101;
    v757 = 62;
    v758 = 49;
    v759 = 49;
    v760 = 78;
    v761 = 78;
    v762 = 86;
    v763 = 61;
    v764 = 66;
    v765 = 118;
    v766 = 40;
    v767 = 42;
    v768 = 58;
    v769 = 46;
    v770 = 70;
    v771 = 63;
    v772 = 117;
    v773 = 117;
    v774 = 35;
    v775 = 40;
    v776 = 103;
    v777 = 82;
    v778 = 85;
    v779 = 46;
    v780 = 111;
    v781 = 48;
    v782 = 88;
    v783 = 71;
    v784 = 72;
    v785 = 1359;
    v786 = 32;
    v787 = 68;
    v788 = 76;
    v789 = 76;
    v790 = 73;
    v791 = 110;
    v792 = 106;
    v793 = 101;
    v794 = 99;
    v795 = 116;
    v796 = 105;
    v797 = 111;
    v798 = 110;
    v799 = 45;
    v800 = 109;
    v801 = 97;
    v802 = 115;
    v803 = 116;
    v804 = 101;
    v805 = 114;
    v806 = 92;
    v807 = 120;
    v808 = 54;
    v809 = 52;
    v810 = 92;
    v811 = 82;
    v812 = 101;
    v813 = 108;
    v814 = 101;
    v815 = 97;
    v816 = 115;
    v817 = 101;
    v818 = 92;
    v819 = 1362;
    v820 = 16;
    v821 = 78;
    v822 = 0;
    v823 = 97;
    v824 = 0;
    v825 = 109;
    v826 = 0;
    v827 = 101;
    v828 = 0;
    v829 = 69;
    v830 = 0;
    v831 = 83;
    v832 = 0;
    v833 = 80;
    v834 = 0;
    v835 = 0;
    v836 = 0;
    memset(v837, 0, sizeof(v837));
    v838 = 1352;
    v839 = 20;
    v840 = 83;
    v841 = 0;
    v842 = 107;
    v843 = 0;
    v844 = 117;
    v845 = 0;
    v846 = 108;
    v847 = 0;
    v848 = 108;
    v849 = 0;
    v850 = 104;
    v851 = 0;
    v852 = 97;
    v853 = 0;
    v854 = 99;
    v855 = 0;
    v856 = 107;
    v857 = 0;
    v858 = 0;
    v859 = 0;
    memset(v860, 0, sizeof(v860));
    v861 = 1365;
    v862 = 14;
    strcpy(v863, ".rdata$zzzdbg");
    memset(&v863[14], 0, 0x12ui64);
    v864 = 1337;
    v865 = 14;
    v866 = 65;
    v867 = 0;
    v868 = 105;
    v869 = 0;
    v870 = 109;
    v871 = 0;
    v872 = 66;
    v873 = 0;
    v874 = 111;
    v875 = 0;
    v876 = 116;
    v877 = 0;
    v878 = 0;
    v879 = 0;
    memset(v880, 0, sizeof(v880));
    v881 = 1337;
    v882 = 32;
    v883 = -21;
    v884 = 73;
    v885 = 65;
    v886 = 0x80;
    v887 = 60;
    v888 = 18;
    v889 = 63;
    v890 = 117;
    v891 = 5;
    v892 = -58;
    v893 = 2;
    v894 = 63;
    v895 = -21;
    v896 = 56;
    v897 = -115;
    v898 = 65;
    v899 = -48;
    v900 = 15;
    v901 = -66;
    v902 = -55;
    v903 = 60;
    v904 = 9;
    v905 = 119;
    v906 = 5;
    v907 = -125;
    v908 = -23;
    v909 = 48;
    v910 = -21;
    v911 = 6;
    v912 = -125;
    v913 = -31;
    v914 = -33;
    v915 = 1375;
    v916 = 2;
    v917 = 85;
    v918 = -23;
    memset(v919, 0, sizeof(v919));
    v920 = 1375;
    v921 = 2;
    v922 = 87;
    v923 = -23;
    memset(v924, 0, sizeof(v924));
    v925 = 1375;
    v926 = 2;
    v927 = 96;
    v928 = -23;
    memset(v929, 0, sizeof(v929));
    v930 = 1384;
    v931 = 25;
    strcpy(v932, "D3D11Present initialised");
    memset(&v932[25], 0, 7ui64);
    v933 = 1390;
    v934 = 10;
    strcpy(v935, "[ %.0fM ]");
    memset(&v935[10], 0, 0x16ui64);
    v936 = 1396;
    v937 = 11;
    strcpy(v938, "[hp:%d]%dm");
    memset(&v938[11], 0, 0x15ui64);
    v939 = 1334;
    v940 = 32;
    v941 = 72;
    v942 = -125;
    strcpy(v943, "d$8");
    v943[4] = 72;
    v943[5] = -115;
    v943[6] = 76;
    v943[7] = 36;
    v943[8] = 88;
    v943[9] = 72;
    v943[10] = -117;
    v943[11] = 84;
    v943[12] = 36;
    v943[13] = 80;
    v943[14] = 76;
    v943[15] = -117;
    v943[16] = -56;
    v943[17] = 72;
    v943[18] = -119;
    v943[19] = 76;
    v943[20] = 36;
    v943[21] = 48;
    v943[22] = 76;
    v943[23] = -117;
    v943[24] = -57;
    v943[25] = 72;
    v943[26] = -115;
    v943[27] = 76;
    v943[28] = 36;
    v943[29] = 96;
    v944 = 1334;
    v945 = 32;
    v946 = 116;
    v947 = 31;
    v948 = -70;
    v949 = 8;
    v950 = 0;
    v951 = 0;
    v952 = 0;
    v953 = -1;
    v954 = 21;
    strcpy(v955, "`~");
    v955[3] = 0;
    v955[4] = -123;
    v955[5] = -64;
    v955[6] = 117;
    v955[7] = 16;
    v955[8] = -14;
    v955[9] = 15;
    v955[10] = 16;
    v955[11] = -121;
    v955[12] = 0x80;
    v955[13] = 1;
    v955[14] = 0;
    v955[15] = 0;
    v955[16] = -117;
    v955[17] = -121;
    v955[18] = -120;
    v955[19] = 1;
    v955[20] = 0;
    v955[21] = 0;
    v955[22] = -21;
    v956 = 1334;
    v957 = 32;
    v958 = 64;
    v959 = -14;
    v960 = -86;
    v961 = 21;
    v962 = 111;
    v963 = 8;
    v964 = -46;
    v965 = -119;
    v966 = 78;
    v967 = -102;
    v968 = -76;
    v969 = 72;
    v970 = -107;
    v971 = 53;
    v972 = -45;
    v973 = 79;
    v974 = -100;
    strcpy(v975, "POSITION");
    v975[9] = 0;
    v975[10] = 0;
    v975[11] = 0;
    v975[12] = 67;
    v975[13] = 79;
    v975[14] = 76;
    v976 = 1402;
    v977 = 3;
    v978 = -1;
    v979 = -32;
    v980 = -112;
    memset(v981, 0, sizeof(v981));
    v982 = 1401;
    v983 = 32;
    strcpy(v984, "%s");
    v984[3] = 0;
    strcpy(v985, "%d");
    v985[3] = 0;
    strcpy(v986, "POSITION");
    v986[9] = 0;
    v986[10] = 0;
    v986[11] = 0;
    strcpy(v987, "COLOR");
    v987[6] = 0;
    v987[7] = 0;
    v987[8] = 0;
    v987[9] = 0;
    v987[10] = 0;
    v987[11] = 0;
    v988 = 1334;
    v989 = 32;
    v990 = -114;
    v991 = -123;
    v992 = 118;
    v993 = 93;
    v994 = -51;
    v995 = -38;
    v996 = 69;
    v997 = 46;
    v998 = 117;
    v999 = -70;
    v1000 = 18;
    v1001 = -76;
    v1002 = -57;
    v1003 = -71;
    v1004 = 72;
    v1005 = 114;
    v1006 = 17;
    v1007 = 109;
    v1008 = -71;
    v1009 = 72;
    v1010 = -95;
    v1011 = -38;
    v1012 = -90;
    v1013 = -71;
    v1014 = 72;
    v1015 = -89;
    v1016 = 103;
    v1017 = 107;
    v1018 = -71;
    v1019 = 72;
    v1020 = -112;
    v1021 = 44;
    v1022 = 1418;
    v1023 = 32;
    v1024 = 10;
    v1025 = 60;
    v1026 = 97;
    v1027 = 115;
    v1028 = 115;
    v1029 = 101;
    v1030 = 109;
    v1031 = 98;
    v1032 = 108;
    v1033 = 121;
    v1034 = 32;
    v1035 = 120;
    v1036 = 109;
    v1037 = 108;
    v1038 = 110;
    v1039 = 115;
    v1040 = 61;
    v1041 = 39;
    v1042 = 117;
    v1043 = 114;
    v1044 = 110;
    v1045 = 58;
    v1046 = 115;
    v1047 = 99;
    v1048 = 104;
    v1049 = 101;
    v1050 = 109;
    v1051 = 97;
    v1052 = 115;
    v1053 = 45;
    v1054 = 109;
    v1055 = 105;
    v1056 = 1337;
    v1057 = 17;
    v1058 = 72;
    v1059 = -125;
    v1060 = -20;
    v1061 = 40;
    v1062 = -24;
    v1063 = 15;
    v1064 = 0;
    v1065 = 0;
    v1066 = 0;
    v1067 = -80;
    v1068 = 1;
    v1069 = 72;
    v1070 = -125;
    v1071 = -60;
    v1072 = 40;
    v1073 = -61;
    v1074 = -23;
    memset(v1075, 0, sizeof(v1075));
    v439 = 0;
    for ( i10 = 0i64;
          *v78
       && ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
            -1i64,
            i10,
            0i64,
            v86,
            48i64,
            &v287) >= 0;
          i10 = v86[3] + v86[0] )
    {
      if ( LODWORD(v86[4]) == 4096
        && (HIDWORD(v86[4]) == 16
         || HIDWORD(v86[4]) == 32
         || HIDWORD(v86[4]) == 64
         && (LODWORD(v86[5]) != 0x20000
          || v86[3] != 0x10000i64
          && v86[3] != 0x20000i64
          && v86[3] != 983040i64
          && v86[3] != 589824i64
          && v86[3] != 655360i64
          && v86[3] != 720896i64
          && v86[3] != 851968i64))
        && (v86[0] > (unsigned __int64)&sub_129 || v86[3] + v86[0] <= (unsigned __int64)&sub_129)
        && (HIDWORD(v86[4]) != 64 || v86[3] != 110592i64) )
      {
        if ( LODWORD(v86[5]) == 0x20000 || LODWORD(v86[5]) == 0x40000 )
        {
          v61 = 0;
          if ( v86[3] >= 0x11000ui64
            || v86[3] >= 0x4000ui64
            && (v86[0] & 0xFF0000000000i64) != 0x7F0000000000i64
            && (v86[0] & 0xFFF000000000i64) != 0x7F000000000i64
            && v86[3] != 0x10000i64
            && (v86[0] & 0xFFFFF0000000i64) != 1879048192
            && (v86[0] != 4063232i64 || v86[3] != 61440i64)
            && (v86[0] != 4128768i64 || v86[3] != 0x4000i64) )
          {
            v1605 = 0;
            v533[1] = 47;
            v1606 = 47;
            v1607 = v86[0];
            v1608 = v86[3];
            v1609 = LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
            v1286[1] = 18i64;
            if ( v49 + 19 <= 0x5400 )
            {
              v1286[2] = 18i64;
              *(_WORD *)(v49 + v53) = 17;
              for ( i11 = 0; ; ++i11 )
              {
                v1287 = v61 ? 58i64 : 18i64;
                if ( i11 >= (unsigned __int64)(v1287 - 1) )
                  break;
                *(_BYTE *)(v53 + i11 + v49 + 2) = *(&v1606 + i11);
              }
              if ( v61 )
                v1288 = 58i64;
              else
                v1288 = 18i64;
              v49 += v1288 + 1;
            }
          }
        }
        strcpy(v324, "user32.dll");
        v37 = v1709(v324);
        v533[2] = v86[1] == v37;
        v74 = v86[1] == v37;
        if ( LODWORD(v86[5]) == 0x20000 || v74 )
        {
          for ( i12 = v86[0]; *v78 && i12 != v86[3] + v86[0]; i12 += 4096i64 )
          {
            if ( v71(-1i64, i12, v1699, 4096i64, 0i64) >= 0 )
            {
              for ( i13 = 0; (unsigned __int64)i13 < 0x1D; ++i13 )
              {
                if ( v668[20 * i13] != 1402 || v74 )
                {
                  for ( i14 = 0; (unsigned int)(*(&v669 + 10 * i13) + i14) <= 0x1000ui64; ++i14 )
                  {
                    if ( (_QWORD *)(i14 + i12) != &v670[5 * i13] )
                    {
                      for ( i15 = 0;
                            i15 < *(&v669 + 10 * i13)
                         && *((unsigned __int8 *)v1699 + (int)(i15 + i14)) == *((unsigned __int8 *)&v668[20 * i13 + 4]
                                                                              + (int)i15);
                            ++i15 )
                      {
                        ;
                      }
                      if ( i15 == *(&v669 + 10 * i13)
                        && (v668[20 * i13] != 1365 || *(_WORD *)((char *)&v1699[107] + i14 + 1) == 16725)
                        && (v668[20 * i13] != 1375
                         || *(_DWORD *)(i12 + (int)(i15 + i14)) < 0x2000u
                         && v71(
                              -1i64,
                              (int)(i15 + i14) + i12 + *(int *)((char *)v1699 + (int)(i15 + i14)) + 4,
                              v1699,
                              2i64,
                              0i64) >= 0
                         && (v1699[0] == 21569
                          || v1699[0] == 33096
                          || LOBYTE(v1699[0]) == 161 && LOBYTE(v670[5 * i13]) == 96))
                        && (v668[20 * i13] != 1402 || *(unsigned __int16 *)((char *)&v1699[-5] + i14) == 47176) )
                      {
                        v1493 = 0;
                        v1494 = 53;
                        v1495 = v668[20 * i13];
                        v1496 = i14 + i12;
                        v1497 = v86[0];
                        v1498 = v86[3];
                        v1499 = LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
                        if ( v49 + 29 <= 0x5400 )
                        {
                          *(_WORD *)(v49 + v53) = 27;
                          for ( i16 = 0; (unsigned __int64)i16 < 0x1B; ++i16 )
                            *(_BYTE *)(v53 + i16 + v49 + 2) = *(&v1494 + i16);
                          v49 += 29i64;
                        }
                        if ( v74 )
                          goto LABEL_561;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_561:
        if ( v74
          && v86[0] != v86[1]
          && ((int (__fastcall *)(__int64, __int64, _QWORD, __int64 *, __int64, __int64 *))v117)(
               -1i64,
               v86[0] - 4096i64,
               0i64,
               &v1599,
               48i64,
               &v287) >= 0
          && v1599 != v86[1]
          && v1602 != 16
          && v1602 != 32
          && v1602 != 64 )
        {
          v1444 = 0;
          v1445 = 53;
          v1446 = 1493;
          v1447 = v1599 - v86[1];
          v1448 = v1599;
          v1449 = v1600;
          v1450 = v1603 | v1602 | v1601;
          if ( v49 + 29 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 27;
            for ( i17 = 0; (unsigned __int64)i17 < 0x1B; ++i17 )
              *(_BYTE *)(v53 + i17 + v49 + 2) = *(&v1445 + i17);
            v49 += 29i64;
          }
        }
      }
      if ( LODWORD(v86[4]) == 4096 && (HIDWORD(v86[4]) == 16 || HIDWORD(v86[4]) == 32 || HIDWORD(v86[4]) == 64) )
      {
        strcpy(v321, "mmres.dll");
        v1289 = v1709(v321);
        if ( v1289 && v1289 == v86[1] )
        {
          v581 = 0;
          v582 = 72;
          v583 = 1459;
          v584 = v86[3];
          if ( v49 + 9 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 7;
            for ( i18 = 0; (unsigned __int64)i18 < 7; ++i18 )
              *(_BYTE *)(v53 + i18 + v49 + 2) = *(&v582 + i18);
            v49 += 9i64;
          }
        }
        else if ( HIDWORD(v86[4]) == 64 )
        {
          strcpy(v325, "mshtml.dll");
          v1290 = v1709(v325);
          if ( v1290 )
          {
            if ( v1290 == v86[1] )
            {
              v585 = 0;
              v586 = 72;
              v587 = 1467;
              v588 = v86[3];
              if ( v49 + 9 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 7;
                for ( i19 = 0; (unsigned __int64)i19 < 7; ++i19 )
                  *(_BYTE *)(v53 + i19 + v49 + 2) = *(&v586 + i19);
                v49 += 9i64;
              }
            }
          }
        }
        if ( LODWORD(v86[5]) == 0x20000 )
        {
          v445 = 0;
          for ( i20 = v86[0]; *v78 && i20 != v86[3] + v86[0] && v445 < 10; i20 += 4096i64 )
          {
            if ( v71(-1i64, i20, v1704, 4096i64, 0i64) >= 0 )
            {
              for ( i21 = 0; (unsigned __int64)(i21 + 13) <= 0x1000; ++i21 )
              {
                if ( *(unsigned __int16 *)&v1704[i21] == 47176 )
                {
                  if ( *(unsigned __int16 *)&v1704[i21 + 10] == 57599
                    && (_mm_lfence(), (v164 = *(_QWORD **)&v1704[i21 + 2]) != 0i64)
                    || (unsigned __int64)(i21 + 26) <= 0x1000
                    && *(_QWORD *)&v1704[i21 + 10] == 0x8948C88B48008B48ui64
                    && *(_QWORD *)&v1704[i21 + 18] == 0x458B481850FFF045i64
                    && (_mm_lfence(), (v164 = *(_QWORD **)&v1704[i21 + 2]) != 0i64)
                    && !((unsigned int (__fastcall *)(_QWORD *, __int64))v426)(v164, 8i64)
                    && (v164 = (_QWORD *)(*v164 + 24i64),
                        !((unsigned int (__fastcall *)(_QWORD *, __int64))v426)(v164, 8i64))
                    && (v164 = (_QWORD *)*v164) != 0i64 )
                  {
                    if ( ((int (__fastcall *)(__int64, _QWORD *, _QWORD, _DWORD *, __int64, __int64 *))v117)(
                           -1i64,
                           v164,
                           0i64,
                           v1615,
                           48i64,
                           &v287) >= 0
                      && v1616 == 4096
                      && (v1617 == 4 || v1618 == 0x1000000) )
                    {
                      v1333 = 0;
                      v1334 = 53;
                      v1335 = 1493;
                      v1336 = v164;
                      v1337 = *v164;
                      v1338 = v1615[6];
                      v1339 = v1618 | v1617 | v1616;
                      if ( v49 + 29 <= 0x5400 )
                      {
                        *(_WORD *)(v49 + v53) = 27;
                        for ( i22 = 0; (unsigned __int64)i22 < 0x1B; ++i22 )
                          *(_BYTE *)(v53 + i22 + v49 + 2) = *(&v1334 + i22);
                        v49 += 29i64;
                      }
                      ++v445;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v1242 = -1;
      if ( v86[0] == i10 )
      {
        if ( LODWORD(v86[4]) == 4096 && *(_QWORD *)((char *)&v86[4] + 4) == 0x2000000000004i64 && v86[3] <= 0x300000ui64 )
        {
          for ( i23 = i10; *v78; i23 += 4096i64 )
          {
            if ( i23 >= v86[3] + v86[0] )
              break;
            _mm_lfence();
            if ( v71(-1i64, i23, v1695, 4096i64, 0i64) < 0 )
              break;
            for ( i24 = v1695; i24 < (char *)&v1698; i24 += 16 )
            {
              v66 = 0;
              if ( *(_WORD *)i24 == 23117 )
              {
                _mm_lfence();
                if ( v71(-1i64, i24 - v1695 + i23, v1695, 1024i64, 0i64) >= 0 )
                {
                  v268 = (__int64 *)&v1695[v1696];
                  if ( v268 < &v1697 && *(_DWORD *)v268 == 17744 )
                  {
                    if ( *((_WORD *)v268 + 12) == 267 || (v534 = *((unsigned __int16 *)v268 + 12) == 523, v66 = v534) )
                    {
                      v1312 = 0i64;
                      for ( i25 = i24 - v1695 + i23; *v78; i25 += 4096i64 )
                      {
                        v535 = *((_DWORD *)v268 + 20);
                        if ( i25 >= v535 + i24 - v1695 + i23 )
                          break;
                        _mm_lfence();
                        if ( v71(-1i64, i25, v1692, 4096i64, 0i64) < 0 )
                          break;
                        for ( i26 = 0; (unsigned __int64)(i26 + 6) <= 0x1000; ++i26 )
                        {
                          if ( (*(_DWORD *)&v1692[i26] == 1651337537 || *(_DWORD *)&v1692[i26] == 1651337569)
                            && *(_WORD *)&v1692[i26 + 4] == 29807
                            || *(_DWORD *)&v1692[i26] == 1634563400
                            && *(_DWORD *)&v1692[i26 + 4] == 1750355054
                            && *(_DWORD *)&v1692[i26 + 8] == 828925801
                            && *(_WORD *)&v1692[i26 + 12] == 18432
                            || (*(_DWORD *)&v1692[i26] == 1131835243 || *(_DWORD *)&v1692[i26] == 1131701829)
                            && *(_DWORD *)&v1692[i26 + 4] == 1952540008
                            || *(_DWORD *)&v1692[i26] == 1601463655
                            && *(_DWORD *)&v1692[i26 + 4] == 1919905604
                            && *(_DWORD *)&v1692[i26 + 8] == 1952543827 )
                          {
                            v1312 = i26 + i25 - i10;
                            goto LABEL_663;
                          }
                        }
                      }
                      if ( v1312 )
                      {
LABEL_663:
                        v1309[24] = 0;
                        v1310 = 53;
                        v1311 = 1501;
                        v1313 = *((unsigned int *)v268 + 2);
                        v536 = *((_DWORD *)v268 + 20);
                        v1314 = v536;
                        v537 = *((_DWORD *)v268 + 10);
                        v1315 = v537;
                        if ( v49 + 29 <= 0x5400 )
                        {
                          *(_WORD *)(v49 + v53) = 27;
                          for ( i27 = 0; (unsigned __int64)i27 < 0x1B; ++i27 )
                            *(_BYTE *)(v53 + i27 + v49 + 2) = *(&v1310 + i27);
                          v49 += 29i64;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v1242 = -2;
      }
      if ( LODWORD(v86[4]) == 4096
        && HIDWORD(v86[4]) != 1
        && HIDWORD(v86[4])
        && (LODWORD(v86[5]) == 0x20000 || LODWORD(v86[5]) == 0x1000000)
        && (v86[4] & 0x10000000000i64) == 0 )
      {
        v444 = 0;
        while ( *v78 && v444 < 2 && i10 != v86[3] + v86[0] )
        {
          if ( v71(-1i64, i10, v1610, 16i64, 0i64) < 0
            || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))v426)(i10, 16i64)) )
          {
            if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                   -1i64,
                   i10,
                   0i64,
                   v1653,
                   48i64,
                   &v287) >= 0
              && v1653[4] == v86[4] )
            {
              v1242 = 2;
            }
          }
          else
          {
            _mm_lfence();
            v1292(v1593, i10, 16i64);
            v438 = 0;
            while ( v1291(v1610, v1593, 16i64)
                 && !((unsigned int (__fastcall *)(unsigned __int64, __int64))v426)(i10, 16i64)
                 && !v1291(v1593, (_BYTE *)i10, 16i64) )
            {
              if ( v438 == 3 )
              {
                v1242 = 1;
                v1292(v1246, (unsigned __int64)v1593, 16i64);
                break;
              }
              if ( v71(-1i64, i10, v1610, 16i64, 0i64) < 0 )
                break;
              ++v438;
            }
          }
          ++v444;
          i10 += 4096i64;
        }
      }
      else if ( LODWORD(v86[4]) == 4096 && (HIDWORD(v86[4]) == 1 || !HIDWORD(v86[4]))
             || LODWORD(v86[4]) == 0x10000
             || LODWORD(v86[4]) == 0x2000 )
      {
        if ( v86[4] != 4096i64 )
        {
          v163 = i10;
LABEL_706:
          if ( !*v78 || v163 >= v86[3] + v86[0] || v163 >= v86[0] + 0x1000000i64 )
            goto LABEL_723;
          while ( 1 )
          {
            if ( ((unsigned int (__fastcall *)(unsigned __int64, __int64))v426)(v163, 1i64)
              || ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))v117)(
                   -1i64,
                   v163,
                   0i64,
                   v1604,
                   48i64,
                   &v287) < 0
              || v1604[8] != LODWORD(v86[4])
              || v1604[8] == 4096 && v1604[9] != HIDWORD(v86[4])
              || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))v426)(v163, 1i64)) )
            {
              if ( ((unsigned int (__fastcall *)(unsigned __int64, __int64))~v1206)(v163, 1i64)
                || ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _DWORD *, __int64, __int64 *))v117)(
                     -1i64,
                     v163,
                     0i64,
                     v1604,
                     48i64,
                     &v287) < 0
                || v1604[8] != LODWORD(v86[4])
                || v1604[8] == 4096 && v1604[9] != HIDWORD(v86[4])
                || (_mm_lfence(), ((unsigned int (__fastcall *)(unsigned __int64, __int64))~v1206)(v163, 1i64)) )
              {
                v163 += 0x10000i64;
                goto LABEL_706;
              }
            }
            qmemcpy(v86, v1604, sizeof(v86));
            v1242 = 0;
LABEL_723:
            if ( !v1242 || v163 > 0x7FFFE1E30000i64 || v86[3] + v86[0] <= 0x7FFFE1E30000ui64 )
              goto LABEL_727;
            v163 = 0x7FFFE1E30000i64;
          }
        }
        v1242 = 0;
      }
LABEL_727:
      if ( v1242 != 255 && v439 < 3 )
      {
        v1240 = 0;
        v1241 = 33;
        v1243 = v86[0];
        v1244 = v86[3];
        v1245 = LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
        if ( v49 + 36 <= 0x5400 )
        {
          *(_WORD *)(v49 + v53) = 34;
          for ( i28 = 0; (unsigned __int64)i28 < 0x22; ++i28 )
            *(_BYTE *)(v53 + i28 + v49 + 2) = *(&v1241 + i28);
          v49 += 36i64;
        }
        ++v439;
      }
      if ( LODWORD(v86[4]) == 4096
        && LODWORD(v86[5]) == 0x1000000
        && v86[0] == v86[1]
        && v71(-1i64, v86[0] + 60i64, &v1231, 4i64, 0i64) >= 0
        && v71(-1i64, v86[0] + v1231 + 8i64, &v60, 4i64, 0i64) >= 0 )
      {
        if ( v60 == 1527957760
          && (v71(-1i64, v86[0] + 4096i64, v142, 16i64, 0i64) >= 0 && !LODWORD(v142[0])
           || v71(-1i64, v86[0] + 5246976i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0]) != 55830784)
          || v60 == 1511525429 && v71(-1i64, v86[0] + 4096i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0])
          || v60 == -56913115 && v71(-1i64, v86[0] + 7155712i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0])
          || v60 == 1164766483
          && v71(-1i64, v86[0] + 439304i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 686588744
          || v60 == 1179212505
          && v71(-1i64, v86[0] + 496776i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 686588744
          || v60 == 1204678187
          && v71(-1i64, v86[0] + 547608i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 686588744
          || v60 == 1184887342
          && v71(-1i64, v86[0] + 510376i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 686588744
          || v60 == 1223441111
          && v71(-1i64, v86[0] + 734032i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 686588744
          || v60 == 1519280160 && v71(-1i64, v86[0] + 4931584i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0])
          || v60 == 1439191921 && v71(-1i64, v86[0] + 98304i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0])
          || v60 == 1541510829 && v71(-1i64, v86[0] + 5373952i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0])
          || v60 == 1533287111 && v71(-1i64, v86[0] + 5271552i64, v142, 16i64, 0i64) >= 0
          || v60 == 1610344293 && v71(-1i64, v86[0] + 1206672i64, v142, 16i64, 0i64) >= 0 && LODWORD(v142[0]) != 3477
          || v60 == 1415178531
          && v71(-1i64, v86[0] + 6097520i64, v142, 16i64, 0i64) >= 0
          && LODWORD(v142[0]) != 540055584 )
        {
          v1351 = 0;
          v1352[0] = 70;
          if ( v60 == 1164766483 )
          {
            v489 = 3;
          }
          else
          {
            if ( v60 == 1179212505 )
            {
              v548 = 4;
            }
            else
            {
              if ( v60 == 1204678187 )
              {
                v547 = 5;
              }
              else
              {
                if ( v60 == 1184887342 )
                {
                  v546 = 6;
                }
                else
                {
                  if ( v60 == 1223441111 )
                  {
                    v545 = 7;
                  }
                  else
                  {
                    if ( v60 == -56913115 || v60 == 1519280160 )
                    {
                      v544 = 8;
                    }
                    else
                    {
                      if ( v60 == 1439191921 )
                      {
                        v543 = 9;
                      }
                      else
                      {
                        if ( v60 == 1541510829 )
                        {
                          v542 = 10;
                        }
                        else
                        {
                          if ( v60 == 1533287111 )
                          {
                            v541 = 11;
                          }
                          else
                          {
                            if ( v60 == 1610344293 )
                            {
                              v540 = 12;
                            }
                            else
                            {
                              if ( v60 == 1415178531 )
                                v538 = 13;
                              else
                                v538 = 1;
                              v540 = v538;
                            }
                            v541 = v540;
                          }
                          v542 = v541;
                        }
                        v543 = v542;
                      }
                      v544 = v543;
                    }
                    v545 = v544;
                  }
                  v546 = v545;
                }
                v547 = v546;
              }
              v548 = v547;
            }
            v489 = v548;
          }
          v1352[1] = v489;
          v1353 = v142[0];
          v1354 = v142[1];
          if ( v49 + 20 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 18;
            for ( i29 = 0; (unsigned __int64)i29 < 0x12; ++i29 )
              *(_BYTE *)(v53 + i29 + v49 + 2) = v1352[i29];
            v49 += 20i64;
          }
        }
        else
        {
          v1205 = (_DWORD *)(v86[0] + *(int *)(v86[0] + 60i64) + 24i64);
          if ( v60 == 1567786053
            || v60 == 1585947090
            || v60 == 1586741064
            || v60 == 1603085584
            || v60 == 1522141217
            || v60 == 1545022560
            || v60 == 1556182473 )
          {
            v1451 = 0;
            v1452 = 53;
            v1453 = 1482;
            v1454 = v60;
            v1455 = (unsigned int)v1205[14];
            v1456 = v1205[4];
            v1457 = v1205[37];
            if ( v49 + 29 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 27;
              for ( i30 = 0; (unsigned __int64)i30 < 0x1B; ++i30 )
                *(_BYTE *)(v53 + i30 + v49 + 2) = *(&v1452 + i30);
              v49 += 29i64;
            }
          }
        }
      }
      if ( LODWORD(v86[4]) == 4096
        && (HIDWORD(v86[4]) == 4 || HIDWORD(v86[4]) == 2)
        && LODWORD(v86[5]) == 0x20000
        && v86[0] == v86[1]
        && (v71(-1i64, v86[0], &v468, 16i64, 0i64) >= 0
         && (v468 == (__int64 (__fastcall *)(char *))0x300900000i64 && v469 == (unsigned __int8 *)0xFFFF00000004i64
          || v468 == v1709 && v469 == v1710
          || v468 == (__int64 (__fastcall *)(char *))0x5441554156415741i64
          && v469 == (unsigned __int8 *)0x5041514152415341i64
          || v468 == (__int64 (__fastcall *)(char *))0xC900000000100i64)
         || v86[3] > 0x1000ui64
         && v71(-1i64, v86[0] + 4096i64, &v468, 16i64, 0i64) >= 0
         && (unsigned __int16)v468 == 33608
         && BYTE2(v468) == 236) )
      {
        v1431 = 0;
        v1432 = 53;
        v1433 = 1491;
        if ( v468 == (__int64 (__fastcall *)(char *))0x300900000i64 )
        {
          v495 = 256;
        }
        else
        {
          if ( v468 == v1709 )
          {
            v492 = 80;
          }
          else
          {
            v490 = v468 == (__int64 (__fastcall *)(char *))0x5441554156415741i64 ? 23 : 4096;
            v492 = v490;
          }
          v495 = v492;
        }
        v71(-1i64, v495 + v86[0], v1434, 8i64, 0i64);
        v1434[1] = v86[0];
        v1435 = v86[3];
        v1436 = LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
        if ( v49 + 29 <= 0x5400 )
        {
          *(_WORD *)(v49 + v53) = 27;
          for ( i31 = 0; (unsigned __int64)i31 < 0x1B; ++i31 )
            *(_BYTE *)(v53 + i31 + v49 + 2) = *(&v1432 + i31);
          v49 += 29i64;
        }
      }
    }
    result = (unsigned __int8)*v78;
    if ( *v78 )
    {
      v1293 = ~v1206;
      v476 = ((int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
               -1i64,
               ~v1206,
               0i64,
               v86,
               48i64,
               &v287) < 0;
      v75 = v476;
      if ( v476 || LODWORD(v86[4]) != 4096 || LODWORD(v86[5]) != 0x1000000 && LODWORD(v86[5]) != 0x40000 )
      {
        v1437 = 0;
        v1438 = 53;
        v1439 = 1449;
        v1440 = v1293;
        v1294 = v75 ? 0i64 : v86[0];
        v1441 = v1294;
        v1269 = v75 ? 0i64 : v86[3];
        v1442 = v1269;
        v477 = v75 ? 0 : LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
        v1443 = v477;
        if ( v49 + 29 <= 0x5400 )
        {
          *(_WORD *)(v49 + v53) = 27;
          for ( i32 = 0; (unsigned __int64)i32 < 0x1B; ++i32 )
            *(_BYTE *)(v53 + i32 + v49 + 2) = *(&v1438 + i32);
          v49 += 29i64;
        }
      }
      strcpy(v336, "CreateFileA");
      v467 = (__int64 (__fastcall *)(char *, __int64, __int64, _QWORD, int, int, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                           v79,
                                                                                           v336);
      v96 = 0;
      v1229 = 0;
      v443 = 0;
      strcpy(v417, "CreateToolhelp32Snapshot");
      v1301 = (__int64 (__fastcall *)(__int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v417);
      v598 = v1301(2i64, 0i64);
      if ( v598 != -1 )
      {
        strcpy(v370, "Process32First");
        v1568 = (unsigned int (__fastcall *)(__int64, int *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v370);
        v1363 = 304;
        if ( v1568(v598, &v1363) )
        {
          strcpy(v360, "Process32Next");
          v1582 = (unsigned int (__fastcall *)(__int64, int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                 v79,
                                                                 v360);
          v281 = 0;
          v432 = 0;
          v189 = 0;
          v433 = 0;
          v434 = 0;
          v55 = 0;
          v135 = 0;
          v1590 = 0;
          do
          {
            v1316[32] = 0;
            v114 = v105(4096i64, 0i64, v1364);
            v51 = 128;
            v478 = v114
                && v603(v114, 0i64, v1684, &v51)
                && (LODWORD(v46) = 255,
                    (v51 = v267(65001i64, 0i64, (__int64 *)v1684, v51, (__int64)&v1318, v46, 0i64, 0i64)) != 0);
            v67 = v478;
            if ( v478 )
            {
              if ( v605(v1684, 0i64, v1656) )
                v479 = v1656[8];
              else
                v479 = 0;
              v149 = v479;
            }
            else
            {
              v1230 = v273();
              v1076 = v1364;
              v1077 = 0;
              v1078 = 512;
              v1079 = v1690;
              if ( (int)v162(88i64, (unsigned int *)&v1076, 24i64, 0i64) < 0 )
              {
                v51 = 0;
              }
              else
              {
                v1569[1] = &v1318;
                LODWORD(v46) = 255;
                v51 = v267(65001i64, 0i64, (__int64 *)v1079, v1077 / 2, (__int64)&v1318, v46, 0i64, 0i64);
              }
              if ( v114 && !v67 && v51 && *(_DWORD *)&v1316[v51 + 27] == 778925924 )
              {
                *(int *)((char *)&v1318 + v51) = v1230;
                goto LABEL_1203;
              }
              if ( !(_BYTE)v1366 && !v51 )
              {
                v1076 = v1365;
                v1077 = 0;
                v1078 = 512;
                v1079 = v1690;
                if ( (int)v162(88i64, (unsigned int *)&v1076, 24i64, 0i64) >= 0 )
                {
                  v1569[2] = &v1318;
                  LODWORD(v46) = 255;
                  v51 = v267(65001i64, 0i64, (__int64 *)v1079, v1077 / 2, (__int64)&v1318, v46, 0i64, 0i64);
                }
              }
              v149 = 0;
            }
            *(int *)((char *)&v1318 + v51) = v149;
            v62 = 0;
            if ( v114 )
            {
              if ( !v67 && v51 && v273() == 31 )
              {
                if ( !v274(v114, &v1207, &v1207, &v1207, &v1207) && v273() == 31 )
                {
                  v77(v114);
                  v114 = v105(4096i64, 0i64, v1364);
                  if ( v114 )
                  {
                    *(int *)((char *)&v1318 + v51) = 0;
                    goto LABEL_1203;
                  }
                }
                else
                {
                  v77(v114);
                  v114 = 0i64;
                }
              }
              else if ( v51 )
              {
                strcpy(v419, "NtQueryInformationProcess");
                v1295 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                            v141,
                                                                                            v419);
                if ( v1295(v114, 61i64, (__int64 *)&v62, 1i64, 0i64) < 0 )
                {
                  _mm_lfence();
                  v1659 = 64i64;
                  if ( v1295(v114, 0i64, &v1659, 64i64, 0i64) >= 0 && (v1660 & 1) != 0 )
                    v62 = 1;
                }
                if ( v62 && v62 != 115 )
                {
                  for ( i33 = 0;
                        i33 < (int)(v51 - 7)
                     && (*(int *)((char *)&v1318 + i33) != 1835357276 || *(_WORD *)((char *)&v1320[-1] + i33) != 23664)
                     && *(int *)((char *)&v1318 + i33) != 1314214748;
                        ++i33 )
                  {
                    ;
                  }
                  if ( i33 == v51 - 7 )
                    v62 = 0;
                }
              }
            }
            if ( v1366 == 1634038899 && v1367 == 2019896941 )
            {
              v281 = v1364;
            }
            else if ( v1366 == 1935766380 && v1367 == 2019896947 )
            {
              v432 = v1364;
            }
            else if ( v1366 == 1819310181 && v1367 == 1919251055 && v1368 == 1702389038 && !v189 )
            {
              v189 = v1364;
            }
            else if ( v1366 == 778333539 && (__int16)v1367 == 30821 )
            {
              v433 = v1364;
            }
            else if ( v1366 == 1751348851 && v1367 == 779383663 )
            {
              if ( !v443 )
                v443 = v1364;
              if ( v114 && !v55 )
              {
                strcpy(v420, "NtQueryInformationProcess");
                v1296 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                            v141,
                                                                                            v420);
                if ( v1296(v114, 61i64, (__int64 *)&v55, 1i64, 0i64) >= 0 && v55 == 81 )
                {
                  v55 = 0;
                }
                else if ( !v55 )
                {
                  v1663 = 64i64;
                  if ( v1296(v114, 0i64, &v1663, 64i64, 0i64) >= 0 && (v1664 & 1) != 0 )
                    v55 = 1;
                }
              }
            }
            else if ( v1366 == 1702129518 && v1367 == 778330480 )
            {
              v135 = 1;
            }
            else if ( v1366 == 778925924 )
            {
              if ( !v1364 || *(_DWORD *)&v1316[v51 + 27] != 778925924 )
                goto LABEL_1203;
              v1229 = v1364;
            }
            if ( v51 )
            {
              if ( v1364 != v157() && v434 < 10 )
              {
                v64 = 0;
                v58 = 0;
                v83 = 0;
                v82 = 0;
                v84 = 0;
                v480 = v62
                    || !(_BYTE)v1366
                    || v1366 == 1633907525
                    && v1367 == 1917216112
                    && v1368 == 1632922991
                    && v1369 == 1987013490
                    && v1370 == 1702389038
                    && v67;
                v57 = v480;
                if ( v480 )
                  goto LABEL_1068;
                v89 = v51;
                v427 = 0;
                while ( 1 )
                {
                  if ( *((_BYTE *)&v1318 + --v89) == 92 )
                    ++v427;
                  if ( !v89 )
                    break;
                  if ( v89 < (int)(v51 - 8) )
                  {
                    v481 = *(int *)((char *)&v1318 + v89) == 1819310181
                        && *(_DWORD *)((char *)&v1320[-1] + v89) == 1919251055
                        || *(int *)((char *)&v1318 + v89) == 913531503
                        && *(_DWORD *)((char *)&v1320[-1] + v89) == 2019896884;
                    v483 = (v64 = v481)
                        || *(int *)((char *)&v1318 + v89) == 1802723668
                        && *(_DWORD *)((char *)&v1320[-1] + v89) == 779249517
                        && !v98
                        || (*(int *)((char *)&v1318 + v89) != 1953396050
                         || *(_DWORD *)((char *)&v1320[-1] + v89) != 1113943401 ? (v482 = 0) : (v482 = 1),
                            v83 = v482,
                            (v58 = v482) != 0);
                    v57 = v483;
                    if ( v483 )
                      goto LABEL_1068;
                  }
                }
                if ( v427 <= 2 )
                {
LABEL_1068:
                  if ( v274(v114, &v592, &v309, &v590, &v591)
                    && (v38 = v604(), v274(v38, &v518, &v309, &v309, &v309))
                    && v518 - v592 <= 900000000
                    && v518 - v592 >= -300000000
                    || v57
                    || v82 )
                  {
                    v97 = v281 != 0;
                    *((_BYTE *)&v1320[-1] + v51) = v281 != 0;
                    if ( v189 && v1365 == v189 )
                    {
                      *((_BYTE *)&v1320[-1] + v51) |= 2u;
                    }
                    else if ( v432 && v1365 == v432 )
                    {
                      *((_BYTE *)&v1320[-1] + v51) |= 8u;
                    }
                    else if ( v433 && v1365 == v433 )
                    {
                      *((_BYTE *)&v1320[-1] + v51) |= 0x10u;
                    }
                    else
                    {
                      v1208 = v105(4096i64, 0i64, v1365);
                      if ( v1208 )
                      {
                        strcpy(v394, "GetExitCodeProcess");
                        v1570 = (unsigned int (__fastcall *)(__int64, int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                               v79,
                                                                               v394);
                        if ( v1570(v1208, &v1216) && v1216 != 259 )
                          *((_BYTE *)&v1320[-1] + v51) |= 4u;
                        v77(v1208);
                      }
                      else if ( v273() != 5 )
                      {
                        *((_BYTE *)&v1320[-1] + v51) |= 4u;
                      }
                    }
                    if ( v62 )
                      *((_BYTE *)&v1320[-1] + v51) |= 0x20u;
                    if ( *((unsigned __int8 *)&v1320[-1] + v51) > 1u || v57 )
                    {
                      v525(1000i64);
                      ++v434;
                      if ( v274(
                             v114,
                             &v309,
                             &v309,
                             (__int64 *)((char *)&v1320[1] + v51 + 1),
                             (__int64 *)((char *)&v1320[3] + v51 + 1))
                        || v57 )
                      {
                        *(_QWORD *)((char *)&v1320[1] + v51 + 1) -= v590;
                        *(_QWORD *)((char *)&v1320[3] + v51 + 1) -= v591;
                        if ( (*((_BYTE *)&v1320[-1] + v51) & 8) != 0
                          || (__int64)(*(_QWORD *)((char *)&v1320[3] + v51 + 1)
                                     + *(_QWORD *)((char *)&v1320[1] + v51 + 1)) >= 500000
                          && !v64
                          && !v58
                          || v57 && !v64 && !v83 && !v84 )
                        {
                          v1317 = 64;
                          *(_QWORD *)((char *)&v1319 + v51 + 1) = v518 - v592;
                          if ( v49 + v51 + 30 + 2 <= 0x5400 )
                          {
                            *(_WORD *)(v49 + v53) = v51 + 30;
                            for ( i34 = 0; i34 < v51 + 30; ++i34 )
                              *(_BYTE *)(v53 + i34 + v49 + 2) = *(&v1317 + i34);
                            v49 += v51 + 32;
                          }
                          goto LABEL_1210;
                        }
                        if ( v64
                          && (__int64)(*(_QWORD *)((char *)&v1320[3] + v51 + 1)
                                     + *(_QWORD *)((char *)&v1320[1] + v51 + 1)) >= 500000
                          || v58
                          && (__int64)(*(_QWORD *)((char *)&v1320[3] + v51 + 1)
                                     + *(_QWORD *)((char *)&v1320[1] + v51 + 1)) >= 2500000 )
                        {
                          v455 = 0i64;
                          v236 = 336;
                          while ( 1 )
                          {
                            v236 += 1024;
                            v455 = v463((unsigned int *)v455, v236);
                            if ( !v455 )
                              break;
                            v70 = v162(5i64, (unsigned int *)v455, v236, &v236);
                            if ( v70 != -1073741820 )
                            {
                              if ( v70 >= 0 )
                              {
                                v285 = (unsigned int *)v455;
                                while ( *v78 )
                                {
                                  if ( *((_QWORD *)v285 + 10) == v1364 )
                                  {
                                    for ( i35 = 0; *v78 && i35 < v285[1]; ++i35 )
                                    {
                                      _mm_lfence();
                                      strcpy(v326, "OpenThread");
                                      v1256 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                                 v79,
                                                                                                 v326);
                                      v519 = v1256(2048i64, 0i64, v285[20 * i35 + 76]);
                                      if ( v519 )
                                      {
                                        v102 = 0;
                                        *(_QWORD *)((char *)&v1320[11] + v51 + 1) = *(_QWORD *)&v285[20 * i35 + 72];
                                        v1209 = v1256(64i64, 0i64, v285[20 * i35 + 76]);
                                        if ( v1209 )
                                        {
                                          strcpy(v412, "NtQueryInformationThread");
                                          v1585 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v141, v412);
                                          v488 = v1585(v1209, 9i64, &v1553, 8i64, 0i64);
                                          if ( v488 < 0 )
                                            v1297 = v488;
                                          else
                                            v1297 = v1553;
                                          *(_QWORD *)((char *)&v1320[11] + v51 + 1) = v1297;
                                          v77(v1209);
                                        }
                                        *(_QWORD *)((char *)&v1320[13] + v51 + 1) = 0i64;
                                        *(_QWORD *)((char *)&v1320[15] + v51 + 1) = 0i64;
                                        v1210 = v105(16i64, 0i64, v1364);
                                        if ( v1210 )
                                        {
                                          v71(
                                            v1210,
                                            *(_QWORD *)((char *)&v1320[11] + v51 + 1),
                                            (_BYTE *)&v1320[13] + v51 + 1,
                                            16i64,
                                            0i64);
                                          v77(v1210);
                                        }
                                        strcpy(v375, "GetThreadTimes");
                                        v1298 = (unsigned int (__fastcall *)(__int64, __int64 *, __int64 *, char *, char *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v375);
                                        if ( v1298(v519, &v1552, &v309, (char *)&v590, (char *)&v591)
                                          && (v1366 == 913531503 && (*((_BYTE *)&v1320[-1] + v51) & 4) != 0
                                           || v590 >= 1000000 && !v591
                                           || v58
                                           || v102) )
                                        {
                                          v525(1000i64);
                                          if ( v1298(
                                                 v519,
                                                 &v309,
                                                 &v309,
                                                 (char *)&v1320[7] + v51 + 1,
                                                 (char *)&v1320[9] + v51 + 1) )
                                          {
                                            if ( (*(_QWORD *)((char *)&v1320[7] + v51 + 1) -= v590,
                                                  *(_QWORD *)((char *)&v1320[9] + v51 + 1) -= v591,
                                                  v64)
                                              && *(__int64 *)((char *)&v1320[7] + v51 + 1) >= 500000
                                              && (v1366 == 913531503 || !*(_QWORD *)((char *)&v1320[9] + v51 + 1))
                                              || v58
                                              && (__int64)(*(_QWORD *)((char *)&v1320[9] + v51 + 1)
                                                         + *(_QWORD *)((char *)&v1320[7] + v51 + 1)) >= 2500000
                                              || v102 )
                                            {
                                              v1317 = 74;
                                              *(_QWORD *)((char *)&v1319 + v51 + 1) = v518 - v592;
                                              *(_QWORD *)((char *)&v1320[5] + v51 + 1) = v518 - v1552;
                                              if ( v49 + v51 + 78 + 2 <= 0x5400 )
                                              {
                                                *(_WORD *)(v49 + v53) = v51 + 78;
                                                for ( i36 = 0; i36 < v51 + 78; ++i36 )
                                                  *(_BYTE *)(v53 + i36 + v49 + 2) = *(&v1317 + i36);
                                                v49 += v51 + 80;
                                              }
                                            }
                                          }
                                        }
                                        if ( v519 )
                                          v77(v519);
                                      }
                                    }
                                    break;
                                  }
                                  if ( !*v285 )
                                    break;
                                  v285 = (unsigned int *)((char *)v285 + *v285);
                                }
                              }
                              v289((unsigned int *)v455);
                              break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  for ( i37 = 0; i37 < (int)(v51 - 6); ++i37 )
                  {
                    if ( *(int *)((char *)&v1318 + i37) == 1936016476
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1886352491
                      && *((_BYTE *)v1320 + i37) == 92 )
                    {
                      goto LABEL_1068;
                    }
                    v485 = *(int *)((char *)&v1318 + i37) == 1852405596
                        && *(_DWORD *)((char *)&v1320[-1] + i37) == 779249014
                        || (*(int *)((char *)&v1318 + i37) == 1819178323
                         && *(_DWORD *)((char *)&v1320[-1] + i37) == 1852401519
                         || *(int *)((char *)&v1318 + i37) == -426667803 ? (v484 = 1) : (v484 = 0),
                            (v84 = v484) != 0 || *(int *)((char *)&v1318 + i37) == 1547252019 && v149 == 2573824);
                    v57 = v485;
                    if ( v485
                      || *(int *)((char *)&v1318 + i37) == 1818838620
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1667584613 )
                    {
                      goto LABEL_1068;
                    }
                    if ( *(int *)((char *)&v1318 + i37) == 1668236380
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1852140917
                      && *(_WORD *)((char *)v1320 + i37) == 29556
                      && *((_BYTE *)v1320 + i37 + 2) == 92
                      || *(int *)((char *)&v1318 + i37) == 2003780700
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1634692206
                      && *(_WORD *)((char *)v1320 + i37) == 29540
                      && *((_BYTE *)v1320 + i37 + 2) == 92
                      || *(int *)((char *)&v1318 + i37) == 1634685532
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1735289197
                      && *((_BYTE *)v1320 + i37) == 92
                      || *(int *)((char *)&v1318 + i37) == 779119988 && *(_WORD *)((char *)&v1320[-1] + i37) == 30821
                      || *(int *)((char *)&v1318 + i37) == 1702129518
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 778330480
                      || *(int *)((char *)&v1318 + i37) == 774778460 && *(_WORD *)((char *)&v1320[-1] + i37) == 23598
                      || *(int *)((char *)&v1318 + i37) == 778333539 && *(_WORD *)((char *)&v1320[-1] + i37) == 30821
                      || *(int *)((char *)&v1318 + i37) == 1852401001
                      && *(_DWORD *)((char *)&v1320[-1] + i37) == 1818326131 )
                    {
                      goto LABEL_1068;
                    }
                    v486 = *(int *)((char *)&v1318 + i37) == 1766086222
                        && *(_DWORD *)((char *)&v1320[-1] + i37) == 1634496627;
                    v82 = v486;
                    if ( v486
                      || *(int *)((char *)&v1318 + i37) == 1835357276 && *(_WORD *)((char *)&v1320[-1] + i37) == 23664 )
                    {
                      goto LABEL_1068;
                    }
                    v487 = *(int *)((char *)&v1318 + i37) == 1702130553
                        && *(_DWORD *)((char *)&v1320[-1] + i37) == 1546793837;
                    v58 = v487;
                    if ( v487 || v149 >= 0x989680 && v149 < 0xB71B00 )
                      goto LABEL_1068;
                    if ( !v67 )
                      goto LABEL_1068;
                  }
                }
              }
              if ( v281
                && *(_DWORD *)&v1316[v51 + 22] == 1819310181
                && *(_DWORD *)&v1316[v51 + 26] == 1919251055
                && *(_DWORD *)&v1316[v51 + 30] == 1702389038
                && v1365 == v281 )
              {
                goto LABEL_1203;
              }
              if ( *(_DWORD *)&v1316[v51 + 21] == 1886217556
                && *(_DWORD *)&v1316[v51 + 30] == 1701603654
                && v1367 == 1702389038
                && ((char)v1366 >= 65 && (char)v1366 <= 90
                 || SBYTE1(v1366) >= 65 && SBYTE1(v1366) <= 90
                 || SBYTE2(v1366) >= 65 && SBYTE2(v1366) <= 90
                 || SHIBYTE(v1366) >= 65 && SHIBYTE(v1366) <= 90) )
              {
                v1318 = v1366;
                v1319 = v1367;
                v51 = 8;
                v1320[0] = 255;
LABEL_1203:
                v1317 = 56;
                if ( v49 + v51 + 5 + 2 <= 0x5400 )
                {
                  *(_WORD *)(v49 + v53) = v51 + 5;
                  for ( i38 = 0; i38 < v51 + 5; ++i38 )
                    *(_BYTE *)(v53 + i38 + v49 + 2) = *(&v1317 + i38);
                  v49 += v51 + 7;
                }
                goto LABEL_1208;
              }
              if ( *(_DWORD *)&v1316[v51 + 28] == 1700026952 )
                goto LABEL_1203;
              for ( i39 = 0; i39 < (int)(v51 - 4); ++i39 )
              {
                if ( *(int *)((char *)&v1318 + i39) == 543649362
                  || *(__int16 *)((char *)&v1318 + i39) == 41191
                  && *((unsigned __int8 *)&v1318 + i39 + 2) == -127
                  && *((unsigned __int8 *)&v1318 + i39 + 3) >= 0x30u
                  && *((unsigned __int8 *)&v1318 + i39 + 3) <= 0x39u
                  || *(int *)((char *)&v1318 + i39) == 541544018
                  || *(int *)((char *)&v1318 + i39) == -1864023211
                  || *(int *)((char *)&v1318 + i39) == 775302706 && *(_WORD *)((char *)&v1320[-1] + i39) == 30821
                  || *(int *)((char *)&v1318 + i39) == -425161754
                  && *(_DWORD *)((char *)&v1320[-1] + i39) == -1125537099 )
                {
                  goto LABEL_1203;
                }
              }
            }
            if ( v1366 == 1684107084 && v1367 == 1919052140
              || v1366 == 543649362
              || v149 == 382752
              && (v1366 != 1701667143 || v1367 != 1919252047)
              && (v1366 != 1701667175 || v1367 != 1919252079) )
            {
              goto LABEL_1203;
            }
LABEL_1208:
            if ( v114 )
              v77(v114);
LABEL_1210:
            if ( (v1366 == 1701667143 || v1366 == 1701667175 || v1366 == 1162690887)
              && (v1367 == 1919252047 || v1367 == 1919252079 || v1367 == 1380275791)
              && (v1368 == 1434018156 || v1368 == 1970889068 || v1368 == 1431912780) )
            {
              v96 = 1;
              v453 = v105(1024i64, 0i64, v1364);
              if ( v453 )
              {
                for ( i40 = 0i64; *v78; i40 = v550 + v549 )
                {
                  v527 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, unsigned __int64 *, __int64, __int64 *))v117)(
                           v453,
                           i40,
                           0i64,
                           &v549,
                           48i64,
                           &v1637);
                  if ( v527 < 0 )
                    break;
                  if ( v551 == 4096 && v553 == 0x20000 && (v552 == 16 || v552 == 32 || v552 == 64) )
                  {
                    if ( v550 > 0x10000 )
                    {
                      v1321 = 0;
                      v1322 = 59;
                      v1323 = v549;
                      v1324 = v550;
                      v1325 = v553 | v552 | v551;
                      if ( v49 + 19 <= 0x5400 )
                      {
                        *(_WORD *)(v49 + v53) = 17;
                        for ( i41 = 0; (unsigned __int64)i41 < 0x11; ++i41 )
                          *(_BYTE *)(v53 + i41 + v49 + 2) = *(&v1322 + i41);
                        v49 += 19i64;
                      }
                    }
                    if ( v55 )
                    {
                      v1458 = 0;
                      v1459 = 53;
                      v1460 = 1457;
                      v1461 = v55;
                      v1462 = v549;
                      v1463 = v550;
                      v1464 = v553 | v552 | v551;
                      if ( v49 + 29 <= 0x5400 )
                      {
                        *(_WORD *)(v49 + v53) = 27;
                        for ( i42 = 0; (unsigned __int64)i42 < 0x1B; ++i42 )
                          *(_BYTE *)(v53 + i42 + v49 + 2) = *(&v1459 + i42);
                        v49 += 29i64;
                      }
                    }
                    v1212 = v105(16i64, 0i64, v1364);
                    if ( v1212 )
                    {
                      v1117 = 8;
                      v1118 = 72;
                      v1119 = 0;
                      v1120 = 111;
                      v1121 = 0;
                      v1122 = 109;
                      v1123 = 0;
                      v1124 = 101;
                      v1125 = 0;
                      memset(v1126, 0, sizeof(v1126));
                      v1127 = 4;
                      v1128 = 70;
                      v1129 = 0;
                      v1130 = 49;
                      v1131 = 0;
                      memset(v1132, 0, sizeof(v1132));
                      v1133 = 16;
                      v1134 = -1;
                      v1135 = -1;
                      v1136 = -125;
                      v1137 = -60;
                      v1138 = 8;
                      v1139 = -61;
                      v1140 = 0;
                      v1141 = 0;
                      v1142 = 0;
                      v1143 = 0;
                      v1144 = 0;
                      v1145 = 0;
                      v1146 = 0;
                      v1147 = 0;
                      v1148 = 0;
                      v1149 = 0;
                      memset(v1150, 0, sizeof(v1150));
                      v1151 = 24;
                      v1152 = 92;
                      v1153 = 0;
                      v1154 = 92;
                      v1155 = 0;
                      v1156 = 46;
                      v1157 = 0;
                      v1158 = 92;
                      v1159 = 0;
                      v1160 = 112;
                      v1161 = 0;
                      v1162 = 105;
                      v1163 = 0;
                      v1164 = 112;
                      v1165 = 0;
                      v1166 = 101;
                      v1167 = 0;
                      v1168 = 92;
                      v1169 = 0;
                      v1170 = 37;
                      v1171 = 0;
                      v1172 = 115;
                      v1173 = 0;
                      v1174 = 0;
                      v1175 = 0;
                      v1176 = 10;
                      v1177 = -57;
                      v1178 = 6;
                      v1179 = 0;
                      v1180 = 0;
                      v1181 = 0;
                      v1182 = 0;
                      v1183 = -58;
                      v1184 = 71;
                      v1185 = 3;
                      v1186 = 0;
                      memset(v1187, 0, sizeof(v1187));
                      v1188 = 8;
                      v1189 = 105;
                      v1190 = -64;
                      v1191 = 24;
                      v1192 = 1;
                      v1193 = 0;
                      v1194 = 0;
                      v1195 = 51;
                      v1196 = -46;
                      memset(v1197, 0, sizeof(v1197));
                      v171 = 0;
                      for ( i43 = v549; *v78 && i43 != v550 + v549; i43 += 4096i64 )
                      {
                        if ( v71(v1212, i43, v1703, 4096i64, 0i64) >= 0 )
                        {
                          v131 = 0;
LABEL_1246:
                          if ( (unsigned __int64)v131 < 6 )
                          {
                            for ( i44 = 0; ; ++i44 )
                            {
                              if ( (unsigned int)(*(&v1117 + 7 * v131) + i44) > 0x1000ui64 )
                              {
                                ++v131;
                                goto LABEL_1246;
                              }
                              for ( i45 = 0;
                                    i45 < *(&v1117 + 7 * v131)
                                 && v1703[i45 + i44] == *((_BYTE *)&v1117 + 28 * v131 + (int)i45 + 4);
                                    ++i45 )
                              {
                                ;
                              }
                              if ( i45 == *(&v1117 + 7 * v131) )
                                break;
                            }
                            v1465 = 0;
                            v1466 = 53;
                            v1467 = 1388;
                            v1468 = i44 + i43;
                            v1469 = v549;
                            v1470 = v550;
                            v1471 = v553 | v552 | v551;
                            if ( v49 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v49 + v53) = 27;
                              for ( i46 = 0; (unsigned __int64)i46 < 0x1B; ++i46 )
                                *(_BYTE *)(v53 + i46 + v49 + 2) = *(&v1466 + i46);
                              v49 += 29i64;
                            }
                            break;
                          }
                          if ( v550 <= 0x10000 )
                          {
                            for ( i47 = 0; (unsigned __int64)i47 < 0xFFC; ++i47 )
                            {
                              if ( ((unsigned __int8)v1703[i47] == 233 || (unsigned __int8)v1703[i47] == 144)
                                && i47 + i43 + *(int *)&v1703[i47 + 1] + 5 >= v549
                                && i47 + i43 + *(int *)&v1703[i47 + 1] + 5 < v550 + v549
                                && !v171++ )
                              {
                                v1385 = i47 + i43 - v549;
                                v1386 = *(_QWORD *)&v1703[i47];
                                v1387 = *(_QWORD *)&v1703[i47 + 8];
                              }
                            }
                          }
                        }
                      }
                      if ( v171 >= 100 )
                      {
                        v1382 = 0;
                        v1383 = 59;
                        v1384 = v171 + v550;
                        if ( v49 + 25 <= 0x5400 )
                        {
                          *(_WORD *)(v49 + v53) = 23;
                          for ( i48 = 0; (unsigned __int64)i48 < 0x17; ++i48 )
                            *(_BYTE *)(v53 + i48 + v49 + 2) = *(&v1383 + i48);
                          v49 += 25i64;
                        }
                      }
                      v77(v1212);
                    }
                  }
                }
                if ( v527 == -1073741790 )
                {
                  v575 = 0;
                  v576 = 59;
                  v577 = -1073741790;
                  if ( v49 + 7 <= 0x5400 )
                  {
                    *(_WORD *)(v49 + v53) = 5;
                    for ( i49 = 0; (unsigned __int64)i49 < 5; ++i49 )
                      *(_BYTE *)(v53 + i49 + v49 + 2) = *(&v576 + i49);
                    v49 += 7i64;
                  }
                }
                v77(v453);
              }
              else if ( v273() == 5 )
              {
                v264 = 0;
                v265 = 59;
                if ( v49 + 3 <= 0x5400 )
                {
                  *(_WORD *)(v49 + v53) = 1;
                  for ( i50 = 0; !i50; ++i50 )
                    *(_BYTE *)(v53 + v49 + 2) = v265;
                  v49 += 3i64;
                }
                v161 = v105(4096i64, 0i64, v1364);
                if ( v161 )
                {
                  strcpy(v421, "NtQueryInformationProcess");
                  v1300 = (int (__fastcall *)(__int64, __int64, __int64 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                              v141,
                                                                                              v421);
                  v76 = 0;
                  if ( v1300(v161, 61i64, (__int64 *)&v76, 1i64, 0i64) < 0 )
                  {
                    _mm_lfence();
                    v1661 = 64i64;
                    if ( v1300(v161, 0i64, &v1661, 64i64, 0i64) >= 0 && (v1662 & 1) != 0 )
                      v76 = 1;
                  }
                  if ( v76 )
                  {
                    v572 = 0;
                    v573 = 59;
                    v574 = v76 + 4096;
                    if ( v49 + 7 <= 0x5400 )
                    {
                      *(_WORD *)(v49 + v53) = 5;
                      for ( i51 = 0; (unsigned __int64)i51 < 5; ++i51 )
                        *(_BYTE *)(v53 + i51 + v49 + 2) = *(&v573 + i51);
                      v49 += 7i64;
                    }
                  }
                  v77(v161);
                }
              }
              v453 = v105(16i64, 0i64, v1364);
              if ( v453 )
              {
                if ( v71(v453, 0i64, v447, 1i64, 0i64) == -1073741790 )
                {
                  v569 = 0;
                  v570 = 59;
                  v571 = -1073741790;
                  if ( v49 + 7 <= 0x5400 )
                  {
                    *(_WORD *)(v49 + v53) = 5;
                    for ( i52 = 0; (unsigned __int64)i52 < 5; ++i52 )
                      *(_BYTE *)(v53 + i52 + v49 + 2) = *(&v570 + i52);
                    v49 += 7i64;
                  }
                }
                v77(v453);
              }
              v595 = 0i64;
              v594 = v1301(24i64, v1364);
              if ( v594 != -1 )
              {
                strcpy(v357, "Module32First");
                v1591 = (unsigned int (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                          v79,
                                                                          v357);
                v1665[0] = 568;
                if ( v1591(v594, v1665) )
                {
                  strcpy(v350, "Module32Next");
                  v1588 = (unsigned int (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                            v79,
                                                                            v350);
                  do
                  {
                    if ( v1668 == 1769301878 && v1669 == 779312946 || v1668 == 1230325590 && v1669 == 777215794 )
                    {
                      v442 = v105(1040i64, 0i64, v1364);
                      if ( v442 )
                      {
                        for ( i53 = v86[0]; *v78 && i53 != v86[3] + v86[0]; i53 += 4096i64 )
                        {
                          if ( v71(-1i64, i53, v1691, 4096i64, 0i64) >= 0 )
                          {
                            for ( i54 = 0; (unsigned __int64)(i54 + 15) <= 0x1000; ++i54 )
                            {
                              if ( *(_DWORD *)((char *)v1691 + i54) == -11534230
                                && *(unsigned __int16 *)((char *)&v1691[1] + i54) == 35798
                                && *((_BYTE *)&v1691[1] + i54 + 2) == 13
                                && *(_DWORD *)((char *)&v1691[2] + i54 + 3) == -1862336117 )
                              {
                                _mm_lfence();
                                if ( v71(v442, *(unsigned int *)((char *)&v1691[1] + i54 + 3), v1691, 4i64, 0i64) >= 0 )
                                {
                                  _mm_lfence();
                                  if ( v71(v442, v1691[0], v1691, 4i64, 0i64) >= 0 )
                                  {
                                    _mm_lfence();
                                    if ( v71(v442, v1691[0], v1691, 1068i64, 0i64) >= 0 )
                                    {
                                      for ( i55 = 0; i55 < 1068; i55 += 4 )
                                      {
                                        _mm_lfence();
                                        v71(v442, (unsigned int)v1691[i55 / 4u], &v1392, 16i64, 0i64);
                                        if ( (unsigned int)v1691[i55 / 4u] < v1666
                                          || (unsigned int)v1691[i55 / 4u] >= v1667 + v1666
                                          || v1392 == 204 )
                                        {
                                          v1388 = 0;
                                          v1389 = 59;
                                          v1390 = i55;
                                          v1391 = v1691[i55 / 4u];
                                          if ( v49 + 25 <= 0x5400 )
                                          {
                                            *(_WORD *)(v49 + v53) = 23;
                                            for ( i56 = 0; (unsigned __int64)i56 < 0x17; ++i56 )
                                              *(_BYTE *)(v53 + i56 + v49 + 2) = *(&v1389 + i56);
                                            v49 += 25i64;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LABEL_1349;
                              }
                            }
                          }
                        }
LABEL_1349:
                        for ( i57 = v1666; i57 < v1667 + v1666; i57 = v1394 + v1393[0] )
                        {
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                                 v442,
                                 i57,
                                 0i64,
                                 v1393,
                                 48i64,
                                 &v1638) < 0 )
                            break;
                          if ( (v1396 == 16 || v1396 == 32 || v1396 == 64) && v1394 == 4096 )
                          {
                            v1472 = 0;
                            v1473 = 53;
                            v1474 = 1388;
                            v1475 = v1393[0] - v1393[1];
                            v1476 = v1393[0];
                            v1477 = 4096;
                            v1478 = v1397 | v1396 | v1395;
                            if ( v49 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v49 + v53) = 27;
                              for ( i58 = 0; (unsigned __int64)i58 < 0x1B; ++i58 )
                                *(_BYTE *)(v53 + i58 + v49 + 2) = *(&v1473 + i58);
                              v49 += 29i64;
                            }
                          }
                        }
                        v77(v442);
                      }
                    }
                    else if ( v1668 == 1701667175 && v1669 == 1919252079 && v1670 == 1970889068 && v1671 == 1818504809 )
                    {
                      v307 = v105(1040i64, 0i64, v1364);
                      if ( v307 )
                      {
                        if ( v71(v307, v1666 + 609277, v1081, 16i64, 0i64) >= 0
                          && v1081[0] == -1194537780
                          && v1081[2] == -858993469 )
                        {
                          _mm_lfence();
                          if ( v71(v307, v1081[1], v1081, 4i64, 0i64) >= 0 )
                          {
                            _mm_lfence();
                            if ( v71(v307, v1081[0], v1081, 20i64, 0i64) >= 0 )
                            {
                              for ( i59 = 0; (unsigned __int64)i59 < 0x14; i59 += 4 )
                              {
                                _mm_lfence();
                                v71(v307, (unsigned int)v1081[i59 / 4u], &v1402, 16i64, 0i64);
                                if ( (unsigned int)v1081[i59 / 4u] < v1666
                                  || (unsigned int)v1081[i59 / 4u] >= v1667 + v1666
                                  || v1402 == 204 )
                                {
                                  v1398 = 0;
                                  v1399 = 59;
                                  v1400 = i59;
                                  v1401 = v1081[i59 / 4u];
                                  if ( v49 + 25 <= 0x5400 )
                                  {
                                    *(_WORD *)(v49 + v53) = 23;
                                    for ( i60 = 0; (unsigned __int64)i60 < 0x17; ++i60 )
                                      *(_BYTE *)(v53 + i60 + v49 + 2) = *(&v1399 + i60);
                                    v49 += 25i64;
                                  }
                                }
                              }
                            }
                          }
                        }
                        v1304 = 4;
                        v1305 = -1;
                        v1306 = 16;
                        v1307 = -124;
                        v1308 = -64;
                        memset(v1309, 0, 0x14ui64);
                        for ( i61 = v1666; *v78; i61 = v1236 + v1235[0] )
                        {
                          if ( i61 >= v1667 + v1666 )
                            break;
                          _mm_lfence();
                          if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                                 v307,
                                 i61,
                                 0i64,
                                 v1235,
                                 48i64,
                                 &v1642) < 0 )
                            break;
                          if ( v1237 == 4096 && (v1238 == 16 || v1238 == 32 || v1238 == 64) )
                          {
                            for ( i62 = v1235[0]; ; i62 += 4096i64 )
                            {
                              if ( !*v78 || i62 == v1236 + v1235[0] )
                              {
                                if ( v1236 == 0x2000 )
                                {
                                  v1486 = 0;
                                  v1487 = 53;
                                  v1488 = 1388;
                                  v1489 = v1235[1];
                                  v1490 = v1235[0];
                                  v1491 = 0x2000;
                                  v1492 = v1239 | v1238 | v1237;
                                  if ( v49 + 29 <= 0x5400 )
                                  {
                                    *(_WORD *)(v49 + v53) = 27;
                                    for ( i63 = 0; (unsigned __int64)i63 < 0x1B; ++i63 )
                                      *(_BYTE *)(v53 + i63 + v49 + 2) = *(&v1487 + i63);
                                    v49 += 29i64;
                                  }
                                }
                                goto LABEL_1421;
                              }
                              if ( v71(v307, i62, v1706, 4096i64, 0i64) >= 0 )
                              {
                                v132 = 0;
LABEL_1398:
                                if ( !v132 )
                                  break;
                              }
                            }
                            for ( i64 = 0; ; ++i64 )
                            {
                              if ( (unsigned int)(*(&v1304 + 7 * v132) + i64) > 0x1000ui64 )
                              {
                                ++v132;
                                goto LABEL_1398;
                              }
                              for ( i65 = 0;
                                    i65 < *(&v1304 + 7 * v132)
                                 && v1706[i65 + i64] == *((_BYTE *)&v1304 + 28 * v132 + (int)i65 + 4);
                                    ++i65 )
                              {
                                ;
                              }
                              if ( i65 == *(&v1304 + 7 * v132) )
                                break;
                            }
                            v1479 = 0;
                            v1480 = 53;
                            v1481 = 1388;
                            v1482 = i64 + i62;
                            v1483 = v1235[0];
                            v1484 = v1236;
                            v1485 = v1239 | v1238 | v1237;
                            if ( v49 + 29 <= 0x5400 )
                            {
                              *(_WORD *)(v49 + v53) = 27;
                              for ( i66 = 0; (unsigned __int64)i66 < 0x1B; ++i66 )
                                *(_BYTE *)(v53 + i66 + v49 + 2) = *(&v1480 + i66);
                              v49 += 29i64;
                            }
                          }
LABEL_1421:
                          ;
                        }
                        v77(v307);
                      }
                      v595 = v1666;
                      v1227 = v1667;
                    }
                  }
                  while ( *v78 && v1588(v594, v1665) );
                }
                v77(v594);
              }
              v456 = 0i64;
              v183 = 336;
              while ( 1 )
              {
                v183 += 1024;
                v456 = v463((unsigned int *)v456, v183);
                if ( !v456 )
                  break;
                v70 = v162(5i64, (unsigned int *)v456, v183, &v183);
                if ( v70 != -1073741820 )
                {
                  if ( v70 >= 0 )
                  {
                    v441 = (unsigned int *)v456;
                    while ( *v78 )
                    {
                      if ( *((_QWORD *)v441 + 10) == v1364 )
                      {
                        for ( i67 = 0; *v78 && i67 < v441[1]; ++i67 )
                        {
                          _mm_lfence();
                          strcpy(v327, "OpenThread");
                          v1589 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                     v79,
                                                                                     v327);
                          v521 = v1589(10i64, 0i64, v441[20 * i67 + 76]);
                          if ( v521 )
                          {
                            strcpy(v346, "ResumeThread");
                            v1533 = (__int64 (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                       v79,
                                                                       v346);
                            v435 = v1533(v521);
                            if ( v435 )
                            {
                              if ( v435 != -1 )
                              {
                                strcpy(v356, "SuspendThread");
                                v1540 = (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                        v79,
                                                                        v356);
                                v1540(v521);
                                v566 = 0;
                                v567 = 59;
                                v568 = v435;
                                if ( v49 + 7 <= 0x5400 )
                                {
                                  *(_WORD *)(v49 + v53) = 5;
                                  for ( i68 = 0; (unsigned __int64)i68 < 5; ++i68 )
                                    *(_BYTE *)(v53 + i68 + v49 + 2) = *(&v567 + i68);
                                  v49 += 7i64;
                                }
                              }
                            }
                            v1687[12] = 1048593;
                            strcpy(v381, "GetThreadContext");
                            v1541 = (unsigned int (__fastcall *)(__int64, _DWORD *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                      v79,
                                                                                      v381);
                            v436 = 0;
                            v187 = 0;
                            while ( *v78 && v436 < 100 && v187 < 15 )
                            {
                              if ( v1541(v521, v1687) )
                              {
                                if ( v1688 )
                                {
                                  v563 = 0;
                                  v564 = 59;
                                  v565 = v1687[18];
                                  if ( v49 + 7 <= 0x5400 )
                                  {
                                    *(_WORD *)(v49 + v53) = 5;
                                    for ( i69 = 0; (unsigned __int64)i69 < 5; ++i69 )
                                      *(_BYTE *)(v53 + i69 + v49 + 2) = *(&v564 + i69);
                                    v49 += 7i64;
                                  }
                                  ++v187;
                                }
                                v596 = v105(1040i64, 0i64, v1364);
                                if ( v596 )
                                {
                                  if ( v71(v596, v1689, v1685, 512i64, 0i64) >= 0 )
                                  {
                                    for ( i70 = 0; (unsigned __int64)i70 < 0x80; ++i70 )
                                    {
                                      if ( v1685[i70] >= (unsigned int)v595 && v1685[i70] < v1227 + (unsigned int)v595 )
                                      {
                                        _mm_lfence();
                                        if ( v71(v596, (unsigned int)v1685[i70], &v1614, 16i64, 0i64) >= 0
                                          && v1614 == 9215 )
                                        {
                                          v1610[16] = 0;
                                          v1611 = 59;
                                          v1612 = i70;
                                          v1613 = v1685[i70] - v595;
                                          if ( v49 + 25 <= 0x5400 )
                                          {
                                            *(_WORD *)(v49 + v53) = 23;
                                            for ( i71 = 0; i71 < 23; ++i71 )
                                              *(_BYTE *)(v53 + i71 + v49 + 2) = *(&v1611 + i71);
                                            v49 += 25i64;
                                          }
                                          ++v187;
                                        }
                                      }
                                    }
                                  }
                                  v77(v596);
                                }
                              }
                              v525(10i64);
                              ++v436;
                            }
                            v77(v521);
                          }
                        }
                        break;
                      }
                      if ( !*v441 )
                        break;
                      v441 = (unsigned int *)((char *)v441 + *v441);
                    }
                  }
                  v289((unsigned int *)v456);
                  break;
                }
              }
            }
            v597 = v105(1024i64, 0i64, v1364);
            if ( v597 )
            {
              v1302 = 0i64;
              v457 = 0i64;
              while ( 2 )
              {
                if ( !*v78
                  || ((int (__fastcall *)(__int64, __int64, _QWORD, __int64 *, __int64, __int64 *))v117)(
                       v597,
                       v1302,
                       0i64,
                       &v662,
                       48i64,
                       &v1587) < 0 )
                {
                  v77(v597);
                  break;
                }
                if ( v1366 == 778925924 )
                {
                  if ( v665 == 4096 && v667 != 0x1000000 && (v666 == 16 || v666 == 32 || v666 == 64) && v664 > 0x10000 )
                    goto LABEL_1491;
                }
                else if ( v665 == 4096 && (v666 == 16 || v666 == 32 || v666 == 64) && v667 == 0x20000 && v664 == 4096 )
                {
                  _mm_lfence();
                  if ( !v457 )
                    v457 = v662;
                  if ( ((int (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                         v597,
                         v664 + v662,
                         0i64,
                         v1632,
                         48i64,
                         &v1587) < 0
                    || v1633 != 4096
                    || v1634 != 16 && v1634 != 32 && v1634 != 64
                    || v1635 != 0x20000
                    || v1632[3] != v664 )
                  {
                    if ( v662 - v457 < 192512 )
                    {
                      v457 = 0i64;
                    }
                    else
                    {
                      v663 = v664 + v662 - v457;
                      v457 = 0i64;
LABEL_1491:
                      v1424 = 0;
                      v1425 = 53;
                      v1426 = 1417;
                      v1427 = v663;
                      v1428 = v662;
                      v1429 = v664;
                      v1430 = v667 | v666 | v665;
                      if ( v49 + 29 <= 0x5400 )
                      {
                        *(_WORD *)(v49 + v53) = 27;
                        for ( i72 = 0; (unsigned __int64)i72 < 0x1B; ++i72 )
                          *(_BYTE *)(v53 + i72 + v49 + 2) = *(&v1425 + i72);
                        v49 += 29i64;
                      }
                    }
                  }
                }
                v1302 = v664 + v662;
                continue;
              }
            }
            if ( (v1366 == 1802723668 || v1366 == 1802723700) && v1367 == 779249517
              || v1366 == 1819310181 && v1367 == 1919251055 && v1368 == 1702389038 && v1364 != v189 )
            {
              v306 = v105(1040i64, 0i64, v1364);
              if ( v306 )
              {
                v158 = 0;
                for ( i73 = 0i64;
                      *v78
                   && ((int (__fastcall *)(__int64, __int64, _QWORD, __int64 *, __int64, __int64 *))v117)(
                        v306,
                        i73,
                        0i64,
                        &v1619,
                        48i64,
                        &v1639) >= 0;
                      i73 = v1620 + v1619 )
                {
                  if ( v1621 == 4096 && v1623 == 0x20000 && v1622 == 64 && v1620 == 4096 )
                  {
                    v1586 = v158++;
                    if ( v1586 < 5 )
                      *(_QWORD *)&v1650[8 * v158 + 216] = v1619;
                  }
                }
                if ( v158 == 5i64 )
                {
                  for ( i74 = 0; i74 < v158; ++i74 )
                  {
                    _mm_lfence();
                    v1418 = 0;
                    v1419 = 53;
                    v1420 = 1496;
                    v71(v306, *(_QWORD *)&v1650[8 * i74 + 224], v1421, 8i64, 0i64);
                    v1421[1] = *(_QWORD *)&v1650[8 * i74 + 224];
                    v1422 = 0;
                    v1423 = 0;
                    if ( v49 + 29 <= 0x5400 )
                    {
                      *(_WORD *)(v49 + v53) = 27;
                      for ( i75 = 0; (unsigned __int64)i75 < 0x1B; ++i75 )
                        *(_BYTE *)(v53 + i75 + v49 + 2) = *(&v1419 + i75);
                      v49 += 29i64;
                    }
                  }
                }
                v77(v306);
              }
              else if ( v1366 == 1819310181 )
              {
                v1326 = 0;
                v1327 = 53;
                v1328 = 1496;
                v1329 = v273();
                v1330 = 0i64;
                v306 = v105(4096i64, 0i64, v1364);
                if ( v306 )
                {
                  if ( v274(v306, &v1584, &v522, &v522, &v522) )
                  {
                    v39 = v604();
                    if ( v274(v39, &v1583, &v522, &v522, &v522) )
                      v1330 = v1583 - v1584;
                  }
                  v77(v306);
                }
                v1331 = 0;
                v1332 = 0;
                if ( v49 + 29 <= 0x5400 )
                {
                  *(_WORD *)(v49 + v53) = 27;
                  for ( i76 = 0; (unsigned __int64)i76 < 0x1B; ++i76 )
                    *(_BYTE *)(v53 + i76 + v49 + 2) = *(&v1327 + i76);
                  v49 += 29i64;
                }
              }
            }
          }
          while ( *v78 && v1582(v598, &v1363) );
        }
        v77(v598);
        if ( v55 )
        {
          v599 = 0;
          v600 = 72;
          v601 = 1457;
          v602 = v55;
          if ( v49 + 9 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 7;
            for ( i77 = 0; (unsigned __int64)i77 < 7; ++i77 )
              *(_BYTE *)(v53 + i77 + v49 + 2) = *(&v600 + i77);
            v49 += 9i64;
          }
        }
      }
      result = (unsigned __int8)*v78;
      if ( *v78 )
      {
        strcpy(v347, "LoadLibraryA");
        v1222 = (__int64 (__fastcall *)(char *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v347);
        strcpy(v320, "psapi.dll");
        v1268 = v1222(v320);
        if ( v1268 )
        {
          strcpy(v355, "EnumProcesses");
          v1581 = (unsigned int (__fastcall *)(_DWORD *, __int64, unsigned int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                    v1268,
                                                                                    v355);
          if ( v1581(v1702, 1600i64, &v196) )
          {
            if ( v196 < 0x640ui64 )
            {
              for ( i78 = 0; *v78 && (int)i78 < (int)&loc_FFFB + 5; i78 += 4 )
              {
                _mm_lfence();
                v286 = v105(4096i64, 0i64, i78);
                if ( v286 )
                {
                  _mm_lfence();
                  v1647[16] = 0;
                  v1648 = 56;
                  v1682[0] = 0;
                  v59 = 128;
                  if ( !v603(v286, 0i64, v1682, &v59)
                    || (LODWORD(v46) = 255,
                        (v59 = v267(65001i64, 0i64, (__int64 *)v1682, v59, (__int64)v1649, v46, 0i64, 0i64)) == 0) )
                  {
                    v1403 = (int)i78;
                    v1404 = 0;
                    v1405 = 512;
                    v1406 = &v1701;
                    if ( (int)v162(88i64, (unsigned int *)&v1403, 24i64, 0i64) < 0 )
                    {
                      v59 = 0;
                    }
                    else
                    {
                      v1580[3] = v1649;
                      LODWORD(v46) = 255;
                      v59 = v267(65001i64, 0i64, v1406, v1404 / 2, (__int64)v1649, v46, 0i64, 0i64);
                    }
                  }
                  for ( i79 = 0; ; ++i79 )
                  {
                    v1580[2] = i79;
                    if ( i79 >= v196 / 4ui64 || v1702[i79] == i78 )
                      break;
                  }
                  strcpy(v392, "GetExitCodeProcess");
                  v1257 = (unsigned int (__fastcall *)(__int64, int *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                         v79,
                                                                         v392);
                  if ( v59 )
                  {
                    if ( !v96
                      && (*(_DWORD *)&v1647[v59 + 1] == 1701667143 || *(_DWORD *)&v1647[v59 + 1] == 1701667175)
                      && (*(_DWORD *)&v1647[v59 + 5] == 1919252047 || *(_DWORD *)&v1647[v59 + 5] == 1919252079)
                      && (*(_DWORD *)&v1647[v59 + 9] == 1434018156 || *(_DWORD *)&v1647[v59 + 9] == 1970889068)
                      || (v1580[1] = i79, i79 == v196 / 4ui64)
                      && *(_DWORD *)&v1647[v59] == 1634038899
                      && *(_DWORD *)&v1647[v59 + 4] == 1650816877 )
                    {
                      if ( v1257(v286, &v1226) )
                      {
                        if ( v1226 == 259 )
                        {
                          if ( v274(v286, &v1579, &v523, &v523, &v523)
                            && (v40 = v604(), v274(v40, v1580, &v523, &v523, &v523)) )
                          {
                            *(_DWORD *)&v1649[v59] = ((v1579 - v1580[0]) / 10000) & 0xFFFFFFFE;
                          }
                          else
                          {
                            *(_DWORD *)&v1649[v59] = 0;
                          }
                          if ( *(int *)&v1649[v59] >= 0 )
                          {
                            v1578 = i79;
                            v491 = i79 == v196 / 4ui64;
                            *(_DWORD *)&v1649[v59] |= v491;
                            if ( v49 + v59 + 5 + 2 <= 0x5400 )
                            {
                              *(_WORD *)(v49 + v53) = v59 + 5;
                              for ( i80 = 0; i80 < v59 + 5; ++i80 )
                                *(_BYTE *)(v53 + (int)i80 + v49 + 2) = v1649[i80 - 1];
                              v49 += v59 + 7;
                            }
                          }
                        }
                      }
                      else
                      {
                        *(_DWORD *)&v1649[v59] = v273();
                        if ( v49 + v59 + 5 + 2 <= 0x5400 )
                        {
                          *(_WORD *)(v49 + v53) = v59 + 5;
                          for ( i81 = 0; i81 < v59 + 5; ++i81 )
                            *(_BYTE *)(v53 + (int)i81 + v49 + 2) = v1649[i81 - 1];
                          v49 += v59 + 7;
                        }
                      }
                    }
                  }
                  v1577 = i79;
                  v41 = v196 % 4ui64;
                  if ( i79 == v196 / 4ui64 && v1257(v286, &v1225) && v1225 == 259 )
                  {
                    v77(v286);
                    v286 = v105(4096i64, 0i64, i78);
                    if ( !v286 )
                      continue;
                    if ( v59 )
                    {
                      v532 = v605(v1682, 0i64, v1657) ? v1657[8] : 0;
                      *(_DWORD *)&v1649[v59] = v532;
                      if ( v49 + v59 + 5 + 2 <= 0x5400 )
                      {
                        v41 = v49 + v53;
                        *(_WORD *)(v49 + v53) = v59 + 5;
                        for ( i82 = 0; i82 < v59 + 5; ++i82 )
                        {
                          v41 = v49;
                          *(_BYTE *)(v53 + (int)i82 + v49 + 2) = v1649[i82 - 1];
                        }
                        v49 += v59 + 7;
                      }
                    }
                  }
                  ((void (__fastcall *)(__int64, unsigned __int64))v77)(v286, v41);
                }
              }
            }
          }
        }
        strcpy(v328, "BE_DLL.dll");
        if ( v1252(v328, 0i64, v1643) )
        {
          v560 = 0;
          v561 = 61;
          v562 = v1644;
          if ( v49 + 7 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 5;
            for ( i83 = 0; (unsigned __int64)i83 < 5; ++i83 )
              *(_BYTE *)(v53 + i83 + v49 + 2) = *(&v561 + i83);
            v49 += 7i64;
          }
        }
        strcpy(v311, "\\\\.\\Beep");
        v524 = v467(v311, 0x80000000i64, 3i64, 0i64, 3, 0, 0i64);
        if ( v524 != -1 )
        {
          v262 = 0;
          v263 = 62;
          if ( v49 + 3 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 1;
            for ( i84 = 0; !i84; ++i84 )
              *(_BYTE *)(v53 + v49 + 2) = v263;
            v49 += 3i64;
          }
          v77(v524);
        }
        strcpy(v313, "\\\\.\\Null");
        v524 = v467(v313, 0x80000000i64, 3i64, 0i64, 3, 0, 0i64);
        if ( v524 != -1 )
        {
          v260 = 0;
          v261 = 63;
          if ( v49 + 3 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = 1;
            for ( i85 = 0; !i85; ++i85 )
              *(_BYTE *)(v53 + v49 + 2) = v261;
            v49 += 3i64;
          }
          v77(v524);
        }
        result = (unsigned __int8)*v78;
        if ( *v78 )
        {
          v1224 = v1258();
          v525(1000i64);
          v531 = v1258() - v1224;
          if ( v531 >= 0x4B0 )
          {
            v557 = 0;
            v558 = 69;
            v559 = v531;
            if ( v49 + 7 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 5;
              for ( i86 = 0; (unsigned __int64)i86 < 5; ++i86 )
                *(_BYTE *)(v53 + i86 + v49 + 2) = *(&v558 + i86);
              v49 += 7i64;
            }
          }
          strcpy(v425, "..\\..\\Plugins\\ZipUtility\\ThirdParty\\7zpp\\dll\\Win64\\7z.dll");
          v54 = v1709(v425);
          if ( v54 )
          {
            if ( *(_DWORD *)(v54 + 4104) != -2092412088 )
            {
              v1359 = 0;
              v1360[0] = 70;
              v1360[1] = 0;
              v1361 = *(_QWORD *)(v54 + 4104);
              v1362 = *(_QWORD *)(v54 + 4112);
              if ( v49 + 20 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 18;
                for ( i87 = 0; (unsigned __int64)i87 < 0x12; ++i87 )
                  *(_BYTE *)(v53 + i87 + v49 + 2) = v1360[i87];
                v49 += 20i64;
              }
            }
          }
          strcpy(v305, "hal.dll");
          v54 = v1709(v305);
          if ( v54 )
          {
            v1355 = 0;
            v1356[0] = 70;
            v1356[1] = 2;
            v1357 = *(_QWORD *)(v54 + 4096);
            v1358 = *(_QWORD *)(v54 + 4104);
            if ( v49 + 20 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 18;
              for ( i88 = 0; (unsigned __int64)i88 < 0x12; ++i88 )
                *(_BYTE *)(v53 + i88 + v49 + 2) = v1356[i88];
              v49 += 20i64;
            }
          }
          strcpy(v391, "nvToolsExt64_1.dll");
          v54 = v1709(v391);
          if ( v54 )
          {
            v606 = 0;
            v607 = 72;
            v608 = 1448;
            v609 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 80);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i89 = 0; (unsigned __int64)i89 < 7; ++i89 )
                *(_BYTE *)(v53 + i89 + v49 + 2) = *(&v607 + i89);
              v49 += 9i64;
            }
          }
          strcpy(v388, "ws2detour_x96.dll");
          v54 = v1709(v388);
          if ( v54 )
          {
            v610 = 0;
            v611 = 72;
            v612 = 1461;
            v613 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 80);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i90 = 0; (unsigned __int64)i90 < 7; ++i90 )
                *(_BYTE *)(v53 + i90 + v49 + 2) = *(&v611 + i90);
              v49 += 9i64;
            }
          }
          strcpy(v389, "networkdllx64.dll");
          v54 = v1709(v389);
          if ( v54 )
          {
            if ( *(_DWORD *)(v54 + *(int *)(v54 + 60) + 80) < 0x200000u
              || *(_DWORD *)(v54 + *(int *)(v54 + 60) + 80) >= 0x400000u )
            {
              if ( *(_DWORD *)(*(int *)(v54 + 60) + v54 + 172) == 6944 )
              {
                v618 = 0;
                v619 = 72;
                v620 = 1463;
                v621 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 8);
                if ( v49 + 9 <= 0x5400 )
                {
                  *(_WORD *)(v49 + v53) = 7;
                  for ( i91 = 0; (unsigned __int64)i91 < 7; ++i91 )
                    *(_BYTE *)(v53 + i91 + v49 + 2) = *(&v619 + i91);
                  v49 += 9i64;
                }
              }
            }
            else
            {
              v614 = 0;
              v615 = 72;
              v616 = 1463;
              v617 = *(_DWORD *)(*(int *)(v54 + 60) + v54 + 172);
              if ( v49 + 9 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 7;
                for ( i92 = 0; (unsigned __int64)i92 < 7; ++i92 )
                  *(_BYTE *)(v53 + i92 + v49 + 2) = *(&v615 + i92);
                v49 += 9i64;
              }
            }
          }
          strcpy(v380, "nxdetours_64.dll");
          v54 = v1709(v380);
          if ( v54 )
          {
            v622 = 0;
            v623 = 72;
            v624 = 1464;
            v625 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 80);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i93 = 0; (unsigned __int64)i93 < 7; ++i93 )
                *(_BYTE *)(v53 + i93 + v49 + 2) = *(&v623 + i93);
              v49 += 9i64;
            }
          }
          strcpy(v373, "nvcompiler.dll");
          v54 = v1709(v373);
          if ( v54 )
          {
            v626 = 0;
            v627 = 72;
            v628 = 1468;
            v629 = *(_DWORD *)(v54 + 4096);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i94 = 0; (unsigned __int64)i94 < 7; ++i94 )
                *(_BYTE *)(v53 + i94 + v49 + 2) = *(&v627 + i94);
              v49 += 9i64;
            }
          }
          strcpy(v348, "iphlpapi.dll");
          v54 = v1222(v348);
          if ( v54 )
          {
            strcpy(v399, "GetExtendedTcpTable");
            v1259 = (unsigned int (__fastcall *)(unsigned int *, unsigned int *, _QWORD, __int64, int, _DWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v54, v399);
            v437 = 0;
            v1259(0i64, &v437, 0i64, 2i64, 8, 0);
            v110 = (unsigned int *)v1215(v437);
            if ( !v1259(v110, &v437, 0i64, 2i64, 8, 0) )
            {
              for ( i95 = 0; i95 < *v110; ++i95 )
              {
                v65 = 0;
                if ( v110[40 * i95 + 6] != 24862 || v110[40 * i95 + 7] != 4 )
                {
                  v530 = v110[40 * i95 + 7] == v443 && (!v110[40 * i95 + 3] || v110[40 * i95 + 3] == 16777343);
                  v65 = v530;
                  if ( !v530
                    && v110[40 * i95 + 5] != 772020840
                    && v110[40 * i95 + 5] != 772086376
                    && v110[40 * i95 + 5] != -1991883860
                    && v110[40 * i95 + 6] != 54556 )
                  {
                    v529 = v110[40 * i95 + 4] == 54556 && v110[40 * i95 + 2] == 2;
                    v65 = v529;
                    if ( !v529 )
                      continue;
                  }
                }
                v1407 = v110[40 * i95 + 7];
                v1408 = 0;
                v1409 = 512;
                v1410 = &v1705;
                v162(88i64, (unsigned int *)&v1407, 24i64, 0i64);
                v1672 = 0;
                v1673 = 72;
                v1674 = 1465;
                v1675 = v110[40 * i95 + 2];
                v539 = v65 ? v110[40 * i95 + 4] : v110[40 * i95 + 6];
                v1676 = v539;
                v507 = v65 ? v110[40 * i95 + 3] : v110[40 * i95 + 5];
                v1677 = v507;
                v274(-1i64, &v1678, &v1260, &v1260, &v1260);
                v1678 -= *(_QWORD *)&v110[40 * i95 + 8];
                v1576 = v1679;
                LODWORD(v47) = 255;
                v282 = v267(65001i64, 0i64, v1410, v1408 / 2, (__int64)v1679, v47, 0i64, 0i64);
                if ( v49 + (unsigned int)(v282 + 21) + 2 <= 0x5400 )
                {
                  *(_WORD *)(v49 + v53) = v282 + 21;
                  for ( i96 = 0; i96 < (unsigned int)(v282 + 21); ++i96 )
                    *(_BYTE *)(v53 + i96 + v49 + 2) = *(&v1673 + i96);
                  v49 += (unsigned int)(v282 + 23);
                }
              }
            }
            v289(v110);
          }
          strcpy(v304, "wmp.dll");
          v54 = v1709(v304);
          if ( v54 )
          {
            v630 = 0;
            v631 = 72;
            v632 = 1470;
            v633 = *(_DWORD *)(v54 + 4096);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i97 = 0; (unsigned __int64)i97 < 7; ++i97 )
                *(_BYTE *)(v53 + i97 + v49 + 2) = *(&v631 + i97);
              v49 += 9i64;
            }
          }
          strcpy(v349, "Project1.dll");
          v54 = v1709(v349);
          if ( v54 )
          {
            v634 = 0;
            v635 = 72;
            v636 = 1480;
            v637 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 8);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i98 = 0; (unsigned __int64)i98 < 7; ++i98 )
                *(_BYTE *)(v53 + i98 + v49 + 2) = *(&v635 + i98);
              v49 += 9i64;
            }
          }
          strcpy(v354, "tier0_x64.dll");
          strcpy(v344, "TenFact1.dll");
          strcpy(v329, "netio1.dll");
          strcpy(v353, "QbBridge1.dll");
          strcpy(v343, "wcprobe1.dll");
          strcpy(v398, "crash_capturer1.dll");
          strcpy(v319, "iips1.dll");
          strcpy(v379, "AECommonDll1.dll");
          strcpy(v330, "wgcore.dll");
          strcpy(v397, "AMD_RYZEN_3990X.dll");
          strcpy(v331, "NoName.dll");
          v54 = v1709(v354);
          if ( v54 )
            goto LABEL_2065;
          v54 = v1709(v344);
          if ( v54 )
            goto LABEL_2065;
          v54 = v1709(v329);
          if ( v54 )
            goto LABEL_2065;
          v54 = v1709(v353);
          if ( v54
            || (v54 = v1709(v343)) != 0
            || (v54 = v1709(v398)) != 0
            || (v54 = v1709(v319)) != 0
            || (v54 = v1709(v379)) != 0
            || (v54 = v1709(v330)) != 0
            || (v54 = v1709(v397)) != 0
            || (v54 = v1709(v331)) != 0 )
          {
LABEL_2065:
            v1411 = 0;
            v1412 = 53;
            v1413 = 1482;
            v638 = (unsigned int *)(*(int *)(v54 + 60) + v54);
            v1414 = v638[2];
            v1415 = v638[20];
            v1416 = v638[10];
            v1417 = v638[43];
            if ( v49 + 29 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 27;
              for ( i99 = 0; (unsigned __int64)i99 < 0x1B; ++i99 )
                *(_BYTE *)(v53 + i99 + v49 + 2) = *(&v1412 + i99);
              v49 += 29i64;
            }
          }
          strcpy(v385, "DxtoryMM_x64.dll");
          strcpy(v318, "mslib.dll");
          v54 = v1709(v385);
          if ( v54 || (v54 = v1709(v318)) != 0 )
          {
            v458 = 0;
            v459 = 72;
            v460 = 1483;
            v461 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 8);
            if ( v461 == 1533622785 )
              v461 = *(_DWORD *)(v54 + 4444160);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i100 = 0; (unsigned __int64)i100 < 7; ++i100 )
                *(_BYTE *)(v53 + i100 + v49 + 2) = *(&v459 + i100);
              v49 += 9i64;
            }
          }
          strcpy(v423, "C:\\Windows\\mscorlib.ni.dll");
          v54 = v1709(v423);
          if ( v54 )
          {
            v639 = 0;
            v640 = 72;
            v641 = 1415;
            v642 = *(_DWORD *)(v54 + 4096);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i101 = 0; (unsigned __int64)i101 < 7; ++i101 )
                *(_BYTE *)(v53 + i101 + v49 + 2) = *(&v640 + i101);
              v49 += 9i64;
            }
          }
          strcpy(v342, "frAQBc8W.dll");
          v54 = v1709(v342);
          if ( v54 )
          {
            v643 = 0;
            v644 = 72;
            v645 = 1489;
            v646 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 8);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i102 = 0; (unsigned __int64)i102 < 7; ++i102 )
                *(_BYTE *)(v53 + i102 + v49 + 2) = *(&v644 + i102);
              v49 += 9i64;
            }
          }
          strcpy(v341, "OWClient.dll");
          v54 = v1709(v341);
          if ( v54 )
          {
            v340[0] = 76;
            v340[1] = -117;
            v340[2] = -32;
            v340[3] = 72;
            v340[4] = -123;
            v340[5] = -64;
            v340[6] = 117;
            v340[7] = 75;
            v340[8] = -78;
            v340[9] = 1;
            v340[10] = 72;
            v340[11] = -115;
            v340[12] = 13;
            v1261 = v54 + *(int *)(v54 + 60) + 24;
            v440 = (__int64 **)(*(unsigned int *)(v1261 + 20) + v54);
            for ( i103 = 0; *v78 && i103 + 13i64 <= (unsigned __int64)*(unsigned int *)(v1261 + 4); ++i103 )
            {
              for ( i104 = 0;
                    (unsigned __int64)i104 < 0xD
                 && *((unsigned __int8 *)v440 + i104 + i103) == (unsigned __int8)v340[i104];
                    ++i104 )
              {
                ;
              }
              if ( i104 == 13i64 )
              {
                v440 = (__int64 **)((char *)v440 + i103 + *(_DWORD *)((char *)v440 + i103 - 9) + 19);
                if ( *v440 )
                {
                  if ( (v510 = ((int (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                                 -1i64,
                                 *v440,
                                 0i64,
                                 v86,
                                 48i64,
                                 &v287) < 0,
                        v68 = v510)
                    || LODWORD(v86[4]) != 4096
                    || LODWORD(v86[5]) != 0x20000 && LODWORD(v86[5]) != 0x1000000
                    || HIDWORD(v86[4]) != 16 && HIDWORD(v86[4]) != 32 && HIDWORD(v86[4]) != 64 )
                  {
                    v1511 = 0;
                    v1512[0] = 71;
                    v1512[1] = 4;
                    v1513 = *v440;
                    v1514 = *v1513;
                    v1515 = v1513[1];
                    v1516 = v1513[2];
                    v1517 = v1513[3];
                    v1262 = v68 ? 0i64 : v86[1];
                    v1518 = v1262;
                    v1263 = v68 ? 0i64 : v86[0];
                    v1519 = v1263;
                    v509 = v68 ? 0 : LODWORD(v86[3]);
                    v1520 = v509;
                    v508 = v68 ? 0 : LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
                    v1521 = v508;
                    if ( v49 + 68 <= 0x5400 )
                    {
                      *(_WORD *)(v49 + v53) = 66;
                      for ( i105 = 0; (unsigned __int64)i105 < 0x42; ++i105 )
                        *(_BYTE *)(v53 + i105 + v49 + 2) = v1512[i105];
                      v49 += 68i64;
                    }
                  }
                }
                break;
              }
            }
          }
          strcpy(v1316, "gameoverlayrenderer64.dll");
          v288 = v1709(v1316);
          if ( v288 )
          {
            v276 = v288 + *(int *)(v288 + 60) + 24;
            v371[0] = 51;
            v371[1] = -10;
            v371[2] = -125;
            v371[3] = -27;
            v371[4] = -9;
            v371[5] = 68;
            v371[6] = -117;
            v371[7] = -59;
            v371[8] = -117;
            v371[9] = -42;
            v371[10] = 73;
            v371[11] = -117;
            v371[12] = -50;
            v371[13] = -1;
            v371[14] = 21;
            v93 = *(unsigned int *)(v276 + 20) + v288;
            for ( i106 = 0; *v78 && i106 + 15i64 <= (unsigned __int64)*(unsigned int *)(v276 + 4); ++i106 )
            {
              for ( i107 = 0;
                    (unsigned __int64)i107 < 0xF
                 && *(unsigned __int8 *)(v93 + i107 + i106) == (unsigned __int8)v371[i107];
                    ++i107 )
              {
                ;
              }
              if ( i107 == 15i64 )
              {
                v93 += i106 - 132;
                if ( *(_WORD *)v93 == 6004 )
                {
                  v1264 = 1i64;
                  v1265 = ++v93;
                  if ( v462(-1i64, (_BYTE **)&v1265, &v1264, 64i64, &v506) >= 0 )
                  {
                    *(_BYTE *)v93 = 0;
                    v462(-1i64, (_BYTE **)&v1265, &v1264, v506, &v506);
                  }
                }
                break;
              }
            }
            if ( i106 + 15i64 > (unsigned __int64)*(unsigned int *)(v276 + 4) )
            {
              v1500 = 0;
              v1501[0] = 71;
              v1501[1] = 10;
              v1502 = v288 + 560672;
              v1503 = *(_QWORD *)(v288 + 560672);
              v1504 = *(_QWORD *)(v288 + 560680);
              v1505 = *(_QWORD *)(v288 + 560688);
              v1506 = *(_QWORD *)(v288 + 560696);
              ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                -1i64,
                v288 + 560672,
                0i64,
                v86,
                48i64,
                &v287);
              v1507 = v86[1];
              v1508 = v86[0];
              v1509 = v86[3];
              v1510 = LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
              if ( v49 + 68 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 66;
                for ( i108 = 0; (unsigned __int64)i108 < 0x42; ++i108 )
                  *(_BYTE *)(v53 + i108 + v49 + 2) = v1501[i108];
                v49 += 68i64;
              }
            }
            v296[0] = -71;
            v296[1] = 9;
            v296[2] = 0;
            v296[3] = 0;
            v296[4] = 0;
            v296[5] = -1;
            v296[6] = -48;
            v93 = *(unsigned int *)(v276 + 20) + v288;
            for ( i109 = 0; *v78 && i109 + 7i64 <= (unsigned __int64)*(unsigned int *)(v276 + 4); ++i109 )
            {
              for ( i110 = 0;
                    (unsigned __int64)i110 < 7 && *(unsigned __int8 *)(v93 + i110 + i109) == (unsigned __int8)v296[i110];
                    ++i110 )
              {
                ;
              }
              if ( i110 == 7i64 && *(unsigned __int16 *)(v93 + i109 - 19) == 35656 && *(_BYTE *)(v93 + i109 - 17) == 5 )
              {
                v93 = *(_QWORD *)(i109 + v93 + *(int *)(v93 + i109 - 16) - 12);
                if ( v93 )
                {
                  v505 = ((int (__fastcall *)(__int64, __int64, _QWORD, _QWORD *, __int64, __int64 *))v117)(
                           -1i64,
                           v93,
                           0i64,
                           v86,
                           48i64,
                           &v287) < 0;
                  v69 = v505;
                  if ( v505 || LODWORD(v86[4]) != 4096 || *(_QWORD *)((char *)&v86[4] + 4) != 0x2000000000040i64 )
                  {
                    v1522 = 0;
                    v1523[0] = 71;
                    v1523[1] = 4;
                    v1524 = v93;
                    v1525 = *(_QWORD *)v93;
                    v1526 = *(_QWORD *)(v93 + 8);
                    v1527 = *(_QWORD *)(v93 + 16);
                    v1528 = *(_QWORD *)(v93 + 24);
                    v1266 = v69 ? 0i64 : v86[1];
                    v1529 = v1266;
                    v1267 = v69 ? 0i64 : v86[0];
                    v1530 = v1267;
                    v503 = v69 ? 0 : LODWORD(v86[3]);
                    v1531 = v503;
                    v502 = v69 ? 0 : LODWORD(v86[5]) | HIDWORD(v86[4]) | LODWORD(v86[4]);
                    v1532 = v502;
                    if ( v49 + 68 <= 0x5400 )
                    {
                      *(_WORD *)(v49 + v53) = 66;
                      for ( i111 = 0; (unsigned __int64)i111 < 0x42; ++i111 )
                        *(_BYTE *)(v53 + i111 + v49 + 2) = v1523[i111];
                      v49 += 68i64;
                    }
                  }
                }
                break;
              }
            }
            v390[0] = 72;
            v390[1] = -117;
            v390[2] = -16;
            v390[3] = 72;
            v390[4] = -123;
            v390[5] = -64;
            v390[6] = 116;
            v390[7] = 27;
            v390[8] = -57;
            v390[9] = 64;
            v390[10] = 8;
            v390[11] = 0;
            v390[12] = 0;
            v390[13] = 0;
            v390[14] = 0;
            v390[15] = 72;
            v390[16] = -115;
            v390[17] = 5;
            v93 = *(unsigned int *)(v276 + 20) + v288;
            for ( i112 = 0; *v78 && i112 + 18i64 <= (unsigned __int64)*(unsigned int *)(v276 + 4); ++i112 )
            {
              for ( i113 = 0;
                    (unsigned __int64)i113 < 0x12
                 && *(unsigned __int8 *)(v93 + i113 + i112) == (unsigned __int8)v390[i113];
                    ++i113 )
              {
                ;
              }
              if ( i113 == 18i64 )
              {
                v93 += i113 + i112 + *(_DWORD *)(i112 + v93 + i113) + 4;
                for ( i114 = 0; i114 < 6; ++i114 )
                {
                  v1254 = *(_QWORD *)(v93 + 8i64 * i114);
                  if ( v1254 < (unsigned __int64)*(unsigned int *)(v276 + 20) + v288
                    || v1254 >= *(unsigned int *)(v276 + 4) + (unsigned __int64)*(unsigned int *)(v276 + 20) + v288 )
                  {
                    v1371 = 0;
                    v1372[0] = 71;
                    v1372[1] = 5;
                    v1373 = v93;
                    v1374 = *(_QWORD *)v93;
                    v1375 = *(_QWORD *)(v93 + 8);
                    v1376 = *(_QWORD *)(v93 + 16);
                    v1377 = *(_QWORD *)(v93 + 24);
                    if ( v49 + 44 <= 0x5400 )
                    {
                      *(_WORD *)(v49 + v53) = 42;
                      for ( i115 = 0; (unsigned __int64)i115 < 0x2A; ++i115 )
                        *(_BYTE *)(v53 + i115 + v49 + 2) = v1372[i115];
                      v49 += 44i64;
                    }
                  }
                }
                break;
              }
            }
          }
          strcpy(v396, "PocoInitializer.dll");
          if ( v1709(v396) )
          {
            v450 = 0;
            v451 = 72;
            v452 = 1559;
            if ( v49 + 5 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 3;
              for ( i116 = 0; (unsigned __int64)i116 < 3; ++i116 )
                *(_BYTE *)(v53 + i116 + v49 + 2) = *(&v451 + i116);
              v49 += 5i64;
            }
          }
          strcpy(v386, "shimloader64.dll");
          v54 = v1709(v386);
          if ( v54 )
          {
            v647 = 0;
            v648 = 72;
            v649 = 1561;
            v650 = *(_DWORD *)(v54 + *(int *)(v54 + 60) + 8);
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i117 = 0; (unsigned __int64)i117 < 7; ++i117 )
                *(_BYTE *)(v53 + i117 + v49 + 2) = *(&v648 + i117);
              v49 += 9i64;
            }
          }
          v103 = 0;
          v85 = 0;
          for ( i118 = 0; *v78 && i118 < 10; ++i118 )
          {
            v1213 = 0i64;
            v454 = 0i64;
            v223 = 336;
            while ( 1 )
            {
              v223 += 1024;
              v454 = v463((unsigned int *)v454, v223);
              if ( !v454 )
                break;
              v70 = v162(5i64, (unsigned int *)v454, v223, &v223);
              if ( v70 != -1073741820 )
              {
                if ( v70 >= 0 )
                {
                  _mm_lfence();
                  strcpy(v372, "GetSystemTimes");
                  v1253 = (void (__fastcall *)(__int64 *, __int64 *, __int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                  v79,
                                                                                  v372);
                  v1253(&v1640, &v1572, v1569);
                  v525(1000i64);
                  v466 = 0i64;
                  v224 = 336;
                  while ( 1 )
                  {
                    v224 += 1024;
                    v466 = v463((unsigned int *)v466, v224);
                    if ( !v466 )
                      break;
                    v70 = v162(5i64, (unsigned int *)v466, v224, &v224);
                    if ( v70 != -1073741820 )
                    {
                      if ( v70 >= 0 )
                      {
                        v1253(&v1641, &v1571, &v1558);
LABEL_1921:
                        v526 = 0i64;
                        v651 = 0i64;
                        v284 = 0;
                        v162(11i64, &v284, 0i64, &v284);
                        v275 = (unsigned int *)v463(0i64, v284);
                        if ( v275 )
                        {
                          if ( (int)v162(11i64, v275, v284, 0i64) >= 0 )
                          {
                            for ( i119 = 0; i119 < *v275; ++i119 )
                            {
                              _mm_lfence();
                              if ( *(unsigned int *)((char *)&v275[74 * i119 + 12] + HIWORD(v275[74 * i119 + 11])) == 2004116846 )
                              {
                                _mm_lfence();
                                if ( *(unsigned int *)((char *)&v275[74 * i119 + 13] + HIWORD(v275[74 * i119 + 11])) == 875591522 )
                                {
                                  v651 = *(_QWORD *)&v275[74 * i119 + 6];
                                  v1223 = v275[74 * i119 + 8];
                                  break;
                                }
                              }
                            }
                          }
                          v289(v275);
                        }
                        v140 = (unsigned int *)v466;
                        while ( *a5 )
                        {
                          v94 = (unsigned int *)v454;
                          while ( *a5 )
                          {
                            if ( *((_QWORD *)v140 + 10) == *((_QWORD *)v94 + 10) )
                            {
                              v652 = *((_QWORD *)v140 + 6)
                                   - *((_QWORD *)v94 + 6)
                                   + *((_QWORD *)v140 + 5)
                                   - *((_QWORD *)v94 + 5);
                              v526 += v652;
                              if ( !i118 )
                              {
                                v501 = *((_WORD *)v94 + 28) == 22
                                    && **((_WORD **)v94 + 8) == 115
                                    && *(_WORD *)(*((_QWORD *)v94 + 8) + 2i64) == 118
                                    && *(_WORD *)(*((_QWORD *)v94 + 8) + 4i64) == 99
                                    && *(_WORD *)(*((_QWORD *)v94 + 8) + 6i64) == 104
                                    && *(_WORD *)(*((_QWORD *)v94 + 8) + 8i64) == 111;
                                v136 = v501;
                                v124 = 0;
LABEL_1946:
                                if ( *a5 && v124 < v140[1] )
                                {
                                  for ( i120 = 0; ; ++i120 )
                                  {
                                    if ( !*a5 || i120 >= v94[1] )
                                    {
LABEL_1945:
                                      ++v124;
                                      goto LABEL_1946;
                                    }
                                    if ( *(_QWORD *)&v140[20 * v124 + 76] == *(_QWORD *)&v94[20 * i120 + 76] )
                                      break;
                                  }
                                  for ( i121 = (unsigned int *)v454; ; i121 = (unsigned int *)((char *)i121 + *i121) )
                                  {
                                    if ( !*a5 )
                                      goto LABEL_1945;
                                    if ( *((_QWORD *)i121 + 10) == v157() )
                                      break;
                                    if ( !*i121 )
                                      goto LABEL_1945;
                                  }
                                  v1346 = *(_QWORD *)&v94[20 * i120 + 72];
                                  strcpy(v332, "OpenThread");
                                  v1575 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                             v79,
                                                                                             v332);
                                  v1218 = v1575(64i64, 0i64, v94[20 * i120 + 76]);
                                  if ( v1218 )
                                  {
                                    strcpy(v413, "NtQueryInformationThread");
                                    v1574 = (int (__fastcall *)(__int64, __int64, unsigned __int64 *, __int64, _QWORD))((__int64 (__fastcall *)(__int64, char *))v1710)(v141, v413);
                                    if ( v1574(v1218, 9i64, &v1573, 8i64, 0i64) >= 0 )
                                      v1346 = v1573;
                                    v77(v1218);
                                  }
                                  v464 = *(_QWORD *)&v140[20 * v124 + 64]
                                       - *(_QWORD *)&v94[20 * i120 + 64]
                                       + *(_QWORD *)&v140[20 * v124 + 66]
                                       - *(_QWORD *)&v94[20 * i120 + 66];
                                  v1211 = *((_QWORD *)i121 + 4) - *(_QWORD *)&v94[20 * i120 + 68];
                                  v500 = v651 && v1346 >= v651 && v1346 < v1223 + v651;
                                  v95 = v500;
                                  if ( *((_QWORD *)v94 + 10) == 4i64
                                    && (v652 >= 16000000 && v464 >= 8000000
                                     || v464 >= 2500000 && v1211 <= 1200000000 && v1211 >= 0
                                     || v95) )
                                  {
                                    if ( v464 >= 9000000 )
                                      v103 = 1;
LABEL_1973:
                                    v1340 = 0;
                                    v1341 = 72;
                                    v1342 = 1131;
                                    v1343 = v652;
                                    v1344 = v464;
                                    v1345 = *(_QWORD *)&v94[20 * i120 + 66];
                                    v1347 = v140[20 * v124 + 81] + 10 * v140[20 * v124 + 82];
                                    if ( v85 )
                                      v1347 += 1000;
                                    if ( v95 )
                                      v1347 += 2000;
                                    v1348 = v1211;
                                    v1349 = v94[1] - (i120 + 1);
                                    v1350 = *(_QWORD *)&v94[20 * i120 + 68] - *((_QWORD *)v94 + 4);
                                    if ( v49 + 61 <= 0x5400 )
                                    {
                                      *(_WORD *)(v49 + v53) = 59;
                                      for ( i122 = 0; (unsigned __int64)i122 < 0x3B; ++i122 )
                                        *(_BYTE *)(v53 + i122 + v49 + 2) = *(&v1341 + i122);
                                      v49 += 61i64;
                                    }
                                    goto LABEL_1945;
                                  }
                                  if ( !v103 || v652 < 7000000 || !v136 )
                                    goto LABEL_1945;
                                  if ( v85 )
                                  {
                                    if ( v464 < 500000 )
                                      goto LABEL_1945;
                                    goto LABEL_1973;
                                  }
                                  if ( v464 < 2500000 )
                                    goto LABEL_1945;
                                  v85 = 1;
                                  goto LABEL_1921;
                                }
                              }
                              break;
                            }
                            if ( !*v94 )
                            {
                              v526 += *((_QWORD *)v140 + 6) + *((_QWORD *)v140 + 5);
                              break;
                            }
                            v94 = (unsigned int *)((char *)v94 + *v94);
                          }
                          if ( !*v140 )
                            break;
                          v140 = (unsigned int *)((char *)v140 + *v140);
                        }
                        v1213 = v1558 - v1569[0] + v1571 - v1572 - v526;
                      }
                      v289((unsigned int *)v466);
                      break;
                    }
                  }
                }
                v289((unsigned int *)v454);
                break;
              }
            }
            if ( v1213 < 7500000 )
              break;
          }
          if ( i118 == 10 )
          {
            v653 = 0;
            v654 = 72;
            v655 = 1131;
            v656 = v1213 / 10000;
            if ( v49 + 9 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 7;
              for ( i123 = 0; (unsigned __int64)i123 < 7; ++i123 )
                *(_BYTE *)(v53 + i123 + v49 + 2) = *(&v654 + i123);
              v49 += 9i64;
            }
          }
          strcpy(v352, "GetTempPathA");
          v1557 = (__int64 (__fastcall *)(__int64, _BYTE *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v352);
          v228 = v1557(261i64, v1681);
          *(_DWORD *)&v1681[v228] = 1816347970;
          *(_DWORD *)&v1681[v228 + 4] = 1953391977;
          *(_DWORD *)&v1681[v228 + 8] = 1818504754;
          v1681[v228 + 12] = 108;
          v1681[v228 + 13] = 0;
          v54 = v1222(v1681);
          if ( v54 )
          {
            strcpy(v335, "FreeLibrary");
            v1556 = (void (__fastcall *)(__int64))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v335);
            v1556(v54);
          }
          else
          {
            v498 = v273();
            if ( v498 != 126 )
            {
              v657 = 0;
              v658 = 72;
              v659 = 1524;
              v499 = v1252(v1681, 0i64, v1643) ? v1644 : -1;
              v660 = v498 | (v499 << 16);
              if ( v49 + 9 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 7;
                for ( i124 = 0; (unsigned __int64)i124 < 7; ++i124 )
                  *(_BYTE *)(v53 + i124 + v49 + 2) = *(&v658 + i124);
                v49 += 9i64;
              }
            }
          }
          strcpy(v295, "EscapeFromTarkov_Data\\StreamingAssets\\Windows\\shaders");
          v165 = v467(v295, 0x40000000i64, 7i64, 0i64, 3, 128, 0i64);
          if ( v165 != -1 )
          {
            v258 = 0;
            v259 = 65;
            if ( v49 + 3 <= 0x5400 )
            {
              *(_WORD *)(v49 + v53) = 1;
              for ( i125 = 0; !i125; ++i125 )
                *(_BYTE *)(v53 + v49 + 2) = v259;
              v49 += 3i64;
            }
            v77(v165);
          }
          v165 = v467(v295, 0x80000000i64, 7i64, 0i64, 3, 128, 0i64);
          if ( v165 != -1 )
          {
            strcpy(v407, "NtQueryInformationFile");
            v1270 = (int (__fastcall *)(__int64, _BYTE *, __int64 *, __int64, int))((__int64 (__fastcall *)(__int64, char *))v1710)(
                                                                                     v141,
                                                                                     v407);
            if ( v1270(v165, v1592, &v1645, 40i64, 4) >= 0 )
            {
              _mm_lfence();
              strcpy(v410, "GetSystemTimeAsFileTime");
              v1555 = (void (__fastcall *)(__int64 *))((__int64 (__fastcall *)(__int64, char *))v1710)(v79, v410);
              v1555(&v1554);
              if ( v274(-1i64, &v1221, &v1303, &v1303, &v1303) )
              {
                if ( v1646 > v1221 && v1554 >= v1646 )
                {
                  strcpy(&v295[46], "doge");
                  v1220 = v467(v295, 0x80000000i64, 7i64, 0i64, 3, 128, 0i64);
                  if ( v1220 != -1 )
                  {
                    _mm_lfence();
                    if ( v1270(v1220, v1592, v1658, 40i64, 4) >= 0 && v1658[3] <= v1221 )
                    {
                      v554 = 0;
                      v555 = 65;
                      v42 = (v1646 - v1221) % 10000000;
                      v556 = (v1646 - v1221) / 10000000;
                      if ( v49 + 7 <= 0x5400 )
                      {
                        *(_WORD *)(v49 + v53) = 5;
                        for ( i126 = 0; (unsigned __int64)i126 < 5; ++i126 )
                        {
                          v42 = v49;
                          *(_BYTE *)(v53 + i126 + v49 + 2) = *(&v555 + i126);
                        }
                        v49 += 7i64;
                      }
                    }
                    ((void (__fastcall *)(__int64, __int64))v77)(v1220, v42);
                  }
                }
              }
            }
            v77(v165);
          }
          strcpy(v424, "C:\\Windows\\Temp\\dwm_lut.dll");
          v165 = v467(v424, 0x80000000i64, 6i64, 0i64, 3, 128, 0i64);
          if ( v165 == -1 )
          {
            if ( v273() == 32 )
            {
              v447[4] = 0;
              v448 = 72;
              v449 = 1562;
              if ( v49 + 5 <= 0x5400 )
              {
                *(_WORD *)(v49 + v53) = 3;
                for ( i127 = 0; (unsigned __int64)i127 < 3; ++i127 )
                  *(_BYTE *)(v53 + i127 + v49 + 2) = *(&v448 + i127);
                v49 += 5i64;
              }
            }
          }
          else
          {
            v77(v165);
          }
          if ( v49 + 1 <= 0x5400 )
          {
            *(_WORD *)(v49 + v53) = -1;
            v233 = 0;
            ++v49;
          }
          if ( v49 <= 0x3E8 )
            v49 = 1000i64;
          v101 = *(_BYTE *)(v53 + 2);
          for ( i128 = 6; i128 < v49; ++i128 )
          {
            v497 = v101 ^ *(unsigned __int8 *)(v53 + i128);
            *(_BYTE *)(v53 + i128) = v497;
            v101 = v497;
          }
          ((void (__fastcall *)(__int64, _QWORD, _QWORD))v1708)(v53, (unsigned int)v49, 0i64);
          return ((__int64 (__fastcall *)(__int64))v289)(v53);
        }
      }
    }
  }
  return result;
}