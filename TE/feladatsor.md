# Feladatsor

## A feladat

Olvasd be az `inpA.txt` fileból a számokat egy adattárolóba (vector/tömb). Fordítsd meg a számok sorrendjét (`1 2 3 4 5` `->` `5 4 3 2 1`), majd az új sorrendet írd bele az `outA.txt` fileba.

<details> <summary> </summary> 
    
---

*`inpA.txt`*

    1 6 8 4 9 3 5 7 9 5 6 1 8 4

*`outA.txt`*

    4 8 1 6 5 9 7 5 3 9 4 8 6 1

---

*`inpA.txt`*

    1 2 3 4 5 6 7 8 9

*`outA.txt`*

    9 8 7 6 5 4 3 2 1

---
*`console`*
``` txt
    
```

---

</details>

## B feladat

Hozz létre struktúrát egy tanuló tárolására (név, JMBG, osztályzatok). Az adatokat olvasd be az `inpB.txt` fileból. Írj függvényt, amely kiszámolja, hogy a tanulónak mi az átlaga. Egy másik függvényben alakítsd a JMBG-ben található adatokat, nevet és kiszámolt átlagot (2 tizedeshellyel) egy mondattá.
> Kovács János; 1506990710011; 4 4 4 5 2 4  
Kovács János 1990. 06. 15-én született fiú. A 71-es kódú városban született, és az átlaga 3.83.

JMBG leoszlása  
1506990710011 -> 15 06 990 71 0 011

|nap|hónap|év|körzet|nem|azonosító|
|-|-|-|-|-|-|
|15|06|990|71 (Beograd)|0 (f)|011|
|06|03|005|80() |0 (f)|026|

<details> <summary>  </summary>

---

*`inpB.txt`*
```txt
Kovács János; 1506990710011; 4 4 4 5 2 4
Nagy Eszter; 2008984405017; 1 1 2 4 2
Tóth Péter; 0603005800026; 3 5 2 4 5 2
Szabó Anna; 3011999925021; 1 1 1 5 1 2 5 3
Horváth Gábor; 2507950820135; 4 3 3 2 2 2
Kovács Kinga; 1404993105004; 1 2 2 4 1 5 4 4
Molnár Balázs; 1806997800012; 4 5 5 5 4 2
Varga Zsuzsanna; 1001008915010; 2 5 1 5
Farkas Ádám; 0303978900023; 3 5 1 4 1 2 5 4
Papp Katalin; 2205995305005; 3 2 2 5 1 5 2 4
```

---

*`console`*

```txt
Kovács János 1990. 06. 15.-án/én született fiú. A 71-es kódú városban született, és az átlaga 3.80.
Nagy Eszter 1984. 08. 20.-án/én született lány. A 40-es kódú városban született, és az átlaga 2.00.
Tóth Péter 1005. 03. 06.-án/én született fiú. A 61-es kódú városban született, és az átlaga 3.80.
Szabó Anna 1999. 11. 30.-án/én született lány. A 92-es kódú városban született, és az átlaga 2.28.
Horváth Gábor 1950. 07. 25.-án/én született fiú. A 62-es kódú városban született, és az átlaga 2.80.
Kovács Kinga 1993. 04. 14.-án/én született lány. A 10-es kódú városban született, és az átlaga 2.71.
Molnár Balázs 1997. 06. 18.-án/én született fiú. A 80-es kódú városban született, és az átlaga 4.60.
Varga Zsuzsanna 1008. 01. 10.-án/én született lány. A 91-es kódú városban született, és az átlaga 2.66.
Farkas Ádám 1978. 03. 03.-án/én született fiú. A 90-es kódú városban született, és az átlaga 3.00.
Papp Katalin 1995. 05. 22.-án/én született lány. A 30-es kódú városban született, és az átlaga 2.85.
```

---

</details>

## C feladat

Hozz létre egy 4x4-as (tömb) mátrixot egész számok tárolására. Mindig ügyelj arra, hogy a felhasználó által megadott szám megfelelő-e.

Random számokkal töltsd fel a mátrixot, majd írj függvényeket a következő műveletekre:

1. A mátrix kiírása a consolera.
2. A felhasználó által megadott sorban levő számok összegének kiszámítása.
3. A főátlón levő számok összege.
4. A mátrix tükrözése (vízszintesen és függőlegesen).

Mentsd el a munkád, és írd át a programot úgy, hogy vektormátrix-szal dolgozzon, valamint, hogy a mátrix méretét a felhasználó adja meg. Figyeld meg, miket kell változtatni, miket lehet ugyanúgy jelölni de optimálisabb átírni, és mi az ami teljesen ugyanaz maradhat. 

