FILE *fopen (const char *fname, const char *mode); 
- otwiera plik o nazwie fname w trybie mode i zwraca związany z nim strumień. 
  Typy dozwolonych operacji na pliku określa wartość parametru mode. 
  Nazwa pliku musi być łańcuchem.

 
  Dopuszczalne wartości parametru mode:
------------------------------------------------------------------------------------
*”r” - otwarcie pliku tekstowego do odczytu - plik musi istnieć.
*”r+” - otwarcie pliku tekstowego do odczytu/zapisu, zaczynamy
        operacje na początku pliku.
------------------------------------------------------------------------------------
*”w” - utworzenie pustego pliku tekstowego do zapisu, jeżeli plik z taką
       samą nazwą istniał to jego zawartość zostanie stracona.
*”w+” - utworzenie pliku tekstowego do odczytu/zapisu, istniejący plik jest usuwany.
------------------------------------------------------------------------------------
*”a” - otwarcie pliku tekstowego do dopisywania, 
       jeżeli plik istnieje to dopisywanie zaczyna się od końca pliku. 
       Jeżeli plik nie istniał to zostanie utworzony.
*”a+” - otwarcie pliku tekstowego do odczytu/dopisywania, 
        dodajemy na koniec jeśli plik istnieje         
------------------------------------------------------------------------------------      
*”rb” - otwarcie pliku binarnego do odczytu,
*”rb+ - otwarcie pliku binarnego do odczytu/zapisu,
------------------------------------------------------------------------------------
*”wb” - utworzenie pliku binarnego do zapisu,
*”wb+” - utworzenie pliku binarnego do odczytu/zapisu,
------------------------------------------------------------------------------------
*”ab” - otwarcie pliku binarnego do dopisywania,
*”ab+” - otwarcie pliku binarnego do odczytu/dopisywania,
------------------------------------------------------------------------------------

*Odczytywanie z pliku otwartego do odczytu/zapisu związane jest z koniecznością użycia 
jednej z funkcji: fflush(), fseek(), fsetpos() lub rewind().

*Nie można wykonać operacji zapisu bezpośrednio po operacji odczytu bez uprzedniego 
wywołania jednej z powyższych funkcji, z wyjątkiem sytuacji, w której w wyniku operacji 
odczytu osiągnięty został koniec pliku.
  
------------------------------------------------------------------------------------
Jeśli funkcji fopen() uda się otworzyć określony plik wówczas zwraca wskaźnik do typu FILE. 
Jeśli pliku nie można otworzyć zwraca wskaźnik zerowy (NULL).
------------------------------------------------------------------------------------
PRZYKLAD:
  FILE *fp = fopen("test.dat", "w"); 
  if(!fp){
    printf("Nie␣mozna␣utworzyc␣pliku.\n");
    exit(EXIT_FAILURE); 
  }
  ...
  //zamykamy plik
------------------------------------------------------------------------------------
*Jeżeli otworzymy do zapisu istniejący plik to cała jego zawartość zostanie stracona.
*Plik, który ma być otwarty do odczytu musi istnieć.
*Jednocześnie można otworzyć do FOPEN MAX plików.
