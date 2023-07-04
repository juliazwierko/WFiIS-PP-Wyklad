//Zadanie:
// Jaka opieracje na liscie jednokierunkowej 
// wykonuje ponizsza finckja?

node * corobi(node * ptr)
{
    node * temp1;
    node * temp2 = NULL;
    while(ptr != NULL) {
        temp1 = ptr->next;
        ptr->next = temp2;
        temp2 = ptr;
        ptr = temp1;
    }
    return temp2;
}

/*
Funkcja corobi wykonuje operację odwracania listy jednokierunkowej.

Opis działania funkcji:

Inicjalizuje dwie pomocnicze zmienne typu node: temp1 i temp2. temp2 jest ustawione na NULL.
Rozpoczyna pętlę while, która wykonuje się dopóki ptr nie jest równy NULL.
Wewnątrz pętli:
Przypisuje wskaźnik na następny węzeł listy do zmiennej temp1.
Ustawia wskaźnik next bieżącego węzła na temp2, czyli poprzedni węzeł. W ten sposób odwraca kierunek listy.
Przypisuje wskaźnik ptr do temp2, aby aktualizować bieżący węzeł jako poprzedni węzeł dla następnej iteracji.
Przypisuje wskaźnik temp1 do ptr, aby przejść do następnego węzła listy.
Po zakończeniu pętli zwraca wskaźnik temp2, który wskazuje na odwróconą listę jednokierunkową.
Podsumowując, funkcja corobi odwraca kolejność węzłów w liście jednokierunkowej poprzez odpowiednie modyfikacje wskaźników next.
*/
