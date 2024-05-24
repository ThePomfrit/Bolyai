# Sztringek-gyakorlat

## A feladat

>A személyi számunkról (JMBG)  
Tudjuk, hogy a JMBG 13 jegyű, és kódként használatos. A következő elemekből épül fel:  
    • 1-2 számjegy a születés napja (hányadika);  
    • 3-4 a születés hónapja (hanyadik);  
    • 5-6-7 a születési évszám utolsó 3 számjegye;  
    • 10. számjegy – ha 0, akkor a személy neme férfi, ha 5, akkor a személy neme nő;  
    *példa: 1302989825066 ez a személy 1989.02.13-án született, nő*
1. Egy szöveges fileba írjuk be 3 személy JMBG-jét!
2. Olvassuk be sztringbe egy személy személyi számát (JMBG)! (például `1202928820042`).
3. Válaszd ki külön változóba a születési évet;
4. Alkosd meg belőle a teljes születési évet leíró karaktereket (4 jegyű legyen)!
5. Válaszd ki külön változóba a születés hónapját!
6. Válaszd ki külön változóba a születés napját!
7. A nemre vonatkozó karaktertől és a születési évtől függően egy változó értéke legyen fiú/lány vagy férfi/nő *(akik 2000-ben, vagy azóta születtek, azok esetén a fiú/lány, a többiekre a férfi/nő)* kerüljön a változóba!
8. Hozz létre egy üzenetet a következő formában: 
    >Ez a fiú/lány/férfi/nő eeee.hh.nn –án született.”

## B feladat
1. Két sztring típusú változóba adjunk meg kezdőértékként (a tesztelés könnyítése miatt) be két személyi számot! (pl `1112978820077` és `0102003825011`).
`string attila=”1112978820077”, anna=”0102003825011”;`
2. Határozzuk meg a születés hónapját és napját! 
3. Ezekből az adatokból döntsd el, hogy az év folyamán kinek van/volt/lesz előbb a születésnapja!
4. Írj erről üzenetet!
5. Hány nappal lesz korábban a születésnap? (vedd figyelembe a hónapok valós hosszát és azt is, hogy a mostani évszázadokban minden néggyel osztható évszám szökőév).
Ehhez a feladathoz érdemes létrehozni egy tömböt a hónapok hosszával: 
`int ho[12]={31,28,31,30,31,30,31,31,30,31,30,31}`
vagy, lehet, hogy praktikusabb:
`int hojobb[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}`

6. A felhasználótól kérj be egy dátumot! (`hh nn`)
7. Döntsd el, hogy az adott dátumtól számítva melyik személy fog előbb születésnapot ünnepelni!

## C feladat
A projektumod mappájába másold be a szemszam.txt szöveges dokumentumot, aminek a tartalma: 
```txt
Attila 1112978820077 Emese 0102003825011
Pityu 1311985720018 Lenke 0102005825014
Monika 1202014615045 Kitti 1102003825004
```

1. Nyisd meg a filet-olvasásra!
2. Deklarálj egy sztringet, amibe a el tudod helyezni a fileból beolvasott egy-egy sort!
3. `getline`-nal olvasd be a file első sorában lévő adatokat!
4. A kapott sztringben keresd meg az első szóköz helyét! Az eredményt tárold!
5. Válaszd ki külön sztringbe a személy nevét! 
`string nev (string sor)`
6. Válaszd ki külön sztringbe a személyi számot!
7. Válaszd ki külön sztringbe az JMBG-ből a napra vonatkozó részt! Erre kell egy változó!
8. Alakítsd ezt egész számmá! Erre is kell egy vátozó!
9. Válaszd ki sztringbe a hónapra vonatkozó részt is! Erre is kell változó! 
10. Alakítsd egész számmá! Tárold!
11. Töröld a bejövő sztringből az első nevet és a az első személyi számot is! Írasd ki a maradékot, hogy lásd, jól töröltél-e? 
12. Ebben a sztringben keresd meg az első szóköz helyét! Az eredményt tárold!
13. Válaszd ki külön sztringbe a személy nevét! (használd a kész függvényt!)
14. Válaszd ki külön sztringbe a személyi számot!  
15. Válaszd ki külön sztringbe az JMBG-ből a  napra vonatkozó részt! 
16. Alakítsd ezt egész számmá! 
17. Válaszd ki sztringbe a hónapra vonatkozó részt is!  
18. Alakítsd egész számmá! 
Így az egy sorban lévő két személyről ki tudod íratni a következő mondatot:
    >Attila 12.11-én, Emese pedig 2.1-én ünnepli a  születésnapját.

    A hónap kiírására használhatod a következő tömböt is: 
    `string ho[13]={“”, “januar”, ..., “december”};`
    Ebben az esetben a mondat barátságosabb lesz: 
    >Attila december 11-én, Emese pedig február 1-én ünnepli a  születésnapját.

19. Állapítsd meg, hogy kinek van korábban a születésnapja, és írj róla üzenetet:
    > pl. Emese ünnepel korábban. 
20. A fileban lévő összes sort dolgozd fel ugyanígy.
21. Zárd be a filet! 
 
## D feladat
1. Másold a projektumod mappájába a datumok.txt filet, aminek tartalma: 
    ```txt
    12/1/21
    21/11/93
    1/1/89
    23/5/02
    17/9/17
    15/12/10
    ```
    Minden sorban 1-1 születési dátum található, nap/hó/év formátumban. 
