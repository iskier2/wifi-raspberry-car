Dokumentacja Projektu Zdalnie Sterowanego Samochodu z Użyciem Płytki Raspberry Pi Pico W

1. Wprowadzenie

Projekt zakłada stworzenie zdalnie sterowanego samochodu wykorzystując płytkę Raspberry Pi Pico W. Samochód będzie sterowany za pomocą telefonu, który łączy się ze stroną internetową hostowaną przez płytkę. Płytka Raspberry Pi Pico W zostanie zaprogramowana w języku C.

3. Stworzenie oraz działanie samochodziku

Samochód został z budowany z klocków LEGO, zamontowane zostały dwa silniki, które są podpięte do płytki Raspeberry Pico W. Samochodzik jest sterowany smartfonem, który wysyła zapytania za pomocą strony internetowej hostowanej przez płytkę. Strona internetowa została napisana w html'u. Całość zasilana jest zasilaczem.

3.Strona internetowa

Strona internetowa została napisana w html'u. Posiada ona dwa suwaki służące do zmiany prędkości oraz skrętu, został zawarty w niej, również przycisk do włączania świateł.

4. Zaprogramowanie płytki Raspberry Pico W

Płytka została zaprogramowana przy użyciu języka C. Hostuje ona serwer WI-Fi, na którym uruchomiona jest strona internetowa, odbiera zapytania sieciowe. Dzięki, któym następnie jest w stanie obliczyć jakie napięcie podać na oby dwa silniki, aby uzyskać zadaną prędkość. Przy skręcaniu, natomiast podaje odpowiednie napięcie tylko na jeden z silników (zależnie od tego, w którą stronę chcemy skręcić).

5. Rozszerzenia i dalszy rozwój

-Implementacja sterowania za pomocą aplikacji mobilnej,
-Dodanie czujników (np. ultradźwiękowych) do unikania przeszkód,
-Zmiana zasilania z zasilacza na akumulator,
-Dodanie świateł.

1. Witryna internetowa
-zapytania sieciowe
-szkielet html
-css
-skrypt w jezyku js
  
2. Hardware
-dobór komponentów
-pin out
  
4. Oprogramowanie płytki raspberry pico-w
-serwer wifi
-odbieranie zapytań sieciowych
-obliczenia prędkościowe
-sterowanie hardware`m

6. Testy
-testy powyższych
