#include <stdio.h> 
int main(int argc, char * argv[]) { 

printf("\t\v Kodutöö 10 valemit\n\v");
printf("1.Rõhuvalem:\n");
/*valem P-rõhu arvutamine*/
float P; /*rõhk*/
float F; /*jõud*/
float S; /*pindala*/

F= 10;
S= 5.2;
P= F/S; /*valem peab olema viimane!*/

printf("P= F/S\n P= %.2f bar\n\v", P);

printf("2.Ringipindala:\n");
/*Ringipindala arvutamisel kasutan pi sümboli asemel "pi"*/

float pi; /*arvu pi konstant*/
float r; /*ringiraadius*/
float s; /*ringipindala*/

pi= 3.14;
r= 1.29;
s= pi*r*r;

printf("s=pi*r*r\n s= %.2f cm^2\n\v", s);

printf("3.Kiirendus:\n");
/*valem a-kiirenduse arvutamine*/
float V;/*kiirus*/
float t;/*aeg*/
float a;/*kiirendus*/

V= 50;
t= 66.66;
a= V/t;
printf("a= V/t\n a= %.2f m/s^2\n\v", a);

printf("4.Takistus:\n");
/*takistuse arvutamise valem*/

float R; /* takistus*/
float U; /*pinge*/
float I; /*voolu tugevus*/

U= 220;
I= 0.55;
R= U/I;
printf("R= U/I\n R= %.2f ohm\n\v", R);

printf("5.Induktiivtakistus:\n");
/*induktiivtakistuse arvutamine*/

float pi1; /*arv pi, tuli eristada enne olevast registreeritud pi arvust "pi1". Kuid teise muutuja ja arvu puhul tuleb kasutada erinevaid tähistusi!*/
float f; /*frequenci*/
float L; /*mahtuvus takistus*/
float Xl; /*induktiivsus, induktiivtakistus*/

pi1= 3.14;
f= 50;
L= 0.003183;
Xl= 2*pi1*f*L;

printf("Xl= 2*pi1*f*L\n Xl= %.5f ohm\n\v", Xl);

printf("6.Mahtuvustakistus:\n");
/*Mahtuvis takistuse arvutamise valem*/
float pi2; /* arv pi*/
float f1; /*frequenci*/
float C; /*kondeka mahtuvus*/
float Xc; /*mahtuvustakistus*/

pi2= 3.14;
f1= 50; 
C= 0.0636;
Xc=1.0/2*pi2*f1*C;

printf("Xc=1/2*pi2*f1*C\n Xc= %.5f ohm\n\v", Xc); 

printf("7.Niiskuse arvutamine:\n");
/*absoluutse niiskuse arvutamine 30 kraadi juures*/

float Sp; /*suruõhu niiskus %*/
float Sk; /*kastepunkt temp C*/
float Sa; /*absoluutne niiskus*/

Sp= 80;
Sk= 30.2;
Sa= Sp*Sk/100;

printf("Sa= Sp*Sk/100\n Sa= %.2f g/m^3\n\v", Sa);

printf("8.Niiskuse arvutamine:\n");
/*absoluutse niiskuse arvutamine 5 kraadi juures*/

float Sp2; /*suruõhu niiskus %*/
float Sk2; /*kastepunkt temp C*/
float Sa2; /*absoluutne niiskus*/

Sp2= 80;
Sk2= 7.3;
Sa2= Sp2*Sk2/100;

printf("Sa2= Sp2*Sk2/100\n Sa2= %.2f g/m^3\n\v", Sa2);

printf("9.Absoluutne niiskus, kondensaat:\n");
/*Sadestanud kondensaadi arvutamine*/

float Skon; /*sadestunud kondensaat grammides kuup meetrite kohta*/

Skon= Sa-Sa2; 
/*kui jätta panemata lühendid siis programm kasutab olemas olevaid, 9. kasutas programm Sa ja Sa2 vastuseid 7. ja 8. valemist. Sama võib teha konstanditega mis ei muutu terve programmi jooksul, nt "pi".*/ 
printf("Skon= Sa-Sa2\n Skon= %.2f g/m^3\n\v", Skon);

printf("10.Ekvivalent takistus:\n");

/*Kahe parallelselt ühendatud takistite ekvivalendi arvutamine*/ 

float Re; /*ekvivalent takistus*/ 
float R1; /*takisti R1*/
float R2; /*takisti R2*/

R1= 300;
R2= 55;
Re= R1*R2/(R1+R2);

printf("Re= R1*R2/(R1+R2)\n Re= %.2f ohm\n\v", Re);

return 0;
}