2. Nyisd meg a filet olvasásra! Ellenőrizd, hpgy megnyílt-e helyesen a file! Ha nem, adj üzenetet!
3. Soronként (`getline`) olvasd be az adatokat. 
4. Minden sort bonts szét részekre: napra, hónapra, évre. 
5. Határozd meg a teljes évszámot: ha az évszám első számjegye kevesebb mint 3, akkor a dátumot a kétzeres évekből valónak tekintjük. A többi évszám az 1900-as ávekből való legyen! 
6. Számítsd ki hogy az idén hány éves az a személy, akinek ez az születési dátuma!
7. Nyiss egy új fájlt írásra, a neve legyen `datmagyar.txt`. 
8. Írd ki a képernyőre következő mondatokat: nn. szuletesnap: 2024. hhh dd. 
pl az első sor alapján: 3. születésnap: 2024. jan 12.
9. Írd ki a fájlba is a mondatokat, külön sorokba!

## E feladat

1. Másold a projektumod mappájába a furcsak.txt file, aminek a tartalma: 

    ```txt
    Kalocsai Anna+Piroska 1956.1.11. beszerzo
    Nagy+Nemedi Kelemen 2001.12.3. kereskedo
    Szemeredi Ivan 2008.3.10 vizvezetekszerelo
    Kispal Peter+Zalan 1994.10.4. szakacs
    Toth+Ugyonka Kitti+Anita 2000.4.6. cukrasz
    ```

    A file minden sorában egy személy teljes neve, születési dátuma és foglalkozása található.
    A teljes név vezetéknév keresztnév sorrendben van a fájlban. 
    Bizonyos személyek vezetékneve 2 részből áll. Ilyenkor a két rész között + jel jelzi a határt. 
    Más személyeknek két keresztnevük is van. Ilyenkor a két keresztnév között + jel jelzi a határt. 
    A vezetéknév és a keresztnév között mindenképpen szóköz van. 
    Egy szóköz választja el egymástól a születési dátumot és foglalkozást.

2. Nyisd meg a filet olvasásra! Ellenőrizd, hpgy megnyílt-e helyesen a file! Ha nem, adj üzenetet!
3. Soronként (`getline`) olvasd be az adatokat. 
4. Egy sort bonts szét több adatra: `vezeteknev`, `keresztnev`, `szul_ev`, `szul_ho`, `szul_nap`, `foglalkozas`. 
5. Minden személyről a következő formában írd ki az adatait:
    >Vezetéknev: Toth Ugyonka  
    Keresztnev: Kitti Anita  
    Szuletett: 2000 aprilis 6.  
    Foglalkozasa: cukrasz
6. Akik a kétezres években születtek, azoknak a keresztnevét és a foglalkozását írd ki a `fiatalok.txt` fileba, soronként: 
    ```txt
    Kelemen kereskedo
    Ivan vizvezetekszerelo
    ...
    ```


## F feladat
1. Másold a projektumod mappájába a varosok.txt filet, aminek tartalma: 
    ```txt
    Zenta Szerbia Europa 18704 293
    Magyarkanizsa Szerbia Europa 9871 400
    Los Angeles USA Amerika 3967000 1302
    Budapest Magyarorszag Europa 1756000 525
    Moszkva Oroszorszag ? 11920000 2511
    ```
    Minden sorban 1-1 városról megtaláljuk, a következő adatokat: elnevezés, ország, kontinens, lakosság száma (fő), területe (km2). 
2. Nyisd meg a filet olvasásra! Ellenőrizd, hpgy megnyílt-e helyesen a file! Ha nem, adj üzenetet!
3. Soronként (`getline`) olvasd be az adatokat. 
4. Minden sort bonts szét részekre, és tárold a megfelelő típusú változókban: `elnevezes`, `orszag`, `foldresz`, `lakossag`, `terulet`. 
5. A képernyőre írj ki ilyen szerkezetű mondatokat: 
    >Zenta egy varos Szerbia-ban, 18704 lakosa van!
6. Minden városnak számítsd ki a népsűrűségét! A mértékegység legyen `fő/km2`. 
7. Számítsd ki, hogy a megnevezett városok lakossága hányszoros Zenta lakosságához képest! 
8. Nyiss egy új fájlt írásra, a neve legyen `v.txt`. 
9. A fileba írd ki az európai városokat és a népsűrűségüket és azt hogy hányszor van több lakosuk mint Zentának. Az információkat foglald mondatba! Ha egy város kisebb Zentánál, ott ne szerepeljen ez a szám. Pl:
    >Budapestnek 9,38-szor tobb lakosa van mint Zentanak, a nepsurusege 3344 fo/km2.
    
    vagy:
    >Magyarkanizsa nepsurusege 24,68 fo/km2. 
    
    Minden város mondata kerüljön külön sorba!

## G feladat

A `gyakorlat.txt` fileba másold át a következő kódokat: 

    F4215
    F2319
    L1321
    L2222
    L1303
    F2110
A első karkater azt jelöli, hogy fiú vagy lány a szeméy akinek a kódot adták, 
A második karakter, hogy hanyadik osztályos
A harmadik karakter: 1-matekos 2-képzős 3-infós
A 4-5. karakter: az évszám, amikor a kódot kapta
Pl az első kódból ez a mondat állítható össze: 
>F4215  a kódja annak, a fiúnak, aki 2015-ben negyedikes volt a képzős szakon. 

**FELADAT:** Mindegyik kódhoz írasd ki a megfelelő mondatot. 

## H feladat
A `mindenfele.txt` fileba másold át a következő időpontokat: 
```
1992.8.11. 20:53:23
2023.11.12. 15:42:11
2011.3.11. 11:7:10
2013.1.1. 1:2:3
```
Írass ki minden sor alapján egy ehhez hasonló mondatot: 
>1992-ben, augusztus 11-én délután 8:53-kor történt valami. 