Térj vissza az első verzióhoz (ahol fix volt a méret), és próbáld meg úgy módosítani a programod, hogy a mátrix méretét a felhasználó adja meg, viszont továbbra is négyzetes legyen (3x3, 4x4; de nem lehet 3x4; így csak egy számot kell megadni). 
Figyeld meg, hogy milyen nehézségek merülnek fel! Figyeld meg, hogy mennyivel könnyebb/nehezebb a vektorokat kezelni, mint a mátrixokat (főleg, ha nem fix a méret, hanem pl. a felhasználó adja meg; legtöbbször ez a helyzet)

<details> <summary>   </summary>

---

*`console`*

```txt
Kérem a mátrix méretét: 3
43 85 65
49 94 73
94 50 68
Hanyadik sor összegét szeretné tudni? 2
A(z) 2. sor összege: 216
Tükrözés után:
94 50 68
49 94 73
43 85 65
A főátló összege: 253
```

---

</details>

## D feladat

Olvasd be az `inpD.txt` fileból a benne levő decimális számot egy int típusú változóba, és számítsd ki annak bináris értékét, majd az eredményt írd bele az `outD.txt` fileba.

<details> <summary> </summary>

---

*`inpD.txt`*
```txt
1042
```

*`outD.txt`*
```
10000010010
```
---

*`inpD.txt`*
```txt
1031
```

*`outD.txt`*
```
10000000111
```
---
*`console`*
```
    
```

</details>

## E feladat

Az `inp#.txt` file első sora két számot tartalmaz (N,M), a mátrix dimenzióit. A következő N sor M darab számot tartalmaz. Olvasd be a fileból a mátrix elemeit, majd írj függvényt az alábbi műveletekre:

* Egy adott sorban levő legkisebb elem megkeresése
* Egy adptt oszlopban levő legkisebb elem megkeresése
* Egy adott sorban levő legnagyobb elem megkeresése
* Egy adott oszlopban levő legnagyobb elem megkeresése
* A mátrix legkisebb elemének megkeresése
* A mátrix legnagyobb elemének megkeresése
* Ha lehet, a mátrixot forgassa el 90 fokban jobbra
* Ha lehet, a mátrixot forgassa el 90 fokban balra
* A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 1-et. Ezt addig ismételje, amíg minden eleme 1 nem lesz.

Minden feladat eredményét mondat formájában írd ki az `out#.txt` fileba.

<details> <summary>  </summary>

`inp1.txt`
```
3 4
12 34 56 78
23 45 67 89
34 56 78 90
```

`inp2.txt`
```
2 5
45 67 89 12 34
56 78 90 23 45
```

`inp3.txt`
```
4 3
78 90 12
89 23 45
67 89 12
56 78 90
```

`inp4.txt`
```
4 4
1 2 3 4
12 1 2 5
11 4 3 6
10 9 8 7
```

`inp5.txt`
```
3 3
1 2 3 4 5
16 1 2 3 6
15 4 5 6 7
14 7 8 9 8
13 12 11 10 9
```

`out1.txt`
```
A(z) 1. sor legkisebb eleme: 12
A(z) 2. sor legkisebb eleme: 23
A(z) 3. sor legkisebb eleme: 34
A(z) 1. oszlop legkisebb eleme: 12
A(z) 2. oszlop legkisebb eleme: 34
A(z) 3. oszlop legkisebb eleme: 56
A(z) 4. oszlop legkisebb eleme: 78
A(z) 1. sor legnagyobb eleme: 78
A(z) 2. sor legnagyobb eleme: 89
A(z) 3. sor legnagyobb eleme: 90
A(z) 1. oszlop legnagyobb eleme: 34
A(z) 2. oszlop legnagyobb eleme: 56
A(z) 3. oszlop legnagyobb eleme: 78
A(z) 4. oszlop legnagyobb eleme: 90
A mátrix legkisebb eleme: 12
A mátrix legnagyobb eleme: 90
A mátrix 90 fokkal jobbra forgatva: 
Sikertelen
A mátrix 90 fokkal balra forgatva: 
Sikertelen
A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: 
1 1 1 1 
1 1 1 1 
1 1 1 1 

```

