#include "cuerpo.cpp"

int main(){
    while(true){
        show_menu();
        int eleccion;
        cin >> eleccion;

        if(eleccion == 6) break;

        string date, event;
        cin.ignore(); // La función descarta los caracteres del flujo hasta el delimitador dado
        
        switch (eleccion){
            case 1:
                cout << "Introduce la fecha (ano-mes-dia) y el evento: ";
                getline(cin, date, ' ');
                getline(cin, event);
                {
                    string formato_de_dato;
                    if(date_valid(date, formato_de_dato)){
                        add(formato_de_dato, event);
                    }
                }
                break;

            case 2:
                cout << "Introduce la fecha (ano-mes-dia) y el evento que deseas borrar: ";
                getline(cin, date, ' ');
                getline(cin, event);
                {
                    string formato_de_dato;
                    if(date_valid(date, formato_de_dato)){
                        delete_specific(formato_de_dato, event);
                    }
                }
                break;

            case 3:
                cout << "Introduce la fecha (ano-mes-dia) para eliminar todos los eventos: ";
                getline(cin, date);
                {
                    string formato_de_dato;
                    if(date_valid(date, formato_de_dato)){
                        delete_all(formato_de_dato);
                    }
                }
                break;

            case 4:
                cout << "Introduce la fecha (ano-mes-dia) para encontrar eventos: ";
                getline(cin, date);
                {
                    string formato_de_dato;
                    if(date_valid(date, formato_de_dato)){
                        find(formato_de_dato);
                    }
                }
                break;

            case 5:
                print();
                break;

            default:
                cout << "Comando desconocido: " << eleccion << endl;
                break;
        }
    }

    return 0;
}
