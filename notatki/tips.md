# Tips & Tricks - C Programming

## Kompilacja z ostrzeżeniami
```bash
gcc -Wall -Wextra -Wpedantic -lm program.c -o program
```

## Debugowanie z GDB
```bash
gcc -g program.c -o program
gdb ./program
# W GDB:
# break main    - ustaw breakpoint
# run           - uruchom
# next          - następna linia
# print zmienna - wyświetl wartość
```

## Częste błędy

### 1. Niezainicjowany wskaźnik
```c
int *p;
*p = 5;  // ❌ BŁĄD - p nie wskazuje na żadną pamięć
```

### 2. Dzielenie int/int
```c
int a = 5, b = 2;
double wynik = a / b;  // ❌ wynik = 2.0 (nie 2.5)
double wynik = (double)a / b;  // ✅ wynik = 2.5
```

### 3. scanf bez &
```c
int x;
scanf("%d", x);   // ❌ BŁĄD
scanf("%d", &x);  // ✅ POPRAWNIE
```

## Przydatne skróty VSCode

- **Ctrl+Shift+B** - Kompiluj
- **F5** - Debug
- **Ctrl+`** - Terminal
- **Ctrl+Space** - Autouzupełnianie
