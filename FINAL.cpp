/* TRIGONOMETRY FOR ARDUINO
 * 
 * October 27th, 2021,
 * 
 * Functions made by Wesley McGinn (wesleymcginn1@gmail.com)
 * Free for any programmer to use.
 */

// Cosine:
double Cos(double m) {
int n = round(m);
while (n > 360) { n -= 360; }
while (n < 360) { n += 360; }
if (n == 0) { return 1.0; }
if (n == 1) { return 0.9998476951563913; }
if (n == 2) { return 0.9993908270190958; }
if (n == 3) { return 0.9986295347545738; }
if (n == 4) { return 0.9975640502598242; }
if (n == 5) { return 0.9961946980917455; }
if (n == 6) { return 0.9945218953682733; }
if (n == 7) { return 0.992546151641322; }
if (n == 8) { return 0.9902680687415704; }
if (n == 9) { return 0.9876883405951378; }
if (n == 10) { return 0.984807753012208; }
if (n == 11) { return 0.981627183447664; }
if (n == 12) { return 0.9781476007338057; }
if (n == 13) { return 0.9743700647852352; }
if (n == 14) { return 0.9702957262759965; }
if (n == 15) { return 0.9659258262890683; }
if (n == 16) { return 0.9612616959383189; }
if (n == 17) { return 0.9563047559630354; }
if (n == 18) { return 0.9510565162951535; }
if (n == 19) { return 0.9455185755993168; }
if (n == 20) { return 0.9396926207859084; }
if (n == 21) { return 0.9335804264972017; }
if (n == 22) { return 0.9271838545667874; }
if (n == 23) { return 0.9205048534524404; }
if (n == 24) { return 0.9135454576426009; }
if (n == 25) { return 0.9063077870366499; }
if (n == 26) { return 0.898794046299167; }
if (n == 27) { return 0.8910065241883679; }
if (n == 28) { return 0.882947592858927; }
if (n == 29) { return 0.8746197071393957; }
if (n == 30) { return 0.8660254037844387; }
if (n == 31) { return 0.8571673007021123; }
if (n == 32) { return 0.848048096156426; }
if (n == 33) { return 0.838670567945424; }
if (n == 34) { return 0.8290375725550416; }
if (n == 35) { return 0.8191520442889918; }
if (n == 36) { return 0.8090169943749475; }
if (n == 37) { return 0.7986355100472928; }
if (n == 38) { return 0.7880107536067219; }
if (n == 39) { return 0.7771459614569709; }
if (n == 40) { return 0.766044443118978; }
if (n == 41) { return 0.754709580222772; }
if (n == 42) { return 0.7431448254773942; }
if (n == 43) { return 0.7313537016191705; }
if (n == 44) { return 0.7193398003386512; }
if (n == 45) { return 0.7071067811865476; }
if (n == 46) { return 0.6946583704589973; }
if (n == 47) { return 0.6819983600624985; }
if (n == 48) { return 0.6691306063588582; }
if (n == 49) { return 0.6560590289905073; }
if (n == 50) { return 0.6427876096865394; }
if (n == 51) { return 0.6293203910498375; }
if (n == 52) { return 0.6156614753256583; }
if (n == 53) { return 0.6018150231520484; }
if (n == 54) { return 0.5877852522924731; }
if (n == 55) { return 0.5735764363510462; }
if (n == 56) { return 0.5591929034707468; }
if (n == 57) { return 0.5446390350150271; }
if (n == 58) { return 0.5299192642332049; }
if (n == 59) { return 0.5150380749100542; }
if (n == 60) { return 0.5000000000000001; }
if (n == 61) { return 0.4848096202463371; }
if (n == 62) { return 0.46947156278589086; }
if (n == 63) { return 0.4539904997395468; }
if (n == 64) { return 0.43837114678907746; }
if (n == 65) { return 0.42261826174069944; }
if (n == 66) { return 0.4067366430758002; }
if (n == 67) { return 0.3907311284892737; }
if (n == 68) { return 0.37460659341591196; }
if (n == 69) { return 0.3583679495453004; }
if (n == 70) { return 0.3420201433256688; }
if (n == 71) { return 0.32556815445715676; }
if (n == 72) { return 0.30901699437494745; }
if (n == 73) { return 0.29237170472273677; }
if (n == 74) { return 0.27563735581699916; }
if (n == 75) { return 0.25881904510252074; }
if (n == 76) { return 0.24192189559966767; }
if (n == 77) { return 0.22495105434386492; }
if (n == 78) { return 0.20791169081775945; }
if (n == 79) { return 0.19080899537654492; }
if (n == 80) { return 0.17364817766693041; }
if (n == 81) { return 0.15643446504023092; }
if (n == 82) { return 0.13917310096006547; }
if (n == 83) { return 0.12186934340514749; }
if (n == 84) { return 0.10452846326765346; }
if (n == 85) { return 0.08715574274765814; }
if (n == 86) { return 0.06975647374412523; }
if (n == 87) { return 0.052335956242943966; }
if (n == 88) { return 0.03489949670250108; }
if (n == 89) { return 0.0174524064372836; }
if (n == 90) { return 0.0; }
if (n == 91) { return -0.017452406437283477; }
if (n == 92) { return -0.034899496702500955; }
if (n == 93) { return -0.05233595624294384; }
if (n == 94) { return -0.06975647374412533; }
if (n == 95) { return -0.08715574274765824; }
if (n == 96) { return -0.10452846326765355; }
if (n == 97) { return -0.12186934340514737; }
if (n == 98) { return -0.13917310096006535; }
if (n == 99) { return -0.1564344650402308; }
if (n == 100) { return -0.1736481776669303; }
if (n == 101) { return -0.1908089953765448; }
if (n == 102) { return -0.20791169081775934; }
if (n == 103) { return -0.22495105434386503; }
if (n == 104) { return -0.24192189559966779; }
if (n == 105) { return -0.25881904510252085; }
if (n == 106) { return -0.27563735581699905; }
if (n == 107) { return -0.29237170472273666; }
if (n == 108) { return -0.30901699437494734; }
if (n == 109) { return -0.32556815445715664; }
if (n == 110) { return -0.3420201433256687; }
if (n == 111) { return -0.35836794954530027; }
if (n == 112) { return -0.37460659341591207; }
if (n == 113) { return -0.39073112848927377; }
if (n == 114) { return -0.40673664307580026; }
if (n == 115) { return -0.42261826174069933; }
if (n == 116) { return -0.4383711467890775; }
if (n == 117) { return -0.4539904997395467; }
if (n == 118) { return -0.4694715627858909; }
if (n == 119) { return -0.484809620246337; }
if (n == 120) { return -0.4999999999999998; }
if (n == 121) { return -0.5150380749100543; }
if (n == 122) { return -0.5299192642332048; }
if (n == 123) { return -0.5446390350150271; }
if (n == 124) { return -0.5591929034707467; }
if (n == 125) { return -0.5735764363510462; }
if (n == 126) { return -0.587785252292473; }
if (n == 127) { return -0.6018150231520484; }
if (n == 128) { return -0.6156614753256583; }
if (n == 129) { return -0.6293203910498373; }
if (n == 130) { return -0.6427876096865394; }
if (n == 131) { return -0.6560590289905072; }
if (n == 132) { return -0.6691306063588582; }
if (n == 133) { return -0.6819983600624984; }
if (n == 134) { return -0.6946583704589974; }
if (n == 135) { return -0.7071067811865475; }
if (n == 136) { return -0.7193398003386512; }
if (n == 137) { return -0.7313537016191705; }
if (n == 138) { return -0.743144825477394; }
if (n == 139) { return -0.754709580222772; }
if (n == 140) { return -0.7660444431189779; }
if (n == 141) { return -0.7771459614569709; }
if (n == 142) { return -0.7880107536067219; }
if (n == 143) { return -0.7986355100472929; }
if (n == 144) { return -0.8090169943749473; }
if (n == 145) { return -0.8191520442889919; }
if (n == 146) { return -0.8290375725550416; }
if (n == 147) { return -0.8386705679454239; }
if (n == 148) { return -0.848048096156426; }
if (n == 149) { return -0.8571673007021122; }
if (n == 150) { return -0.8660254037844387; }
if (n == 151) { return -0.8746197071393957; }
if (n == 152) { return -0.882947592858927; }
if (n == 153) { return -0.8910065241883678; }
if (n == 154) { return -0.898794046299167; }
if (n == 155) { return -0.9063077870366499; }
if (n == 156) { return -0.9135454576426008; }
if (n == 157) { return -0.9205048534524404; }
if (n == 158) { return -0.9271838545667873; }
if (n == 159) { return -0.9335804264972017; }
if (n == 160) { return -0.9396926207859083; }
if (n == 161) { return -0.9455185755993168; }
if (n == 162) { return -0.9510565162951535; }
if (n == 163) { return -0.9563047559630355; }
if (n == 164) { return -0.9612616959383189; }
if (n == 165) { return -0.9659258262890682; }
if (n == 166) { return -0.9702957262759965; }
if (n == 167) { return -0.9743700647852351; }
if (n == 168) { return -0.9781476007338057; }
if (n == 169) { return -0.981627183447664; }
if (n == 170) { return -0.984807753012208; }
if (n == 171) { return -0.9876883405951377; }
if (n == 172) { return -0.9902680687415704; }
if (n == 173) { return -0.992546151641322; }
if (n == 174) { return -0.9945218953682733; }
if (n == 175) { return -0.9961946980917455; }
if (n == 176) { return -0.9975640502598242; }
if (n == 177) { return -0.9986295347545738; }
if (n == 178) { return -0.9993908270190958; }
if (n == 179) { return -0.9998476951563913; }
if (n == 180) { return -1.0; }
if (n == 181) { return -0.9998476951563913; }
if (n == 182) { return -0.9993908270190958; }
if (n == 183) { return -0.9986295347545738; }
if (n == 184) { return -0.9975640502598242; }
if (n == 185) { return -0.9961946980917455; }
if (n == 186) { return -0.9945218953682733; }
if (n == 187) { return -0.9925461516413221; }
if (n == 188) { return -0.9902680687415703; }
if (n == 189) { return -0.9876883405951378; }
if (n == 190) { return -0.984807753012208; }
if (n == 191) { return -0.981627183447664; }
if (n == 192) { return -0.9781476007338056; }
if (n == 193) { return -0.9743700647852352; }
if (n == 281) { return 0.1908089953765451; }
if (n == 194) { return -0.9702957262759965; }
if (n == 195) { return -0.9659258262890683; }
if (n == 196) { return -0.9612616959383189; }
if (n == 197) { return -0.9563047559630354; }
if (n == 198) { return -0.9510565162951536; }
if (n == 199) { return -0.9455185755993167; }
if (n == 200) { return -0.9396926207859084; }
if (n == 201) { return -0.9335804264972017; }
if (n == 202) { return -0.9271838545667874; }
if (n == 203) { return -0.9205048534524404; }
if (n == 204) { return -0.9135454576426009; }
if (n == 205) { return -0.90630778703665; }
if (n == 206) { return -0.8987940462991669; }
if (n == 207) { return -0.8910065241883679; }
if (n == 208) { return -0.8829475928589269; }
if (n == 209) { return -0.8746197071393959; }
if (n == 210) { return -0.8660254037844386; }
if (n == 211) { return -0.8571673007021123; }
if (n == 212) { return -0.8480480961564261; }
if (n == 213) { return -0.838670567945424; }
if (n == 214) { return -0.8290375725550418; }
if (n == 215) { return -0.8191520442889918; }
if (n == 216) { return -0.8090169943749476; }
if (n == 217) { return -0.7986355100472928; }
if (n == 218) { return -0.788010753606722; }
if (n == 219) { return -0.7771459614569708; }
if (n == 220) { return -0.766044443118978; }
if (n == 221) { return -0.7547095802227721; }
if (n == 222) { return -0.7431448254773942; }
if (n == 223) { return -0.7313537016191706; }
if (n == 224) { return -0.7193398003386511; }
if (n == 225) { return -0.7071067811865477; }
if (n == 226) { return -0.6946583704589973; }
if (n == 227) { return -0.6819983600624986; }
if (n == 228) { return -0.6691306063588581; }
if (n == 229) { return -0.6560590289905073; }
if (n == 230) { return -0.6427876096865395; }
if (n == 231) { return -0.6293203910498378; }
if (n == 232) { return -0.6156614753256581; }
if (n == 233) { return -0.6018150231520483; }
if (n == 234) { return -0.5877852522924732; }
if (n == 235) { return -0.5735764363510464; }
if (n == 236) { return -0.5591929034707466; }
if (n == 237) { return -0.544639035015027; }
if (n == 238) { return -0.529919264233205; }
if (n == 239) { return -0.5150380749100545; }
if (n == 240) { return -0.5000000000000004; }
if (n == 241) { return -0.48480962024633684; }
if (n == 242) { return -0.46947156278589075; }
if (n == 243) { return -0.4539904997395469; }
if (n == 244) { return -0.43837114678907774; }
if (n == 245) { return -0.42261826174069916; }
if (n == 246) { return -0.4067366430758001; }
if (n == 247) { return -0.3907311284892738; }
if (n == 248) { return -0.3746065934159123; }
if (n == 249) { return -0.3583679495453007; }
if (n == 250) { return -0.34202014332566855; }
if (n == 251) { return -0.32556815445715664; }
if (n == 252) { return -0.30901699437494756; }
if (n == 253) { return -0.2923717047227371; }
if (n == 254) { return -0.2756373558169989; }
if (n == 255) { return -0.25881904510252063; }
if (n == 256) { return -0.24192189559966779; }
if (n == 257) { return -0.22495105434386525; }
if (n == 258) { return -0.2079116908177598; }
if (n == 259) { return -0.1908089953765446; }
if (n == 260) { return -0.17364817766693033; }
if (n == 261) { return -0.15643446504023104; }
if (n == 262) { return -0.13917310096006583; }
if (n == 263) { return -0.12186934340514717; }
if (n == 264) { return -0.10452846326765336; }
if (n == 265) { return -0.08715574274765825; }
if (n == 266) { return -0.06975647374412558; }
if (n == 267) { return -0.052335956242944306; }
if (n == 268) { return -0.03489949670250076; }
if (n == 269) { return -0.017452406437283498; }
if (n == 270) { return 0.0; }
if (n == 271) { return 0.01745240643728313; }
if (n == 272) { return 0.03489949670250128; }
if (n == 273) { return 0.052335956242943946; }
if (n == 274) { return 0.06975647374412522; }
if (n == 275) { return 0.08715574274765789; }
if (n == 276) { return 0.10452846326765299; }
if (n == 277) { return 0.12186934340514768; }
if (n == 278) { return 0.13917310096006547; }
if (n == 279) { return 0.15643446504023067; }
if (n == 280) { return 0.17364817766692997; }
if (n == 281) { return 0.1908089953765451; }
if (n == 282) { return 0.20791169081775943; }
if (n == 283) { return 0.22495105434386492; }
if (n == 284) { return 0.24192189559966745; }
if (n == 285) { return 0.2588190451025203; }
if (n == 286) { return 0.2756373558169994; }
if (n == 287) { return 0.2923717047227367; }
if (n == 288) { return 0.30901699437494723; }
if (n == 289) { return 0.3255681544571563; }
if (n == 290) { return 0.342020143325669; }
if (n == 291) { return 0.3583679495453004; }
if (n == 292) { return 0.37460659341591196; }
if (n == 293) { return 0.3907311284892735; }
if (n == 294) { return 0.40673664307579976; }
if (n == 295) { return 0.4226182617406996; }
if (n == 296) { return 0.4383711467890774; }
if (n == 297) { return 0.45399049973954664; }
if (n == 298) { return 0.4694715627858904; }
if (n == 299) { return 0.4848096202463373; }
if (n == 300) { return 0.5000000000000001; }
if (n == 301) { return 0.5150380749100542; }
if (n == 302) { return 0.5299192642332047; }
if (n == 303) { return 0.5446390350150266; }
if (n == 304) { return 0.559192903470747; }
if (n == 305) { return 0.573576436351046; }
if (n == 306) { return 0.5877852522924729; }
if (n == 307) { return 0.6018150231520479; }
if (n == 308) { return 0.6156614753256585; }
if (n == 309) { return 0.6293203910498375; }
if (n == 310) { return 0.6427876096865393; }
if (n == 311) { return 0.656059028990507; }
if (n == 312) { return 0.6691306063588578; }
if (n == 313) { return 0.6819983600624986; }
if (n == 314) { return 0.6946583704589973; }
if (n == 315) { return 0.7071067811865474; }
if (n == 316) { return 0.7193398003386509; }
if (n == 317) { return 0.7313537016191707; }
if (n == 318) { return 0.7431448254773942; }
if (n == 319) { return 0.7547095802227719; }
if (n == 320) { return 0.7660444431189778; }
if (n == 321) { return 0.7771459614569706; }
if (n == 322) { return 0.788010753606722; }
if (n == 323) { return 0.7986355100472928; }
if (n == 324) { return 0.8090169943749473; }
if (n == 325) { return 0.8191520442889916; }
if (n == 326) { return 0.8290375725550418; }
if (n == 327) { return 0.838670567945424; }
if (n == 328) { return 0.848048096156426; }
if (n == 329) { return 0.8571673007021121; }
if (n == 330) { return 0.8660254037844384; }
if (n == 331) { return 0.8746197071393959; }
if (n == 332) { return 0.8829475928589269; }
if (n == 333) { return 0.8910065241883678; }
if (n == 334) { return 0.8987940462991668; }
if (n == 335) { return 0.90630778703665; }
if (n == 336) { return 0.913545457642601; }
if (n == 337) { return 0.9205048534524403; }
if (n == 338) { return 0.9271838545667873; }
if (n == 339) { return 0.9335804264972015; }
if (n == 340) { return 0.9396926207859084; }
if (n == 341) { return 0.9455185755993168; }
if (n == 342) { return 0.9510565162951535; }
if (n == 343) { return 0.9563047559630353; }
if (n == 344) { return 0.9612616959383189; }
if (n == 345) { return 0.9659258262890683; }
if (n == 346) { return 0.9702957262759965; }
if (n == 347) { return 0.9743700647852351; }
if (n == 348) { return 0.9781476007338056; }
if (n == 349) { return 0.981627183447664; }
if (n == 350) { return 0.984807753012208; }
if (n == 351) { return 0.9876883405951377; }
if (n == 352) { return 0.9902680687415703; }
if (n == 353) { return 0.9925461516413221; }
if (n == 354) { return 0.9945218953682733; }
if (n == 355) { return 0.9961946980917455; }
if (n == 356) { return 0.9975640502598242; }
if (n == 357) { return 0.9986295347545738; }
if (n == 358) { return 0.9993908270190958; }
if (n == 359) { return 0.9998476951563913; }
if (n == 360) { return 1.0; }
}

// Sine:
double Sin(double m) {
  return cos(m+90); // "sin(x) = cos(x+90)" is a math fact.
}

// Tangent:
double Tan(double m) {
  return (cos(m+90)/cos(m)); // "tan(x) = sin(x) / cos(x)" is a math fact, and "cos(x+90) = sin(x)" is as well.  Therefore, "tan(x) = cos(x+90) / sin(x)".
}
