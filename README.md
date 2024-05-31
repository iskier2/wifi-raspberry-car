Dokumentacja Projektu Zdalnie Sterowanego Samochodu z Użyciem Płytki Raspberry Pi Pico W

1. Wprowadzenie

Projekt zakłada stworzenie zdalnie sterowanego samochodu wykorzystując płytkę Raspberry Pi Pico W. Samochód będzie sterowany za pomocą telefonu, który łączy się ze stroną internetową hostowaną przez płytkę. Płytka Raspberry Pico W zostanie zaprogramowana w języku C.

2. Stworzenie oraz działanie samochodziku

Samochód został zbudowany z klocków LEGO, zamontowane zostały dwa silniki 12 V, które są podpięte do płytki Raspeberry Pico W, poprzez moduł L298N. Samochodzik jest sterowany smartfonem, który wysyła zapytania HTTP za pomocą strony internetowej hostowanej przez płytkę. Strona internetowa została napisana w html'u. Całość zasilana jest zasilaczem 12 V.

3.Strona internetowa

Strona internetowa została napisana w html'u. Posiada ona dwa suwaki służące do zmiany prędkości oraz skrętu, został zawarty w niej, również przycisk do włączania świateł. Poprzez zastosowanie responsywnych właściowści CSS'a samochodzik może być sterowany za pomocą komputera, laptopa, smartfona lub tabletu.

4. Zaprogramowanie płytki Raspberry Pico W

Płytka została zaprogramowana przy użyciu języka C. Hostuje ona serwer WI-Fi, na którym uruchomiona jest strona internetowa, odbiera zapytania sieciowe, dzięki któym następnie jest w stanie obliczyć jakie napięcie podać na oby dwa silniki, aby uzyskać zadaną prędkość. Przy skręcaniu, natomiast oblicza różnice napięć jaką podać na silniki, aby samochodzik skręcił w odpodwiednią stronę.

5. Rozszerzenia i dalszy rozwój

-Implementacja sterowania za pomocą aplikacji mobilnej,
-Dodanie czujników (np. ultradźwiękowych) do unikania przeszkód,
-Zmiana zasilania z zasilacza na akumulator,
-Dodanie świateł.
