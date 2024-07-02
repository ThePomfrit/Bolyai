# 1. óra feladatai

## A feladat

Olvasd be az `inpA.txt` fileból a számokat egy adattárolóba (vector/tömb). Fordítsd meg a számok sorrendjét (`1 2 3 4 5` `->` `5 4 3 2 1`), majd az új sorrendet írd bele az `outA.txt` fileba.

<details> <summary> </summary> 
    
---

`inpA.txt`

    1 6 8 4 9 3 5 7 9 5 6 1 8 4

---

`outA.txt`

    4 8 1 6 5 9 7 5 3 9 4 8 6 1

---
`console`
``` txt
    
```

---

</details>

## B feladat

Hozz létre struktúrát egy tanuló tárolására (név, JMBG, osztályzatok). Az adatokat olvasd be az `inpB.txt` fileból. Írj függvényt, amely kiszámolja, hogy a tanulónak mi az átlaga. Egy másik függvényben alakítsd a JMBG-ben található adatokat, nevet és kiszámolt átlagot egy mondattá.
> Kovács János; 1506990710011; 4 4 4 5 2 4  
Kovács János 1990. 06. 15-én született fiú. A 71-es kódú városban született, és az átlaga 3.83.
<details> <summary>  </summary>

---

`inpB.txt`
```txt
Kovács János; 1506990710011; 4 4 4 5 2 4
Nagy Eszter; 2008984405017; 1 1 2 4 2
Tóth Péter; 0603005610026; 3 5 2 4 5 2
Szabó Anna; 3011999925021; 1 1 1 5 1 2 5 3
Horváth Gábor; 2507950620135; 4 3 3 2 2 2
Kovács Kinga; 1404993105004; 1 2 2 4 1 5 4 4
Molnár Balázs; 1806997800012; 4 5 5 5 4 2
Varga Zsuzsanna; 1001008915010; 2 5 1 5
Farkas Ádám; 0303978900023; 3 5 1 4 1 2 5 4
Papp Katalin; 2205995305005; 3 2 2 5 1 5 2 4
```

---

`console`

```txt
Kovács János 1990. 06. 15.-án/én született fiú. A 71-es kódú városban született, és az átlaga 3.800000.
Nagy Eszter 1984. 08. 20.-án/én született lány. A 40-es kódú városban született, és az átlaga 2.000000.
Tóth Péter 1005. 03. 06.-án/én született fiú. A 61-es kódú városban született, és az átlaga 3.800000.
Szabó Anna 1999. 11. 30.-án/én született lány. A 92-es kódú városban született, és az átlaga 2.285714.
Horváth Gábor 1950. 07. 25.-án/én született fiú. A 62-es kódú városban született, és az átlaga 2.800000.
Kovács Kinga 1993. 04. 14.-án/én született lány. A 10-es kódú városban született, és az átlaga 2.714286.
Molnár Balázs 1997. 06. 18.-án/én született fiú. A 80-es kódú városban született, és az átlaga 4.600000.
Varga Zsuzsanna 1008. 01. 10.-án/én született lány. A 91-es kódú városban született, és az átlaga 2.666667.
Farkas Ádám 1978. 03. 03.-án/én született fiú. A 90-es kódú városban született, és az átlaga 3.000000.
Papp Katalin 1995. 05. 22.-án/én született lány. A 30-es kódú városban született, és az átlaga 2.857143.
```

---

</details>

## C feladat

Hozz létre egy mátrixot egész számok tárolására. A mátrix méretét a felhasználó adja meg, viszont négyzetes legyen (3x3, 4x4, de nem lehet 3x4; így csak egy számot kell megadni). Mindig ügyelj arra, hogy a felhasználó által megadott szám megfelelő-e.

Valamilyen módon töltsd fel a mátrixot (file, random, console), majd írj függvényeket a következő műveletekre:

1. A mátrix kiírása a consolera.
2. A felhasználó által megadott sorban levő számok összegének kiszámítása.
3. A főátlón levő számok összege.
4. A mátrix tükrözése vízszintesen.

<details> <summary>   </summary>

---

`console`

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