`out2.txt`
```
A(z) 1. sor legkisebb eleme: 12
A(z) 2. sor legkisebb eleme: 23
A(z) 1. oszlop legkisebb eleme: 45
A(z) 2. oszlop legkisebb eleme: 67
A(z) 3. oszlop legkisebb eleme: 89
A(z) 4. oszlop legkisebb eleme: 12
A(z) 5. oszlop legkisebb eleme: 34
A(z) 1. sor legnagyobb eleme: 89
A(z) 2. sor legnagyobb eleme: 90
A(z) 1. oszlop legnagyobb eleme: 56
A(z) 2. oszlop legnagyobb eleme: 78
A(z) 3. oszlop legnagyobb eleme: 90
A(z) 4. oszlop legnagyobb eleme: 23
A(z) 5. oszlop legnagyobb eleme: 45
A mátrix legkisebb eleme: 12
A mátrix legnagyobb eleme: 90
A mátrix 90 fokkal jobbra forgatva: 
Sikertelen
A mátrix 90 fokkal balra forgatva: 
Sikertelen
A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: 
1 1 1 1 1 
1 1 1 1 1 

```

`out3.txt`
```
A(z) 1. sor legkisebb eleme: 12
A(z) 2. sor legkisebb eleme: 23
A(z) 3. sor legkisebb eleme: 12
A(z) 4. sor legkisebb eleme: 56
A(z) 1. oszlop legkisebb eleme: 56
A(z) 2. oszlop legkisebb eleme: 23
A(z) 3. oszlop legkisebb eleme: 12
A(z) 1. sor legnagyobb eleme: 90
A(z) 2. sor legnagyobb eleme: 89
A(z) 3. sor legnagyobb eleme: 89
A(z) 4. sor legnagyobb eleme: 90
A(z) 1. oszlop legnagyobb eleme: 89
A(z) 2. oszlop legnagyobb eleme: 90
A(z) 3. oszlop legnagyobb eleme: 90
A mátrix legkisebb eleme: 12
A mátrix legnagyobb eleme: 90
A mátrix 90 fokkal jobbra forgatva: 
Sikertelen
A mátrix 90 fokkal balra forgatva: 
Sikertelen
A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: 
1 1 1 
1 1 1 
1 1 1 
1 1 1 

```

`out4.txt`
```
A(z) 1. sor legkisebb eleme: 1
A(z) 2. sor legkisebb eleme: 1
A(z) 3. sor legkisebb eleme: 3
A(z) 4. sor legkisebb eleme: 7
A(z) 1. oszlop legkisebb eleme: 1
A(z) 2. oszlop legkisebb eleme: 1
A(z) 3. oszlop legkisebb eleme: 2
A(z) 4. oszlop legkisebb eleme: 4
A(z) 1. sor legnagyobb eleme: 4
A(z) 2. sor legnagyobb eleme: 12
A(z) 3. sor legnagyobb eleme: 11
A(z) 4. sor legnagyobb eleme: 10
A(z) 1. oszlop legnagyobb eleme: 12
A(z) 2. oszlop legnagyobb eleme: 9
A(z) 3. oszlop legnagyobb eleme: 8
A(z) 4. oszlop legnagyobb eleme: 7
A mátrix legkisebb eleme: 1
A mátrix legnagyobb eleme: 12
A mátrix 90 fokkal jobbra forgatva: 
10 11 12 1 
9 4 1 2 
8 3 2 3 
7 6 5 4 
A mátrix 90 fokkal balra forgatva: 
1 2 3 4 
12 1 2 5 
11 4 3 6 
10 9 8 7 
A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: 
1 1 1 1 
1 1 1 1 
1 1 1 1 
1 1 1 1 

```

`out5.txt`
```
A(z) 1. sor legkisebb eleme: 1
A(z) 2. sor legkisebb eleme: 4
A(z) 3. sor legkisebb eleme: 1
A(z) 1. oszlop legkisebb eleme: 1
A(z) 2. oszlop legkisebb eleme: 2
A(z) 3. oszlop legkisebb eleme: 3
A(z) 1. sor legnagyobb eleme: 3
A(z) 2. sor legnagyobb eleme: 16
A(z) 3. sor legnagyobb eleme: 3
A(z) 1. oszlop legnagyobb eleme: 4
A(z) 2. oszlop legnagyobb eleme: 5
A(z) 3. oszlop legnagyobb eleme: 16
A mátrix legkisebb eleme: 1
A mátrix legnagyobb eleme: 16
A mátrix 90 fokkal jobbra forgatva: 
1 2 1 
4 5 16 
3 2 3 
A mátrix 90 fokkal balra forgatva: 
1 2 3 
4 5 16 
1 2 3 
A mátrix minden páros elemét felezze el, valamint minden páratlan eleméhez adjon hozzá 3-at. Ezt addig ismételje, amíg minden eleme 1 nem lesz: 
1 1 1 
1 1 1 
1 1 1 

```
</details>

## F feladat

Írd meg a következő függvényeket rekurzívan:
* Kiszámolja egy vektor elemeinek összegét
* Megfordítja egy mondatban (string) a szavak sorrendjét
* Megállapítja egy stringről, hogy palindrom-e
