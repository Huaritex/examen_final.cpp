#include "funcion.h"

void show_menu(){
    cout << "Selecciona la accion:" << endl;
    cout << "1. Agregar evento" << endl;
    cout << "2. Eliminar evento especifico" << endl;
    cout << "3. Eliminar todos los eventos de una fecha" << endl;
    cout << "4. Encontrar eventos" << endl;
    cout << "5. Mostrar todos los eventos" << endl;
    cout << "6. Salir del menu" << endl;
}

bool date_valid(const string& date){
    stringstream ss(date);
    int year, month, day;
    char sep1, sep2;

    if(!(ss >> year >> sep1 >> month >> sep2 >> day) || sep1 != '-' || sep2 != '-'){
        cout << "Formato de fecha incorrecto: " << date << endl;
        return false;
    }

    if(month < 1 || month > 12){
        cout << "El mes no es valido: " << month << endl;
        return false;
    }

    if(day < 1 || day > 31){
        cout << "El dia no es valido: " << day << endl;
        return false;
    }

    return true;
}

void add(const string& date, const string& event){
    auto& events = data_base[date];
    bool event_exist = false;
    for(const auto& i : events){
        if(i == event){
            event_exist = true;
            break;
        }
    }
    if(!event_exist){
        events.push_back(event);
    }
}

void delete_specific(const string& date, const string& event){
    if(data_base.count(date)){
        auto& events = data_base[date];
        for(auto it = events.begin(); it != events.end(); ++it){
            if(*it == event){
                events.erase(it);
                cout << "Evento eliminado correctamente!" << endl;
                return;
            }
        }
    }
    cout << "Evento no encontrado" << endl;
}

void delete_all(const string& date){
    if(data_base.count(date)){
        int number_events = data_base[date].size();
        data_base.erase(date);
        cout << "Eliminado " << number_events << " eventos" << endl;
    } else {
        cout << "Eliminado 0 eventos" << endl;
    }
}

void find(const string& date){
    if(data_base.count(date)){
        const auto& events = data_base.at(date);
        for(const auto& event : events){
            cout << event << endl;
        }
    } else {
        cout << "No hay eventos para esta fecha" << endl;
    }
}

void print(){
    for(const auto& [date, events] : data_base){
        stringstream ss(date);
        int year;
        char sep;
        ss >> year >> sep;
        if(year < 0)
        continue;
        for(const auto& event : events){
            cout << date << " " << event << endl;
        }
    }   
}