# Dungeon Escape - Unreal Engine 5.7.4 C++

Projekt zrealizowany w ramach kursu **"Unreal Engine 5 C++ Game Development"**. Głównym celem projektu jest nauka fundamentów silnika Unreal Engine, programowania logiki w C++ oraz integracji kodu z systemem Blueprints.

## 🛠 Technologie i Narzędzia

* **Silnik:** Unreal Engine 5.7.4
* **Język:** C++
* **IDE:** JetBrains Rider
* **System kontroli wersji:** Git

## 📦 Wymagane zasoby (Dependencies)

Ze względu na ograniczenia rozmiaru repozytorium GitHub (limit 100MB na plik), ciężkie modele 3D oraz tekstury 4K nie zostały dołączone do kodu źródłowego.

Aby projekt wyświetlał się poprawnie, należy pobrać poniższe darmowe paczki z platformy **Fab** (lub przenieść z innych projektów) i umieścić je w odpowiednich folderach w głównym katalogu `Content/`:

| Paczka | Docelowy folder w `/Content/` |
| :--- | :--- |
| [Medieval Dungeon](https://www.fab.com/listings/c13bd0dc-ac4d-4595-b284-f81386b2e6ef) | `MedievalDungeon` |
| Starter Content (ze starszych wersji UE) | `StarterContent` |

*Wskazówka: Aby uzyskać "Starter Content", utwórz nowy projekt w kompatybilnej starszej wersji silnika z zaznaczoną opcją Starter Content, a następnie przekopiuj cały folder do folderu `Content/` tego projektu.*

## 🚀 Jak uruchomić projekt

1. Sklonuj repozytorium na swój dysk.
2. Pobierz powyższe assety i umieść je wewnątrz folderu `Content`.
3. Otwórz plik `.uproject` bezpośrednio w JetBrains Rider **LUB** kliknij na niego prawym przyciskiem myszy i wybierz opcję "Generate Visual Studio project files".
4. Otwórz projekt w swoim IDE i skompiluj kod (skrót `Ctrl + Alt + F11` dla Live Coding w działającym silniku).
5. Uruchom silnik Unreal Engine.