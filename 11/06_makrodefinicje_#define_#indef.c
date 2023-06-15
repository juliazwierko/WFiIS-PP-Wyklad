->Ogólna postać dyrektywy #define z parametrami:
->#define nazwa-makra(parametry) ciąg-znaków

Przykład:
#define ILORAZ(a,b) ((a)/(b))
#define ABS(a) (a) < 0 ? -(a):(a)
#define MAX(a,b) (a) > (b) ? (a):(b)
#define IS_EVEN(n) ((n)%2==0)

->Nawiasy (a), (b) zapewniają poprawne podstawienie.
->Wywołanie funkcji wymaga zwykle pewnego narzutu w trakcie
  działania programu.
->Wywołanie makrodefinicji nie wprowadza żadnego dodatkowego narzutu 
  w czasie wykonania programu.
------------------------------------------------------------------------
 #define MAX(a,b) (a)>(b)?(a):(b) 
 #define IS_EVEN(n) ((n)%2==0)
  
int main(void){
  int j=7, k=9, m=12, n=3; 
  int i = MAX(j+k, m-n); // i = 16;
  if (IS_EVEN(i)) 
    i++; 
  return 0;}
------------------------------------------------------------------------
//gcc -E nazwaprogramu.c , po rozwinięciu:
int main(void){
  int j=7, k=9, m=12, n=3;
  int i = (j+k) > (m-n) ? (j+k):(m-n); 
  if (((i)%2==0)) i++;
  return 0;}
//Każde wywołanie makrodefinicji oznacza wstawienie rozwinięcia do
//kodu źródłowego programu, a tym samym zwiększenie jego rozmiaru.
------------------------------------------------------------------------
Parametry makra nie mają typów. Makrodefinicja akceptuje argumenty dowolnego typu, 
pod warunkiem, że wynikowy program jest poprawny składniowo.
  
#define MAX(a,b) (a) > (b) ? (a):(b)
int a=19, b=21;
double x=1.0, y=12.12; a = MAX(a,b);
x = MAX(x,y);

Inaczej niż przy wywołaniu funkcji argumenty makra nie są sprawdzane ani nie są 
konwertowane w razie potrzeby.
Nie istnieją wskaźniki do makr. Makrodefinicja jest usuwana z kodu podczas pracy 
preprocesora, nie ma możliwości ustalenia ”wskaźnika do makrodefinicji”.
------------------------------------------------------------------------
*Argumenty makra mogą być obliczane więcej niż raz.
*Wywołanie:
  n = MAX(i++, j);
*jest rozwijane na
  n = (i++)>(j)?(i++):(j);
*Jezeli i jest wieksze niz j, to i zostanie zinkrementowane DWA razy.
------------------------------------------------------------------------
*Preprocesor nie podmienia fragmentów napisów:
#define SIZE 256
...
int buffer_SIZE;
if (buffer_SIZE > SIZE)
  puts("error:␣SIZE␣exceeded");

*zostanie rozwiety do
int buffer_SIZE;
if (buffer_SIZE > 256)
  puts("error:␣SIZE␣exceeded");

*Rozwinięcie makrodefinicji może zawierać wywołania innych
makrodefinicji.
#definie ONE_PI 4*atan(-1) 
#definie TWO_PI 2*ONE_PI
------------------------------------------------------------------------
  
#define TWO_PI_A (2*3.14159) 
#define TWO_PI_B 2*3.14159
double x = 360/TWO_PI_A; 
double y = 360/TWO_PI_B;

*zostanie rozwiety do
  double x = 360/(2*3.14159); // 57.29582
  double y = 360/2*3.14159; // 565.48619
------------------------------------------------------------------------
#define SCALE_A(X) ((X)*10) 
#define SCALE_B(X) (X*10)
int x = SCALE_A(x+1); 
int y = SCALE_B(y+1);

*zostanie rozwiety do
  int x = ((x+1)*10);
  int y = (y+1*10);
------------------------------------------------------------------------
REGULY BEZPIECZENSTWA:
-cialo makrodefinicji musi byc zawsze ujete w nawiasy, aby "ochronic",
 w otaczającym rozwinięcie makrodefinicji wyrażeniu, operatory o niższym priorytecie.
   
-W ciele makrodefinicji wszystkie wystąpienia parametrów muszą zawsze być ujęte w 
 nawiasy, aby ”ochronić” operatory o niższym priorytecie, które mogą pojawić się w
 jej argumentach.

-Gdy parametr makrodefinicji występuje w jej ciele więcej niż raz, może ona działać 
 niepoprawnie, jeżeli obliczanie argumentu wywołuje efekty uboczne.
------------------------------------------------------------------------
   ODDEFINIOWANIE TEGO CO BYLO DEFINE WCZESNIEJ
#undef
#define NAME "Cathy"
...
#undef NAME
...
#define NAME "Valerie"
...
#define NAME "Agatha"

  
  
